#!/usr/bin/env bash


pandoc -f markdown -t pdf ./docs/TestReport.md -o ./docs/TestReport.pdf
pandoc -f markdown -t pdf ./docs/ReleaseNote.md -o ./docs/ReleaseNote.pdf
pandoc -f markdown -t pdf ./docs/IntegrationGuideline.md -o ./docs/IntegrationGuideline.pdf