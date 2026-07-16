#!/usr/bin/env bash

echo "Installing Yosys..."

if command -v yosys >/dev/null 2>&1; then
    echo "Yosys already installed."
    yosys -V
    exit 0
fi

sudo apt update
sudo apt install -y yosys

echo
echo "Verification"

yosys -V
