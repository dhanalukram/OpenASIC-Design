#!/usr/bin/env bash

echo "Installing KLayout..."

if command -v klayout >/dev/null 2>&1; then
    echo "KLayout already installed."
    klayout -v
    exit 0
fi

sudo apt update
sudo apt install -y klayout

echo
echo "Verification"

klayout -v
