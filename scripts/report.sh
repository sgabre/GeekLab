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

REPORT="$OUTPUT_DIR/report.md"

{
    echo "# Firmware Development Environment Report"
    echo
    echo "Generated: $(date -u '+%Y-%m-%d %H:%M:%S UTC')"
    echo
    echo "## Summary"
    echo
    echo "| Total | Passed | Failed |"
    echo "|---:|---:|---:|"

    jq -r '
        "| \(.summary.total) | \(.summary.passed) | \(.summary.failed) |"
    ' "$INPUT"

    echo
    echo "## Tools"
    echo
    echo "| Tool | Installed | Expected | Status | Required |"
    echo "|---|---|---|---|---|"

    jq -r '
        .tools[] |
        "| \(.name) | \(.installed_version // "N/A") | \(.expected_version // "Any") | \(.status) | \(.required) |"
    ' "$INPUT"

    echo
    echo "## Details"
    echo

    jq -r '
        .tools[] |
        "### \(.name)\n\n" +
        "- Status: **\(.status)**\n" +
        "- Command: `\(.command)`\n" +
        "- Installed version: \(.installed_version // "Unknown")\n" +
        "- Expected version: \(.expected_version // "Any")\n\n" +
        "Output:\n\n```text\n\(.output)\n```\n"
    ' "$INPUT"

} > "$REPORT"

echo "Report generated: $REPORT"