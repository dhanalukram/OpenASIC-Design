#!/usr/bin/env bash

###############################################################################
# OpenASIC-Design
# Master Installer
###############################################################################

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

source "$SCRIPT_DIR/common.sh"

show_title

print_info "Starting OpenASIC-Design Installation..."

echo

###############################################################################
# System Verification
###############################################################################

bash "$SCRIPT_DIR/system_check.sh"

echo

###############################################################################
# Install Required Packages
###############################################################################

bash "$SCRIPT_DIR/packages.sh"

echo

###############################################################################
# Tool Installation
###############################################################################

# bash "$SCRIPT_DIR/docker.sh"
# bash "$SCRIPT_DIR/verilator.sh"
# bash "$SCRIPT_DIR/iverilog.sh"
# bash "$SCRIPT_DIR/gtkwave.sh"
# bash "$SCRIPT_DIR/yosys.sh"
# bash "$SCRIPT_DIR/opensta.sh"
# bash "$SCRIPT_DIR/magic.sh"
# bash "$SCRIPT_DIR/klayout.sh"
# bash "$SCRIPT_DIR/netgen.sh"
# bash "$SCRIPT_DIR/openroad.sh"
# bash "$SCRIPT_DIR/openlane.sh"
# bash "$SCRIPT_DIR/sky130.sh"

echo

print_success "OpenASIC-Design framework completed."

echo
print_info "Tool installation modules will be added in the next versions."
