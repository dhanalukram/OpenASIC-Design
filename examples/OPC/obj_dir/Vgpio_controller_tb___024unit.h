// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vgpio_controller_tb.h for the primary calling header

#ifndef VERILATED_VGPIO_CONTROLLER_TB___024UNIT_H_
#define VERILATED_VGPIO_CONTROLLER_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vgpio_controller_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vgpio_controller_tb___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;

    // INTERNAL VARIABLES
    Vgpio_controller_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vgpio_controller_tb___024unit(Vgpio_controller_tb__Syms* symsp, const char* v__name);
    ~Vgpio_controller_tb___024unit();
    VL_UNCOPYABLE(Vgpio_controller_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
