#!/usr/bin/env bash

set -euo pipefail

INPUT="${1:-ci/results/tools-results.json}"
OUTPUT_DIR="${2:-ci/reports}"

mkdir -p "$OUTPUT_DIR"

if ! command -v jq >/dev/null 2>&1; then
    echo "ERROR: jq is required"
    exit 2
fi

if [[ ! -f "$INPUT" ]]; then
    echo "ERROR: Results file not found: $INPUT"
    exit 2
fi

REPORT="$OUTPUT_DIR/junit-report.xml"

# XML escaping function (Bash 3.2 compatible)
xml_escape() {
    printf '%s' "$1" |
        sed \
            -e 's/\&/\&amp;/g' \
            -e 's/</\&lt;/g' \
            -e 's/>/\&gt;/g' \
            -e 's/"/\&quot;/g' \
            -e "s/'/\&apos;/g"
}

TOTAL=$(jq '.summary.total' "$INPUT")
FAILED=$(jq '[.tools[] | select(.status == "FAIL" and .required == true)] | length' "$INPUT")
SKIPPED=$(jq '[.tools[] | select(.status == "FAIL" and .required != true)] | length' "$INPUT")

{
    echo '<?xml version="1.0" encoding="UTF-8"?>'

    printf '<testsuite name="firmware-tools" tests="%s" failures="%s" errors="0" skipped="%s">\n' \
        "$TOTAL" "$FAILED" "$SKIPPED"

TEMP_FILE=$(mktemp)
trap 'rm -f "$TEMP_FILE"' EXIT

jq -c '.tools[]' "$INPUT" > "$TEMP_FILE"

    while IFS= read -r tool; do

        NAME=$(jq -r '.name' <<< "$tool")
        STATUS=$(jq -r '.status' <<< "$tool")
        REQUIRED=$(jq -r '.required // true' <<< "$tool")
        VERSION=$(jq -r '.installed_version // "Unknown"' <<< "$tool")
        EXPECTED=$(jq -r '.expected_version // "Any"' <<< "$tool")
        COMMAND=$(jq -r '.command // ""' <<< "$tool")
        TOOL_OUTPUT=$(jq -r '.output // ""' <<< "$tool")

        NAME=$(xml_escape "$NAME")
        VERSION=$(xml_escape "$VERSION")
        EXPECTED=$(xml_escape "$EXPECTED")
        COMMAND=$(xml_escape "$COMMAND")
        TOOL_OUTPUT=$(xml_escape "$TOOL_OUTPUT")

        printf '  <testcase classname="firmware.tools" name="%s">\n' "$NAME"

        if [[ "$STATUS" == "FAIL" && "$REQUIRED" == "true" ]]; then

            printf '    <failure message="Version check failed: expected %s, found %s">\n' \
                "$EXPECTED" "$VERSION"

            printf '      <![CDATA[%s\nCommand: %s]]>\n' \
                "$TOOL_OUTPUT" "$COMMAND"

            echo '    </failure>'

        elif [[ "$STATUS" == "FAIL" ]]; then

            printf '    <skipped message="Optional tool check failed: %s"/>\n' "$VERSION"

        fi

        echo '  </testcase>'

    done < "$TEMP_FILE"

    echo '</testsuite>'

} > "$REPORT"

PASSED=$((TOTAL - FAILED - SKIPPED))

echo "JUnit report generated: $REPORT"
echo "Tests: $TOTAL | Passed: $PASSED | Failed: $FAILED | Skipped: $SKIPPED"
