// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vgpio_controller_tb.h for the primary calling header

#include "Vgpio_controller_tb__pch.h"
#include "Vgpio_controller_tb__Syms.h"
#include "Vgpio_controller_tb___024root.h"

void Vgpio_controller_tb___024root___ctor_var_reset(Vgpio_controller_tb___024root* vlSelf);

Vgpio_controller_tb___024root::Vgpio_controller_tb___024root(Vgpio_controller_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vgpio_controller_tb___024root___ctor_var_reset(this);
}

void Vgpio_controller_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vgpio_controller_tb___024root::~Vgpio_controller_tb___024root() {
}
