#!/usr/bin/env bash
# Gate CI : vérifie que chaque outil de tools.json est présent et >= expected_version.

set -uo pipefail

CONFIG="${1:-ci/config/tools.json}"
OUTPUT="${2:-ci/results/tools-results.json}"

# Succès si version1 >= version2 (composantes numériques uniquement)
version_ge() {
    local version1="$1"
    local version2="$2"
    local -a v1 v2
    local i a b

    IFS='.' read -r -a v1 <<< "$version1"
    IFS='.' read -r -a v2 <<< "$version2"

    for ((i = 0; i < ${#v1[@]} || i < ${#v2[@]}; i++)); do
        a="${v1[i]:-0}"
        b="${v2[i]:-0}"

        [[ "$a" =~ ^[0-9]+$ && "$b" =~ ^[0-9]+$ ]] || return 2

        if (( 10#$a > 10#$b )); then
            return 0
        elif (( 10#$a < 10#$b )); then
            return 1
        fi
    done

    return 0
}

# Extrait le 1er groupe de capture de $2 (regex ERE) sur la 1re ligne de $1 qui matche.
# Remplace le `sed 's/.*REGEX.*/\1/'` : le `.*` glouton avalait le début de la
# version (ex: "Docker version 28.4.0" -> "8.4.0").
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

mkdir -p "$(dirname "$OUTPUT")"

if ! command -v jq >/dev/null 2>&1; then
    echo "ERROR: jq is required"
    exit 2
fi

if [[ ! -f "$CONFIG" ]]; then
    echo "ERROR: Configuration file not found: $CONFIG"
    exit 2
fi

if ! jq -e '.tools | type == "array"' "$CONFIG" >/dev/null; then
    echo "ERROR: Invalid JSON configuration"
    exit 2
fi

RESULTS=$(mktemp)
trap 'rm -f "$RESULTS" "${RESULTS}.tmp"' EXIT

echo '{"tools":[]}' > "$RESULTS"

while IFS= read -r tool; do

    id=$(jq -r '.id' <<< "$tool")
    name=$(jq -r '.name' <<< "$tool")
    command=$(jq -r '.command' <<< "$tool")
    regex=$(jq -r '.regex' <<< "$tool")
    expected=$(jq -r '.expected_version // ""' <<< "$tool")
    # `.required // true` renvoyait true même pour required:false (// traite false comme vide)
    required=$(jq -r 'if has("required") then .required else true end' <<< "$tool")

    echo "Checking $name..."

    output=$(bash -o pipefail -c "$command" 2>&1)
    command_status=$?

    installed=""

    if [[ "$command_status" -eq 0 ]]; then
        installed=$(extract_version "$output" "$regex" || true)
    fi

    status="PASS"
    if [[ "$command_status" -ne 0 || -z "$installed" ]]; then
        status="FAIL"
    elif [[ -n "$expected" ]]; then
        version_ge "$installed" "$expected"
        comparison_status=$?

        if [[ "$comparison_status" -ne 0 ]]; then
            status="FAIL"
        fi
    fi

    jq \
        --arg id "$id" \
        --arg name "$name" \
        --arg status "$status" \
        --arg installed "$installed" \
        --arg expected "$expected" \
        --arg command "$command" \
        --arg output "$output" \
        --argjson required "$required" \
        '.tools += [{
            id: $id,
            name: $name,
            status: $status,
            installed_version: $installed,
            expected_version: $expected,
            required: $required,
            command: $command,
            output: $output
        }]' "$RESULTS" > "${RESULTS}.tmp"

    mv "${RESULTS}.tmp" "$RESULTS"

    echo "[$status] $name: ${installed:-unknown}"

done < <(jq -c '.tools[]' "$CONFIG")

jq '
{
    summary: {
        total: (.tools | length),
        passed: ([.tools[] | select(.status == "PASS")] | length),
        failed: ([.tools[] | select(.status == "FAIL")] | length)
    },
    tools: .tools
}' "$RESULTS" > "$OUTPUT"

echo
echo "Results saved to: $OUTPUT"

if jq -e '.tools | any(.[]; .status == "FAIL" and .required == true)' "$OUTPUT" >/dev/null; then
    exit 1
fi

exit 0
