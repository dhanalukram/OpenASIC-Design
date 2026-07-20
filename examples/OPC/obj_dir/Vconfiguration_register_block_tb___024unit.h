// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vconfiguration_register_block_tb.h for the primary calling header

#ifndef VERILATED_VCONFIGURATION_REGISTER_BLOCK_TB___024UNIT_H_
#define VERILATED_VCONFIGURATION_REGISTER_BLOCK_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vconfiguration_register_block_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vconfiguration_register_block_tb___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vconfiguration_register_block_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vconfiguration_register_block_tb___024unit(Vconfiguration_register_block_tb__Syms* symsp, const char* v__name);
    ~Vconfiguration_register_block_tb___024unit();
    VL_UNCOPYABLE(Vconfiguration_register_block_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
