// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vconfiguration_register_block_tb__pch.h"

//============================================================
// Constructors

Vconfiguration_register_block_tb::Vconfiguration_register_block_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vconfiguration_register_block_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vconfiguration_register_block_tb::Vconfiguration_register_block_tb(const char* _vcname__)
    : Vconfiguration_register_block_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vconfiguration_register_block_tb::~Vconfiguration_register_block_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vconfiguration_register_block_tb___024root___eval_debug_assertions(Vconfiguration_register_block_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vconfiguration_register_block_tb___024root___eval_static(Vconfiguration_register_block_tb___024root* vlSelf);
void Vconfiguration_register_block_tb___024root___eval_initial(Vconfiguration_register_block_tb___024root* vlSelf);
void Vconfiguration_register_block_tb___024root___eval_settle(Vconfiguration_register_block_tb___024root* vlSelf);
void Vconfiguration_register_block_tb___024root___eval(Vconfiguration_register_block_tb___024root* vlSelf);

void Vconfiguration_register_block_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vconfiguration_register_block_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vconfiguration_register_block_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vconfiguration_register_block_tb___024root___eval_static(&(vlSymsp->TOP));
        Vconfiguration_register_block_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vconfiguration_register_block_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vconfiguration_register_block_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vconfiguration_register_block_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vconfiguration_register_block_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vconfiguration_register_block_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vconfiguration_register_block_tb___024root___eval_final(Vconfiguration_register_block_tb___024root* vlSelf);

VL_ATTR_COLD void Vconfiguration_register_block_tb::final() {
    Vconfiguration_register_block_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vconfiguration_register_block_tb::hierName() const { return vlSymsp->name(); }
const char* Vconfiguration_register_block_tb::modelName() const { return "Vconfiguration_register_block_tb"; }
unsigned Vconfiguration_register_block_tb::threads() const { return 1; }
void Vconfiguration_register_block_tb::prepareClone() const { contextp()->prepareClone(); }
void Vconfiguration_register_block_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
