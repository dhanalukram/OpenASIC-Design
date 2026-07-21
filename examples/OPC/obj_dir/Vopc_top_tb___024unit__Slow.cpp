// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vopc_top_tb.h for the primary calling header

#include "Vopc_top_tb__pch.h"
#include "Vopc_top_tb__Syms.h"
#include "Vopc_top_tb___024unit.h"

void Vopc_top_tb___024unit___ctor_var_reset(Vopc_top_tb___024unit* vlSelf);

Vopc_top_tb___024unit::Vopc_top_tb___024unit(Vopc_top_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vopc_top_tb___024unit___ctor_var_reset(this);
}

void Vopc_top_tb___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vopc_top_tb___024unit::~Vopc_top_tb___024unit() {
}
