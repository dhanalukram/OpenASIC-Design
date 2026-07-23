// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vapb_wrapper_tb.h for the primary calling header

#ifndef VERILATED_VAPB_WRAPPER_TB___024ROOT_H_
#define VERILATED_VAPB_WRAPPER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vapb_wrapper_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vapb_wrapper_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ apb_wrapper_tb__DOT__PCLK;
    CData/*0:0*/ apb_wrapper_tb__DOT__PRESETn;
    CData/*0:0*/ apb_wrapper_tb__DOT__PSEL;
    CData/*0:0*/ apb_wrapper_tb__DOT__PENABLE;
    CData/*0:0*/ apb_wrapper_tb__DOT__PWRITE;
    CData/*0:0*/ apb_wrapper_tb__DOT__PREADY;
    CData/*0:0*/ apb_wrapper_tb__DOT__PSLVERR;
    CData/*0:0*/ apb_wrapper_tb__DOT__write_en_o;
    CData/*0:0*/ apb_wrapper_tb__DOT__read_en_o;
    CData/*7:0*/ apb_wrapper_tb__DOT__addr_o;
    CData/*0:0*/ apb_wrapper_tb__DOT__dut__DOT__apb_access_w;
    CData/*0:0*/ apb_wrapper_tb__DOT__dut__DOT__apb_write_access_w;
    CData/*0:0*/ apb_wrapper_tb__DOT__dut__DOT__apb_read_access_w;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__apb_wrapper_tb__DOT__PCLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__apb_wrapper_tb__DOT__PRESETn__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ apb_wrapper_tb__DOT__PADDR;
    IData/*31:0*/ apb_wrapper_tb__DOT__PWDATA;
    IData/*31:0*/ apb_wrapper_tb__DOT__PRDATA;
    IData/*31:0*/ apb_wrapper_tb__DOT__wdata_o;
    IData/*31:0*/ apb_wrapper_tb__DOT__rdata_i;
    IData/*31:0*/ apb_wrapper_tb__DOT__pass_count;
    IData/*31:0*/ apb_wrapper_tb__DOT__fail_count;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h77c768b5__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vapb_wrapper_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vapb_wrapper_tb___024root(Vapb_wrapper_tb__Syms* symsp, const char* v__name);
    ~Vapb_wrapper_tb___024root();
    VL_UNCOPYABLE(Vapb_wrapper_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
