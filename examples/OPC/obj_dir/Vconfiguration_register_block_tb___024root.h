// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vconfiguration_register_block_tb.h for the primary calling header

#ifndef VERILATED_VCONFIGURATION_REGISTER_BLOCK_TB___024ROOT_H_
#define VERILATED_VCONFIGURATION_REGISTER_BLOCK_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vconfiguration_register_block_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vconfiguration_register_block_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ configuration_register_block_tb__DOT__clk;
    CData/*0:0*/ configuration_register_block_tb__DOT__rst_n;
    CData/*0:0*/ configuration_register_block_tb__DOT__write_en_i;
    CData/*0:0*/ configuration_register_block_tb__DOT__read_en_i;
    CData/*7:0*/ configuration_register_block_tb__DOT__addr_i;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__configuration_register_block_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__configuration_register_block_tb__DOT__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ configuration_register_block_tb__DOT__wdata_i;
    IData/*31:0*/ configuration_register_block_tb__DOT__rdata_o;
    IData/*31:0*/ configuration_register_block_tb__DOT__dut__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 8> configuration_register_block_tb__DOT__dut__DOT__reg_file;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h8a5858c1__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vconfiguration_register_block_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vconfiguration_register_block_tb___024root(Vconfiguration_register_block_tb__Syms* symsp, const char* v__name);
    ~Vconfiguration_register_block_tb___024root();
    VL_UNCOPYABLE(Vconfiguration_register_block_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
