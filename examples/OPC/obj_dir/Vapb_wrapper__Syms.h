// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VAPB_WRAPPER__SYMS_H_
#define VERILATED_VAPB_WRAPPER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vapb_wrapper.h"

// INCLUDE MODULE CLASSES
#include "Vapb_wrapper___024root.h"
#include "Vapb_wrapper___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vapb_wrapper__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vapb_wrapper* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vapb_wrapper___024root         TOP;

    // CONSTRUCTORS
    Vapb_wrapper__Syms(VerilatedContext* contextp, const char* namep, Vapb_wrapper* modelp);
    ~Vapb_wrapper__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
