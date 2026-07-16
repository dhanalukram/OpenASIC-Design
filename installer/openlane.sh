#!/usr/bin/env bash

echo "======================================"
echo "Installing OpenLane"
echo "======================================"

if command -v openlane >/dev/null 2>&1; then
    echo "OpenLane already installed."
    exit 0
fi

echo
echo "OpenLane installation will use the official OpenLane repository."
echo
echo "Refer to:"
echo "https://github.com/The-OpenROAD-Project/OpenLane"

exit 0
