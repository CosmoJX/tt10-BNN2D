// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "Vdut__pch.h"
#include "Vdut__Syms.h"
#include "Vdut___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdut___024root___dump_triggers__stl(Vdut___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdut___024root___eval_triggers__stl(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdut___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vdut___024root___stl_sequent__TOP__0(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[0U][0U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[0U][1U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][1U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[0U][2U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][2U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[0U][3U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][3U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[0U][4U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][4U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[0U][5U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][5U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[0U][6U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][6U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[0U][7U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][7U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[0U][8U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][8U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[0U][9U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][9U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[0U][0xaU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xaU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[0U][0xbU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xbU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[0U][0xcU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xcU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[0U][0xdU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xdU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[0U][0xeU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xeU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[0U][0xfU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xfU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[0U][0x10U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x10U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[0U][0x11U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x11U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[0U][0x12U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x12U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[0U][0x13U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x13U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[0U][0x14U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x14U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[0U][0x15U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x15U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[0U][0x16U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x16U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[0U][0x17U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x17U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[0U][0x18U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x18U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[0U][0x19U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x19U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[0U][0x1aU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x1aU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[0U][0x1bU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x1bU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[0U][0x1cU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x1cU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[0U][0U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[0U][1U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][1U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[0U][2U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][2U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[0U][3U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][3U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[0U][4U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][4U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[0U][5U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][5U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[0U][6U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][6U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[0U][7U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][7U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[0U][8U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][8U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[0U][9U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][9U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[0U][0xaU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xaU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[0U][0xbU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xbU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[0U][0xcU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xcU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[0U][0xdU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xdU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[0U][0xeU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xeU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[0U][0xfU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xfU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[0U][0x10U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x10U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[0U][0x11U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x11U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[0U][0x12U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x12U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[0U][0x13U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x13U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[0U][0x14U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x14U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[0U][0x15U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x15U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[0U][0x16U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x16U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[0U][0x17U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x17U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[0U][0x18U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x18U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[0U][0x19U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x19U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[0U][0x1aU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x1aU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[0U][0x1bU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x1bU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[0U][0x1cU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x1cU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[0U][0U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[0U][1U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][1U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[0U][2U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][2U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[0U][3U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][3U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[0U][4U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][4U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[0U][5U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][5U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[0U][6U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][6U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[0U][7U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][7U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[0U][8U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][8U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[0U][9U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][9U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[0U][0xaU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xaU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[0U][0xbU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xbU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[0U][0xcU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xcU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[0U][0xdU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xdU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[0U][0xeU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xeU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[0U][0xfU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xfU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[0U][0x10U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x10U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[0U][0x11U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x11U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[0U][0x12U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x12U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[0U][0x13U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x13U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[0U][0x14U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x14U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[0U][0x15U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x15U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[0U][0x16U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x16U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[0U][0x17U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x17U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[0U][0x18U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x18U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[0U][0x19U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x19U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[0U][0x1aU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x1aU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[0U][0x1bU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x1bU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[0U][0x1cU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x1cU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[0U][0U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[0U][1U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][1U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[0U][2U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][2U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[0U][3U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][3U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[0U][4U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][4U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[0U][5U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][5U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[0U][6U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][6U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[0U][7U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][7U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[0U][8U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][8U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[0U][9U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][9U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[0U][0xaU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xaU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[0U][0xbU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xbU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[0U][0xcU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xcU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[0U][0xdU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xdU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[0U][0xeU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xeU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[0U][0xfU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xfU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[0U][0x10U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x10U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[0U][0x11U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x11U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[0U][0x12U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x12U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[0U][0x13U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x13U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[0U][0x14U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x14U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[0U][0x15U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x15U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[0U][0x16U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x16U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[0U][0x17U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x17U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[0U][0x18U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x18U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[0U][0x19U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x19U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[0U][0x1aU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x1aU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[0U][0x1bU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x1bU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[0U][0x1cU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x1cU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[0U][0U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[0U][1U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][1U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[0U][2U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][2U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[0U][3U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][3U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[0U][4U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][4U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[0U][5U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][5U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[0U][6U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][6U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[0U][7U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][7U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[0U][8U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][8U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[0U][9U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][9U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[0U][0xaU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xaU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[0U][0xbU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xbU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[0U][0xcU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xcU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[0U][0xdU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xdU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[0U][0xeU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xeU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[0U][0xfU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xfU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[0U][0x10U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x10U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[0U][0x11U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x11U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[0U][0x12U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x12U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[0U][0x13U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x13U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[0U][0x14U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x14U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[0U][0x15U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x15U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[0U][0x16U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x16U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[0U][0x17U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x17U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[0U][0x18U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x18U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[0U][0x19U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x19U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[0U][0x1aU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x1aU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[0U][0x1bU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x1bU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[0U][0x1cU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x1cU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[0U][0U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[0U][1U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][1U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[0U][2U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][2U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[0U][3U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][3U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[0U][4U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][4U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[0U][5U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][5U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[0U][6U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][6U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[0U][7U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][7U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[0U][8U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][8U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[0U][9U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][9U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[0U][0xaU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xaU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[0U][0xbU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xbU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[0U][0xcU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xcU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[0U][0xdU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xdU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[0U][0xeU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xeU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[0U][0xfU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xfU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[0U][0x10U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x10U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[0U][0x11U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x11U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[0U][0x12U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x12U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[0U][0x13U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x13U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[0U][0x14U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x14U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[0U][0x15U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x15U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[0U][0x16U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x16U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[0U][0x17U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x17U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[0U][0x18U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x18U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[0U][0x19U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x19U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[0U][0x1aU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x1aU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[0U][0x1bU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x1bU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[0U][0x1cU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x1cU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[0U][0U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[0U][1U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][1U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[0U][2U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][2U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[0U][3U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][3U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[0U][4U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][4U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[0U][5U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][5U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[0U][6U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][6U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[0U][7U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][7U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[0U][8U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][8U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[0U][9U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][9U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[0U][0xaU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xaU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[0U][0xbU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xbU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[0U][0xcU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xcU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[0U][0xdU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xdU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[0U][0xeU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xeU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[0U][0xfU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xfU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[0U][0x10U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x10U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[0U][0x11U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x11U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[0U][0x12U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x12U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[0U][0x13U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x13U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[0U][0x14U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x14U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[0U][0x15U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x15U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[0U][0x16U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x16U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[0U][0x17U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x17U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[0U][0x18U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x18U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[0U][0x19U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x19U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[0U][0x1aU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x1aU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[0U][0x1bU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x1bU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[0U][0x1cU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x1cU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[0U][0U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[0U][1U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][1U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[0U][2U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][2U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[0U][3U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][3U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[0U][4U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][4U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[0U][5U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][5U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[0U][6U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][6U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[0U][7U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][7U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[0U][8U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][8U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[0U][9U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][9U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[0U][0xaU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xaU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[0U][0xbU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xbU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[0U][0xcU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xcU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[0U][0xdU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xdU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[0U][0xeU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xeU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[0U][0xfU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xfU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[0U][0x10U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x10U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[0U][0x11U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x11U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[0U][0x12U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x12U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[0U][0x13U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x13U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[0U][0x14U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x14U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[0U][0x15U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x15U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[0U][0x16U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x16U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[0U][0x17U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x17U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[0U][0x18U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x18U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[0U][0x19U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x19U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[0U][0x1aU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x1aU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[0U][0x1bU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x1bU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[0U][0x1cU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x1cU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_in[0U][0U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_in[0U][1U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][1U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_in[0U][2U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][2U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_in[0U][3U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][3U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_in[0U][4U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][4U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_in[0U][5U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][5U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_in[0U][6U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][6U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_in[0U][7U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][7U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_in[0U][8U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][8U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_in[0U][9U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][9U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_in[0U][0xaU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xaU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_in[0U][0xbU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xbU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_in[0U][0xcU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xcU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_in[0U][0xdU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xdU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_in[0U][0xeU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xeU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_in[0U][0xfU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xfU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_in[0U][0x10U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x10U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_in[0U][0x11U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x11U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_in[0U][0x12U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x12U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_in[0U][0x13U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x13U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_in[0U][0x14U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x14U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_in[0U][0x15U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x15U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_in[0U][0x16U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x16U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_in[0U][0x17U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x17U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_in[0U][0x18U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x18U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_in[0U][0x19U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x19U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_in[0U][0x1aU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x1aU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_in[0U][0x1bU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x1bU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_in[0U][0x1cU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x1cU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_in[0U][0U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_in[0U][1U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][1U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_in[0U][2U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][2U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_in[0U][3U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][3U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_in[0U][4U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][4U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_in[0U][5U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][5U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_in[0U][6U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][6U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_in[0U][7U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][7U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_in[0U][8U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][8U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_in[0U][9U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][9U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_in[0U][0xaU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xaU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_in[0U][0xbU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xbU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_in[0U][0xcU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xcU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_in[0U][0xdU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xdU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_in[0U][0xeU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xeU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_in[0U][0xfU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0xfU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_in[0U][0x10U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x10U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_in[0U][0x11U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x11U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_in[0U][0x12U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x12U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_in[0U][0x13U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x13U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_in[0U][0x14U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x14U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_in[0U][0x15U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x15U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_in[0U][0x16U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x16U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_in[0U][0x17U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x17U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_in[0U][0x18U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x18U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_in[0U][0x19U] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x19U];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_in[0U][0x1aU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x1aU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_in[0U][0x1bU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x1bU];
    vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_in[0U][0x1cU] 
        = vlSelf->dut__DOT__conv1_img_in[0U][0x1cU];
}

