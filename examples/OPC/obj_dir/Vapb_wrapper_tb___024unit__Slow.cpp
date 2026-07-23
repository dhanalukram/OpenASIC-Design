// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb_wrapper_tb.h for the primary calling header

#include "Vapb_wrapper_tb__pch.h"
#include "Vapb_wrapper_tb__Syms.h"
#include "Vapb_wrapper_tb___024unit.h"

void Vapb_wrapper_tb___024unit___ctor_var_reset(Vapb_wrapper_tb___024unit* vlSelf);

Vapb_wrapper_tb___024unit::Vapb_wrapper_tb___024unit(Vapb_wrapper_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vapb_wrapper_tb___024unit___ctor_var_reset(this);
}

void Vapb_wrapper_tb___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vapb_wrapper_tb___024unit::~Vapb_wrapper_tb___024unit() {
}
