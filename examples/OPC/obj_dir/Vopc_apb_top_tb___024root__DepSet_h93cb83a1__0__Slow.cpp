// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vopc_apb_top_tb.h for the primary calling header

#include "Vopc_apb_top_tb__pch.h"
#include "Vopc_apb_top_tb___024root.h"

VL_ATTR_COLD void Vopc_apb_top_tb___024root___eval_static(Vopc_apb_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_apb_top_tb___024root___eval_static\n"); );
    Vopc_apb_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__opc_apb_top_tb__DOT__PCLK__0 
        = vlSelfRef.opc_apb_top_tb__DOT__PCLK;
    vlSelfRef.__Vtrigprevexpr___TOP__opc_apb_top_tb__DOT__PRESETn__0 
        = vlSelfRef.opc_apb_top_tb__DOT__PRESETn;
}

VL_ATTR_COLD void Vopc_apb_top_tb___024root___eval_final(Vopc_apb_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_apb_top_tb___024root___eval_final\n"); );
    Vopc_apb_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vopc_apb_top_tb___024root___dump_triggers__stl(Vopc_apb_top_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vopc_apb_top_tb___024root___eval_phase__stl(Vopc_apb_top_tb___024root* vlSelf);

VL_ATTR_COLD void Vopc_apb_top_tb___024root___eval_settle(Vopc_apb_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_apb_top_tb___024root___eval_settle\n"); );
    Vopc_apb_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vopc_apb_top_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/opc_apb_top_tb.v", 27, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vopc_apb_top_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vopc_apb_top_tb___024root___dump_triggers__stl(Vopc_apb_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_apb_top_tb___024root___dump_triggers__stl\n"); );
    Vopc_apb_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vopc_apb_top_tb___024root___stl_sequent__TOP__0(Vopc_apb_top_tb___024root* vlSelf);
VL_ATTR_COLD void Vopc_apb_top_tb___024root____Vm_traceActivitySetAll(Vopc_apb_top_tb___024root* vlSelf);

VL_ATTR_COLD void Vopc_apb_top_tb___024root___eval_stl(Vopc_apb_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_apb_top_tb___024root___eval_stl\n"); );
    Vopc_apb_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vopc_apb_top_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vopc_apb_top_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vopc_apb_top_tb___024root___stl_sequent__TOP__0(Vopc_apb_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_apb_top_tb___024root___stl_sequent__TOP__0\n"); );
    Vopc_apb_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__reg_write_en_w) 
                       | (IData)(vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__reg_read_en_w)) 
                      & (0U != (3U & (IData)(vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__reg_addr_w))))))) {
        VL_WRITEF_NX("WARNING: CRB - Unaligned register access at address %x\n",0,
                     8,vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__reg_addr_w);
    }
    vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__reg_rdata_w = 0U;
    if (vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__reg_read_en_w) {
        vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__reg_rdata_w 
            = vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__reg_file
            [(7U & ((IData)(vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__reg_addr_w) 
                    >> 2U))];
    }
    vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_apb_wrapper__DOT__apb_access_w 
        = ((IData)(vlSelfRef.opc_apb_top_tb__DOT__PENABLE) 
           & (IData)(vlSelfRef.opc_apb_top_tb__DOT__PSEL));
    vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_apb_wrapper__DOT__apb_write_access_w 
        = ((IData)(vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_apb_wrapper__DOT__apb_access_w) 
           & (IData)(vlSelfRef.opc_apb_top_tb__DOT__PWRITE));
    vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_apb_wrapper__DOT__apb_read_access_w 
        = ((~ (IData)(vlSelfRef.opc_apb_top_tb__DOT__PWRITE)) 
           & (IData)(vlSelfRef.opc_apb_top_tb__DOT__dut__DOT__u_apb_wrapper__DOT__apb_access_w));
}

VL_ATTR_COLD void Vopc_apb_top_tb___024root___eval_triggers__stl(Vopc_apb_top_tb___024root* vlSelf);

