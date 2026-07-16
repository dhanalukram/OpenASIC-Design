#!/usr/bin/env bash

###############################################################################
# OpenASIC-Design
# Digital Design Toolchain Installation
###############################################################################

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
source "$SCRIPT_DIR/config.sh"

echo "=============================================================="
echo " Digital Design Toolchain Installation"
echo "=============================================================="

TOOLS=(
    "verilator:Verilator"
    "iverilog:Icarus Verilog"
    "gtkwave:GTKWave"
    "yosys:Yosys"
)

for item in "${TOOLS[@]}"
do
    CMD="${item%%:*}"
    NAME="${item##*:}"

    echo
    echo "----------------------------------------"
    echo "Checking $NAME"
    echo "----------------------------------------"

    if command -v "$CMD" >/dev/null 2>&1; then
        echo "[OK] $NAME already installed."

        case "$CMD" in
            verilator)
                verilator --version
                ;;
            iverilog)
                iverilog -V | head -n 1
                ;;
            gtkwave)
                gtkwave --version
                ;;
            yosys)
                yosys -V
                ;;
        esac

    else

        echo "[INFO] Installing $NAME..."

        sudo apt install -y "$CMD"

        echo "[INFO] Verifying..."

        if command -v "$CMD" >/dev/null 2>&1; then
            echo "[SUCCESS] $NAME installed successfully."
        else
            echo "[ERROR] Failed to install $NAME"
            exit 1
        fi

    fi

done

echo
echo "=============================================================="
echo "Digital Design Toolchain Installed Successfully"
echo "=============================================================="