VL_ATTR_COLD void Vdut___024root___stl_sequent__TOP__1(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___stl_sequent__TOP__1\n"); );
    // Body
    vlSelf->dut__DOT__conv1_img_out[0U][0U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U];
    vlSelf->dut__DOT__conv1_img_out[0U][1U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U];
    vlSelf->dut__DOT__conv1_img_out[0U][2U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U];
    vlSelf->dut__DOT__conv1_img_out[0U][3U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U];
    vlSelf->dut__DOT__conv1_img_out[0U][4U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[4U];
    vlSelf->dut__DOT__conv1_img_out[0U][5U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[5U];
    vlSelf->dut__DOT__conv1_img_out[0U][6U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[6U];
    vlSelf->dut__DOT__conv1_img_out[0U][7U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[7U];
    vlSelf->dut__DOT__conv1_img_out[0U][8U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[8U];
    vlSelf->dut__DOT__conv1_img_out[0U][9U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[9U];
    vlSelf->dut__DOT__conv1_img_out[0U][0xaU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xaU];
    vlSelf->dut__DOT__conv1_img_out[0U][0xbU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xbU];
    vlSelf->dut__DOT__conv1_img_out[0U][0xcU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xcU];
    vlSelf->dut__DOT__conv1_img_out[0U][0xdU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xdU];
    vlSelf->dut__DOT__conv1_img_out[0U][0xeU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xeU];
    vlSelf->dut__DOT__conv1_img_out[0U][0xfU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xfU];
    vlSelf->dut__DOT__conv1_img_out[0U][0x10U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x10U];
    vlSelf->dut__DOT__conv1_img_out[0U][0x11U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x11U];
    vlSelf->dut__DOT__conv1_img_out[0U][0x12U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x12U];
    vlSelf->dut__DOT__conv1_img_out[0U][0x13U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x13U];
    vlSelf->dut__DOT__conv1_img_out[0U][0x14U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x14U];
    vlSelf->dut__DOT__conv1_img_out[0U][0x15U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x15U];
    vlSelf->dut__DOT__conv1_img_out[0U][0x16U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x16U];
    vlSelf->dut__DOT__conv1_img_out[0U][0x17U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x17U];
    vlSelf->dut__DOT__conv1_img_out[0U][0x18U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x18U];
    vlSelf->dut__DOT__conv1_img_out[1U][0U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U];
    vlSelf->dut__DOT__conv1_img_out[1U][1U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U];
    vlSelf->dut__DOT__conv1_img_out[1U][2U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U];
    vlSelf->dut__DOT__conv1_img_out[1U][3U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U];
    vlSelf->dut__DOT__conv1_img_out[1U][4U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[4U];
    vlSelf->dut__DOT__conv1_img_out[1U][5U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[5U];
    vlSelf->dut__DOT__conv1_img_out[1U][6U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[6U];
    vlSelf->dut__DOT__conv1_img_out[1U][7U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[7U];
    vlSelf->dut__DOT__conv1_img_out[1U][8U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[8U];
    vlSelf->dut__DOT__conv1_img_out[1U][9U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[9U];
    vlSelf->dut__DOT__conv1_img_out[1U][0xaU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xaU];
    vlSelf->dut__DOT__conv1_img_out[1U][0xbU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xbU];
    vlSelf->dut__DOT__conv1_img_out[1U][0xcU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xcU];
    vlSelf->dut__DOT__conv1_img_out[1U][0xdU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xdU];
    vlSelf->dut__DOT__conv1_img_out[1U][0xeU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xeU];
    vlSelf->dut__DOT__conv1_img_out[1U][0xfU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xfU];
    vlSelf->dut__DOT__conv1_img_out[1U][0x10U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x10U];
    vlSelf->dut__DOT__conv1_img_out[1U][0x11U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x11U];
    vlSelf->dut__DOT__conv1_img_out[1U][0x12U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x12U];
    vlSelf->dut__DOT__conv1_img_out[1U][0x13U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x13U];
    vlSelf->dut__DOT__conv1_img_out[1U][0x14U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x14U];
    vlSelf->dut__DOT__conv1_img_out[1U][0x15U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x15U];
    vlSelf->dut__DOT__conv1_img_out[1U][0x16U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x16U];
    vlSelf->dut__DOT__conv1_img_out[1U][0x17U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x17U];
    vlSelf->dut__DOT__conv1_img_out[1U][0x18U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x18U];
    vlSelf->dut__DOT__conv1_img_out[2U][0U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U];
    vlSelf->dut__DOT__conv1_img_out[2U][1U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U];
    vlSelf->dut__DOT__conv1_img_out[2U][2U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U];
    vlSelf->dut__DOT__conv1_img_out[2U][3U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U];
    vlSelf->dut__DOT__conv1_img_out[2U][4U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[4U];
    vlSelf->dut__DOT__conv1_img_out[2U][5U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[5U];
    vlSelf->dut__DOT__conv1_img_out[2U][6U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[6U];
    vlSelf->dut__DOT__conv1_img_out[2U][7U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[7U];
    vlSelf->dut__DOT__conv1_img_out[2U][8U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[8U];
    vlSelf->dut__DOT__conv1_img_out[2U][9U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[9U];
    vlSelf->dut__DOT__conv1_img_out[2U][0xaU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xaU];
    vlSelf->dut__DOT__conv1_img_out[2U][0xbU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xbU];
    vlSelf->dut__DOT__conv1_img_out[2U][0xcU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xcU];
    vlSelf->dut__DOT__conv1_img_out[2U][0xdU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xdU];
    vlSelf->dut__DOT__conv1_img_out[2U][0xeU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xeU];
    vlSelf->dut__DOT__conv1_img_out[2U][0xfU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xfU];
    vlSelf->dut__DOT__conv1_img_out[2U][0x10U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x10U];
    vlSelf->dut__DOT__conv1_img_out[2U][0x11U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x11U];
    vlSelf->dut__DOT__conv1_img_out[2U][0x12U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x12U];
    vlSelf->dut__DOT__conv1_img_out[2U][0x13U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x13U];
    vlSelf->dut__DOT__conv1_img_out[2U][0x14U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x14U];
    vlSelf->dut__DOT__conv1_img_out[2U][0x15U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x15U];
    vlSelf->dut__DOT__conv1_img_out[2U][0x16U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x16U];
    vlSelf->dut__DOT__conv1_img_out[2U][0x17U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x17U];
    vlSelf->dut__DOT__conv1_img_out[2U][0x18U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x18U];
    vlSelf->dut__DOT__conv1_img_out[3U][0U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U];
    vlSelf->dut__DOT__conv1_img_out[3U][1U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U];
    vlSelf->dut__DOT__conv1_img_out[3U][2U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U];
    vlSelf->dut__DOT__conv1_img_out[3U][3U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U];
    vlSelf->dut__DOT__conv1_img_out[3U][4U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[4U];
    vlSelf->dut__DOT__conv1_img_out[3U][5U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[5U];
    vlSelf->dut__DOT__conv1_img_out[3U][6U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[6U];
    vlSelf->dut__DOT__conv1_img_out[3U][7U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[7U];
    vlSelf->dut__DOT__conv1_img_out[3U][8U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[8U];
    vlSelf->dut__DOT__conv1_img_out[3U][9U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[9U];
    vlSelf->dut__DOT__conv1_img_out[3U][0xaU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xaU];
    vlSelf->dut__DOT__conv1_img_out[3U][0xbU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xbU];
    vlSelf->dut__DOT__conv1_img_out[3U][0xcU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xcU];
    vlSelf->dut__DOT__conv1_img_out[3U][0xdU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xdU];
    vlSelf->dut__DOT__conv1_img_out[3U][0xeU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xeU];
    vlSelf->dut__DOT__conv1_img_out[3U][0xfU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xfU];
    vlSelf->dut__DOT__conv1_img_out[3U][0x10U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x10U];
    vlSelf->dut__DOT__conv1_img_out[3U][0x11U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x11U];
    vlSelf->dut__DOT__conv1_img_out[3U][0x12U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x12U];
    vlSelf->dut__DOT__conv1_img_out[3U][0x13U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x13U];
    vlSelf->dut__DOT__conv1_img_out[3U][0x14U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x14U];
    vlSelf->dut__DOT__conv1_img_out[3U][0x15U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x15U];
    vlSelf->dut__DOT__conv1_img_out[3U][0x16U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x16U];
    vlSelf->dut__DOT__conv1_img_out[3U][0x17U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x17U];
    vlSelf->dut__DOT__conv1_img_out[3U][0x18U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x18U];
    vlSelf->dut__DOT__conv1_img_out[4U][0U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[0U];
    vlSelf->dut__DOT__conv1_img_out[4U][1U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[1U];
    vlSelf->dut__DOT__conv1_img_out[4U][2U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[2U];
    vlSelf->dut__DOT__conv1_img_out[4U][3U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[3U];
    vlSelf->dut__DOT__conv1_img_out[4U][4U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[4U];
    vlSelf->dut__DOT__conv1_img_out[4U][5U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[5U];
    vlSelf->dut__DOT__conv1_img_out[4U][6U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[6U];
    vlSelf->dut__DOT__conv1_img_out[4U][7U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[7U];
    vlSelf->dut__DOT__conv1_img_out[4U][8U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[8U];
    vlSelf->dut__DOT__conv1_img_out[4U][9U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[9U];
    vlSelf->dut__DOT__conv1_img_out[4U][0xaU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[0xaU];
    vlSelf->dut__DOT__conv1_img_out[4U][0xbU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[0xbU];
    vlSelf->dut__DOT__conv1_img_out[4U][0xcU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[0xcU];
    vlSelf->dut__DOT__conv1_img_out[4U][0xdU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[0xdU];
    vlSelf->dut__DOT__conv1_img_out[4U][0xeU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[0xeU];
    vlSelf->dut__DOT__conv1_img_out[4U][0xfU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[0xfU];
    vlSelf->dut__DOT__conv1_img_out[4U][0x10U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[0x10U];
    vlSelf->dut__DOT__conv1_img_out[4U][0x11U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[0x11U];
    vlSelf->dut__DOT__conv1_img_out[4U][0x12U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[0x12U];
    vlSelf->dut__DOT__conv1_img_out[4U][0x13U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[0x13U];
    vlSelf->dut__DOT__conv1_img_out[4U][0x14U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[0x14U];
    vlSelf->dut__DOT__conv1_img_out[4U][0x15U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[0x15U];
    vlSelf->dut__DOT__conv1_img_out[4U][0x16U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[0x16U];
    vlSelf->dut__DOT__conv1_img_out[4U][0x17U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[0x17U];
    vlSelf->dut__DOT__conv1_img_out[4U][0x18U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[0x18U];
    vlSelf->dut__DOT__conv1_img_out[5U][0U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[0U];
    vlSelf->dut__DOT__conv1_img_out[5U][1U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[1U];
    vlSelf->dut__DOT__conv1_img_out[5U][2U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[2U];
    vlSelf->dut__DOT__conv1_img_out[5U][3U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[3U];
    vlSelf->dut__DOT__conv1_img_out[5U][4U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[4U];
    vlSelf->dut__DOT__conv1_img_out[5U][5U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[5U];
    vlSelf->dut__DOT__conv1_img_out[5U][6U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[6U];
    vlSelf->dut__DOT__conv1_img_out[5U][7U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[7U];
    vlSelf->dut__DOT__conv1_img_out[5U][8U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[8U];
    vlSelf->dut__DOT__conv1_img_out[5U][9U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[9U];
    vlSelf->dut__DOT__conv1_img_out[5U][0xaU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[0xaU];
    vlSelf->dut__DOT__conv1_img_out[5U][0xbU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[0xbU];
    vlSelf->dut__DOT__conv1_img_out[5U][0xcU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[0xcU];
    vlSelf->dut__DOT__conv1_img_out[5U][0xdU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[0xdU];
    vlSelf->dut__DOT__conv1_img_out[5U][0xeU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[0xeU];
    vlSelf->dut__DOT__conv1_img_out[5U][0xfU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[0xfU];
    vlSelf->dut__DOT__conv1_img_out[5U][0x10U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[0x10U];
    vlSelf->dut__DOT__conv1_img_out[5U][0x11U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[0x11U];
    vlSelf->dut__DOT__conv1_img_out[5U][0x12U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[0x12U];
    vlSelf->dut__DOT__conv1_img_out[5U][0x13U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[0x13U];
    vlSelf->dut__DOT__conv1_img_out[5U][0x14U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[0x14U];
    vlSelf->dut__DOT__conv1_img_out[5U][0x15U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[0x15U];
    vlSelf->dut__DOT__conv1_img_out[5U][0x16U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[0x16U];
    vlSelf->dut__DOT__conv1_img_out[5U][0x17U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[0x17U];
    vlSelf->dut__DOT__conv1_img_out[5U][0x18U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[0x18U];
    vlSelf->dut__DOT__conv1_img_out[6U][0U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[0U];
    vlSelf->dut__DOT__conv1_img_out[6U][1U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[1U];
    vlSelf->dut__DOT__conv1_img_out[6U][2U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[2U];
    vlSelf->dut__DOT__conv1_img_out[6U][3U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[3U];
    vlSelf->dut__DOT__conv1_img_out[6U][4U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[4U];
    vlSelf->dut__DOT__conv1_img_out[6U][5U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[5U];
    vlSelf->dut__DOT__conv1_img_out[6U][6U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[6U];
    vlSelf->dut__DOT__conv1_img_out[6U][7U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[7U];
    vlSelf->dut__DOT__conv1_img_out[6U][8U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[8U];
    vlSelf->dut__DOT__conv1_img_out[6U][9U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[9U];
    vlSelf->dut__DOT__conv1_img_out[6U][0xaU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[0xaU];
    vlSelf->dut__DOT__conv1_img_out[6U][0xbU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[0xbU];
    vlSelf->dut__DOT__conv1_img_out[6U][0xcU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[0xcU];
    vlSelf->dut__DOT__conv1_img_out[6U][0xdU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[0xdU];
    vlSelf->dut__DOT__conv1_img_out[6U][0xeU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[0xeU];
    vlSelf->dut__DOT__conv1_img_out[6U][0xfU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[0xfU];
    vlSelf->dut__DOT__conv1_img_out[6U][0x10U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[0x10U];
    vlSelf->dut__DOT__conv1_img_out[6U][0x11U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[0x11U];
    vlSelf->dut__DOT__conv1_img_out[6U][0x12U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[0x12U];
    vlSelf->dut__DOT__conv1_img_out[6U][0x13U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[0x13U];
    vlSelf->dut__DOT__conv1_img_out[6U][0x14U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[0x14U];
    vlSelf->dut__DOT__conv1_img_out[6U][0x15U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[0x15U];
    vlSelf->dut__DOT__conv1_img_out[6U][0x16U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[0x16U];
    vlSelf->dut__DOT__conv1_img_out[6U][0x17U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[0x17U];
    vlSelf->dut__DOT__conv1_img_out[6U][0x18U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[0x18U];
    vlSelf->dut__DOT__conv1_img_out[7U][0U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[0U];
    vlSelf->dut__DOT__conv1_img_out[7U][1U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[1U];
    vlSelf->dut__DOT__conv1_img_out[7U][2U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[2U];
    vlSelf->dut__DOT__conv1_img_out[7U][3U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[3U];
    vlSelf->dut__DOT__conv1_img_out[7U][4U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[4U];
    vlSelf->dut__DOT__conv1_img_out[7U][5U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[5U];
    vlSelf->dut__DOT__conv1_img_out[7U][6U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[6U];
    vlSelf->dut__DOT__conv1_img_out[7U][7U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[7U];
    vlSelf->dut__DOT__conv1_img_out[7U][8U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[8U];
    vlSelf->dut__DOT__conv1_img_out[7U][9U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[9U];
    vlSelf->dut__DOT__conv1_img_out[7U][0xaU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[0xaU];
    vlSelf->dut__DOT__conv1_img_out[7U][0xbU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[0xbU];
    vlSelf->dut__DOT__conv1_img_out[7U][0xcU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[0xcU];
    vlSelf->dut__DOT__conv1_img_out[7U][0xdU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[0xdU];
    vlSelf->dut__DOT__conv1_img_out[7U][0xeU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[0xeU];
    vlSelf->dut__DOT__conv1_img_out[7U][0xfU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[0xfU];
    vlSelf->dut__DOT__conv1_img_out[7U][0x10U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[0x10U];
    vlSelf->dut__DOT__conv1_img_out[7U][0x11U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[0x11U];
    vlSelf->dut__DOT__conv1_img_out[7U][0x12U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[0x12U];
    vlSelf->dut__DOT__conv1_img_out[7U][0x13U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[0x13U];
    vlSelf->dut__DOT__conv1_img_out[7U][0x14U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[0x14U];
    vlSelf->dut__DOT__conv1_img_out[7U][0x15U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[0x15U];
    vlSelf->dut__DOT__conv1_img_out[7U][0x16U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[0x16U];
    vlSelf->dut__DOT__conv1_img_out[7U][0x17U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[0x17U];
    vlSelf->dut__DOT__conv1_img_out[7U][0x18U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[0x18U];
    vlSelf->dut__DOT__conv1_img_out[8U][0U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_out[0U];
    vlSelf->dut__DOT__conv1_img_out[8U][1U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_out[1U];
    vlSelf->dut__DOT__conv1_img_out[8U][2U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_out[2U];
    vlSelf->dut__DOT__conv1_img_out[8U][3U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_out[3U];
    vlSelf->dut__DOT__conv1_img_out[8U][4U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_out[4U];
    vlSelf->dut__DOT__conv1_img_out[8U][5U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_out[5U];
    vlSelf->dut__DOT__conv1_img_out[8U][6U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_out[6U];
    vlSelf->dut__DOT__conv1_img_out[8U][7U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_out[7U];
    vlSelf->dut__DOT__conv1_img_out[8U][8U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_out[8U];
    vlSelf->dut__DOT__conv1_img_out[8U][9U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_out[9U];
    vlSelf->dut__DOT__conv1_img_out[8U][0xaU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_out[0xaU];
    vlSelf->dut__DOT__conv1_img_out[8U][0xbU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_out[0xbU];
    vlSelf->dut__DOT__conv1_img_out[8U][0xcU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_out[0xcU];
    vlSelf->dut__DOT__conv1_img_out[8U][0xdU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_out[0xdU];
    vlSelf->dut__DOT__conv1_img_out[8U][0xeU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_out[0xeU];
    vlSelf->dut__DOT__conv1_img_out[8U][0xfU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_out[0xfU];
    vlSelf->dut__DOT__conv1_img_out[8U][0x10U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_out[0x10U];
    vlSelf->dut__DOT__conv1_img_out[8U][0x11U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_out[0x11U];
    vlSelf->dut__DOT__conv1_img_out[8U][0x12U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_out[0x12U];
    vlSelf->dut__DOT__conv1_img_out[8U][0x13U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_out[0x13U];
    vlSelf->dut__DOT__conv1_img_out[8U][0x14U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_out[0x14U];
    vlSelf->dut__DOT__conv1_img_out[8U][0x15U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_out[0x15U];
    vlSelf->dut__DOT__conv1_img_out[8U][0x16U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_out[0x16U];
    vlSelf->dut__DOT__conv1_img_out[8U][0x17U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_out[0x17U];
    vlSelf->dut__DOT__conv1_img_out[8U][0x18U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__8__KET____DOT__core.img_out[0x18U];
    vlSelf->dut__DOT__conv1_img_out[9U][0U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_out[0U];
    vlSelf->dut__DOT__conv1_img_out[9U][1U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_out[1U];
    vlSelf->dut__DOT__conv1_img_out[9U][2U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_out[2U];
    vlSelf->dut__DOT__conv1_img_out[9U][3U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_out[3U];
    vlSelf->dut__DOT__conv1_img_out[9U][4U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_out[4U];
    vlSelf->dut__DOT__conv1_img_out[9U][5U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_out[5U];
    vlSelf->dut__DOT__conv1_img_out[9U][6U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_out[6U];
    vlSelf->dut__DOT__conv1_img_out[9U][7U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_out[7U];
    vlSelf->dut__DOT__conv1_img_out[9U][8U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_out[8U];
    vlSelf->dut__DOT__conv1_img_out[9U][9U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_out[9U];
    vlSelf->dut__DOT__conv1_img_out[9U][0xaU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_out[0xaU];
    vlSelf->dut__DOT__conv1_img_out[9U][0xbU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_out[0xbU];
    vlSelf->dut__DOT__conv1_img_out[9U][0xcU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_out[0xcU];
    vlSelf->dut__DOT__conv1_img_out[9U][0xdU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_out[0xdU];
    vlSelf->dut__DOT__conv1_img_out[9U][0xeU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_out[0xeU];
    vlSelf->dut__DOT__conv1_img_out[9U][0xfU] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_out[0xfU];
    vlSelf->dut__DOT__conv1_img_out[9U][0x10U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_out[0x10U];
    vlSelf->dut__DOT__conv1_img_out[9U][0x11U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_out[0x11U];
    vlSelf->dut__DOT__conv1_img_out[9U][0x12U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_out[0x12U];
    vlSelf->dut__DOT__conv1_img_out[9U][0x13U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_out[0x13U];
    vlSelf->dut__DOT__conv1_img_out[9U][0x14U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_out[0x14U];
    vlSelf->dut__DOT__conv1_img_out[9U][0x15U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_out[0x15U];
    vlSelf->dut__DOT__conv1_img_out[9U][0x16U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_out[0x16U];
    vlSelf->dut__DOT__conv1_img_out[9U][0x17U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_out[0x17U];
    vlSelf->dut__DOT__conv1_img_out[9U][0x18U] = vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__9__KET____DOT__core.img_out[0x18U];
}

VL_ATTR_COLD void Vdut___024root___stl_sequent__TOP__2(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___stl_sequent__TOP__2\n"); );
    // Body
    vlSelf->dut__DOT__pool1_img_out[0U][0U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__0__KET____DOT__maxpool.img_out[0U];
    vlSelf->dut__DOT__pool1_img_out[0U][1U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__0__KET____DOT__maxpool.img_out[1U];
    vlSelf->dut__DOT__pool1_img_out[0U][2U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__0__KET____DOT__maxpool.img_out[2U];
    vlSelf->dut__DOT__pool1_img_out[0U][3U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__0__KET____DOT__maxpool.img_out[3U];
    vlSelf->dut__DOT__pool1_img_out[0U][4U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__0__KET____DOT__maxpool.img_out[4U];
    vlSelf->dut__DOT__pool1_img_out[0U][5U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__0__KET____DOT__maxpool.img_out[5U];
    vlSelf->dut__DOT__pool1_img_out[0U][6U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__0__KET____DOT__maxpool.img_out[6U];
    vlSelf->dut__DOT__pool1_img_out[1U][0U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__1__KET____DOT__maxpool.img_out[0U];
    vlSelf->dut__DOT__pool1_img_out[1U][1U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__1__KET____DOT__maxpool.img_out[1U];
    vlSelf->dut__DOT__pool1_img_out[1U][2U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__1__KET____DOT__maxpool.img_out[2U];
    vlSelf->dut__DOT__pool1_img_out[1U][3U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__1__KET____DOT__maxpool.img_out[3U];
    vlSelf->dut__DOT__pool1_img_out[1U][4U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__1__KET____DOT__maxpool.img_out[4U];
    vlSelf->dut__DOT__pool1_img_out[1U][5U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__1__KET____DOT__maxpool.img_out[5U];
    vlSelf->dut__DOT__pool1_img_out[1U][6U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__1__KET____DOT__maxpool.img_out[6U];
    vlSelf->dut__DOT__pool1_img_out[2U][0U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__2__KET____DOT__maxpool.img_out[0U];
    vlSelf->dut__DOT__pool1_img_out[2U][1U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__2__KET____DOT__maxpool.img_out[1U];
    vlSelf->dut__DOT__pool1_img_out[2U][2U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__2__KET____DOT__maxpool.img_out[2U];
    vlSelf->dut__DOT__pool1_img_out[2U][3U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__2__KET____DOT__maxpool.img_out[3U];
    vlSelf->dut__DOT__pool1_img_out[2U][4U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__2__KET____DOT__maxpool.img_out[4U];
    vlSelf->dut__DOT__pool1_img_out[2U][5U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__2__KET____DOT__maxpool.img_out[5U];
    vlSelf->dut__DOT__pool1_img_out[2U][6U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__2__KET____DOT__maxpool.img_out[6U];
    vlSelf->dut__DOT__pool1_img_out[3U][0U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__3__KET____DOT__maxpool.img_out[0U];
    vlSelf->dut__DOT__pool1_img_out[3U][1U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__3__KET____DOT__maxpool.img_out[1U];
    vlSelf->dut__DOT__pool1_img_out[3U][2U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__3__KET____DOT__maxpool.img_out[2U];
    vlSelf->dut__DOT__pool1_img_out[3U][3U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__3__KET____DOT__maxpool.img_out[3U];
    vlSelf->dut__DOT__pool1_img_out[3U][4U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__3__KET____DOT__maxpool.img_out[4U];
    vlSelf->dut__DOT__pool1_img_out[3U][5U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__3__KET____DOT__maxpool.img_out[5U];
    vlSelf->dut__DOT__pool1_img_out[3U][6U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__3__KET____DOT__maxpool.img_out[6U];
    vlSelf->dut__DOT__pool1_img_out[4U][0U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__4__KET____DOT__maxpool.img_out[0U];
    vlSelf->dut__DOT__pool1_img_out[4U][1U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__4__KET____DOT__maxpool.img_out[1U];
    vlSelf->dut__DOT__pool1_img_out[4U][2U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__4__KET____DOT__maxpool.img_out[2U];
    vlSelf->dut__DOT__pool1_img_out[4U][3U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__4__KET____DOT__maxpool.img_out[3U];
    vlSelf->dut__DOT__pool1_img_out[4U][4U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__4__KET____DOT__maxpool.img_out[4U];
    vlSelf->dut__DOT__pool1_img_out[4U][5U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__4__KET____DOT__maxpool.img_out[5U];
    vlSelf->dut__DOT__pool1_img_out[4U][6U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__4__KET____DOT__maxpool.img_out[6U];
    vlSelf->dut__DOT__pool1_img_out[5U][0U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__5__KET____DOT__maxpool.img_out[0U];
    vlSelf->dut__DOT__pool1_img_out[5U][1U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__5__KET____DOT__maxpool.img_out[1U];
    vlSelf->dut__DOT__pool1_img_out[5U][2U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__5__KET____DOT__maxpool.img_out[2U];
    vlSelf->dut__DOT__pool1_img_out[5U][3U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__5__KET____DOT__maxpool.img_out[3U];
    vlSelf->dut__DOT__pool1_img_out[5U][4U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__5__KET____DOT__maxpool.img_out[4U];
    vlSelf->dut__DOT__pool1_img_out[5U][5U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__5__KET____DOT__maxpool.img_out[5U];
    vlSelf->dut__DOT__pool1_img_out[5U][6U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__5__KET____DOT__maxpool.img_out[6U];
    vlSelf->dut__DOT__pool1_img_out[6U][0U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__6__KET____DOT__maxpool.img_out[0U];
    vlSelf->dut__DOT__pool1_img_out[6U][1U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__6__KET____DOT__maxpool.img_out[1U];
    vlSelf->dut__DOT__pool1_img_out[6U][2U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__6__KET____DOT__maxpool.img_out[2U];
    vlSelf->dut__DOT__pool1_img_out[6U][3U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__6__KET____DOT__maxpool.img_out[3U];
    vlSelf->dut__DOT__pool1_img_out[6U][4U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__6__KET____DOT__maxpool.img_out[4U];
    vlSelf->dut__DOT__pool1_img_out[6U][5U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__6__KET____DOT__maxpool.img_out[5U];
    vlSelf->dut__DOT__pool1_img_out[6U][6U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__6__KET____DOT__maxpool.img_out[6U];
    vlSelf->dut__DOT__pool1_img_out[7U][0U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__7__KET____DOT__maxpool.img_out[0U];
    vlSelf->dut__DOT__pool1_img_out[7U][1U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__7__KET____DOT__maxpool.img_out[1U];
    vlSelf->dut__DOT__pool1_img_out[7U][2U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__7__KET____DOT__maxpool.img_out[2U];
    vlSelf->dut__DOT__pool1_img_out[7U][3U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__7__KET____DOT__maxpool.img_out[3U];
    vlSelf->dut__DOT__pool1_img_out[7U][4U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__7__KET____DOT__maxpool.img_out[4U];
    vlSelf->dut__DOT__pool1_img_out[7U][5U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__7__KET____DOT__maxpool.img_out[5U];
    vlSelf->dut__DOT__pool1_img_out[7U][6U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__7__KET____DOT__maxpool.img_out[6U];
    vlSelf->dut__DOT__pool1_img_out[8U][0U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__8__KET____DOT__maxpool.img_out[0U];
    vlSelf->dut__DOT__pool1_img_out[8U][1U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__8__KET____DOT__maxpool.img_out[1U];
    vlSelf->dut__DOT__pool1_img_out[8U][2U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__8__KET____DOT__maxpool.img_out[2U];
    vlSelf->dut__DOT__pool1_img_out[8U][3U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__8__KET____DOT__maxpool.img_out[3U];
    vlSelf->dut__DOT__pool1_img_out[8U][4U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__8__KET____DOT__maxpool.img_out[4U];
    vlSelf->dut__DOT__pool1_img_out[8U][5U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__8__KET____DOT__maxpool.img_out[5U];
    vlSelf->dut__DOT__pool1_img_out[8U][6U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__8__KET____DOT__maxpool.img_out[6U];
    vlSelf->dut__DOT__pool1_img_out[9U][0U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__9__KET____DOT__maxpool.img_out[0U];
    vlSelf->dut__DOT__pool1_img_out[9U][1U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__9__KET____DOT__maxpool.img_out[1U];
    vlSelf->dut__DOT__pool1_img_out[9U][2U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__9__KET____DOT__maxpool.img_out[2U];
    vlSelf->dut__DOT__pool1_img_out[9U][3U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__9__KET____DOT__maxpool.img_out[3U];
    vlSelf->dut__DOT__pool1_img_out[9U][4U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__9__KET____DOT__maxpool.img_out[4U];
    vlSelf->dut__DOT__pool1_img_out[9U][5U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__9__KET____DOT__maxpool.img_out[5U];
    vlSelf->dut__DOT__pool1_img_out[9U][6U] = vlSymsp->TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__9__KET____DOT__maxpool.img_out[6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[0U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[0U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[0U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[0U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[0U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[0U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[0U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[1U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[1U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[1U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[1U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[1U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[1U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[1U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[2U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[2U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[2U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[2U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[2U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[2U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[2U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[3U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[3U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[3U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[3U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[3U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[3U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[3U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[4U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[4U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[4U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[4U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[4U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[4U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[4U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[5U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[5U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[5U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[5U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[5U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[5U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[5U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[6U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[6U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[6U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[6U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[6U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[6U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[6U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[7U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[7U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[7U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[7U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[7U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[7U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[7U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[8U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[8U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[8U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[8U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[8U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[8U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[8U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[9U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[9U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[9U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[9U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[9U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[9U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_in[9U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[0U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[0U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[0U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[0U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[0U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[0U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[0U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[1U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[1U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[1U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[1U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[1U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[1U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[1U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[2U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[2U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[2U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[2U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[2U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[2U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[2U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[3U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[3U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[3U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[3U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[3U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[3U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[3U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[4U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[4U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[4U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[4U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[4U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[4U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[4U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[5U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[5U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[5U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[5U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[5U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[5U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[5U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[6U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[6U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[6U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[6U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[6U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[6U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[6U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[7U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[7U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[7U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[7U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[7U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[7U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[7U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[8U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[8U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[8U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[8U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[8U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[8U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[8U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[9U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[9U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[9U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[9U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[9U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[9U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_in[9U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[0U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[0U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[0U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[0U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[0U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[0U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[0U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[1U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[1U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[1U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[1U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[1U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[1U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[1U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[2U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[2U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[2U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[2U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[2U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[2U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[2U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[3U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[3U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[3U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[3U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[3U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[3U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[3U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[4U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[4U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[4U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[4U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[4U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[4U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[4U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[5U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[5U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[5U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[5U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[5U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[5U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[5U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[6U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[6U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[6U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[6U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[6U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[6U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[6U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[7U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[7U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[7U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[7U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[7U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[7U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[7U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[8U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[8U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[8U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[8U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[8U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[8U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[8U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[9U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[9U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[9U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[9U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[9U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[9U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_in[9U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[0U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[0U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[0U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[0U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[0U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[0U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[0U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[1U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[1U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[1U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[1U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[1U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[1U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[1U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[2U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[2U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[2U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[2U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[2U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[2U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[2U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[3U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[3U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[3U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[3U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[3U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[3U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[3U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[4U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[4U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[4U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[4U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[4U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[4U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[4U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[5U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[5U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[5U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[5U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[5U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[5U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[5U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[6U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[6U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[6U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[6U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[6U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[6U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[6U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[7U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[7U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[7U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[7U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[7U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[7U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[7U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[8U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[8U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[8U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[8U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[8U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[8U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[8U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[9U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[9U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[9U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[9U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[9U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[9U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_in[9U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[0U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[0U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[0U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[0U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[0U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[0U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[0U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[1U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[1U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[1U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[1U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[1U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[1U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[1U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[2U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[2U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[2U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[2U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[2U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[2U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[2U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[3U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[3U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[3U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[3U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[3U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[3U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[3U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[4U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[4U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[4U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[4U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[4U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[4U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[4U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[5U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[5U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[5U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[5U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[5U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[5U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[5U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[6U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[6U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[6U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[6U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[6U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[6U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[6U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[7U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[7U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[7U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[7U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[7U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[7U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[7U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[8U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[8U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[8U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[8U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[8U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[8U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[8U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[9U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[9U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[9U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[9U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[9U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[9U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_in[9U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[0U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[0U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[0U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[0U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[0U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[0U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[0U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[1U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[1U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[1U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[1U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[1U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[1U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[1U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[2U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[2U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[2U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[2U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[2U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[2U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[2U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[3U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[3U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[3U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[3U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[3U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[3U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[3U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[4U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[4U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[4U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[4U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[4U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[4U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[4U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[5U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[5U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[5U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[5U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[5U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[5U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[5U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[6U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[6U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[6U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[6U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[6U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[6U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[6U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[7U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[7U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[7U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[7U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[7U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[7U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[7U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[8U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[8U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[8U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[8U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[8U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[8U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[8U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[9U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[9U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[9U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[9U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[9U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[9U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_in[9U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[0U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[0U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[0U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[0U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[0U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[0U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[0U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[1U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[1U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[1U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[1U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[1U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[1U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[1U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[2U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[2U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[2U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[2U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[2U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[2U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[2U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[3U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[3U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[3U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[3U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[3U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[3U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[3U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[4U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[4U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[4U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[4U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[4U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[4U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[4U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[5U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[5U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[5U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[5U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[5U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[5U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[5U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[6U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[6U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[6U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[6U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[6U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[6U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[6U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[7U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[7U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[7U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[7U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[7U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[7U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[7U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[8U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[8U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[8U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[8U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[8U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[8U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[8U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[9U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[9U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[9U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[9U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[9U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[9U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_in[9U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[0U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[0U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[0U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[0U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[0U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[0U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[0U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[0U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[1U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[1U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[1U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[1U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[1U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[1U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[1U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[1U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[2U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[2U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[2U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[2U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[2U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[2U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[2U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[2U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[3U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[3U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[3U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[3U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[3U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[3U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[3U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[3U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[4U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[4U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[4U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[4U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[4U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[4U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[4U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[4U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[5U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[5U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[5U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[5U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[5U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[5U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[5U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[5U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[6U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[6U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[6U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[6U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[6U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[6U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[6U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[6U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[7U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[7U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[7U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[7U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[7U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[7U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[7U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[7U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[8U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[8U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[8U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[8U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[8U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[8U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[8U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[8U][6U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[9U][0U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][0U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[9U][1U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][1U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[9U][2U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][2U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[9U][3U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][3U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[9U][4U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][4U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[9U][5U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][5U];
    vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_in[9U][6U] 
        = vlSelf->dut__DOT__pool1_img_out[9U][6U];
}

VL_ATTR_COLD void Vdut___024root___stl_sequent__TOP__3(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___stl_sequent__TOP__3\n"); );
    // Body
    vlSelf->dut__DOT__pool2_img_out[0U] = (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (0xc00cU 
                                                              & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[4U])))) 
                                            << 0x23U) 
                                           | (((QData)((IData)(
                                                               (0U 
                                                                != 
                                                                (0x3003U 
                                                                 & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[4U])))) 
                                               << 0x22U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             ((0U 
                                                                               != 
                                                                               (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U])) 
                                                                              | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[4U]))))))) 
                                                  << 0x21U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[4U]))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[4U])))) 
                                                                        << 0x1fU) 
                                                                       | ((0x40000000U 
                                                                           & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[4U])))) 
                                                                              << 0x1eU)) 
                                                                          | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U]))) 
                                                                              << 0x1dU) 
                                                                             | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x19U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x18U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x16U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x15U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xeU)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])))) 
                                                                                << 6U)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U]))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U]))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U]))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U]))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U]))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U]))))))))))))))))))))))))))))))))))))))));
    vlSelf->dut__DOT__conv2_img_out[0U][0U] = vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U];
    vlSelf->dut__DOT__conv2_img_out[0U][1U] = vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U];
    vlSelf->dut__DOT__conv2_img_out[0U][2U] = vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U];
    vlSelf->dut__DOT__conv2_img_out[0U][3U] = vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U];
    vlSelf->dut__DOT__conv2_img_out[0U][4U] = vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[4U];
    vlSelf->dut__DOT__pool2__DOT____Vcellout__maxpool_core_gen__BRA__0__KET____DOT__maxpool__img_out 
        = (((QData)((IData)((0U != (0xc00cU & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[4U])))) 
            << 0x23U) | (((QData)((IData)((0U != (0x3003U 
                                                  & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[4U])))) 
                          << 0x22U) | (((QData)((IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   ((0U 
                                                                     != 
                                                                     (0xc0000000U 
                                                                      & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U])) 
                                                                    | (0U 
                                                                       != 
                                                                       (0xc00U 
                                                                        & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[4U]))))))) 
                                        << 0x21U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    ((0U 
                                                                      != 
                                                                      (0x30000000U 
                                                                       & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U])) 
                                                                     | (0U 
                                                                        != 
                                                                        (0x300U 
                                                                         & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[4U]))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (((IData)(
                                                                    ((0U 
                                                                      != 
                                                                      (0xc000000U 
                                                                       & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U])) 
                                                                     | (0U 
                                                                        != 
                                                                        (0xc0U 
                                                                         & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[4U])))) 
                                                            << 0x1fU) 
                                                           | ((0x40000000U 
                                                               & ((IData)(
                                                                          ((0U 
                                                                            != 
                                                                            (0x3000000U 
                                                                             & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U])) 
                                                                           | (0U 
                                                                              != 
                                                                              (0x30U 
                                                                               & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[4U])))) 
                                                                  << 0x1eU)) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0xc00c00U 
                                                                            & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U]))) 
                                                                  << 0x1dU) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0x300300U 
                                                                               & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U]))) 
                                                                     << 0x1cU) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U]))) 
                                                                        << 0x1bU) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U]))) 
                                                                           << 0x1aU) 
                                                                          | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U]))) 
                                                                              << 0x19U) 
                                                                             | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x18U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x16U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x15U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xeU)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])))) 
                                                                                << 6U)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U]))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U]))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U]))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U]))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U]))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U]))))))))))))))))))))))))))))))))))))))));
    vlSelf->dut__DOT__pool2_img_out[1U] = (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (0xc00cU 
                                                              & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[4U])))) 
                                            << 0x23U) 
                                           | (((QData)((IData)(
                                                               (0U 
                                                                != 
                                                                (0x3003U 
                                                                 & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[4U])))) 
                                               << 0x22U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             ((0U 
                                                                               != 
                                                                               (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U])) 
                                                                              | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[4U]))))))) 
                                                  << 0x21U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[4U]))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[4U])))) 
                                                                        << 0x1fU) 
                                                                       | ((0x40000000U 
                                                                           & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[4U])))) 
                                                                              << 0x1eU)) 
                                                                          | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U]))) 
                                                                              << 0x1dU) 
                                                                             | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x19U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x18U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x16U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x15U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xeU)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])))) 
                                                                                << 6U)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U]))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U]))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U]))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U]))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U]))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U]))))))))))))))))))))))))))))))))))))))));
    vlSelf->dut__DOT__conv2_img_out[1U][0U] = vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U];
    vlSelf->dut__DOT__conv2_img_out[1U][1U] = vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U];
    vlSelf->dut__DOT__conv2_img_out[1U][2U] = vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U];
    vlSelf->dut__DOT__conv2_img_out[1U][3U] = vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U];
    vlSelf->dut__DOT__conv2_img_out[1U][4U] = vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[4U];
    vlSelf->dut__DOT__pool2__DOT____Vcellout__maxpool_core_gen__BRA__1__KET____DOT__maxpool__img_out 
        = (((QData)((IData)((0U != (0xc00cU & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[4U])))) 
            << 0x23U) | (((QData)((IData)((0U != (0x3003U 
                                                  & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[4U])))) 
                          << 0x22U) | (((QData)((IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   ((0U 
                                                                     != 
                                                                     (0xc0000000U 
                                                                      & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U])) 
                                                                    | (0U 
                                                                       != 
                                                                       (0xc00U 
                                                                        & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[4U]))))))) 
                                        << 0x21U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    ((0U 
                                                                      != 
                                                                      (0x30000000U 
                                                                       & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U])) 
                                                                     | (0U 
                                                                        != 
                                                                        (0x300U 
                                                                         & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[4U]))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (((IData)(
                                                                    ((0U 
                                                                      != 
                                                                      (0xc000000U 
                                                                       & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U])) 
                                                                     | (0U 
                                                                        != 
                                                                        (0xc0U 
                                                                         & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[4U])))) 
                                                            << 0x1fU) 
                                                           | ((0x40000000U 
                                                               & ((IData)(
                                                                          ((0U 
                                                                            != 
                                                                            (0x3000000U 
                                                                             & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U])) 
                                                                           | (0U 
                                                                              != 
                                                                              (0x30U 
                                                                               & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[4U])))) 
                                                                  << 0x1eU)) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0xc00c00U 
                                                                            & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U]))) 
                                                                  << 0x1dU) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0x300300U 
                                                                               & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U]))) 
                                                                     << 0x1cU) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U]))) 
                                                                        << 0x1bU) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U]))) 
                                                                           << 0x1aU) 
                                                                          | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U]))) 
                                                                              << 0x19U) 
                                                                             | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x18U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x16U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x15U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xeU)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])))) 
                                                                                << 6U)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U]))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U]))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U]))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U]))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U]))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U]))))))))))))))))))))))))))))))))))))))));
    vlSelf->dut__DOT__pool2_img_out[2U] = (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (0xc00cU 
                                                              & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[4U])))) 
                                            << 0x23U) 
                                           | (((QData)((IData)(
                                                               (0U 
                                                                != 
                                                                (0x3003U 
                                                                 & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[4U])))) 
                                               << 0x22U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             ((0U 
                                                                               != 
                                                                               (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U])) 
                                                                              | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[4U]))))))) 
                                                  << 0x21U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[4U]))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[4U])))) 
                                                                        << 0x1fU) 
                                                                       | ((0x40000000U 
                                                                           & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[4U])))) 
                                                                              << 0x1eU)) 
                                                                          | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U]))) 
                                                                              << 0x1dU) 
                                                                             | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x19U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x18U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x16U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x15U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xeU)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])))) 
                                                                                << 6U)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U]))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U]))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U]))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U]))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U]))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U]))))))))))))))))))))))))))))))))))))))));
    vlSelf->dut__DOT__conv2_img_out[2U][0U] = vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U];
    vlSelf->dut__DOT__conv2_img_out[2U][1U] = vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U];
    vlSelf->dut__DOT__conv2_img_out[2U][2U] = vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U];
    vlSelf->dut__DOT__conv2_img_out[2U][3U] = vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U];
    vlSelf->dut__DOT__conv2_img_out[2U][4U] = vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[4U];
    vlSelf->dut__DOT__pool2__DOT____Vcellout__maxpool_core_gen__BRA__2__KET____DOT__maxpool__img_out 
        = (((QData)((IData)((0U != (0xc00cU & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[4U])))) 
            << 0x23U) | (((QData)((IData)((0U != (0x3003U 
                                                  & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[4U])))) 
                          << 0x22U) | (((QData)((IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   ((0U 
                                                                     != 
                                                                     (0xc0000000U 
                                                                      & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U])) 
                                                                    | (0U 
                                                                       != 
                                                                       (0xc00U 
                                                                        & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[4U]))))))) 
                                        << 0x21U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    ((0U 
                                                                      != 
                                                                      (0x30000000U 
                                                                       & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U])) 
                                                                     | (0U 
                                                                        != 
                                                                        (0x300U 
                                                                         & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[4U]))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (((IData)(
                                                                    ((0U 
                                                                      != 
                                                                      (0xc000000U 
                                                                       & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U])) 
                                                                     | (0U 
                                                                        != 
                                                                        (0xc0U 
                                                                         & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[4U])))) 
                                                            << 0x1fU) 
                                                           | ((0x40000000U 
                                                               & ((IData)(
                                                                          ((0U 
                                                                            != 
                                                                            (0x3000000U 
                                                                             & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U])) 
                                                                           | (0U 
                                                                              != 
                                                                              (0x30U 
                                                                               & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[4U])))) 
                                                                  << 0x1eU)) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0xc00c00U 
                                                                            & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U]))) 
                                                                  << 0x1dU) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0x300300U 
                                                                               & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U]))) 
                                                                     << 0x1cU) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U]))) 
                                                                        << 0x1bU) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U]))) 
                                                                           << 0x1aU) 
                                                                          | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U]))) 
                                                                              << 0x19U) 
                                                                             | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x18U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x16U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x15U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xeU)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])))) 
                                                                                << 6U)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U]))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U]))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U]))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U]))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U]))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U]))))))))))))))))))))))))))))))))))))))));
    vlSelf->dut__DOT__pool2_img_out[3U] = (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (0xc00cU 
                                                              & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[4U])))) 
                                            << 0x23U) 
                                           | (((QData)((IData)(
                                                               (0U 
                                                                != 
                                                                (0x3003U 
                                                                 & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[4U])))) 
                                               << 0x22U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             ((0U 
                                                                               != 
                                                                               (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U])) 
                                                                              | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[4U]))))))) 
                                                  << 0x21U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[4U]))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[4U])))) 
                                                                        << 0x1fU) 
                                                                       | ((0x40000000U 
                                                                           & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[4U])))) 
                                                                              << 0x1eU)) 
                                                                          | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U]))) 
                                                                              << 0x1dU) 
                                                                             | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x19U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x18U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x16U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x15U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xeU)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])))) 
                                                                                << 6U)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U]))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U]))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U]))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U]))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U]))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U]))))))))))))))))))))))))))))))))))))))));
    vlSelf->dut__DOT__conv2_img_out[3U][0U] = vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U];
    vlSelf->dut__DOT__conv2_img_out[3U][1U] = vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U];
    vlSelf->dut__DOT__conv2_img_out[3U][2U] = vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U];
    vlSelf->dut__DOT__conv2_img_out[3U][3U] = vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U];
    vlSelf->dut__DOT__conv2_img_out[3U][4U] = vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[4U];
    vlSelf->dut__DOT__pool2__DOT____Vcellout__maxpool_core_gen__BRA__3__KET____DOT__maxpool__img_out 
        = (((QData)((IData)((0U != (0xc00cU & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[4U])))) 
            << 0x23U) | (((QData)((IData)((0U != (0x3003U 
                                                  & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[4U])))) 
                          << 0x22U) | (((QData)((IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   ((0U 
                                                                     != 
                                                                     (0xc0000000U 
                                                                      & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U])) 
                                                                    | (0U 
                                                                       != 
                                                                       (0xc00U 
                                                                        & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[4U]))))))) 
                                        << 0x21U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    ((0U 
                                                                      != 
                                                                      (0x30000000U 
                                                                       & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U])) 
                                                                     | (0U 
                                                                        != 
                                                                        (0x300U 
                                                                         & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[4U]))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (((IData)(
                                                                    ((0U 
                                                                      != 
                                                                      (0xc000000U 
                                                                       & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U])) 
                                                                     | (0U 
                                                                        != 
                                                                        (0xc0U 
                                                                         & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[4U])))) 
                                                            << 0x1fU) 
                                                           | ((0x40000000U 
                                                               & ((IData)(
                                                                          ((0U 
                                                                            != 
                                                                            (0x3000000U 
                                                                             & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U])) 
                                                                           | (0U 
                                                                              != 
                                                                              (0x30U 
                                                                               & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[4U])))) 
                                                                  << 0x1eU)) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0xc00c00U 
                                                                            & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U]))) 
                                                                  << 0x1dU) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0x300300U 
                                                                               & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U]))) 
                                                                     << 0x1cU) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U]))) 
                                                                        << 0x1bU) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U]))) 
                                                                           << 0x1aU) 
                                                                          | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U]))) 
                                                                              << 0x19U) 
                                                                             | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x18U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x16U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x15U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xeU)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])))) 
                                                                                << 6U)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U]))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U]))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U]))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U]))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U]))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U]))))))))))))))))))))))))))))))))))))))));
    vlSelf->dut__DOT__pool2_img_out[4U] = (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (0xc00cU 
                                                              & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[4U])))) 
                                            << 0x23U) 
                                           | (((QData)((IData)(
                                                               (0U 
                                                                != 
                                                                (0x3003U 
                                                                 & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[4U])))) 
                                               << 0x22U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             ((0U 
                                                                               != 
                                                                               (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[3U])) 
                                                                              | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[4U]))))))) 
                                                  << 0x21U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[4U]))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[4U])))) 
                                                                        << 0x1fU) 
                                                                       | ((0x40000000U 
                                                                           & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[4U])))) 
                                                                              << 0x1eU)) 
                                                                          | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[3U]))) 
                                                                              << 0x1dU) 
                                                                             | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x19U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x18U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x16U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x15U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xeU)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[1U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[1U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[1U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[1U])))) 
                                                                                << 6U)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[0U]))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[0U]))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[0U]))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[0U]))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[0U]))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[0U]))))))))))))))))))))))))))))))))))))))));
    vlSelf->dut__DOT__conv2_img_out[4U][0U] = vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[0U];
    vlSelf->dut__DOT__conv2_img_out[4U][1U] = vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[1U];
    vlSelf->dut__DOT__conv2_img_out[4U][2U] = vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[2U];
    vlSelf->dut__DOT__conv2_img_out[4U][3U] = vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[3U];
    vlSelf->dut__DOT__conv2_img_out[4U][4U] = vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[4U];
    vlSelf->dut__DOT__pool2__DOT____Vcellout__maxpool_core_gen__BRA__4__KET____DOT__maxpool__img_out 
        = (((QData)((IData)((0U != (0xc00cU & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[4U])))) 
            << 0x23U) | (((QData)((IData)((0U != (0x3003U 
                                                  & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[4U])))) 
                          << 0x22U) | (((QData)((IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   ((0U 
                                                                     != 
                                                                     (0xc0000000U 
                                                                      & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[3U])) 
                                                                    | (0U 
                                                                       != 
                                                                       (0xc00U 
                                                                        & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[4U]))))))) 
                                        << 0x21U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    ((0U 
                                                                      != 
                                                                      (0x30000000U 
                                                                       & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[3U])) 
                                                                     | (0U 
                                                                        != 
                                                                        (0x300U 
                                                                         & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[4U]))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (((IData)(
                                                                    ((0U 
                                                                      != 
                                                                      (0xc000000U 
                                                                       & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[3U])) 
                                                                     | (0U 
                                                                        != 
                                                                        (0xc0U 
                                                                         & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[4U])))) 
                                                            << 0x1fU) 
                                                           | ((0x40000000U 
                                                               & ((IData)(
                                                                          ((0U 
                                                                            != 
                                                                            (0x3000000U 
                                                                             & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[3U])) 
                                                                           | (0U 
                                                                              != 
                                                                              (0x30U 
                                                                               & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[4U])))) 
                                                                  << 0x1eU)) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0xc00c00U 
                                                                            & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[3U]))) 
                                                                  << 0x1dU) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0x300300U 
                                                                               & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[3U]))) 
                                                                     << 0x1cU) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[3U]))) 
                                                                        << 0x1bU) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[3U]))) 
                                                                           << 0x1aU) 
                                                                          | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[3U]))) 
                                                                              << 0x19U) 
                                                                             | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x18U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x16U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x15U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xeU)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[1U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[1U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[1U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[1U])))) 
                                                                                << 6U)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[0U]))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[0U]))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[0U]))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[0U]))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[0U]))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__4__KET____DOT__core.img_out[0U]))))))))))))))))))))))))))))))))))))))));
    vlSelf->dut__DOT__pool2_img_out[5U] = (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (0xc00cU 
                                                              & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[4U])))) 
                                            << 0x23U) 
                                           | (((QData)((IData)(
                                                               (0U 
                                                                != 
                                                                (0x3003U 
                                                                 & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[4U])))) 
                                               << 0x22U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             ((0U 
                                                                               != 
                                                                               (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[3U])) 
                                                                              | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[4U]))))))) 
                                                  << 0x21U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[4U]))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[4U])))) 
                                                                        << 0x1fU) 
                                                                       | ((0x40000000U 
                                                                           & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[4U])))) 
                                                                              << 0x1eU)) 
                                                                          | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[3U]))) 
                                                                              << 0x1dU) 
                                                                             | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x19U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x18U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x16U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x15U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xeU)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[1U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[1U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[1U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[1U])))) 
                                                                                << 6U)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[0U]))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[0U]))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[0U]))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[0U]))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[0U]))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[0U]))))))))))))))))))))))))))))))))))))))));
    vlSelf->dut__DOT__conv2_img_out[5U][0U] = vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[0U];
    vlSelf->dut__DOT__conv2_img_out[5U][1U] = vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[1U];
    vlSelf->dut__DOT__conv2_img_out[5U][2U] = vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[2U];
    vlSelf->dut__DOT__conv2_img_out[5U][3U] = vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[3U];
    vlSelf->dut__DOT__conv2_img_out[5U][4U] = vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[4U];
    vlSelf->dut__DOT__pool2__DOT____Vcellout__maxpool_core_gen__BRA__5__KET____DOT__maxpool__img_out 
        = (((QData)((IData)((0U != (0xc00cU & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[4U])))) 
            << 0x23U) | (((QData)((IData)((0U != (0x3003U 
                                                  & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[4U])))) 
                          << 0x22U) | (((QData)((IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   ((0U 
                                                                     != 
                                                                     (0xc0000000U 
                                                                      & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[3U])) 
                                                                    | (0U 
                                                                       != 
                                                                       (0xc00U 
                                                                        & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[4U]))))))) 
                                        << 0x21U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    ((0U 
                                                                      != 
                                                                      (0x30000000U 
                                                                       & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[3U])) 
                                                                     | (0U 
                                                                        != 
                                                                        (0x300U 
                                                                         & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[4U]))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (((IData)(
                                                                    ((0U 
                                                                      != 
                                                                      (0xc000000U 
                                                                       & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[3U])) 
                                                                     | (0U 
                                                                        != 
                                                                        (0xc0U 
                                                                         & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[4U])))) 
                                                            << 0x1fU) 
                                                           | ((0x40000000U 
                                                               & ((IData)(
                                                                          ((0U 
                                                                            != 
                                                                            (0x3000000U 
                                                                             & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[3U])) 
                                                                           | (0U 
                                                                              != 
                                                                              (0x30U 
                                                                               & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[4U])))) 
                                                                  << 0x1eU)) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0xc00c00U 
                                                                            & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[3U]))) 
                                                                  << 0x1dU) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0x300300U 
                                                                               & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[3U]))) 
                                                                     << 0x1cU) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[3U]))) 
                                                                        << 0x1bU) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[3U]))) 
                                                                           << 0x1aU) 
                                                                          | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[3U]))) 
                                                                              << 0x19U) 
                                                                             | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x18U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x16U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x15U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xeU)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[1U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[1U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[1U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[1U])))) 
                                                                                << 6U)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[0U]))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[0U]))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[0U]))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[0U]))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[0U]))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__5__KET____DOT__core.img_out[0U]))))))))))))))))))))))))))))))))))))))));
    vlSelf->dut__DOT__pool2_img_out[6U] = (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (0xc00cU 
                                                              & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[4U])))) 
                                            << 0x23U) 
                                           | (((QData)((IData)(
                                                               (0U 
                                                                != 
                                                                (0x3003U 
                                                                 & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[4U])))) 
                                               << 0x22U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             ((0U 
                                                                               != 
                                                                               (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[3U])) 
                                                                              | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[4U]))))))) 
                                                  << 0x21U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[4U]))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[4U])))) 
                                                                        << 0x1fU) 
                                                                       | ((0x40000000U 
                                                                           & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[4U])))) 
                                                                              << 0x1eU)) 
                                                                          | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[3U]))) 
                                                                              << 0x1dU) 
                                                                             | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x19U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x18U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x16U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x15U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xeU)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[1U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[1U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[1U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[1U])))) 
                                                                                << 6U)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[0U]))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[0U]))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[0U]))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[0U]))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[0U]))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[0U]))))))))))))))))))))))))))))))))))))))));
    vlSelf->dut__DOT__conv2_img_out[6U][0U] = vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[0U];
    vlSelf->dut__DOT__conv2_img_out[6U][1U] = vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[1U];
    vlSelf->dut__DOT__conv2_img_out[6U][2U] = vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[2U];
    vlSelf->dut__DOT__conv2_img_out[6U][3U] = vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[3U];
    vlSelf->dut__DOT__conv2_img_out[6U][4U] = vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[4U];
    vlSelf->dut__DOT__pool2__DOT____Vcellout__maxpool_core_gen__BRA__6__KET____DOT__maxpool__img_out 
        = (((QData)((IData)((0U != (0xc00cU & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[4U])))) 
            << 0x23U) | (((QData)((IData)((0U != (0x3003U 
                                                  & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[4U])))) 
                          << 0x22U) | (((QData)((IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   ((0U 
                                                                     != 
                                                                     (0xc0000000U 
                                                                      & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[3U])) 
                                                                    | (0U 
                                                                       != 
                                                                       (0xc00U 
                                                                        & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[4U]))))))) 
                                        << 0x21U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    ((0U 
                                                                      != 
                                                                      (0x30000000U 
                                                                       & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[3U])) 
                                                                     | (0U 
                                                                        != 
                                                                        (0x300U 
                                                                         & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[4U]))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (((IData)(
                                                                    ((0U 
                                                                      != 
                                                                      (0xc000000U 
                                                                       & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[3U])) 
                                                                     | (0U 
                                                                        != 
                                                                        (0xc0U 
                                                                         & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[4U])))) 
                                                            << 0x1fU) 
                                                           | ((0x40000000U 
                                                               & ((IData)(
                                                                          ((0U 
                                                                            != 
                                                                            (0x3000000U 
                                                                             & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[3U])) 
                                                                           | (0U 
                                                                              != 
                                                                              (0x30U 
                                                                               & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[4U])))) 
                                                                  << 0x1eU)) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0xc00c00U 
                                                                            & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[3U]))) 
                                                                  << 0x1dU) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0x300300U 
                                                                               & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[3U]))) 
                                                                     << 0x1cU) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[3U]))) 
                                                                        << 0x1bU) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[3U]))) 
                                                                           << 0x1aU) 
                                                                          | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[3U]))) 
                                                                              << 0x19U) 
                                                                             | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x18U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x16U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x15U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xeU)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[1U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[1U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[1U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[1U])))) 
                                                                                << 6U)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[0U]))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[0U]))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[0U]))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[0U]))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[0U]))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__6__KET____DOT__core.img_out[0U]))))))))))))))))))))))))))))))))))))))));
    vlSelf->dut__DOT__pool2_img_out[7U] = (((QData)((IData)(
                                                            (0U 
                                                             != 
                                                             (0xc00cU 
                                                              & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[4U])))) 
                                            << 0x23U) 
                                           | (((QData)((IData)(
                                                               (0U 
                                                                != 
                                                                (0x3003U 
                                                                 & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[4U])))) 
                                               << 0x22U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             ((0U 
                                                                               != 
                                                                               (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[3U])) 
                                                                              | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[4U]))))))) 
                                                  << 0x21U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[4U]))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[4U])))) 
                                                                        << 0x1fU) 
                                                                       | ((0x40000000U 
                                                                           & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[4U])))) 
                                                                              << 0x1eU)) 
                                                                          | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[3U]))) 
                                                                              << 0x1dU) 
                                                                             | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x19U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x18U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x16U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x15U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xeU)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[1U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[1U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[1U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[1U])))) 
                                                                                << 6U)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[0U]))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[0U]))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[0U]))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[0U]))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[0U]))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[0U]))))))))))))))))))))))))))))))))))))))));
    vlSelf->dut__DOT__conv2_img_out[7U][0U] = vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[0U];
    vlSelf->dut__DOT__conv2_img_out[7U][1U] = vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[1U];
    vlSelf->dut__DOT__conv2_img_out[7U][2U] = vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[2U];
    vlSelf->dut__DOT__conv2_img_out[7U][3U] = vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[3U];
    vlSelf->dut__DOT__conv2_img_out[7U][4U] = vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[4U];
    vlSelf->dut__DOT__pool2__DOT____Vcellout__maxpool_core_gen__BRA__7__KET____DOT__maxpool__img_out 
        = (((QData)((IData)((0U != (0xc00cU & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[4U])))) 
            << 0x23U) | (((QData)((IData)((0U != (0x3003U 
                                                  & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[4U])))) 
                          << 0x22U) | (((QData)((IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   ((0U 
                                                                     != 
                                                                     (0xc0000000U 
                                                                      & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[3U])) 
                                                                    | (0U 
                                                                       != 
                                                                       (0xc00U 
                                                                        & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[4U]))))))) 
                                        << 0x21U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    ((0U 
                                                                      != 
                                                                      (0x30000000U 
                                                                       & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[3U])) 
                                                                     | (0U 
                                                                        != 
                                                                        (0x300U 
                                                                         & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[4U]))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (((IData)(
                                                                    ((0U 
                                                                      != 
                                                                      (0xc000000U 
                                                                       & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[3U])) 
                                                                     | (0U 
                                                                        != 
                                                                        (0xc0U 
                                                                         & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[4U])))) 
                                                            << 0x1fU) 
                                                           | ((0x40000000U 
                                                               & ((IData)(
                                                                          ((0U 
                                                                            != 
                                                                            (0x3000000U 
                                                                             & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[3U])) 
                                                                           | (0U 
                                                                              != 
                                                                              (0x30U 
                                                                               & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[4U])))) 
                                                                  << 0x1eU)) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0xc00c00U 
                                                                            & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[3U]))) 
                                                                  << 0x1dU) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0x300300U 
                                                                               & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[3U]))) 
                                                                     << 0x1cU) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[3U]))) 
                                                                        << 0x1bU) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[3U]))) 
                                                                           << 0x1aU) 
                                                                          | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[3U]))) 
                                                                              << 0x19U) 
                                                                             | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[3U]))) 
                                                                                << 0x18U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x16U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x15U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xeU)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[1U]))) 
                                                                                << 0xaU) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[1U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[1U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[1U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[1U])))) 
                                                                                << 6U)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[0U]))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[0U]))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00c0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[0U]))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30030U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[0U]))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc00cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[0U]))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x3003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv2__DOT__conv_core_gen__BRA__7__KET____DOT__core.img_out[0U]))))))))))))))))))))))))))))))))))))))));
    vlSelf->dut__DOT__fc_in[0U] = (IData)(vlSelf->dut__DOT__pool2__DOT____Vcellout__maxpool_core_gen__BRA__0__KET____DOT__maxpool__img_out);
    vlSelf->dut__DOT__fc_in[1U] = (((IData)(vlSelf->dut__DOT__pool2__DOT____Vcellout__maxpool_core_gen__BRA__1__KET____DOT__maxpool__img_out) 
                                    << 4U) | (IData)(
                                                     (vlSelf->dut__DOT__pool2__DOT____Vcellout__maxpool_core_gen__BRA__0__KET____DOT__maxpool__img_out 
                                                      >> 0x20U)));
    vlSelf->dut__DOT__fc_in[2U] = (((IData)(vlSelf->dut__DOT__pool2__DOT____Vcellout__maxpool_core_gen__BRA__2__KET____DOT__maxpool__img_out) 
                                    << 8U) | (((IData)(vlSelf->dut__DOT__pool2__DOT____Vcellout__maxpool_core_gen__BRA__1__KET____DOT__maxpool__img_out) 
                                               >> 0x1cU) 
                                              | ((IData)(
                                                         (vlSelf->dut__DOT__pool2__DOT____Vcellout__maxpool_core_gen__BRA__1__KET____DOT__maxpool__img_out 
                                                          >> 0x20U)) 
                                                 << 4U)));
    vlSelf->dut__DOT__fc_in[3U] = (((IData)(vlSelf->dut__DOT__pool2__DOT____Vcellout__maxpool_core_gen__BRA__3__KET____DOT__maxpool__img_out) 
                                    << 0xcU) | (((IData)(vlSelf->dut__DOT__pool2__DOT____Vcellout__maxpool_core_gen__BRA__2__KET____DOT__maxpool__img_out) 
                                                 >> 0x18U) 
                                                | ((IData)(
                                                           (vlSelf->dut__DOT__pool2__DOT____Vcellout__maxpool_core_gen__BRA__2__KET____DOT__maxpool__img_out 
                                                            >> 0x20U)) 
                                                   << 8U)));
    vlSelf->dut__DOT__fc_in[4U] = (((IData)(vlSelf->dut__DOT__pool2__DOT____Vcellout__maxpool_core_gen__BRA__4__KET____DOT__maxpool__img_out) 
                                    << 0x10U) | (((IData)(vlSelf->dut__DOT__pool2__DOT____Vcellout__maxpool_core_gen__BRA__3__KET____DOT__maxpool__img_out) 
                                                  >> 0x14U) 
                                                 | ((IData)(
                                                            (vlSelf->dut__DOT__pool2__DOT____Vcellout__maxpool_core_gen__BRA__3__KET____DOT__maxpool__img_out 
                                                             >> 0x20U)) 
                                                    << 0xcU)));
    vlSelf->dut__DOT__fc_in[5U] = (((IData)(vlSelf->dut__DOT__pool2__DOT____Vcellout__maxpool_core_gen__BRA__5__KET____DOT__maxpool__img_out) 
                                    << 0x14U) | (((IData)(vlSelf->dut__DOT__pool2__DOT____Vcellout__maxpool_core_gen__BRA__4__KET____DOT__maxpool__img_out) 
                                                  >> 0x10U) 
                                                 | ((IData)(
                                                            (vlSelf->dut__DOT__pool2__DOT____Vcellout__maxpool_core_gen__BRA__4__KET____DOT__maxpool__img_out 
                                                             >> 0x20U)) 
                                                    << 0x10U)));
    vlSelf->dut__DOT__fc_in[6U] = (((IData)(vlSelf->dut__DOT__pool2__DOT____Vcellout__maxpool_core_gen__BRA__6__KET____DOT__maxpool__img_out) 
                                    << 0x18U) | (((IData)(vlSelf->dut__DOT__pool2__DOT____Vcellout__maxpool_core_gen__BRA__5__KET____DOT__maxpool__img_out) 
                                                  >> 0xcU) 
                                                 | ((IData)(
                                                            (vlSelf->dut__DOT__pool2__DOT____Vcellout__maxpool_core_gen__BRA__5__KET____DOT__maxpool__img_out 
                                                             >> 0x20U)) 
                                                    << 0x14U)));
    vlSelf->dut__DOT__fc_in[7U] = (((IData)(vlSelf->dut__DOT__pool2__DOT____Vcellout__maxpool_core_gen__BRA__7__KET____DOT__maxpool__img_out) 
                                    << 0x1cU) | (((IData)(vlSelf->dut__DOT__pool2__DOT____Vcellout__maxpool_core_gen__BRA__6__KET____DOT__maxpool__img_out) 
                                                  >> 8U) 
                                                 | ((IData)(
                                                            (vlSelf->dut__DOT__pool2__DOT____Vcellout__maxpool_core_gen__BRA__6__KET____DOT__maxpool__img_out 
                                                             >> 0x20U)) 
                                                    << 0x18U)));
    vlSelf->dut__DOT__fc_in[8U] = (((IData)(vlSelf->dut__DOT__pool2__DOT____Vcellout__maxpool_core_gen__BRA__7__KET____DOT__maxpool__img_out) 
                                    >> 4U) | ((IData)(
                                                      (vlSelf->dut__DOT__pool2__DOT____Vcellout__maxpool_core_gen__BRA__7__KET____DOT__maxpool__img_out 
                                                       >> 0x20U)) 
                                              << 0x1cU));
    vlSelf->dut__DOT__fc__DOT__genblk1__BRA__0__KET____DOT__temp_out = 0U;
    vlSelf->dut__DOT__fc__DOT__genblk1__BRA__0__KET____DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x120U, vlSelf->dut__DOT__fc__DOT__genblk1__BRA__0__KET____DOT__unnamedblk1__DOT__i)) {
        vlSelf->dut__DOT__fc__DOT__genblk1__BRA__0__KET____DOT__temp_out 
            = (0xffffU & ((IData)(vlSelf->dut__DOT__fc__DOT__genblk1__BRA__0__KET____DOT__temp_out) 
                          + (((0x11fU >= (0x1ffU & vlSelf->dut__DOT__fc__DOT__genblk1__BRA__0__KET____DOT__unnamedblk1__DOT__i)) 
                              && (1U & (vlSelf->dut__DOT__fc_in[
                                        (0xfU & (vlSelf->dut__DOT__fc__DOT__genblk1__BRA__0__KET____DOT__unnamedblk1__DOT__i 
                                                 >> 5U))] 
                                        >> (0x1fU & vlSelf->dut__DOT__fc__DOT__genblk1__BRA__0__KET____DOT__unnamedblk1__DOT__i))))
                              ? ((0xb3fU >= (0xfffU 
                                             & vlSelf->dut__DOT__fc__DOT__genblk1__BRA__0__KET____DOT__unnamedblk1__DOT__i))
                                  ? vlSelf->dut__DOT__fc_weights
                                 [(0xfffU & vlSelf->dut__DOT__fc__DOT__genblk1__BRA__0__KET____DOT__unnamedblk1__DOT__i)]
                                  : 0U) : (- ((0xb3fU 
                                               >= (0xfffU 
                                                   & vlSelf->dut__DOT__fc__DOT__genblk1__BRA__0__KET____DOT__unnamedblk1__DOT__i))
                                               ? vlSelf->dut__DOT__fc_weights
                                              [(0xfffU 
                                                & vlSelf->dut__DOT__fc__DOT__genblk1__BRA__0__KET____DOT__unnamedblk1__DOT__i)]
                                               : 0U)))));
        vlSelf->dut__DOT__fc__DOT__genblk1__BRA__0__KET____DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__0__KET____DOT__unnamedblk1__DOT__i);
    }
    vlSelf->dut__DOT__fc__DOT__genblk1__BRA__1__KET____DOT__temp_out = 0U;
    vlSelf->dut__DOT__fc__DOT__genblk1__BRA__1__KET____DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x120U, vlSelf->dut__DOT__fc__DOT__genblk1__BRA__1__KET____DOT__unnamedblk1__DOT__i)) {
        vlSelf->dut__DOT__fc__DOT__genblk1__BRA__1__KET____DOT__temp_out 
            = (0xffffU & ((IData)(vlSelf->dut__DOT__fc__DOT__genblk1__BRA__1__KET____DOT__temp_out) 
                          + (((0x11fU >= (0x1ffU & vlSelf->dut__DOT__fc__DOT__genblk1__BRA__1__KET____DOT__unnamedblk1__DOT__i)) 
                              && (1U & (vlSelf->dut__DOT__fc_in[
                                        (0xfU & (vlSelf->dut__DOT__fc__DOT__genblk1__BRA__1__KET____DOT__unnamedblk1__DOT__i 
                                                 >> 5U))] 
                                        >> (0x1fU & vlSelf->dut__DOT__fc__DOT__genblk1__BRA__1__KET____DOT__unnamedblk1__DOT__i))))
                              ? ((0xb3fU >= (0xfffU 
                                             & ((IData)(0x120U) 
                                                + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__1__KET____DOT__unnamedblk1__DOT__i)))
                                  ? vlSelf->dut__DOT__fc_weights
                                 [(0xfffU & ((IData)(0x120U) 
                                             + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__1__KET____DOT__unnamedblk1__DOT__i))]
                                  : 0U) : (- ((0xb3fU 
                                               >= (0xfffU 
                                                   & ((IData)(0x120U) 
                                                      + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__1__KET____DOT__unnamedblk1__DOT__i)))
                                               ? vlSelf->dut__DOT__fc_weights
                                              [(0xfffU 
                                                & ((IData)(0x120U) 
                                                   + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__1__KET____DOT__unnamedblk1__DOT__i))]
                                               : 0U)))));
        vlSelf->dut__DOT__fc__DOT__genblk1__BRA__1__KET____DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__1__KET____DOT__unnamedblk1__DOT__i);
    }
    vlSelf->dut__DOT__fc__DOT__genblk1__BRA__2__KET____DOT__temp_out = 0U;
    vlSelf->dut__DOT__fc__DOT__genblk1__BRA__2__KET____DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x120U, vlSelf->dut__DOT__fc__DOT__genblk1__BRA__2__KET____DOT__unnamedblk1__DOT__i)) {
        vlSelf->dut__DOT__fc__DOT__genblk1__BRA__2__KET____DOT__temp_out 
            = (0xffffU & ((IData)(vlSelf->dut__DOT__fc__DOT__genblk1__BRA__2__KET____DOT__temp_out) 
                          + (((0x11fU >= (0x1ffU & vlSelf->dut__DOT__fc__DOT__genblk1__BRA__2__KET____DOT__unnamedblk1__DOT__i)) 
                              && (1U & (vlSelf->dut__DOT__fc_in[
                                        (0xfU & (vlSelf->dut__DOT__fc__DOT__genblk1__BRA__2__KET____DOT__unnamedblk1__DOT__i 
                                                 >> 5U))] 
                                        >> (0x1fU & vlSelf->dut__DOT__fc__DOT__genblk1__BRA__2__KET____DOT__unnamedblk1__DOT__i))))
                              ? ((0xb3fU >= (0xfffU 
                                             & ((IData)(0x240U) 
                                                + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__2__KET____DOT__unnamedblk1__DOT__i)))
                                  ? vlSelf->dut__DOT__fc_weights
                                 [(0xfffU & ((IData)(0x240U) 
                                             + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__2__KET____DOT__unnamedblk1__DOT__i))]
                                  : 0U) : (- ((0xb3fU 
                                               >= (0xfffU 
                                                   & ((IData)(0x240U) 
                                                      + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__2__KET____DOT__unnamedblk1__DOT__i)))
                                               ? vlSelf->dut__DOT__fc_weights
                                              [(0xfffU 
                                                & ((IData)(0x240U) 
                                                   + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__2__KET____DOT__unnamedblk1__DOT__i))]
                                               : 0U)))));
        vlSelf->dut__DOT__fc__DOT__genblk1__BRA__2__KET____DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__2__KET____DOT__unnamedblk1__DOT__i);
    }
    vlSelf->dut__DOT__fc__DOT__genblk1__BRA__3__KET____DOT__temp_out = 0U;
    vlSelf->dut__DOT__fc__DOT__genblk1__BRA__3__KET____DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x120U, vlSelf->dut__DOT__fc__DOT__genblk1__BRA__3__KET____DOT__unnamedblk1__DOT__i)) {
        vlSelf->dut__DOT__fc__DOT__genblk1__BRA__3__KET____DOT__temp_out 
            = (0xffffU & ((IData)(vlSelf->dut__DOT__fc__DOT__genblk1__BRA__3__KET____DOT__temp_out) 
                          + (((0x11fU >= (0x1ffU & vlSelf->dut__DOT__fc__DOT__genblk1__BRA__3__KET____DOT__unnamedblk1__DOT__i)) 
                              && (1U & (vlSelf->dut__DOT__fc_in[
                                        (0xfU & (vlSelf->dut__DOT__fc__DOT__genblk1__BRA__3__KET____DOT__unnamedblk1__DOT__i 
                                                 >> 5U))] 
                                        >> (0x1fU & vlSelf->dut__DOT__fc__DOT__genblk1__BRA__3__KET____DOT__unnamedblk1__DOT__i))))
                              ? ((0xb3fU >= (0xfffU 
                                             & ((IData)(0x360U) 
                                                + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__3__KET____DOT__unnamedblk1__DOT__i)))
                                  ? vlSelf->dut__DOT__fc_weights
                                 [(0xfffU & ((IData)(0x360U) 
                                             + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__3__KET____DOT__unnamedblk1__DOT__i))]
                                  : 0U) : (- ((0xb3fU 
                                               >= (0xfffU 
                                                   & ((IData)(0x360U) 
                                                      + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__3__KET____DOT__unnamedblk1__DOT__i)))
                                               ? vlSelf->dut__DOT__fc_weights
                                              [(0xfffU 
                                                & ((IData)(0x360U) 
                                                   + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__3__KET____DOT__unnamedblk1__DOT__i))]
                                               : 0U)))));
        vlSelf->dut__DOT__fc__DOT__genblk1__BRA__3__KET____DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__3__KET____DOT__unnamedblk1__DOT__i);
    }
    vlSelf->dut__DOT__fc__DOT__genblk1__BRA__4__KET____DOT__temp_out = 0U;
    vlSelf->dut__DOT__fc__DOT__genblk1__BRA__4__KET____DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x120U, vlSelf->dut__DOT__fc__DOT__genblk1__BRA__4__KET____DOT__unnamedblk1__DOT__i)) {
        vlSelf->dut__DOT__fc__DOT__genblk1__BRA__4__KET____DOT__temp_out 
            = (0xffffU & ((IData)(vlSelf->dut__DOT__fc__DOT__genblk1__BRA__4__KET____DOT__temp_out) 
                          + (((0x11fU >= (0x1ffU & vlSelf->dut__DOT__fc__DOT__genblk1__BRA__4__KET____DOT__unnamedblk1__DOT__i)) 
                              && (1U & (vlSelf->dut__DOT__fc_in[
                                        (0xfU & (vlSelf->dut__DOT__fc__DOT__genblk1__BRA__4__KET____DOT__unnamedblk1__DOT__i 
                                                 >> 5U))] 
                                        >> (0x1fU & vlSelf->dut__DOT__fc__DOT__genblk1__BRA__4__KET____DOT__unnamedblk1__DOT__i))))
                              ? ((0xb3fU >= (0xfffU 
                                             & ((IData)(0x480U) 
                                                + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__4__KET____DOT__unnamedblk1__DOT__i)))
                                  ? vlSelf->dut__DOT__fc_weights
                                 [(0xfffU & ((IData)(0x480U) 
                                             + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__4__KET____DOT__unnamedblk1__DOT__i))]
                                  : 0U) : (- ((0xb3fU 
                                               >= (0xfffU 
                                                   & ((IData)(0x480U) 
                                                      + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__4__KET____DOT__unnamedblk1__DOT__i)))
                                               ? vlSelf->dut__DOT__fc_weights
                                              [(0xfffU 
                                                & ((IData)(0x480U) 
                                                   + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__4__KET____DOT__unnamedblk1__DOT__i))]
                                               : 0U)))));
        vlSelf->dut__DOT__fc__DOT__genblk1__BRA__4__KET____DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__4__KET____DOT__unnamedblk1__DOT__i);
    }
    vlSelf->dut__DOT__fc__DOT__genblk1__BRA__5__KET____DOT__temp_out = 0U;
    vlSelf->dut__DOT__fc__DOT__genblk1__BRA__5__KET____DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x120U, vlSelf->dut__DOT__fc__DOT__genblk1__BRA__5__KET____DOT__unnamedblk1__DOT__i)) {
        vlSelf->dut__DOT__fc__DOT__genblk1__BRA__5__KET____DOT__temp_out 
            = (0xffffU & ((IData)(vlSelf->dut__DOT__fc__DOT__genblk1__BRA__5__KET____DOT__temp_out) 
                          + (((0x11fU >= (0x1ffU & vlSelf->dut__DOT__fc__DOT__genblk1__BRA__5__KET____DOT__unnamedblk1__DOT__i)) 
                              && (1U & (vlSelf->dut__DOT__fc_in[
                                        (0xfU & (vlSelf->dut__DOT__fc__DOT__genblk1__BRA__5__KET____DOT__unnamedblk1__DOT__i 
                                                 >> 5U))] 
                                        >> (0x1fU & vlSelf->dut__DOT__fc__DOT__genblk1__BRA__5__KET____DOT__unnamedblk1__DOT__i))))
                              ? ((0xb3fU >= (0xfffU 
                                             & ((IData)(0x5a0U) 
                                                + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__5__KET____DOT__unnamedblk1__DOT__i)))
                                  ? vlSelf->dut__DOT__fc_weights
                                 [(0xfffU & ((IData)(0x5a0U) 
                                             + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__5__KET____DOT__unnamedblk1__DOT__i))]
                                  : 0U) : (- ((0xb3fU 
                                               >= (0xfffU 
                                                   & ((IData)(0x5a0U) 
                                                      + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__5__KET____DOT__unnamedblk1__DOT__i)))
                                               ? vlSelf->dut__DOT__fc_weights
                                              [(0xfffU 
                                                & ((IData)(0x5a0U) 
                                                   + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__5__KET____DOT__unnamedblk1__DOT__i))]
                                               : 0U)))));
        vlSelf->dut__DOT__fc__DOT__genblk1__BRA__5__KET____DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__5__KET____DOT__unnamedblk1__DOT__i);
    }
    vlSelf->dut__DOT__fc__DOT__genblk1__BRA__6__KET____DOT__temp_out = 0U;
    vlSelf->dut__DOT__fc__DOT__genblk1__BRA__6__KET____DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x120U, vlSelf->dut__DOT__fc__DOT__genblk1__BRA__6__KET____DOT__unnamedblk1__DOT__i)) {
        vlSelf->dut__DOT__fc__DOT__genblk1__BRA__6__KET____DOT__temp_out 
            = (0xffffU & ((IData)(vlSelf->dut__DOT__fc__DOT__genblk1__BRA__6__KET____DOT__temp_out) 
                          + (((0x11fU >= (0x1ffU & vlSelf->dut__DOT__fc__DOT__genblk1__BRA__6__KET____DOT__unnamedblk1__DOT__i)) 
                              && (1U & (vlSelf->dut__DOT__fc_in[
                                        (0xfU & (vlSelf->dut__DOT__fc__DOT__genblk1__BRA__6__KET____DOT__unnamedblk1__DOT__i 
                                                 >> 5U))] 
                                        >> (0x1fU & vlSelf->dut__DOT__fc__DOT__genblk1__BRA__6__KET____DOT__unnamedblk1__DOT__i))))
                              ? ((0xb3fU >= (0xfffU 
                                             & ((IData)(0x6c0U) 
                                                + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__6__KET____DOT__unnamedblk1__DOT__i)))
                                  ? vlSelf->dut__DOT__fc_weights
                                 [(0xfffU & ((IData)(0x6c0U) 
                                             + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__6__KET____DOT__unnamedblk1__DOT__i))]
                                  : 0U) : (- ((0xb3fU 
                                               >= (0xfffU 
                                                   & ((IData)(0x6c0U) 
                                                      + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__6__KET____DOT__unnamedblk1__DOT__i)))
                                               ? vlSelf->dut__DOT__fc_weights
                                              [(0xfffU 
                                                & ((IData)(0x6c0U) 
                                                   + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__6__KET____DOT__unnamedblk1__DOT__i))]
                                               : 0U)))));
        vlSelf->dut__DOT__fc__DOT__genblk1__BRA__6__KET____DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__6__KET____DOT__unnamedblk1__DOT__i);
    }
    vlSelf->dut__DOT__fc__DOT__genblk1__BRA__7__KET____DOT__temp_out = 0U;
    vlSelf->dut__DOT__fc__DOT__genblk1__BRA__7__KET____DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x120U, vlSelf->dut__DOT__fc__DOT__genblk1__BRA__7__KET____DOT__unnamedblk1__DOT__i)) {
        vlSelf->dut__DOT__fc__DOT__genblk1__BRA__7__KET____DOT__temp_out 
            = (0xffffU & ((IData)(vlSelf->dut__DOT__fc__DOT__genblk1__BRA__7__KET____DOT__temp_out) 
                          + (((0x11fU >= (0x1ffU & vlSelf->dut__DOT__fc__DOT__genblk1__BRA__7__KET____DOT__unnamedblk1__DOT__i)) 
                              && (1U & (vlSelf->dut__DOT__fc_in[
                                        (0xfU & (vlSelf->dut__DOT__fc__DOT__genblk1__BRA__7__KET____DOT__unnamedblk1__DOT__i 
                                                 >> 5U))] 
                                        >> (0x1fU & vlSelf->dut__DOT__fc__DOT__genblk1__BRA__7__KET____DOT__unnamedblk1__DOT__i))))
                              ? ((0xb3fU >= (0xfffU 
                                             & ((IData)(0x7e0U) 
                                                + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__7__KET____DOT__unnamedblk1__DOT__i)))
                                  ? vlSelf->dut__DOT__fc_weights
                                 [(0xfffU & ((IData)(0x7e0U) 
                                             + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__7__KET____DOT__unnamedblk1__DOT__i))]
                                  : 0U) : (- ((0xb3fU 
                                               >= (0xfffU 
                                                   & ((IData)(0x7e0U) 
                                                      + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__7__KET____DOT__unnamedblk1__DOT__i)))
                                               ? vlSelf->dut__DOT__fc_weights
                                              [(0xfffU 
                                                & ((IData)(0x7e0U) 
                                                   + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__7__KET____DOT__unnamedblk1__DOT__i))]
                                               : 0U)))));
        vlSelf->dut__DOT__fc__DOT__genblk1__BRA__7__KET____DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__7__KET____DOT__unnamedblk1__DOT__i);
    }
    vlSelf->dut__DOT__fc__DOT__genblk1__BRA__8__KET____DOT__temp_out = 0U;
    vlSelf->dut__DOT__fc__DOT__genblk1__BRA__8__KET____DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x120U, vlSelf->dut__DOT__fc__DOT__genblk1__BRA__8__KET____DOT__unnamedblk1__DOT__i)) {
        vlSelf->dut__DOT__fc__DOT__genblk1__BRA__8__KET____DOT__temp_out 
            = (0xffffU & ((IData)(vlSelf->dut__DOT__fc__DOT__genblk1__BRA__8__KET____DOT__temp_out) 
                          + (((0x11fU >= (0x1ffU & vlSelf->dut__DOT__fc__DOT__genblk1__BRA__8__KET____DOT__unnamedblk1__DOT__i)) 
                              && (1U & (vlSelf->dut__DOT__fc_in[
                                        (0xfU & (vlSelf->dut__DOT__fc__DOT__genblk1__BRA__8__KET____DOT__unnamedblk1__DOT__i 
                                                 >> 5U))] 
                                        >> (0x1fU & vlSelf->dut__DOT__fc__DOT__genblk1__BRA__8__KET____DOT__unnamedblk1__DOT__i))))
                              ? ((0xb3fU >= (0xfffU 
                                             & ((IData)(0x900U) 
                                                + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__8__KET____DOT__unnamedblk1__DOT__i)))
                                  ? vlSelf->dut__DOT__fc_weights
                                 [(0xfffU & ((IData)(0x900U) 
                                             + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__8__KET____DOT__unnamedblk1__DOT__i))]
                                  : 0U) : (- ((0xb3fU 
                                               >= (0xfffU 
                                                   & ((IData)(0x900U) 
                                                      + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__8__KET____DOT__unnamedblk1__DOT__i)))
                                               ? vlSelf->dut__DOT__fc_weights
                                              [(0xfffU 
                                                & ((IData)(0x900U) 
                                                   + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__8__KET____DOT__unnamedblk1__DOT__i))]
                                               : 0U)))));
        vlSelf->dut__DOT__fc__DOT__genblk1__BRA__8__KET____DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__8__KET____DOT__unnamedblk1__DOT__i);
    }
    vlSelf->dut__DOT__fc__DOT__genblk1__BRA__9__KET____DOT__temp_out = 0U;
    vlSelf->dut__DOT__fc__DOT__genblk1__BRA__9__KET____DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x120U, vlSelf->dut__DOT__fc__DOT__genblk1__BRA__9__KET____DOT__unnamedblk1__DOT__i)) {
        vlSelf->dut__DOT__fc__DOT__genblk1__BRA__9__KET____DOT__temp_out 
            = (0xffffU & ((IData)(vlSelf->dut__DOT__fc__DOT__genblk1__BRA__9__KET____DOT__temp_out) 
                          + (((0x11fU >= (0x1ffU & vlSelf->dut__DOT__fc__DOT__genblk1__BRA__9__KET____DOT__unnamedblk1__DOT__i)) 
                              && (1U & (vlSelf->dut__DOT__fc_in[
                                        (0xfU & (vlSelf->dut__DOT__fc__DOT__genblk1__BRA__9__KET____DOT__unnamedblk1__DOT__i 
                                                 >> 5U))] 
                                        >> (0x1fU & vlSelf->dut__DOT__fc__DOT__genblk1__BRA__9__KET____DOT__unnamedblk1__DOT__i))))
                              ? ((0xb3fU >= (0xfffU 
                                             & ((IData)(0xa20U) 
                                                + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__9__KET____DOT__unnamedblk1__DOT__i)))
                                  ? vlSelf->dut__DOT__fc_weights
                                 [(0xfffU & ((IData)(0xa20U) 
                                             + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__9__KET____DOT__unnamedblk1__DOT__i))]
                                  : 0U) : (- ((0xb3fU 
                                               >= (0xfffU 
                                                   & ((IData)(0xa20U) 
                                                      + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__9__KET____DOT__unnamedblk1__DOT__i)))
                                               ? vlSelf->dut__DOT__fc_weights
                                              [(0xfffU 
                                                & ((IData)(0xa20U) 
                                                   + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__9__KET____DOT__unnamedblk1__DOT__i))]
                                               : 0U)))));
        vlSelf->dut__DOT__fc__DOT__genblk1__BRA__9__KET____DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->dut__DOT__fc__DOT__genblk1__BRA__9__KET____DOT__unnamedblk1__DOT__i);
    }
    vlSelf->dut__DOT__fc_out[0U] = vlSelf->dut__DOT__fc__DOT__genblk1__BRA__0__KET____DOT__temp_out;
    vlSelf->dut__DOT__fc_out[1U] = vlSelf->dut__DOT__fc__DOT__genblk1__BRA__1__KET____DOT__temp_out;
    vlSelf->dut__DOT__fc_out[2U] = vlSelf->dut__DOT__fc__DOT__genblk1__BRA__2__KET____DOT__temp_out;
    vlSelf->dut__DOT__fc_out[3U] = vlSelf->dut__DOT__fc__DOT__genblk1__BRA__3__KET____DOT__temp_out;
    vlSelf->dut__DOT__fc_out[4U] = vlSelf->dut__DOT__fc__DOT__genblk1__BRA__4__KET____DOT__temp_out;
    vlSelf->dut__DOT__fc_out[5U] = vlSelf->dut__DOT__fc__DOT__genblk1__BRA__5__KET____DOT__temp_out;
    vlSelf->dut__DOT__fc_out[6U] = vlSelf->dut__DOT__fc__DOT__genblk1__BRA__6__KET____DOT__temp_out;
    vlSelf->dut__DOT__fc_out[7U] = vlSelf->dut__DOT__fc__DOT__genblk1__BRA__7__KET____DOT__temp_out;
    vlSelf->dut__DOT__fc_out[8U] = vlSelf->dut__DOT__fc__DOT__genblk1__BRA__8__KET____DOT__temp_out;
    vlSelf->dut__DOT__fc_out[9U] = vlSelf->dut__DOT__fc__DOT__genblk1__BRA__9__KET____DOT__temp_out;
    vlSelf->dut__DOT__compare__DOT__max = vlSelf->dut__DOT__fc_out
        [0U];
    vlSelf->dut__DOT__compare__DOT__max_ind = 0U;
    if (VL_GTS_III(16, vlSelf->dut__DOT__fc_out[1U], (IData)(vlSelf->dut__DOT__compare__DOT__max))) {
        vlSelf->dut__DOT__compare__DOT__max = vlSelf->dut__DOT__fc_out
            [1U];
        vlSelf->dut__DOT__compare__DOT__max_ind = 1U;
    }
    if (VL_GTS_III(16, vlSelf->dut__DOT__fc_out[2U], (IData)(vlSelf->dut__DOT__compare__DOT__max))) {
        vlSelf->dut__DOT__compare__DOT__max = vlSelf->dut__DOT__fc_out
            [2U];
        vlSelf->dut__DOT__compare__DOT__max_ind = 2U;
    }
    if (VL_GTS_III(16, vlSelf->dut__DOT__fc_out[3U], (IData)(vlSelf->dut__DOT__compare__DOT__max))) {
        vlSelf->dut__DOT__compare__DOT__max = vlSelf->dut__DOT__fc_out
            [3U];
        vlSelf->dut__DOT__compare__DOT__max_ind = 3U;
    }
    if (VL_GTS_III(16, vlSelf->dut__DOT__fc_out[4U], (IData)(vlSelf->dut__DOT__compare__DOT__max))) {
        vlSelf->dut__DOT__compare__DOT__max = vlSelf->dut__DOT__fc_out
            [4U];
        vlSelf->dut__DOT__compare__DOT__max_ind = 4U;
    }
    if (VL_GTS_III(16, vlSelf->dut__DOT__fc_out[5U], (IData)(vlSelf->dut__DOT__compare__DOT__max))) {
        vlSelf->dut__DOT__compare__DOT__max = vlSelf->dut__DOT__fc_out
            [5U];
        vlSelf->dut__DOT__compare__DOT__max_ind = 5U;
    }
    if (VL_GTS_III(16, vlSelf->dut__DOT__fc_out[6U], (IData)(vlSelf->dut__DOT__compare__DOT__max))) {
        vlSelf->dut__DOT__compare__DOT__max = vlSelf->dut__DOT__fc_out
            [6U];
        vlSelf->dut__DOT__compare__DOT__max_ind = 6U;
    }
    if (VL_GTS_III(16, vlSelf->dut__DOT__fc_out[7U], (IData)(vlSelf->dut__DOT__compare__DOT__max))) {
        vlSelf->dut__DOT__compare__DOT__max = vlSelf->dut__DOT__fc_out
            [7U];
        vlSelf->dut__DOT__compare__DOT__max_ind = 7U;
    }
    if (VL_GTS_III(16, vlSelf->dut__DOT__fc_out[8U], (IData)(vlSelf->dut__DOT__compare__DOT__max))) {
        vlSelf->dut__DOT__compare__DOT__max = vlSelf->dut__DOT__fc_out
            [8U];
        vlSelf->dut__DOT__compare__DOT__max_ind = 8U;
    }
    if (VL_GTS_III(16, vlSelf->dut__DOT__fc_out[9U], (IData)(vlSelf->dut__DOT__compare__DOT__max))) {
        vlSelf->dut__DOT__compare__DOT__max = vlSelf->dut__DOT__fc_out
            [9U];
        vlSelf->dut__DOT__compare__DOT__max_ind = 9U;
    }
}
