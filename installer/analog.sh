#!/usr/bin/env bash

###############################################################################
# OpenASIC-Design
# Analog / Custom IC Toolchain Installation
###############################################################################

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
source "$SCRIPT_DIR/config.sh"

echo "=============================================================="
echo " Analog / Custom IC Toolchain Installation"
echo "=============================================================="

mkdir -p "$INSTALL_ROOT"
cd "$INSTALL_ROOT"

###############################################################################
# NGSPICE
###############################################################################

echo
echo "Installing Ngspice..."

if command -v ngspice >/dev/null 2>&1; then

    echo "[OK] Ngspice already installed."

else

    rm -rf ngspice_git

    git clone https://git.code.sf.net/p/ngspice/ngspice ngspice_git

    cd ngspice_git

    mkdir -p release

    ./autogen.sh

    cd release

    ../configure \
        --with-x \
        --enable-xspice \
        --disable-debug \
        --enable-cider \
        --with-readline=yes \
        --enable-openmp \
        --enable-osdi

    make -j"$NUM_CORES"

    sudo make install

    cd "$INSTALL_ROOT"

fi

###############################################################################
# OpenTimer
###############################################################################

echo
echo "Installing OpenTimer..."

if command -v ot-shell >/dev/null 2>&1; then

    echo "[OK] OpenTimer already installed."

else

    rm -rf OpenTimer

    git clone https://github.com/OpenTimer/OpenTimer.git

    cd OpenTimer

    mkdir build

    cd build

    cmake ..

    make -j"$NUM_CORES"

    sudo make install

    cd "$INSTALL_ROOT"

fi

###############################################################################
# XSCHEM
###############################################################################

echo
echo "Installing Xschem..."

if command -v xschem >/dev/null 2>&1; then

    echo "[OK] Xschem already installed."

else

    rm -rf xschem-src

    git clone https://github.com/StefanSchippers/xschem.git xschem-src

    cd xschem-src

    ./configure

    make -j"$NUM_CORES"

    sudo make install

    cd "$INSTALL_ROOT"

fi

###############################################################################
# MAGIC
###############################################################################

echo
echo "Installing Magic..."

if command -v magic >/dev/null 2>&1; then

    echo "[OK] Magic already installed."

else

    rm -rf magic

    git clone https://github.com/RTimothyEdwards/magic.git

    cd magic

    ./configure

    make -j"$NUM_CORES"

    sudo make install

    cd "$INSTALL_ROOT"

fi

###############################################################################
# OPENPDKS
###############################################################################

echo
echo "Installing OpenPDKs..."

if [ -d "/usr/local/share/pdk" ]; then

    echo "[OK] OpenPDKs already installed."

else

    rm -rf open_pdks

    git clone git://opencircuitdesign.com/open_pdks

    cd open_pdks

    ./configure --enable-sky130-pdk

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

TOOLS=(
ngspice
magic
xschem
netgen
)

for tool in "${TOOLS[@]}"
do

    if command -v "$tool" >/dev/null 2>&1
    then

        printf "%-12s : INSTALLED\n" "$tool"

    else

        printf "%-12s : NOT INSTALLED\n" "$tool"

    fi

done

echo
echo "Analog Toolchain Installation Completed."
