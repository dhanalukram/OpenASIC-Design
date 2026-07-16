#!/usr/bin/env bash

echo "Installing GTKWave..."

if command -v gtkwave >/dev/null 2>&1; then
    echo "GTKWave already installed."
    gtkwave --version
    exit 0
fi

sudo apt update
sudo apt install -y gtkwave

echo
echo "Verification"

gtkwave --version
