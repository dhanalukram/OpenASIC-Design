#!/usr/bin/env bash

###############################################################################
# OpenASIC-Design
# Master Installation Script
###############################################################################

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

source "$SCRIPT_DIR/config.sh"

clear

echo "=============================================================="
echo "                  OpenASIC-Design"
echo "      Open-Source ASIC Design Environment"
echo "                     Version 1.0"
echo "=============================================================="
echo
echo "Official Companion Repository"
echo
echo "Digital ASIC Design"
echo "The Complete RTL-to-GDSII Methodology"
echo "Using Open-Source EDA Tools"
echo
echo "Author"
echo "Dr. Lukram Dhanachandra Singh"
echo
echo "Organization"
echo "NIELIT Imphal"
echo
echo "=============================================================="
echo

echo "[1/7] System Verification"
bash "$SCRIPT_DIR/system_check.sh"

echo
echo "[2/7] Installing Common Packages"
bash "$SCRIPT_DIR/packages.sh"

echo
echo "[3/7] Installing Digital Design Tools"
bash "$SCRIPT_DIR/digital.sh"

echo
echo "[4/7] Installing Qflow Toolchain"
bash "$SCRIPT_DIR/qflow.sh"

echo
echo "[5/7] Installing Analog/OpenPDK Toolchain"
bash "$SCRIPT_DIR/analog.sh"

echo
echo "[6/7] Installing OpenLane Flow"
bash "$SCRIPT_DIR/openlane.sh"

echo
echo "[7/7] Final Verification"
bash "$SCRIPT_DIR/verify.sh"

echo
echo "=============================================================="
echo " OpenASIC-Design Installation Completed Successfully"
echo "=============================================================="
echo
echo "Repository : https://github.com/dhanalukram/OpenASIC-Design"
echo
echo "You may need to restart your terminal or WSL session"
echo "before using some installed tools."
echo
