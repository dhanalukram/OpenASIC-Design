#!/usr/bin/env bash

echo "======================================"
echo "Installing OpenROAD"
echo "======================================"

if command -v openroad >/dev/null 2>&1; then
    echo "OpenROAD already installed."
    openroad -version
    exit 0
fi

echo
echo "OpenROAD is not installed."
echo
echo "OpenROAD will be installed using the official OpenROAD installation method."
echo
echo "Refer to:"
echo "https://github.com/The-OpenROAD-Project/OpenROAD"
echo

echo "Installation module will be completed in Version 1.0."

exit 0
