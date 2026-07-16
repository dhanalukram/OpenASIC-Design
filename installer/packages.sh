#!/usr/bin/env bash

###############################################################################
# OpenASIC-Design
# Package Installer
###############################################################################

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
source "$SCRIPT_DIR/common.sh"

show_title

print_info "Updating package database..."

sudo apt update

echo

###############################################################################
# Required Packages
###############################################################################

PACKAGES=(
build-essential
git
curl
wget
cmake
gcc
g++
make
python3
python3-pip
python3-venv
pkg-config
clang
flex
bison
libreadline-dev
zlib1g-dev
tcl-dev
tk-dev
libffi-dev
libx11-dev
libxaw7-dev
libxft-dev
libxext-dev
graphviz
dos2unix
tree
)

###############################################################################
# Install Packages
###############################################################################

for pkg in "${PACKAGES[@]}"
do

    if dpkg -s "$pkg" >/dev/null 2>&1
    then
        print_success "$pkg already installed"

    else

        print_info "Installing $pkg..."

        sudo apt install -y "$pkg"

        if dpkg -s "$pkg" >/dev/null 2>&1
        then
            print_success "$pkg installed"
        else
            print_error "$pkg installation failed"
        fi

    fi

done

echo

print_success "All required packages checked."
