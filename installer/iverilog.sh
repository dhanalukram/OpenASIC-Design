#!/usr/bin/env bash

echo "Installing Icarus Verilog..."

if command -v iverilog >/dev/null 2>&1; then
    echo "Icarus Verilog is already installed."
    iverilog -V
    exit 0
fi

sudo apt update
sudo apt install -y iverilog

echo
echo "Verification"

iverilog -V
