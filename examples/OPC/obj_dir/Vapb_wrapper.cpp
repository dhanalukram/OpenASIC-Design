// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vapb_wrapper__pch.h"

//============================================================
// Constructors

Vapb_wrapper::Vapb_wrapper(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vapb_wrapper__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vapb_wrapper::Vapb_wrapper(const char* _vcname__)
    : Vapb_wrapper(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vapb_wrapper::~Vapb_wrapper() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vapb_wrapper___024root___eval_debug_assertions(Vapb_wrapper___024root* vlSelf);
#endif  // VL_DEBUG
void Vapb_wrapper___024root___eval_static(Vapb_wrapper___024root* vlSelf);
void Vapb_wrapper___024root___eval_initial(Vapb_wrapper___024root* vlSelf);
void Vapb_wrapper___024root___eval_settle(Vapb_wrapper___024root* vlSelf);
void Vapb_wrapper___024root___eval(Vapb_wrapper___024root* vlSelf);

void Vapb_wrapper::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vapb_wrapper::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vapb_wrapper___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vapb_wrapper___024root___eval_static(&(vlSymsp->TOP));
        Vapb_wrapper___024root___eval_initial(&(vlSymsp->TOP));
        Vapb_wrapper___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vapb_wrapper___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vapb_wrapper::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vapb_wrapper::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vapb_wrapper::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vapb_wrapper___024root___eval_final(Vapb_wrapper___024root* vlSelf);

VL_ATTR_COLD void Vapb_wrapper::final() {
    Vapb_wrapper___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vapb_wrapper::hierName() const { return vlSymsp->name(); }
const char* Vapb_wrapper::modelName() const { return "Vapb_wrapper"; }
unsigned Vapb_wrapper::threads() const { return 1; }
void Vapb_wrapper::prepareClone() const { contextp()->prepareClone(); }
void Vapb_wrapper::atClone() const {
    contextp()->threadPoolpOnClone();
}
