#!/usr/bin/env bash
# Génère une BOM logicielle (inventaire) des outils listés dans tools.json.
# Sorties : JSON enrichi (bom.json) + CycloneDX 1.5 (bom.cdx.json).
# Ne fait jamais échouer le build : c'est un inventaire, pas un gate (voir verify.sh).
#
# Usage: bom.sh [tools.json] [bom.json] [bom.cdx.json]

set -uo pipefail

CONFIG="${1:-ci/config/tools.json}"
OUTPUT="${2:-ci/results/bom.json}"
CDX_OUTPUT="${3:-ci/results/bom.cdx.json}"

command -v jq >/dev/null 2>&1 || { echo "ERROR: jq is required"; exit 2; }
[[ -f "$CONFIG" ]] || { echo "ERROR: Configuration file not found: $CONFIG"; exit 2; }
jq -e '.tools | type == "array"' "$CONFIG" >/dev/null || { echo "ERROR: Invalid JSON configuration"; exit 2; }

mkdir -p "$(dirname "$OUTPUT")" "$(dirname "$CDX_OUTPUT")"

extract_version() {
    local text="$1" re="$2" line
    while IFS= read -r line; do
        if [[ $line =~ $re ]]; then
            printf '%s\n' "${BASH_REMATCH[1]}"
            return 0
        fi
    done <<< "$text"
    return 1
}

real_path() {
    local p="$1"
    if command -v realpath >/dev/null 2>&1; then
        realpath "$p" 2>/dev/null || printf '%s\n' "$p"
    else
        readlink -f "$p" 2>/dev/null || printf '%s\n' "$p"
    fi
}

sha256_of() {
    if command -v shasum >/dev/null 2>&1; then
        shasum -a 256 "$1" 2>/dev/null | awk '{print $1}'
    elif command -v sha256sum >/dev/null 2>&1; then
        sha256sum "$1" 2>/dev/null | awk '{print $1}'
    fi
}

# Résout un shim Apple (/usr/bin/git, swift, xcodebuild...) vers l'outil réel du Xcode/CLT actif.
resolve_shim() {
    local p="$1" resolved
    if [[ "$p" == /usr/bin/* ]] && command -v xcrun >/dev/null 2>&1; then
        resolved=$(xcrun --find "$(basename "$p")" 2>/dev/null) \
            && [[ -x "$resolved" ]] && { printf '%s\n' "$resolved"; return 0; }
    fi
    printf '%s\n' "$p"
}

arch_of() {
    local f="$1" a
    [[ -f "$f" ]] || return 0
    if command -v lipo >/dev/null 2>&1 && a=$(lipo -archs "$f" 2>/dev/null) && [[ -n "$a" ]]; then
        echo "$a"; return 0
    fi
    a=$(file -b "$f" 2>/dev/null)
    case "$a" in
        *x86-64*|*x86_64*) echo "x86_64" ;;
        *arm64*|*aarch64*) echo "arm64" ;;
        *script*|*text*)   echo "script" ;;
        *)                 echo "unknown" ;;
    esac
}

detect_source() {
    case "$1" in
        */Cellar/*|/opt/homebrew/*)             echo "homebrew" ;;
        /opt/local/*)                           echo "macports" ;;
        /Applications/ArmGNUToolchain/*)        echo "arm-installer" ;;
        /opt/ST/*)                              echo "stm32cubeclt" ;;
        /Applications/SEGGER/*|/opt/SEGGER/*)   echo "segger-installer" ;;
        /Library/Frameworks/Python.framework/*) echo "python.org" ;;
        /Applications/Xcode*.app/*)             echo "xcode" ;;
        /Library/Developer/CommandLineTools/*)  echo "xcode-clt" ;;
        /Applications/*)                        echo "app-bundle" ;;
        /usr/bin/*|/bin/*|/usr/sbin/*|/sbin/*)  echo "system-or-xcode-shim" ;;
        "$HOME"/*)                              echo "user" ;;
        *)                                      echo "unknown" ;;
    esac
}

NDJSON=$(mktemp)
trap 'rm -f "$NDJSON"' EXIT

while IFS= read -r tool; do
    id=$(jq -r '.id' <<< "$tool")
    name=$(jq -r '.name' <<< "$tool")
    command=$(jq -r '.command' <<< "$tool")
    regex=$(jq -r '.regex' <<< "$tool")
    minimum=$(jq -r '.expected_version // ""' <<< "$tool")
    required=$(jq -r 'if has("required") then .required else true end' <<< "$tool")
    binary=$(jq -r '.binary // empty' <<< "$tool")
    binary="${binary:-${command%% *}}"

    echo "Inventory: $name..."

    bin_path=$(command -v "$binary" 2>/dev/null || true)
    real=""; sha=""; source_kind=""; package=""; package_version=""; tool_arch=""; also_in_path=""
    version=""; status="missing"

    if [[ -n "$bin_path" ]]; then
        real=$(real_path "$(resolve_shim "$bin_path")")
        source_kind=$(detect_source "$real")
        [[ "$source_kind" == "system-or-xcode-shim" || "$source_kind" == "unknown" ]] \
            && source_kind=$(detect_source "$bin_path")
        [[ -f "$real" ]] && sha=$(sha256_of "$real")
        tool_arch=$(arch_of "$real")

        # Autres exemplaires du même outil dans le PATH (masqués par le premier)
        if [[ "$binary" == */* ]]; then
            candidates=""
        else
            candidates=$(which -a "$binary" 2>/dev/null | awk '!seen[$0]++')
        fi
        while IFS= read -r c; do
            [[ -z "$c" || "$c" == "$bin_path" ]] && continue
            [[ "$(real_path "$c")" == "$(real_path "$bin_path")" ]] && continue
            also_in_path+="$c"$'\n'
        done <<< "$candidates"

        case "$source_kind" in
            homebrew)
                package=$(sed -nE 's#.*/Cellar/([^/]+)/([^/]+)/.*#\1#p' <<< "$real")
                package_version=$(sed -nE 's#.*/Cellar/([^/]+)/([^/]+)/.*#\2#p' <<< "$real")
                ;;
            macports)
                if command -v port >/dev/null 2>&1; then
                    package=$(port provides "$real" 2>/dev/null | sed -nE 's/.*is provided by: *//p' | head -n 1)
                    [[ -n "$package" ]] && package_version=$(port installed "$package" 2>/dev/null \
                        | awk '/\(active\)/ {print $2; exit}')
                fi
                ;;
        esac

        output=$(bash -o pipefail -c "$command" 2>&1)
        cmd_status=$?
        status="unknown_version"
        if [[ "$cmd_status" -eq 0 ]]; then
            version=$(extract_version "$output" "$regex" || true)
            [[ -n "$version" ]] && status="found"
        fi
    fi

    jq -nc \
        --arg id "$id" --arg name "$name" --arg status "$status" \
        --arg version "$version" --arg minimum "$minimum" \
        --argjson required "$required" \
        --arg binary "$bin_path" --arg real "$real" --arg sha "$sha" \
        --arg source "$source_kind" --arg package "$package" --arg package_version "$package_version" \
        --arg command "$command" --arg tool_arch "$tool_arch" --arg also "$also_in_path" \
        '{id:$id, name:$name, status:$status, version:$version, minimum_version:$minimum,
          required:$required, binary_path:$binary, real_path:$real, sha256:$sha,
          install_source:$source, arch:$tool_arch,
          also_in_path:($also | split("\n") | map(select(. != ""))), package:$package, package_version:$package_version,
          version_command:$command}' >> "$NDJSON"

    echo "  [$status] ${version:-n/a} (${source_kind:-n/a}) ${bin_path}"
