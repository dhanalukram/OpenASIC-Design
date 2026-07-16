#!/usr/bin/env bash

echo
echo "==============================================="
echo "OpenASIC-Design Verification"
echo "==============================================="

TOOLS=(
git
python3
gcc
cmake
verilator
iverilog
gtkwave
yosys
sta
magic
klayout
netgen
)

for tool in "${TOOLS[@]}"
do
    if command -v "$tool" >/dev/null 2>&1
    then
        printf "%-15s : OK\n" "$tool"
    else
        printf "%-15s : NOT INSTALLED\n" "$tool"
    fi
done

echo "==============================================="
echo "Verification Completed"
echo "==============================================="
