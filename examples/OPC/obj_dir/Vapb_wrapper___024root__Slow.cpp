// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb_wrapper.h for the primary calling header

#include "Vapb_wrapper__pch.h"
#include "Vapb_wrapper__Syms.h"
#include "Vapb_wrapper___024root.h"

void Vapb_wrapper___024root___ctor_var_reset(Vapb_wrapper___024root* vlSelf);

Vapb_wrapper___024root::Vapb_wrapper___024root(Vapb_wrapper__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vapb_wrapper___024root___ctor_var_reset(this);
}

void Vapb_wrapper___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vapb_wrapper___024root::~Vapb_wrapper___024root() {
}
