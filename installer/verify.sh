#!/usr/bin/env bash

###############################################################################
# OpenASIC-Design
# Installation Verification
###############################################################################

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
source "$SCRIPT_DIR/config.sh"

echo "=============================================================="
echo " OpenASIC-Design Installation Verification"
echo "=============================================================="

check_tool() {

    NAME="$1"
    CMD="$2"

    printf "%-20s" "$NAME"

    if command -v "$CMD" >/dev/null 2>&1; then
        echo " : INSTALLED"
    else
        echo " : NOT INSTALLED"
    fi
}

###############################################################################
# Core Tools
###############################################################################

echo
echo "Core Development Tools"
echo "--------------------------------------------------------------"

check_tool "Git" "git"
check_tool "Python3" "python3"
check_tool "GCC" "gcc"
check_tool "CMake" "cmake"

###############################################################################
# Docker
###############################################################################

echo
echo "Container Platform"
echo "--------------------------------------------------------------"

check_tool "Docker" "docker"

###############################################################################
# Digital Design
###############################################################################

echo
echo "Digital Design Tools"
echo "--------------------------------------------------------------"

check_tool "Verilator" "verilator"
check_tool "Icarus Verilog" "iverilog"
check_tool "GTKWave" "gtkwave"
check_tool "Yosys" "yosys"

###############################################################################
# Qflow
###############################################################################

echo
echo "Qflow Toolchain"
echo "--------------------------------------------------------------"

check_tool "Graywolf" "graywolf"
check_tool "Qrouter" "qrouter"
check_tool "Qflow" "qflow"

###############################################################################
# Analog Tools
###############################################################################

echo
echo "Analog / Custom IC Tools"
echo "--------------------------------------------------------------"

check_tool "Ngspice" "ngspice"
check_tool "OpenTimer" "ot-shell"
check_tool "Magic" "magic"
check_tool "Xschem" "xschem"
check_tool "Netgen" "netgen"

###############################################################################
# OpenLane
###############################################################################

echo
echo "RTL-to-GDSII Flow"
echo "--------------------------------------------------------------"

if [ -d "$OPENLANE_DIR" ]; then
    printf "%-20s : INSTALLED\n" "OpenLane"
else
    printf "%-20s : NOT INSTALLED\n" "OpenLane"
fi

if [ -d "/usr/local/share/pdk" ]; then
    printf "%-20s : INSTALLED\n" "OpenPDKs"
else
    printf "%-20s : NOT INSTALLED\n" "OpenPDKs"
fi

echo
echo "=============================================================="
echo " Verification Completed"
echo "=============================================================="
