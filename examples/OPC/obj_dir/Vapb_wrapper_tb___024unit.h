// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vapb_wrapper_tb.h for the primary calling header

#ifndef VERILATED_VAPB_WRAPPER_TB___024UNIT_H_
#define VERILATED_VAPB_WRAPPER_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vapb_wrapper_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vapb_wrapper_tb___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vapb_wrapper_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vapb_wrapper_tb___024unit(Vapb_wrapper_tb__Syms* symsp, const char* v__name);
    ~Vapb_wrapper_tb___024unit();
    VL_UNCOPYABLE(Vapb_wrapper_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
