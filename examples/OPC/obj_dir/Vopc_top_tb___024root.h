// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vopc_top_tb.h for the primary calling header

#ifndef VERILATED_VOPC_TOP_TB___024ROOT_H_
#define VERILATED_VOPC_TOP_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vopc_top_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vopc_top_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ opc_top_tb__DOT__clk;
    CData/*0:0*/ opc_top_tb__DOT__rst_n;
    CData/*0:0*/ opc_top_tb__DOT__write_en_i;
    CData/*0:0*/ opc_top_tb__DOT__read_en_i;
    CData/*7:0*/ opc_top_tb__DOT__addr_i;
    CData/*7:0*/ opc_top_tb__DOT__gpio_in_i;
    CData/*7:0*/ opc_top_tb__DOT__gpio_out_o;
    CData/*7:0*/ opc_top_tb__DOT__gpio_input_o;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__opc_top_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__opc_top_tb__DOT__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ opc_top_tb__DOT__wdata_i;
    IData/*31:0*/ opc_top_tb__DOT__rdata_o;
    IData/*31:0*/ opc_top_tb__DOT__dut__DOT__u_crb__DOT__i;
    IData/*31:0*/ opc_top_tb__DOT__dut__DOT__u_gpio__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 8> opc_top_tb__DOT__dut__DOT__u_crb__DOT__reg_file;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h8e2d5b20__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vopc_top_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vopc_top_tb___024root(Vopc_top_tb__Syms* symsp, const char* v__name);
    ~Vopc_top_tb___024root();
    VL_UNCOPYABLE(Vopc_top_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
