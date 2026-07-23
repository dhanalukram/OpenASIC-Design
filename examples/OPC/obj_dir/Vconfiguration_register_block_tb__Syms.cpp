// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vconfiguration_register_block_tb__pch.h"
#include "Vconfiguration_register_block_tb.h"
#include "Vconfiguration_register_block_tb___024root.h"
#include "Vconfiguration_register_block_tb___024unit.h"

// FUNCTIONS
Vconfiguration_register_block_tb__Syms::~Vconfiguration_register_block_tb__Syms()
{
}

Vconfiguration_register_block_tb__Syms::Vconfiguration_register_block_tb__Syms(VerilatedContext* contextp, const char* namep, Vconfiguration_register_block_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(59);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
