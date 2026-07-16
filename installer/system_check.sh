#!/usr/bin/env bash

###############################################################################
# OpenASIC-Design
# System Verification
###############################################################################

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

source "$SCRIPT_DIR/common.sh"

show_title

print_info "Checking Operating System..."

if [ -f /etc/os-release ]; then
    . /etc/os-release
    print_success "$PRETTY_NAME detected"
else
    print_error "Unable to detect operating system."
    exit 1
fi

echo

print_info "Checking Internet Connection..."

if ping -c 1 github.com >/dev/null 2>&1; then
    print_success "Internet connection available"
else
    print_error "No Internet connection"
fi

echo

print_info "Checking Git..."

if command -v git >/dev/null 2>&1; then
    print_success "$(git --version)"
else
    print_error "Git not installed"
fi

echo

print_info "Checking Python..."

if command -v python3 >/dev/null 2>&1; then
    print_success "$(python3 --version)"
else
    print_error "Python3 not installed"
fi

echo

print_info "Checking GCC..."

if command -v gcc >/dev/null 2>&1; then
    print_success "$(gcc --version | head -n1)"
else
    print_error "GCC not installed"
fi

echo

print_info "Checking CMake..."

if command -v cmake >/dev/null 2>&1; then
    print_success "$(cmake --version | head -n1)"
else
    print_error "CMake not installed"
fi

echo

print_info "Checking Docker..."

if command -v docker >/dev/null 2>&1; then
    print_success "$(docker --version)"
else
    print_warning "Docker not detected"
fi

echo

print_info "Checking Available Disk Space..."

df -h /

echo

print_info "Checking Memory..."

free -h

echo

print_success "System verification completed."
