#!/usr/bin/env bash

echo "Installing Netgen..."

if command -v netgen >/dev/null 2>&1; then
    echo "Netgen already installed."
    netgen -batch
    exit 0
fi

sudo apt update
sudo apt install -y netgen

echo
echo "Verification"

netgen -batch
