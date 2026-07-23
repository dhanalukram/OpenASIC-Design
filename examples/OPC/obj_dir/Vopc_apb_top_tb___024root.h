// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vopc_apb_top_tb.h for the primary calling header

#ifndef VERILATED_VOPC_APB_TOP_TB___024ROOT_H_
#define VERILATED_VOPC_APB_TOP_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vopc_apb_top_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vopc_apb_top_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ opc_apb_top_tb__DOT__PCLK;
    CData/*0:0*/ opc_apb_top_tb__DOT__PRESETn;
    CData/*0:0*/ opc_apb_top_tb__DOT__PSEL;
    CData/*0:0*/ opc_apb_top_tb__DOT__PENABLE;
    CData/*0:0*/ opc_apb_top_tb__DOT__PWRITE;
    CData/*0:0*/ opc_apb_top_tb__DOT__PREADY;
    CData/*0:0*/ opc_apb_top_tb__DOT__PSLVERR;
    CData/*7:0*/ opc_apb_top_tb__DOT__gpio_in_i;
    CData/*7:0*/ opc_apb_top_tb__DOT__gpio_out_o;
    CData/*7:0*/ opc_apb_top_tb__DOT__gpio_input_o;
    CData/*0:0*/ opc_apb_top_tb__DOT__dut__DOT__reg_write_en_w;
    CData/*0:0*/ opc_apb_top_tb__DOT__dut__DOT__reg_read_en_w;
    CData/*7:0*/ opc_apb_top_tb__DOT__dut__DOT__reg_addr_w;
    CData/*0:0*/ opc_apb_top_tb__DOT__dut__DOT__u_apb_wrapper__DOT__apb_access_w;
    CData/*0:0*/ opc_apb_top_tb__DOT__dut__DOT__u_apb_wrapper__DOT__apb_write_access_w;
    CData/*0:0*/ opc_apb_top_tb__DOT__dut__DOT__u_apb_wrapper__DOT__apb_read_access_w;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__opc_apb_top_tb__DOT__PCLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__opc_apb_top_tb__DOT__PRESETn__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ opc_apb_top_tb__DOT__PADDR;
    IData/*31:0*/ opc_apb_top_tb__DOT__PWDATA;
    IData/*31:0*/ opc_apb_top_tb__DOT__read_data;
    IData/*31:0*/ opc_apb_top_tb__DOT__pass_count;
    IData/*31:0*/ opc_apb_top_tb__DOT__fail_count;
    IData/*31:0*/ opc_apb_top_tb__DOT__dut__DOT__reg_wdata_w;
    IData/*31:0*/ opc_apb_top_tb__DOT__dut__DOT__reg_rdata_w;
    IData/*31:0*/ opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__i;
    IData/*31:0*/ opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_gpio__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 8> opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__reg_file;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h54fcdc7e__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vopc_apb_top_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vopc_apb_top_tb___024root(Vopc_apb_top_tb__Syms* symsp, const char* v__name);
    ~Vopc_apb_top_tb___024root();
    VL_UNCOPYABLE(Vopc_apb_top_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
