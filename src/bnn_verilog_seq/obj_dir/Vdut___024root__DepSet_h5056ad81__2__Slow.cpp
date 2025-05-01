// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "Vdut__pch.h"
#include "Vdut___024root.h"

VL_ATTR_COLD void Vdut___024root___stl_sequent__TOP__0(Vdut___024root* vlSelf);

VL_ATTR_COLD void Vdut___024root___eval_stl(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vdut___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vdut___024root___eval_triggers__stl(Vdut___024root* vlSelf);

VL_ATTR_COLD bool Vdut___024root___eval_phase__stl(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vdut___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vdut___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut___024root___dump_triggers__act(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut___024root___dump_triggers__nba(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdut___024root___ctor_var_reset(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->data_out_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(900, vlSelf->dut__DOT__conv1_img_in[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->dut__DOT__conv1_weights[__Vi0] = VL_RAND_RESET_I(9);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(144, vlSelf->dut__DOT__conv2_weights[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 5760; ++__Vi0) {
        vlSelf->dut__DOT__fc_weights[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(196, vlSelf->dut__DOT__pool1_img_out[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->dut__DOT__pool2_img_out[__Vi0] = VL_RAND_RESET_Q(36);
    }
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->dut__DOT__fc_out[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->dut__DOT__result = VL_RAND_RESET_I(4);
    vlSelf->dut__DOT__conv1_data_ready = VL_RAND_RESET_I(1);
    vlSelf->dut__DOT__conv2_data_ready = VL_RAND_RESET_I(1);
    vlSelf->dut__DOT__fc_data_ready = VL_RAND_RESET_I(1);
    vlSelf->dut__DOT__conv_pool1__DOT__core_weight = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(784, vlSelf->dut__DOT__conv_pool1__DOT__core_img_out);
    VL_RAND_RESET_W(196, vlSelf->dut__DOT__conv_pool1__DOT__pool_img_out);
    vlSelf->dut__DOT__conv_pool1__DOT__core_data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->dut__DOT__conv_pool1__DOT__core_data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->dut__DOT__conv_pool1__DOT__cur_oc = VL_RAND_RESET_I(32);
    vlSelf->dut__DOT__conv_pool1__DOT__ConvBlock__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount = VL_RAND_RESET_I(8);
    vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic = VL_RAND_RESET_I(32);
    vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__row = VL_RAND_RESET_I(32);
    vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__col = VL_RAND_RESET_I(32);
    vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__adder_count = VL_RAND_RESET_I(32);
    vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__patch_val = VL_RAND_RESET_I(8);
    vlSelf->dut__DOT__conv_pool1__DOT__core__DOT____Vlvbound_h31c0a0c9__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(144, vlSelf->dut__DOT__conv_pool2__DOT__core_weight);
    VL_RAND_RESET_W(144, vlSelf->dut__DOT__conv_pool2__DOT__core_img_out);
    vlSelf->dut__DOT__conv_pool2__DOT__pool_img_out = VL_RAND_RESET_Q(36);
    vlSelf->dut__DOT__conv_pool2__DOT__core_data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->dut__DOT__conv_pool2__DOT__core_data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->dut__DOT__conv_pool2__DOT__cur_oc = VL_RAND_RESET_I(32);
    vlSelf->dut__DOT__conv_pool2__DOT__ConvBlock__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount = VL_RAND_RESET_I(8);
    vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic = VL_RAND_RESET_I(32);
    vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__row = VL_RAND_RESET_I(32);
    vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__col = VL_RAND_RESET_I(32);
    vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__adder_count = VL_RAND_RESET_I(32);
    vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__patch_val = VL_RAND_RESET_I(8);
    vlSelf->dut__DOT__conv_pool2__DOT__core__DOT____Vlvbound_hbd5359ef__0 = VL_RAND_RESET_I(1);
    vlSelf->dut__DOT__fc__DOT__cur_ic = VL_RAND_RESET_I(32);
    vlSelf->dut__DOT__fc__DOT__cur_oc = VL_RAND_RESET_I(32);
    vlSelf->dut__DOT__fc__DOT__temp_out = VL_RAND_RESET_I(16);
    vlSelf->dut__DOT__fc__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->dut__DOT__fc__DOT____Vlvbound_hff12f236__0 = VL_RAND_RESET_I(16);
    vlSelf->dut__DOT__compare__DOT__max = VL_RAND_RESET_I(16);
    vlSelf->dut__DOT__compare__DOT__max_ind = VL_RAND_RESET_I(4);
    vlSelf->dut__DOT__compare__DOT__cur_ic = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
