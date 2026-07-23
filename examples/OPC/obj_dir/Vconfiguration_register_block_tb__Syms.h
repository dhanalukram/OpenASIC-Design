// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCONFIGURATION_REGISTER_BLOCK_TB__SYMS_H_
#define VERILATED_VCONFIGURATION_REGISTER_BLOCK_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vconfiguration_register_block_tb.h"

// INCLUDE MODULE CLASSES
#include "Vconfiguration_register_block_tb___024root.h"
#include "Vconfiguration_register_block_tb___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vconfiguration_register_block_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vconfiguration_register_block_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vconfiguration_register_block_tb___024root TOP;

    // CONSTRUCTORS
    Vconfiguration_register_block_tb__Syms(VerilatedContext* contextp, const char* namep, Vconfiguration_register_block_tb* modelp);
    ~Vconfiguration_register_block_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
