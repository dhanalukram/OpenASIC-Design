// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vopc_top_tb.h for the primary calling header

#ifndef VERILATED_VOPC_TOP_TB___024UNIT_H_
#define VERILATED_VOPC_TOP_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vopc_top_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vopc_top_tb___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vopc_top_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vopc_top_tb___024unit(Vopc_top_tb__Syms* symsp, const char* v__name);
    ~Vopc_top_tb___024unit();
    VL_UNCOPYABLE(Vopc_top_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
