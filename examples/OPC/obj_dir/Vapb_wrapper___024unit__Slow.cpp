// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb_wrapper.h for the primary calling header

#include "Vapb_wrapper__pch.h"
#include "Vapb_wrapper__Syms.h"
#include "Vapb_wrapper___024unit.h"

void Vapb_wrapper___024unit___ctor_var_reset(Vapb_wrapper___024unit* vlSelf);

Vapb_wrapper___024unit::Vapb_wrapper___024unit(Vapb_wrapper__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vapb_wrapper___024unit___ctor_var_reset(this);
}

void Vapb_wrapper___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vapb_wrapper___024unit::~Vapb_wrapper___024unit() {
}
