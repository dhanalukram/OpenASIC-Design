#!/usr/bin/env bash

###############################################################################
# OpenASIC-Design
# OpenLane Installation
###############################################################################

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
source "$SCRIPT_DIR/config.sh"

echo "=============================================================="
echo " OpenLane RTL-to-GDSII Flow Installation"
echo "=============================================================="

mkdir -p "$INSTALL_ROOT"
cd "$INSTALL_ROOT"

###############################################################################
# Docker Check
###############################################################################

echo
echo "Checking Docker..."

if ! command -v docker >/dev/null 2>&1; then
    echo "[ERROR] Docker is not installed."
    echo "Please install Docker first."
    exit 1
fi

docker --version

###############################################################################
# Clone OpenLane
###############################################################################

echo
echo "Installing OpenLane..."

if [ -d "$OPENLANE_DIR" ]; then

    echo "[OK] OpenLane already exists."

else

    git clone https://github.com/The-OpenROAD-Project/OpenLane.git "$OPENLANE_DIR"

fi

###############################################################################
# Clone CI Designs
###############################################################################

echo
echo "Downloading OpenLane Example Designs..."

cd "$INSTALL_ROOT"

if [ ! -d "openlane-ci-designs" ]; then

    git clone https://github.com/efabless/openlane-ci-designs.git

fi

###############################################################################
# Copy Designs
###############################################################################

mkdir -p "$OPENLANE_DIR/designs"

cp -r openlane-ci-designs/* "$OPENLANE_DIR/designs/" 2>/dev/null || true

rm -rf openlane-ci-designs

###############################################################################
# Build OpenLane
###############################################################################

cd "$OPENLANE_DIR"

echo
echo "Building OpenLane..."

make

###############################################################################
# Test OpenLane
###############################################################################

echo
echo "Running OpenLane Test..."

make test

###############################################################################
# Verification
###############################################################################

echo
echo "=============================================================="
echo " Verification"
echo "=============================================================="

if [ -d "$OPENLANE_DIR" ]; then

    echo "[OK] OpenLane Installed"

else

    echo "[ERROR] OpenLane Installation Failed"

fi

echo
echo "OpenLane Installation Completed."
