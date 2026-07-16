#!/usr/bin/env bash

###############################################################################
# OpenASIC-Design
# Qflow Installation
###############################################################################

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
source "$SCRIPT_DIR/config.sh"

echo "=============================================================="
echo " Qflow Toolchain Installation"
echo "=============================================================="

mkdir -p "$INSTALL_ROOT"
cd "$INSTALL_ROOT"

###############################################################################
# Graywolf
###############################################################################

echo
echo "Installing Graywolf..."

if command -v graywolf >/dev/null 2>&1; then

    echo "[OK] Graywolf already installed."

else

    rm -rf graywolf

    git clone https://github.com/rubund/graywolf.git

    cd graywolf

    mkdir build

    cd build

    cmake ..

    make -j"$NUM_CORES"

    sudo make install

    cd "$INSTALL_ROOT"

fi

###############################################################################
# Qrouter
###############################################################################

echo
echo "Installing Qrouter..."

if command -v qrouter >/dev/null 2>&1; then

    echo "[OK] Qrouter already installed."

else

    rm -rf qrouter

    git clone https://github.com/RTimothyEdwards/qrouter.git

    cd qrouter

    ./configure

    make -j"$NUM_CORES"

    sudo make install

    cd "$INSTALL_ROOT"

fi

###############################################################################
# Qflow
###############################################################################

echo
echo "Installing Qflow..."

if command -v qflow >/dev/null 2>&1; then

    echo "[OK] Qflow already installed."

else

    rm -rf qflow

    git clone https://github.com/RTimothyEdwards/qflow.git

    cd qflow

    ./configure

    make -j"$NUM_CORES"

    sudo make install

    cd "$INSTALL_ROOT"

fi

###############################################################################
# Verification
###############################################################################

echo
echo "=============================================================="
echo " Verification"
echo "=============================================================="

for tool in graywolf qrouter qflow
do

    if command -v "$tool" >/dev/null 2>&1
    then

        printf "%-12s : INSTALLED\n" "$tool"

    else

        printf "%-12s : NOT INSTALLED\n" "$tool"

    fi

done

echo
echo "Qflow Toolchain Installation Completed."
