#!/usr/bin/env bash

###############################################################################
# OpenASIC-Design
# Verilator Installer
###############################################################################

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")"/.. && pwd)"
source "$SCRIPT_DIR/common.sh"

TOOL="Verilator"

show_title

print_info "Checking $TOOL..."

if command -v verilator >/dev/null 2>&1; then
    print_success "$TOOL already installed."
    verilator --version
    exit 0
fi

print_info "Installing $TOOL..."

sudo apt update
sudo apt install -y verilator

echo

print_info "Verifying installation..."

if command -v verilator >/dev/null 2>&1; then
    print_success "$TOOL installed successfully."
    verilator --version
else
    print_error "$TOOL installation failed."
    exit 1
fi
