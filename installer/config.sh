#!/usr/bin/env bash

###############################################################################
# OpenASIC-Design Configuration
###############################################################################

# Installation directory
INSTALL_ROOT="/labroot"

# Repository directory
OPENLANE_DIR="$INSTALL_ROOT/OpenLane"

# PDK Directory
PDK_ROOT="$HOME/.ciel"

# Default PDK
PDK="sky130A"

# Number of CPU cores
NUM_CORES=$(nproc)

# GitHub Repository
REPO_URL="https://github.com/dhanalukram/OpenASIC-Design"
