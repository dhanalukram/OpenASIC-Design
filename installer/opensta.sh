#!/usr/bin/env bash

echo "Installing OpenSTA..."

if command -v sta >/dev/null 2>&1; then
    echo "OpenSTA already installed."
    sta -version
    exit 0
fi

sudo apt update
sudo apt install -y opensta

echo
echo "Verification"

sta -version
