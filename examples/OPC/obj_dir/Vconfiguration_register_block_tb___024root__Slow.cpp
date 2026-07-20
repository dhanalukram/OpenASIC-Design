// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconfiguration_register_block_tb.h for the primary calling header

#include "Vconfiguration_register_block_tb__pch.h"
#include "Vconfiguration_register_block_tb__Syms.h"
#include "Vconfiguration_register_block_tb___024root.h"

void Vconfiguration_register_block_tb___024root___ctor_var_reset(Vconfiguration_register_block_tb___024root* vlSelf);

Vconfiguration_register_block_tb___024root::Vconfiguration_register_block_tb___024root(Vconfiguration_register_block_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vconfiguration_register_block_tb___024root___ctor_var_reset(this);
}

void Vconfiguration_register_block_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vconfiguration_register_block_tb___024root::~Vconfiguration_register_block_tb___024root() {
}
