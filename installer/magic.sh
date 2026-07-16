#!/usr/bin/env bash

echo "Installing Magic VLSI..."

if command -v magic >/dev/null 2>&1; then
    echo "Magic already installed."
    magic --version
    exit 0
fi

sudo apt update
sudo apt install -y magic

echo
echo "Verification"

magic --version
