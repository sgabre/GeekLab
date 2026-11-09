#!/usr/bin/env bash


pandoc -f markdown -t pdf ./docs/Schematics.md -o ./docs/Schematics.pdf
pandoc -f markdown -t pdf ./docs/Setup.md -o ./docs/Setup.pdf
pandoc -f markdown -t pdf ./docs/UserManual.md -o ./docs/UserManual.pdf
pandoc -f markdown -t pdf ./docs/X-Driver.md -o ./docs/WaterSensor.pdf
pandoc -f markdown -t pdf ./docs/X-Driver.md -o ./docs/NFC.pdf
pandoc -f markdown -t pdf ./docs/X-Driver.md -o ./docs/CEL.pdf
pandoc -f markdown -t pdf ./docs/X-Driver.md -o ./docs/Radio.pdf