VL_ATTR_COLD bool Vopc_apb_top_tb___024root___eval_phase__stl(Vopc_apb_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_apb_top_tb___024root___eval_phase__stl\n"); );
    Vopc_apb_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vopc_apb_top_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vopc_apb_top_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vopc_apb_top_tb___024root___dump_triggers__act(Vopc_apb_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_apb_top_tb___024root___dump_triggers__act\n"); );
    Vopc_apb_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge opc_apb_top_tb.PCLK)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge opc_apb_top_tb.PRESETn)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vopc_apb_top_tb___024root___dump_triggers__nba(Vopc_apb_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_apb_top_tb___024root___dump_triggers__nba\n"); );
    Vopc_apb_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge opc_apb_top_tb.PCLK)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge opc_apb_top_tb.PRESETn)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vopc_apb_top_tb___024root____Vm_traceActivitySetAll(Vopc_apb_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_apb_top_tb___024root____Vm_traceActivitySetAll\n"); );
    Vopc_apb_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vopc_apb_top_tb___024root___ctor_var_reset(Vopc_apb_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopc_apb_top_tb___024root___ctor_var_reset\n"); );
    Vopc_apb_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->opc_apb_top_tb__DOT__PCLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13754072476677295083ull);
    vlSelf->opc_apb_top_tb__DOT__PRESETn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4312073222732257481ull);
    vlSelf->opc_apb_top_tb__DOT__PSEL = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16796073568500716279ull);
    vlSelf->opc_apb_top_tb__DOT__PENABLE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12477491950312059899ull);
    vlSelf->opc_apb_top_tb__DOT__PWRITE = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11864360740250403638ull);
    vlSelf->opc_apb_top_tb__DOT__PADDR = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12188230043603502350ull);
    vlSelf->opc_apb_top_tb__DOT__PWDATA = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6049905239452415836ull);
    vlSelf->opc_apb_top_tb__DOT__PREADY = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2405083636693621778ull);
    vlSelf->opc_apb_top_tb__DOT__PSLVERR = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2748074410888040073ull);
    vlSelf->opc_apb_top_tb__DOT__read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14234072421366816199ull);
    vlSelf->opc_apb_top_tb__DOT__gpio_in_i = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17569175267781186465ull);
    vlSelf->opc_apb_top_tb__DOT__gpio_out_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6004356698286685753ull);
    vlSelf->opc_apb_top_tb__DOT__gpio_input_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6428826297496841954ull);
    vlSelf->opc_apb_top_tb__DOT__pass_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7950704638061972780ull);
    vlSelf->opc_apb_top_tb__DOT__fail_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3251780988676969428ull);
    vlSelf->opc_apb_top_tb__DOT__dut__DOT__reg_write_en_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17260830346429222060ull);
    vlSelf->opc_apb_top_tb__DOT__dut__DOT__reg_read_en_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4286226039001978151ull);
    vlSelf->opc_apb_top_tb__DOT__dut__DOT__reg_addr_w = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10373092635931195798ull);
    vlSelf->opc_apb_top_tb__DOT__dut__DOT__reg_wdata_w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 634524781779054136ull);
    vlSelf->opc_apb_top_tb__DOT__dut__DOT__reg_rdata_w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2879845129174668429ull);
    vlSelf->opc_apb_top_tb__DOT__dut__DOT__u_apb_wrapper__DOT__apb_access_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7172646004971128570ull);
    vlSelf->opc_apb_top_tb__DOT__dut__DOT__u_apb_wrapper__DOT__apb_write_access_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13086373951335834245ull);
    vlSelf->opc_apb_top_tb__DOT__dut__DOT__u_apb_wrapper__DOT__apb_read_access_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11155677559192869076ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__reg_file[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5177908777610995229ull);
    }
    vlSelf->opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_crb__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10170096576150105280ull);
    vlSelf->opc_apb_top_tb__DOT__dut__DOT__u_opc_top__DOT__u_gpio__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17003330114916165833ull);
    vlSelf->__Vtrigprevexpr___TOP__opc_apb_top_tb__DOT__PCLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9389614751634169982ull);
    vlSelf->__Vtrigprevexpr___TOP__opc_apb_top_tb__DOT__PRESETn__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4681207619337973854ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
