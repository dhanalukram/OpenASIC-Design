// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vapb_wrapper.h for the primary calling header

#ifndef VERILATED_VAPB_WRAPPER___024UNIT_H_
#define VERILATED_VAPB_WRAPPER___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vapb_wrapper__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vapb_wrapper___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vapb_wrapper__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vapb_wrapper___024unit(Vapb_wrapper__Syms* symsp, const char* v__name);
    ~Vapb_wrapper___024unit();
    VL_UNCOPYABLE(Vapb_wrapper___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