done < <(jq -c '.tools[]' "$CONFIG")

# --- Métadonnées machine ---
os_name=$(sw_vers -productName 2>/dev/null || uname -s)
os_version=$(sw_vers -productVersion 2>/dev/null || uname -r)
os_build=$(sw_vers -buildVersion 2>/dev/null || true)
arch=$(uname -m)
model=$(sysctl -n hw.model 2>/dev/null || true)
xcode_select=$(xcode-select -p 2>/dev/null || true)
repo_rev=$(git rev-parse --short HEAD 2>/dev/null || true)
generated=$(date -u +%Y-%m-%dT%H:%M:%SZ)

jq -s \
    --arg generated "$generated" --arg os_name "$os_name" --arg os_version "$os_version" \
    --arg os_build "$os_build" --arg arch "$arch" --arg model "$model" \
    --arg xcode_select "$xcode_select" --arg repo_rev "$repo_rev" \
    '{
        bom_format: "embedded-dev-tools-bom",
        schema_version: 1,
        generated_at: $generated,
        repo_revision: $repo_rev,
        machine: {os: $os_name, os_version: $os_version, os_build: $os_build,
                  arch: $arch, model: $model, xcode_select_path: $xcode_select},
        summary: {
            total: length,
            found: ([.[] | select(.status == "found")] | length),
            unknown_version: ([.[] | select(.status == "unknown_version")] | length),
            missing: ([.[] | select(.status == "missing")] | length)
        },
        warnings: (
            [.[] | select((.also_in_path | length) > 0)
                 | "\(.id): utilise \(.binary_path) ; masque \(.also_in_path | join(", "))"]
          + [.[] | select(.arch == "x86_64" and $arch == "arm64")
                 | "\(.id): binaire x86_64 sur machine arm64 (Rosetta) : \(.binary_path)"]
        ),
        tools: .
    }' "$NDJSON" > "$OUTPUT"

# --- Export CycloneDX 1.5 ---
serial=$( (uuidgen 2>/dev/null || cat /proc/sys/kernel/random/uuid 2>/dev/null) | tr 'A-Z' 'a-z')

jq --arg serial "$serial" '
{
    bomFormat: "CycloneDX",
    specVersion: "1.5",
    serialNumber: (if $serial != "" then "urn:uuid:" + $serial else null end),
    version: 1,
    metadata: {
        timestamp: .generated_at,
        properties: [
            {name: "machine:os", value: (.machine.os + " " + .machine.os_version)},
            {name: "machine:arch", value: .machine.arch}
        ]
    },
    components: [
        .tools[] | select(.status == "found") | {
            type: "application",
            "bom-ref": .id,
            name: .name,
            version: .version,
            properties: [
                {name: "bom:binary_path", value: .binary_path},
                {name: "bom:install_source", value: .install_source},
                {name: "bom:arch", value: .arch}
            ]
        } + (if .sha256 != "" then {hashes: [{alg: "SHA-256", content: .sha256}]} else {} end)
    ]
} | with_entries(select(.value != null))' "$OUTPUT" > "$CDX_OUTPUT"

echo
jq -r '"Found: \(.summary.found)/\(.summary.total)  unknown_version: \(.summary.unknown_version)  missing: \(.summary.missing)"' "$OUTPUT"
if [[ "$(jq '.warnings | length' "$OUTPUT")" -gt 0 ]]; then
    echo
    echo "Avertissements :"
    jq -r '.warnings[] | "  ! " + .' "$OUTPUT"
    echo
fi
echo "BOM:       $OUTPUT"
echo "CycloneDX: $CDX_OUTPUT"
exit 0