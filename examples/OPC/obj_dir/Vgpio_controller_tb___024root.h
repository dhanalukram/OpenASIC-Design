// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vgpio_controller_tb.h for the primary calling header

#ifndef VERILATED_VGPIO_CONTROLLER_TB___024ROOT_H_
#define VERILATED_VGPIO_CONTROLLER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vgpio_controller_tb___024unit;


class Vgpio_controller_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vgpio_controller_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vgpio_controller_tb___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ gpio_controller_tb__DOT__clk;
    CData/*0:0*/ gpio_controller_tb__DOT__rst_n;
    CData/*7:0*/ gpio_controller_tb__DOT__gpio_data_i;
    CData/*7:0*/ gpio_controller_tb__DOT__gpio_dir_i;
    CData/*7:0*/ gpio_controller_tb__DOT__gpio_in_i;
    CData/*7:0*/ gpio_controller_tb__DOT__gpio_out_o;
    CData/*7:0*/ gpio_controller_tb__DOT__gpio_input_o;
    CData/*7:0*/ __Vtrigprevexpr___TOP__gpio_controller_tb__DOT__gpio_data_i__0;
    CData/*7:0*/ __Vtrigprevexpr___TOP__gpio_controller_tb__DOT__gpio_dir_i__0;
    CData/*7:0*/ __Vtrigprevexpr___TOP__gpio_controller_tb__DOT__gpio_in_i__0;
    CData/*7:0*/ __Vtrigprevexpr___TOP__gpio_controller_tb__DOT__gpio_input_o__0;
    CData/*7:0*/ __Vtrigprevexpr___TOP__gpio_controller_tb__DOT__gpio_out_o__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__gpio_controller_tb__DOT__rst_n__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__gpio_controller_tb__DOT__clk__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ gpio_controller_tb__DOT__uut__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<9> __VactTriggered;
    VlTriggerVec<9> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vgpio_controller_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vgpio_controller_tb___024root(Vgpio_controller_tb__Syms* symsp, const char* v__name);
    ~Vgpio_controller_tb___024root();
    VL_UNCOPYABLE(Vgpio_controller_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
