// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "Vdut__pch.h"
#include "Vdut_MaxPoolCore__I1c.h"
#include "Vdut__Syms.h"

VL_ATTR_COLD void Vdut_MaxPoolCore__I1c___stl_sequent__TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__0__KET____DOT__maxpool__0(Vdut_MaxPoolCore__I1c* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdut_MaxPoolCore__I1c___stl_sequent__TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__0__KET____DOT__maxpool__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_25;
    VlWide<3>/*95:0*/ __Vtemp_29;
    VlWide<4>/*127:0*/ __Vtemp_36;
    VlWide<4>/*127:0*/ __Vtemp_40;
    VlWide<4>/*127:0*/ __Vtemp_44;
    VlWide<4>/*127:0*/ __Vtemp_49;
    VlWide<4>/*127:0*/ __Vtemp_53;
    VlWide<4>/*127:0*/ __Vtemp_57;
    VlWide<4>/*127:0*/ __Vtemp_61;
    VlWide<5>/*159:0*/ __Vtemp_69;
    VlWide<5>/*159:0*/ __Vtemp_73;
    VlWide<5>/*159:0*/ __Vtemp_77;
    VlWide<5>/*159:0*/ __Vtemp_81;
    VlWide<5>/*159:0*/ __Vtemp_85;
    VlWide<5>/*159:0*/ __Vtemp_89;
    VlWide<5>/*159:0*/ __Vtemp_93;
    VlWide<6>/*191:0*/ __Vtemp_100;
    VlWide<6>/*191:0*/ __Vtemp_105;
    VlWide<6>/*191:0*/ __Vtemp_109;
    VlWide<6>/*191:0*/ __Vtemp_113;
    VlWide<6>/*191:0*/ __Vtemp_117;
    VlWide<6>/*191:0*/ __Vtemp_121;
    VlWide<6>/*191:0*/ __Vtemp_126;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)((1U & (IData)(
                                                            ((0U 
                                                              != 
                                                              (0xc000U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[7U])) 
                                                             | (0U 
                                                                != 
                                                                (0xc00U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[8U]))))))) 
                              << 0x3fU) | (((QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       ((0U 
                                                                         != 
                                                                         (0x3000U 
                                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[7U])) 
                                                                        | (0U 
                                                                           != 
                                                                           (0x300U 
                                                                            & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[8U]))))))) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          ((0U 
                                                                            != 
                                                                            (0xc00U 
                                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[7U])) 
                                                                           | (0U 
                                                                              != 
                                                                              (0xc0U 
                                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[8U]))))))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             ((0U 
                                                                               != 
                                                                               (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[7U])) 
                                                                              | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[8U]))))))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[7U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[8U]))))))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[7U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[8U]))))))) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0xc000000cU 
                                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[7U])))) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0x30000003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[7U])))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000000cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[6U])))) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[6U])))) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[6U]))))))) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[6U]))))))) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[6U]))))))) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[4U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[5U]))))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[4U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[5U]))))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[4U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[5U]))))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[4U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[5U]))))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000000cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[4U]))))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[4U]))))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[4U]))))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[4U]))))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000000cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])))) 
                                                                                << 2U)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000000cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U]))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_1[1U] = (IData)(((((QData)((IData)((1U 
                                                & (IData)(
                                                          ((0U 
                                                            != 
                                                            (0xc000U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[7U])) 
                                                           | (0U 
                                                              != 
                                                              (0xc00U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[8U]))))))) 
                               << 0x3fU) | (((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        ((0U 
                                                                          != 
                                                                          (0x3000U 
                                                                           & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[7U])) 
                                                                         | (0U 
                                                                            != 
                                                                            (0x300U 
                                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[8U]))))))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           ((0U 
                                                                             != 
                                                                             (0xc00U 
                                                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[7U])) 
                                                                            | (0U 
                                                                               != 
                                                                               (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[8U]))))))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[7U])) 
                                                                               | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[8U]))))))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[7U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[8U]))))))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[7U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[8U]))))))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (0U 
                                                                             != 
                                                                             (0xc000000cU 
                                                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[7U])))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[7U])))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000000cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[6U])))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[6U])))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[6U]))))))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[6U]))))))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[6U]))))))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[4U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[5U]))))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[4U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[5U]))))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[4U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[5U]))))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[4U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[5U]))))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000000cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[4U]))))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[4U]))))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[4U]))))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[4U]))))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000000cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[1U])))) 
                                                                                << 2U)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000000cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U]))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0U])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                             >> 0x20U));
    __Vtemp_4[2U] = ((8U & ((IData)(((0U != (0xc00000U 
                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[7U])) 
                                     | (0U != (0xc0000U 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[8U])))) 
                            << 3U)) | ((4U & ((IData)(
                                                      ((0U 
                                                        != 
                                                        (0x300000U 
                                                         & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[7U])) 
                                                       | (0U 
                                                          != 
                                                          (0x30000U 
                                                           & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[8U])))) 
                                              << 2U)) 
                                       | ((2U & ((IData)(
                                                         ((0U 
                                                           != 
                                                           (0xc0000U 
                                                            & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[7U])) 
                                                          | (0U 
                                                             != 
                                                             (0xc000U 
                                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[8U])))) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          ((0U 
                                                            != 
                                                            (0x30000U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[7U])) 
                                                           | (0U 
                                                              != 
                                                              (0x3000U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[8U]))))))));
    __Vtemp_8[2U] = ((0x80U & ((IData)(((0U != (0xc000000U 
                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[8U])) 
                                        | (0U != (0xc00000U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[9U])))) 
                               << 7U)) | ((0x40U & 
                                           ((IData)(
                                                    ((0U 
                                                      != 
                                                      (0x3000000U 
                                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[8U])) 
                                                     | (0U 
                                                        != 
                                                        (0x300000U 
                                                         & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[9U])))) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & ((IData)(
                                                         ((0U 
                                                           != 
                                                           (0xc000000U 
                                                            & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[7U])) 
                                                          | (0U 
                                                             != 
                                                             (0xc00000U 
                                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[8U])))) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & ((IData)(
                                                            ((0U 
                                                              != 
                                                              (0x3000000U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[7U])) 
                                                             | (0U 
                                                                != 
                                                                (0x300000U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[8U])))) 
                                                    << 4U)) 
                                                | __Vtemp_4[2U]))));
    __Vtemp_13[2U] = ((0x1000U & ((IData)(((0U != (0x30U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[9U])) 
                                           | (0U != 
                                              (3U & 
                                               vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xaU])))) 
                                  << 0xcU)) | (((IData)(
                                                        (0U 
                                                         != 
                                                         (0xc000000cU 
                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[9U]))) 
                                                << 0xbU) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x30000003U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[9U]))) 
                                                   << 0xaU) 
                                                  | ((0x200U 
                                                      & ((IData)(
                                                                 ((0U 
                                                                   != 
                                                                   (0xc0000000U 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[8U])) 
                                                                  | (0U 
                                                                     != 
                                                                     (0xc000000U 
                                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[9U])))) 
                                                         << 9U)) 
                                                     | ((0x100U 
                                                         & ((IData)(
                                                                    ((0U 
                                                                      != 
                                                                      (0x30000000U 
                                                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[8U])) 
                                                                     | (0U 
                                                                        != 
                                                                        (0x3000000U 
                                                                         & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[9U])))) 
                                                            << 8U)) 
                                                        | __Vtemp_8[2U])))));
    __Vtemp_17[2U] = ((0x10000U & ((IData)(((0U != 
                                             (0x3000U 
                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[9U])) 
                                            | (0U != 
                                               (0x300U 
                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xaU])))) 
                                   << 0x10U)) | ((0x8000U 
                                                  & ((IData)(
                                                             ((0U 
                                                               != 
                                                               (0xc00U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[9U])) 
                                                              | (0U 
                                                                 != 
                                                                 (0xc0U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xaU])))) 
                                                     << 0xfU)) 
                                                 | ((0x4000U 
                                                     & ((IData)(
                                                                ((0U 
                                                                  != 
                                                                  (0x300U 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[9U])) 
                                                                 | (0U 
                                                                    != 
                                                                    (0x30U 
                                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xaU])))) 
                                                        << 0xeU)) 
                                                    | ((0x2000U 
                                                        & ((IData)(
                                                                   ((0U 
                                                                     != 
                                                                     (0xc0U 
                                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[9U])) 
                                                                    | (0U 
                                                                       != 
                                                                       (0xcU 
                                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xaU])))) 
                                                           << 0xdU)) 
                                                       | __Vtemp_13[2U]))));
    __Vtemp_21[2U] = ((0x100000U & ((IData)(((0U != 
                                              (0x30000U 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xaU])) 
                                             | (0U 
                                                != 
                                                (0x3000U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xbU])))) 
                                    << 0x14U)) | ((0x80000U 
                                                   & ((IData)(
                                                              ((0U 
                                                                != 
                                                                (0xc0000U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[9U])) 
                                                               | (0U 
                                                                  != 
                                                                  (0xc000U 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xaU])))) 
                                                      << 0x13U)) 
                                                  | ((0x40000U 
                                                      & ((IData)(
                                                                 ((0U 
                                                                   != 
                                                                   (0x30000U 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[9U])) 
                                                                  | (0U 
                                                                     != 
                                                                     (0x3000U 
                                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xaU])))) 
                                                         << 0x12U)) 
                                                     | ((0x20000U 
                                                         & ((IData)(
                                                                    ((0U 
                                                                      != 
                                                                      (0xc000U 
                                                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[9U])) 
                                                                     | (0U 
                                                                        != 
                                                                        (0xc00U 
                                                                         & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xaU])))) 
                                                            << 0x11U)) 
                                                        | __Vtemp_17[2U]))));
    __Vtemp_25[2U] = ((0x1000000U & ((IData)(((0U != 
                                               (0x3000000U 
                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xaU])) 
                                              | (0U 
                                                 != 
                                                 (0x300000U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xbU])))) 
                                     << 0x18U)) | (
                                                   (0x800000U 
                                                    & ((IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0xc00000U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xaU])) 
                                                                | (0U 
                                                                   != 
                                                                   (0xc0000U 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xbU])))) 
                                                       << 0x17U)) 
                                                   | ((0x400000U 
                                                       & ((IData)(
                                                                  ((0U 
                                                                    != 
                                                                    (0x300000U 
                                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xaU])) 
                                                                   | (0U 
                                                                      != 
                                                                      (0x30000U 
                                                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xbU])))) 
                                                          << 0x16U)) 
                                                      | ((0x200000U 
                                                          & ((IData)(
                                                                     ((0U 
                                                                       != 
                                                                       (0xc0000U 
                                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xaU])) 
                                                                      | (0U 
                                                                         != 
                                                                         (0xc000U 
                                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xbU])))) 
                                                             << 0x15U)) 
                                                         | __Vtemp_21[2U]))));
    __Vtemp_29[2U] = (((IData)((0U != (0x30000003U 
                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xbU]))) 
                       << 0x1cU) | ((0x8000000U & ((IData)(
                                                           ((0U 
                                                             != 
                                                             (0xc0000000U 
                                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xaU])) 
                                                            | (0U 
                                                               != 
                                                               (0xc000000U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xbU])))) 
                                                   << 0x1bU)) 
                                    | ((0x4000000U 
                                        & ((IData)(
                                                   ((0U 
                                                     != 
                                                     (0x30000000U 
                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xaU])) 
                                                    | (0U 
                                                       != 
                                                       (0x3000000U 
                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xbU])))) 
                                           << 0x1aU)) 
                                       | ((0x2000000U 
                                           & ((IData)(
                                                      ((0U 
                                                        != 
                                                        (0xc000000U 
                                                         & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xaU])) 
                                                       | (0U 
                                                          != 
                                                          (0xc00000U 
                                                           & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xbU])))) 
                                              << 0x19U)) 
                                          | __Vtemp_25[2U]))));
    __Vtemp_36[3U] = ((8U & ((IData)(((0U != (0xc00U 
                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xcU])) 
                                      | (0U != (0xc0U 
                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xdU])))) 
                             << 3U)) | ((4U & ((IData)(
                                                       ((0U 
                                                         != 
                                                         (0x300U 
                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xcU])) 
                                                        | (0U 
                                                           != 
                                                           (0x30U 
                                                            & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xdU])))) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          ((0U 
                                                            != 
                                                            (0xc00U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xbU])) 
                                                           | (0U 
                                                              != 
                                                              (0xc0U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xcU])))) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           ((0U 
                                                             != 
                                                             (0x300U 
                                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xbU])) 
                                                            | (0U 
                                                               != 
                                                               (0x30U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xcU]))))))));
    __Vtemp_40[3U] = ((0x80U & ((IData)(((0U != (0xc0000U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xcU])) 
                                         | (0U != (0xc000U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xdU])))) 
                                << 7U)) | ((0x40U & 
                                            ((IData)(
                                                     ((0U 
                                                       != 
                                                       (0x30000U 
                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xcU])) 
                                                      | (0U 
                                                         != 
                                                         (0x3000U 
                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xdU])))) 
                                             << 6U)) 
                                           | ((0x20U 
                                               & ((IData)(
                                                          ((0U 
                                                            != 
                                                            (0xc000U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xcU])) 
                                                           | (0U 
                                                              != 
                                                              (0xc00U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xdU])))) 
                                                  << 5U)) 
                                              | ((0x10U 
                                                  & ((IData)(
                                                             ((0U 
                                                               != 
                                                               (0x3000U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xcU])) 
                                                              | (0U 
                                                                 != 
                                                                 (0x300U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xdU])))) 
                                                     << 4U)) 
                                                 | __Vtemp_36[3U]))));
    __Vtemp_44[3U] = ((0x800U & ((IData)(((0U != (0xc000000U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xcU])) 
                                          | (0U != 
                                             (0xc00000U 
                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xdU])))) 
                                 << 0xbU)) | ((0x400U 
                                               & ((IData)(
                                                          ((0U 
                                                            != 
                                                            (0x3000000U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xcU])) 
                                                           | (0U 
                                                              != 
                                                              (0x300000U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xdU])))) 
                                                  << 0xaU)) 
                                              | ((0x200U 
                                                  & ((IData)(
                                                             ((0U 
                                                               != 
                                                               (0xc00000U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xcU])) 
                                                              | (0U 
                                                                 != 
                                                                 (0xc0000U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xdU])))) 
                                                     << 9U)) 
                                                 | ((0x100U 
                                                     & ((IData)(
                                                                ((0U 
                                                                  != 
                                                                  (0x300000U 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xcU])) 
                                                                 | (0U 
                                                                    != 
                                                                    (0x30000U 
                                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xdU])))) 
                                                        << 8U)) 
                                                    | __Vtemp_40[3U]))));
    __Vtemp_49[3U] = (((IData)((0U != (0x30000003U 
                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xeU]))) 
                       << 0x10U) | (((IData)((0U != 
                                              (0xc000000cU 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xdU]))) 
                                     << 0xfU) | (((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000003U 
                                                            & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xdU]))) 
                                                  << 0xeU) 
                                                 | ((0x2000U 
                                                     & ((IData)(
                                                                ((0U 
                                                                  != 
                                                                  (0xc0000000U 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xcU])) 
                                                                 | (0U 
                                                                    != 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xdU])))) 
                                                        << 0xdU)) 
                                                    | ((0x1000U 
                                                        & ((IData)(
                                                                   ((0U 
                                                                     != 
                                                                     (0x30000000U 
                                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xcU])) 
                                                                    | (0U 
                                                                       != 
                                                                       (0x3000000U 
                                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xdU])))) 
                                                           << 0xcU)) 
                                                       | __Vtemp_44[3U])))));
    __Vtemp_53[3U] = ((0x100000U & ((IData)(((0U != 
                                              (0x300U 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xeU])) 
                                             | (0U 
                                                != 
                                                (0x30U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xfU])))) 
                                    << 0x14U)) | ((0x80000U 
                                                   & ((IData)(
                                                              ((0U 
                                                                != 
                                                                (0xc0U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xeU])) 
                                                               | (0U 
                                                                  != 
                                                                  (0xcU 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xfU])))) 
                                                      << 0x13U)) 
                                                  | ((0x40000U 
                                                      & ((IData)(
                                                                 ((0U 
                                                                   != 
                                                                   (0x30U 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xeU])) 
                                                                  | (0U 
                                                                     != 
                                                                     (3U 
                                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xfU])))) 
                                                         << 0x12U)) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0xc000000cU 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xeU]))) 
                                                         << 0x11U) 
                                                        | __Vtemp_49[3U]))));
    __Vtemp_57[3U] = ((0x1000000U & ((IData)(((0U != 
                                               (0x30000U 
                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xeU])) 
                                              | (0U 
                                                 != 
                                                 (0x3000U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xfU])))) 
                                     << 0x18U)) | (
                                                   (0x800000U 
                                                    & ((IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0xc000U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xeU])) 
                                                                | (0U 
                                                                   != 
                                                                   (0xc00U 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xfU])))) 
                                                       << 0x17U)) 
                                                   | ((0x400000U 
                                                       & ((IData)(
                                                                  ((0U 
                                                                    != 
                                                                    (0x3000U 
                                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xeU])) 
                                                                   | (0U 
                                                                      != 
                                                                      (0x300U 
                                                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xfU])))) 
                                                          << 0x16U)) 
                                                      | ((0x200000U 
                                                          & ((IData)(
                                                                     ((0U 
                                                                       != 
                                                                       (0xc00U 
                                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xeU])) 
                                                                      | (0U 
                                                                         != 
                                                                         (0xc0U 
                                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xfU])))) 
                                                             << 0x15U)) 
                                                         | __Vtemp_53[3U]))));
    __Vtemp_61[3U] = ((0x10000000U & ((IData)(((0U 
                                                != 
                                                (0x3000000U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xeU])) 
                                               | (0U 
                                                  != 
                                                  (0x300000U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xfU])))) 
                                      << 0x1cU)) | 
                      ((0x8000000U & ((IData)(((0U 
                                                != 
                                                (0xc00000U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xeU])) 
                                               | (0U 
                                                  != 
                                                  (0xc0000U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xfU])))) 
                                      << 0x1bU)) | 
                       ((0x4000000U & ((IData)(((0U 
                                                 != 
                                                 (0x300000U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xeU])) 
                                                | (0U 
                                                   != 
                                                   (0x30000U 
                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xfU])))) 
                                       << 0x1aU)) | 
                        ((0x2000000U & ((IData)(((0U 
                                                  != 
                                                  (0xc0000U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xeU])) 
                                                 | (0U 
                                                    != 
                                                    (0xc000U 
                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xfU])))) 
                                        << 0x19U)) 
                         | __Vtemp_57[3U]))));
    __Vtemp_69[4U] = ((0x10U & ((IData)(((0U != (0x30U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x10U])) 
                                         | (0U != (3U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x11U])))) 
                                << 4U)) | (((IData)(
                                                    (0U 
                                                     != 
                                                     (0xc000000cU 
                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x10U]))) 
                                            << 3U) 
                                           | (((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30000003U 
                                                         & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x10U]))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((IData)(
                                                             ((0U 
                                                               != 
                                                               (0xc0000000U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xfU])) 
                                                              | (0U 
                                                                 != 
                                                                 (0xc000000U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x10U])))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              ((0U 
                                                                != 
                                                                (0x30000000U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xfU])) 
                                                               | (0U 
                                                                  != 
                                                                  (0x3000000U 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x10U])))))))));
    __Vtemp_73[4U] = ((0x100U & ((IData)(((0U != (0x3000U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x10U])) 
                                          | (0U != 
                                             (0x300U 
                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x11U])))) 
                                 << 8U)) | ((0x80U 
                                             & ((IData)(
                                                        ((0U 
                                                          != 
                                                          (0xc00U 
                                                           & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x10U])) 
                                                         | (0U 
                                                            != 
                                                            (0xc0U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x11U])))) 
                                                << 7U)) 
                                            | ((0x40U 
                                                & ((IData)(
                                                           ((0U 
                                                             != 
                                                             (0x300U 
                                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x10U])) 
                                                            | (0U 
                                                               != 
                                                               (0x30U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x11U])))) 
                                                   << 6U)) 
                                               | ((0x20U 
                                                   & ((IData)(
                                                              ((0U 
                                                                != 
                                                                (0xc0U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x10U])) 
                                                               | (0U 
                                                                  != 
                                                                  (0xcU 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x11U])))) 
                                                      << 5U)) 
                                                  | __Vtemp_69[4U]))));
    __Vtemp_77[4U] = ((0x1000U & ((IData)(((0U != (0x30000U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x11U])) 
                                           | (0U != 
                                              (0x3000U 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x12U])))) 
                                  << 0xcU)) | ((0x800U 
                                                & ((IData)(
                                                           ((0U 
                                                             != 
                                                             (0xc0000U 
                                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x10U])) 
                                                            | (0U 
                                                               != 
                                                               (0xc000U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x11U])))) 
                                                   << 0xbU)) 
                                               | ((0x400U 
                                                   & ((IData)(
                                                              ((0U 
                                                                != 
                                                                (0x30000U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x10U])) 
                                                               | (0U 
                                                                  != 
                                                                  (0x3000U 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x11U])))) 
                                                      << 0xaU)) 
                                                  | ((0x200U 
                                                      & ((IData)(
                                                                 ((0U 
                                                                   != 
                                                                   (0xc000U 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x10U])) 
                                                                  | (0U 
                                                                     != 
                                                                     (0xc00U 
                                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x11U])))) 
                                                         << 9U)) 
                                                     | __Vtemp_73[4U]))));
    __Vtemp_81[4U] = ((0x10000U & ((IData)(((0U != 
                                             (0x3000000U 
                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x11U])) 
                                            | (0U != 
                                               (0x300000U 
                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x12U])))) 
                                   << 0x10U)) | ((0x8000U 
                                                  & ((IData)(
                                                             ((0U 
                                                               != 
                                                               (0xc00000U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x11U])) 
                                                              | (0U 
                                                                 != 
                                                                 (0xc0000U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x12U])))) 
                                                     << 0xfU)) 
                                                 | ((0x4000U 
                                                     & ((IData)(
                                                                ((0U 
                                                                  != 
                                                                  (0x300000U 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x11U])) 
                                                                 | (0U 
                                                                    != 
                                                                    (0x30000U 
                                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x12U])))) 
                                                        << 0xeU)) 
                                                    | ((0x2000U 
                                                        & ((IData)(
                                                                   ((0U 
                                                                     != 
                                                                     (0xc0000U 
                                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x11U])) 
                                                                    | (0U 
                                                                       != 
                                                                       (0xc000U 
                                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x12U])))) 
                                                           << 0xdU)) 
                                                       | __Vtemp_77[4U]))));
    __Vtemp_85[4U] = (((IData)((0U != (0x30000003U 
                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x12U]))) 
                       << 0x14U) | ((0x80000U & ((IData)(
                                                         ((0U 
                                                           != 
                                                           (0xc0000000U 
                                                            & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x11U])) 
                                                          | (0U 
                                                             != 
                                                             (0xc000000U 
                                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x12U])))) 
                                                 << 0x13U)) 
                                    | ((0x40000U & 
                                        ((IData)(((0U 
                                                   != 
                                                   (0x30000000U 
                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x11U])) 
                                                  | (0U 
                                                     != 
                                                     (0x3000000U 
                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x12U])))) 
                                         << 0x12U)) 
                                       | ((0x20000U 
                                           & ((IData)(
                                                      ((0U 
                                                        != 
                                                        (0xc000000U 
                                                         & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x11U])) 
                                                       | (0U 
                                                          != 
                                                          (0xc00000U 
                                                           & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x12U])))) 
                                              << 0x11U)) 
                                          | __Vtemp_81[4U]))));
    __Vtemp_89[4U] = ((0x1000000U & ((IData)(((0U != 
                                               (0x300U 
                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x12U])) 
                                              | (0U 
                                                 != 
                                                 (0x30U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x13U])))) 
                                     << 0x18U)) | (
                                                   (0x800000U 
                                                    & ((IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0xc0U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x12U])) 
                                                                | (0U 
                                                                   != 
                                                                   (0xcU 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x13U])))) 
                                                       << 0x17U)) 
                                                   | ((0x400000U 
                                                       & ((IData)(
                                                                  ((0U 
                                                                    != 
                                                                    (0x30U 
                                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x12U])) 
                                                                   | (0U 
                                                                      != 
                                                                      (3U 
                                                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x13U])))) 
                                                          << 0x16U)) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xc000000cU 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x12U]))) 
                                                          << 0x15U) 
                                                         | __Vtemp_85[4U]))));
    __Vtemp_93[4U] = ((0x10000000U & ((IData)(((0U 
                                                != 
                                                (0x3000U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x13U])) 
                                               | (0U 
                                                  != 
                                                  (0x300U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x14U])))) 
                                      << 0x1cU)) | 
                      ((0x8000000U & ((IData)(((0U 
                                                != 
                                                (0xc00U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x13U])) 
                                               | (0U 
                                                  != 
                                                  (0xc0U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x14U])))) 
                                      << 0x1bU)) | 
                       ((0x4000000U & ((IData)(((0U 
                                                 != 
                                                 (0x300U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x13U])) 
                                                | (0U 
                                                   != 
                                                   (0x30U 
                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x14U])))) 
                                       << 0x1aU)) | 
                        ((0x2000000U & ((IData)(((0U 
                                                  != 
                                                  (0xc00U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x12U])) 
                                                 | (0U 
                                                    != 
                                                    (0xc0U 
                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x13U])))) 
                                        << 0x19U)) 
                         | __Vtemp_89[4U]))));
    __Vtemp_100[5U] = ((8U & ((IData)(((0U != (0xc000000U 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x13U])) 
                                       | (0U != (0xc00000U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x14U])))) 
                              << 3U)) | ((4U & ((IData)(
                                                        ((0U 
                                                          != 
                                                          (0x3000000U 
                                                           & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x13U])) 
                                                         | (0U 
                                                            != 
                                                            (0x300000U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x14U])))) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           ((0U 
                                                             != 
                                                             (0xc00000U 
                                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x13U])) 
                                                            | (0U 
                                                               != 
                                                               (0xc0000U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x14U])))) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            ((0U 
                                                              != 
                                                              (0x300000U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x13U])) 
                                                             | (0U 
                                                                != 
                                                                (0x30000U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x14U]))))))));
    __Vtemp_105[5U] = (((IData)((0U != (0x30000003U 
                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x15U]))) 
                        << 8U) | (((IData)((0U != (0xc000000cU 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x14U]))) 
                                   << 7U) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (0x30000003U 
                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x14U]))) 
                                              << 6U) 
                                             | ((0x20U 
                                                 & ((IData)(
                                                            ((0U 
                                                              != 
                                                              (0xc0000000U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x13U])) 
                                                             | (0U 
                                                                != 
                                                                (0xc000000U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x14U])))) 
                                                    << 5U)) 
                                                | ((0x10U 
                                                    & ((IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0x30000000U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x13U])) 
                                                                | (0U 
                                                                   != 
                                                                   (0x3000000U 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x14U])))) 
                                                       << 4U)) 
                                                   | __Vtemp_100[5U])))));
    __Vtemp_109[5U] = ((0x1000U & ((IData)(((0U != 
                                             (0x300U 
                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x15U])) 
                                            | (0U != 
                                               (0x30U 
                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x16U])))) 
                                   << 0xcU)) | ((0x800U 
                                                 & ((IData)(
                                                            ((0U 
                                                              != 
                                                              (0xc0U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x15U])) 
                                                             | (0U 
                                                                != 
                                                                (0xcU 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x16U])))) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0x30U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x15U])) 
                                                                | (0U 
                                                                   != 
                                                                   (3U 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x16U])))) 
                                                       << 0xaU)) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0xc000000cU 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x15U]))) 
                                                       << 9U) 
                                                      | __Vtemp_105[5U]))));
    __Vtemp_113[5U] = ((0x10000U & ((IData)(((0U != 
                                              (0x30000U 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x15U])) 
                                             | (0U 
                                                != 
                                                (0x3000U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x16U])))) 
                                    << 0x10U)) | ((0x8000U 
                                                   & ((IData)(
                                                              ((0U 
                                                                != 
                                                                (0xc000U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x15U])) 
                                                               | (0U 
                                                                  != 
                                                                  (0xc00U 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x16U])))) 
                                                      << 0xfU)) 
                                                  | ((0x4000U 
                                                      & ((IData)(
                                                                 ((0U 
                                                                   != 
                                                                   (0x3000U 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x15U])) 
                                                                  | (0U 
                                                                     != 
                                                                     (0x300U 
                                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x16U])))) 
                                                         << 0xeU)) 
                                                     | ((0x2000U 
                                                         & ((IData)(
                                                                    ((0U 
                                                                      != 
                                                                      (0xc00U 
                                                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x15U])) 
                                                                     | (0U 
                                                                        != 
                                                                        (0xc0U 
                                                                         & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x16U])))) 
                                                            << 0xdU)) 
                                                        | __Vtemp_109[5U]))));
    __Vtemp_117[5U] = ((0x100000U & ((IData)(((0U != 
                                               (0x3000000U 
                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x15U])) 
                                              | (0U 
                                                 != 
                                                 (0x300000U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x16U])))) 
                                     << 0x14U)) | (
                                                   (0x80000U 
                                                    & ((IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0xc00000U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x15U])) 
                                                                | (0U 
                                                                   != 
                                                                   (0xc0000U 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x16U])))) 
                                                       << 0x13U)) 
                                                   | ((0x40000U 
                                                       & ((IData)(
                                                                  ((0U 
                                                                    != 
                                                                    (0x300000U 
                                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x15U])) 
                                                                   | (0U 
                                                                      != 
                                                                      (0x30000U 
                                                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x16U])))) 
                                                          << 0x12U)) 
                                                      | ((0x20000U 
                                                          & ((IData)(
                                                                     ((0U 
                                                                       != 
                                                                       (0xc0000U 
                                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x15U])) 
                                                                      | (0U 
                                                                         != 
                                                                         (0xc000U 
                                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x16U])))) 
                                                             << 0x11U)) 
                                                         | __Vtemp_113[5U]))));
    __Vtemp_121[5U] = ((0x1000000U & ((IData)(((0U 
                                                != 
                                                (0x30000000U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x16U])) 
                                               | (0U 
                                                  != 
                                                  (0x3000000U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x17U])))) 
                                      << 0x18U)) | 
                       ((0x800000U & ((IData)(((0U 
                                                != 
                                                (0xc000000U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x16U])) 
                                               | (0U 
                                                  != 
                                                  (0xc00000U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x17U])))) 
                                      << 0x17U)) | 
                        ((0x400000U & ((IData)(((0U 
                                                 != 
                                                 (0x3000000U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x16U])) 
                                                | (0U 
                                                   != 
                                                   (0x300000U 
                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x17U])))) 
                                       << 0x16U)) | 
                         ((0x200000U & ((IData)(((0U 
                                                  != 
                                                  (0xc000000U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x15U])) 
                                                 | (0U 
                                                    != 
                                                    (0xc00000U 
                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x16U])))) 
                                        << 0x15U)) 
                          | __Vtemp_117[5U]))));
    __Vtemp_126[5U] = ((0x20000000U & ((IData)(((0U 
                                                 != 
                                                 (0xc0U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x17U])) 
                                                | (0U 
                                                   != 
                                                   (0xcU 
                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x18U])))) 
                                       << 0x1dU)) | 
                       ((0x10000000U & ((IData)(((0U 
                                                  != 
                                                  (0x30U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x17U])) 
                                                 | (0U 
                                                    != 
                                                    (3U 
                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x18U])))) 
                                        << 0x1cU)) 
                        | (((IData)((0U != (0xc000000cU 
                                            & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x17U]))) 
                            << 0x1bU) | (((IData)((0U 
                                                   != 
                                                   (0x30000003U 
                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x17U]))) 
                                          << 0x1aU) 
                                         | ((0x2000000U 
                                             & ((IData)(
                                                        ((0U 
                                                          != 
                                                          (0xc0000000U 
                                                           & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x16U])) 
                                                         | (0U 
                                                            != 
                                                            (0xc000000U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x17U])))) 
                                                << 0x19U)) 
                                            | __Vtemp_121[5U])))));
    vlSelf->img_out[0U] = __Vtemp_1[0U];
    vlSelf->img_out[1U] = __Vtemp_1[1U];
    vlSelf->img_out[2U] = (((IData)(((0U != (0xc0U 
                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xbU])) 
                                     | (0U != (0xcU 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xcU])))) 
                            << 0x1fU) | ((0x40000000U 
                                          & ((IData)(
                                                     ((0U 
                                                       != 
                                                       (0x30U 
                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xbU])) 
                                                      | (0U 
                                                         != 
                                                         (3U 
                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xcU])))) 
                                             << 0x1eU)) 
                                         | (((IData)(
                                                     (0U 
                                                      != 
                                                      (0xc000000cU 
                                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xbU]))) 
                                             << 0x1dU) 
                                            | __Vtemp_29[2U])));
    vlSelf->img_out[3U] = (((IData)(((0U != (0xc000000U 
                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xfU])) 
                                     | (0U != (0xc00000U 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x10U])))) 
                            << 0x1fU) | ((0x40000000U 
                                          & ((IData)(
                                                     ((0U 
                                                       != 
                                                       (0x3000000U 
                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xfU])) 
                                                      | (0U 
                                                         != 
                                                         (0x300000U 
                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x10U])))) 
                                             << 0x1eU)) 
                                         | ((0x20000000U 
                                             & ((IData)(
                                                        ((0U 
                                                          != 
                                                          (0xc000000U 
                                                           & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xeU])) 
                                                         | (0U 
                                                            != 
                                                            (0xc00000U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0xfU])))) 
                                                << 0x1dU)) 
                                            | __Vtemp_61[3U])));
    vlSelf->img_out[4U] = (((IData)(((0U != (0xc0000U 
                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x13U])) 
                                     | (0U != (0xc000U 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x14U])))) 
                            << 0x1fU) | ((0x40000000U 
                                          & ((IData)(
                                                     ((0U 
                                                       != 
                                                       (0x30000U 
                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x13U])) 
                                                      | (0U 
                                                         != 
                                                         (0x3000U 
                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x14U])))) 
                                             << 0x1eU)) 
                                         | ((0x20000000U 
                                             & ((IData)(
                                                        ((0U 
                                                          != 
                                                          (0xc000U 
                                                           & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x13U])) 
                                                         | (0U 
                                                            != 
                                                            (0xc00U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x14U])))) 
                                                << 0x1dU)) 
                                            | __Vtemp_93[4U])));
    vlSelf->img_out[5U] = (((IData)(((0U != (0xc00U 
                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x17U])) 
                                     | (0U != (0xc0U 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x18U])))) 
                            << 0x1fU) | ((0x40000000U 
                                          & ((IData)(
                                                     ((0U 
                                                       != 
                                                       (0x300U 
                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x17U])) 
                                                      | (0U 
                                                         != 
                                                         (0x30U 
                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x18U])))) 
                                             << 0x1eU)) 
                                         | __Vtemp_126[5U]));
    vlSelf->img_out[6U] = ((8U & ((IData)(((0U != (0xc0000U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x17U])) 
                                           | (0U != 
                                              (0xc000U 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x18U])))) 
                                  << 3U)) | ((4U & 
                                              ((IData)(
                                                       ((0U 
                                                         != 
                                                         (0x30000U 
                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x17U])) 
                                                        | (0U 
                                                           != 
                                                           (0x3000U 
                                                            & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x18U])))) 
                                               << 2U)) 
                                             | ((2U 
                                                 & ((IData)(
                                                            ((0U 
                                                              != 
                                                              (0xc000U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x17U])) 
                                                             | (0U 
                                                                != 
                                                                (0xc00U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x18U])))) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             ((0U 
                                                               != 
                                                               (0x3000U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x17U])) 
                                                              | (0U 
                                                                 != 
                                                                 (0x300U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__0__KET____DOT__core.img_out[0x18U]))))))));
}

VL_ATTR_COLD void Vdut_MaxPoolCore__I1c___stl_sequent__TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__1__KET____DOT__maxpool__0(Vdut_MaxPoolCore__I1c* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdut_MaxPoolCore__I1c___stl_sequent__TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__1__KET____DOT__maxpool__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_25;
    VlWide<3>/*95:0*/ __Vtemp_29;
    VlWide<4>/*127:0*/ __Vtemp_36;
    VlWide<4>/*127:0*/ __Vtemp_40;
    VlWide<4>/*127:0*/ __Vtemp_44;
    VlWide<4>/*127:0*/ __Vtemp_49;
    VlWide<4>/*127:0*/ __Vtemp_53;
    VlWide<4>/*127:0*/ __Vtemp_57;
    VlWide<4>/*127:0*/ __Vtemp_61;
    VlWide<5>/*159:0*/ __Vtemp_69;
    VlWide<5>/*159:0*/ __Vtemp_73;
    VlWide<5>/*159:0*/ __Vtemp_77;
    VlWide<5>/*159:0*/ __Vtemp_81;
    VlWide<5>/*159:0*/ __Vtemp_85;
    VlWide<5>/*159:0*/ __Vtemp_89;
    VlWide<5>/*159:0*/ __Vtemp_93;
    VlWide<6>/*191:0*/ __Vtemp_100;
    VlWide<6>/*191:0*/ __Vtemp_105;
    VlWide<6>/*191:0*/ __Vtemp_109;
    VlWide<6>/*191:0*/ __Vtemp_113;
    VlWide<6>/*191:0*/ __Vtemp_117;
    VlWide<6>/*191:0*/ __Vtemp_121;
    VlWide<6>/*191:0*/ __Vtemp_126;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)((1U & (IData)(
                                                            ((0U 
                                                              != 
                                                              (0xc000U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[7U])) 
                                                             | (0U 
                                                                != 
                                                                (0xc00U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[8U]))))))) 
                              << 0x3fU) | (((QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       ((0U 
                                                                         != 
                                                                         (0x3000U 
                                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[7U])) 
                                                                        | (0U 
                                                                           != 
                                                                           (0x300U 
                                                                            & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[8U]))))))) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          ((0U 
                                                                            != 
                                                                            (0xc00U 
                                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[7U])) 
                                                                           | (0U 
                                                                              != 
                                                                              (0xc0U 
                                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[8U]))))))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             ((0U 
                                                                               != 
                                                                               (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[7U])) 
                                                                              | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[8U]))))))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[7U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[8U]))))))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[7U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[8U]))))))) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0xc000000cU 
                                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[7U])))) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0x30000003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[7U])))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000000cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[6U])))) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[6U])))) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[6U]))))))) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[6U]))))))) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[6U]))))))) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[4U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[5U]))))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[4U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[5U]))))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[4U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[5U]))))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[4U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[5U]))))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000000cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[4U]))))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[4U]))))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[4U]))))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[4U]))))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000000cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])))) 
                                                                                << 2U)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000000cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U]))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_1[1U] = (IData)(((((QData)((IData)((1U 
                                                & (IData)(
                                                          ((0U 
                                                            != 
                                                            (0xc000U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[7U])) 
                                                           | (0U 
                                                              != 
                                                              (0xc00U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[8U]))))))) 
                               << 0x3fU) | (((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        ((0U 
                                                                          != 
                                                                          (0x3000U 
                                                                           & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[7U])) 
                                                                         | (0U 
                                                                            != 
                                                                            (0x300U 
                                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[8U]))))))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           ((0U 
                                                                             != 
                                                                             (0xc00U 
                                                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[7U])) 
                                                                            | (0U 
                                                                               != 
                                                                               (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[8U]))))))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[7U])) 
                                                                               | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[8U]))))))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[7U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[8U]))))))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[7U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[8U]))))))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (0U 
                                                                             != 
                                                                             (0xc000000cU 
                                                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[7U])))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[7U])))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000000cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[6U])))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[6U])))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[6U]))))))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[6U]))))))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[6U]))))))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[4U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[5U]))))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[4U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[5U]))))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[4U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[5U]))))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[4U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[5U]))))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000000cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[4U]))))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[4U]))))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[4U]))))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[4U]))))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000000cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[1U])))) 
                                                                                << 2U)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000000cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U]))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0U])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                             >> 0x20U));
    __Vtemp_4[2U] = ((8U & ((IData)(((0U != (0xc00000U 
                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[7U])) 
                                     | (0U != (0xc0000U 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[8U])))) 
                            << 3U)) | ((4U & ((IData)(
                                                      ((0U 
                                                        != 
                                                        (0x300000U 
                                                         & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[7U])) 
                                                       | (0U 
                                                          != 
                                                          (0x30000U 
                                                           & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[8U])))) 
                                              << 2U)) 
                                       | ((2U & ((IData)(
                                                         ((0U 
                                                           != 
                                                           (0xc0000U 
                                                            & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[7U])) 
                                                          | (0U 
                                                             != 
                                                             (0xc000U 
                                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[8U])))) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          ((0U 
                                                            != 
                                                            (0x30000U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[7U])) 
                                                           | (0U 
                                                              != 
                                                              (0x3000U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[8U]))))))));
    __Vtemp_8[2U] = ((0x80U & ((IData)(((0U != (0xc000000U 
                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[8U])) 
                                        | (0U != (0xc00000U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[9U])))) 
                               << 7U)) | ((0x40U & 
                                           ((IData)(
                                                    ((0U 
                                                      != 
                                                      (0x3000000U 
                                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[8U])) 
                                                     | (0U 
                                                        != 
                                                        (0x300000U 
                                                         & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[9U])))) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & ((IData)(
                                                         ((0U 
                                                           != 
                                                           (0xc000000U 
                                                            & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[7U])) 
                                                          | (0U 
                                                             != 
                                                             (0xc00000U 
                                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[8U])))) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & ((IData)(
                                                            ((0U 
                                                              != 
                                                              (0x3000000U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[7U])) 
                                                             | (0U 
                                                                != 
                                                                (0x300000U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[8U])))) 
                                                    << 4U)) 
                                                | __Vtemp_4[2U]))));
    __Vtemp_13[2U] = ((0x1000U & ((IData)(((0U != (0x30U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[9U])) 
                                           | (0U != 
                                              (3U & 
                                               vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xaU])))) 
                                  << 0xcU)) | (((IData)(
                                                        (0U 
                                                         != 
                                                         (0xc000000cU 
                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[9U]))) 
                                                << 0xbU) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x30000003U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[9U]))) 
                                                   << 0xaU) 
                                                  | ((0x200U 
                                                      & ((IData)(
                                                                 ((0U 
                                                                   != 
                                                                   (0xc0000000U 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[8U])) 
                                                                  | (0U 
                                                                     != 
                                                                     (0xc000000U 
                                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[9U])))) 
                                                         << 9U)) 
                                                     | ((0x100U 
                                                         & ((IData)(
                                                                    ((0U 
                                                                      != 
                                                                      (0x30000000U 
                                                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[8U])) 
                                                                     | (0U 
                                                                        != 
                                                                        (0x3000000U 
                                                                         & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[9U])))) 
                                                            << 8U)) 
                                                        | __Vtemp_8[2U])))));
    __Vtemp_17[2U] = ((0x10000U & ((IData)(((0U != 
                                             (0x3000U 
                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[9U])) 
                                            | (0U != 
                                               (0x300U 
                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xaU])))) 
                                   << 0x10U)) | ((0x8000U 
                                                  & ((IData)(
                                                             ((0U 
                                                               != 
                                                               (0xc00U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[9U])) 
                                                              | (0U 
                                                                 != 
                                                                 (0xc0U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xaU])))) 
                                                     << 0xfU)) 
                                                 | ((0x4000U 
                                                     & ((IData)(
                                                                ((0U 
                                                                  != 
                                                                  (0x300U 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[9U])) 
                                                                 | (0U 
                                                                    != 
                                                                    (0x30U 
                                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xaU])))) 
                                                        << 0xeU)) 
                                                    | ((0x2000U 
                                                        & ((IData)(
                                                                   ((0U 
                                                                     != 
                                                                     (0xc0U 
                                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[9U])) 
                                                                    | (0U 
                                                                       != 
                                                                       (0xcU 
                                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xaU])))) 
                                                           << 0xdU)) 
                                                       | __Vtemp_13[2U]))));
    __Vtemp_21[2U] = ((0x100000U & ((IData)(((0U != 
                                              (0x30000U 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xaU])) 
                                             | (0U 
                                                != 
                                                (0x3000U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xbU])))) 
                                    << 0x14U)) | ((0x80000U 
                                                   & ((IData)(
                                                              ((0U 
                                                                != 
                                                                (0xc0000U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[9U])) 
                                                               | (0U 
                                                                  != 
                                                                  (0xc000U 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xaU])))) 
                                                      << 0x13U)) 
                                                  | ((0x40000U 
                                                      & ((IData)(
                                                                 ((0U 
                                                                   != 
                                                                   (0x30000U 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[9U])) 
                                                                  | (0U 
                                                                     != 
                                                                     (0x3000U 
                                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xaU])))) 
                                                         << 0x12U)) 
                                                     | ((0x20000U 
                                                         & ((IData)(
                                                                    ((0U 
                                                                      != 
                                                                      (0xc000U 
                                                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[9U])) 
                                                                     | (0U 
                                                                        != 
                                                                        (0xc00U 
                                                                         & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xaU])))) 
                                                            << 0x11U)) 
                                                        | __Vtemp_17[2U]))));
    __Vtemp_25[2U] = ((0x1000000U & ((IData)(((0U != 
                                               (0x3000000U 
                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xaU])) 
                                              | (0U 
                                                 != 
                                                 (0x300000U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xbU])))) 
                                     << 0x18U)) | (
                                                   (0x800000U 
                                                    & ((IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0xc00000U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xaU])) 
                                                                | (0U 
                                                                   != 
                                                                   (0xc0000U 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xbU])))) 
                                                       << 0x17U)) 
                                                   | ((0x400000U 
                                                       & ((IData)(
                                                                  ((0U 
                                                                    != 
                                                                    (0x300000U 
                                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xaU])) 
                                                                   | (0U 
                                                                      != 
                                                                      (0x30000U 
                                                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xbU])))) 
                                                          << 0x16U)) 
                                                      | ((0x200000U 
                                                          & ((IData)(
                                                                     ((0U 
                                                                       != 
                                                                       (0xc0000U 
                                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xaU])) 
                                                                      | (0U 
                                                                         != 
                                                                         (0xc000U 
                                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xbU])))) 
                                                             << 0x15U)) 
                                                         | __Vtemp_21[2U]))));
    __Vtemp_29[2U] = (((IData)((0U != (0x30000003U 
                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xbU]))) 
                       << 0x1cU) | ((0x8000000U & ((IData)(
                                                           ((0U 
                                                             != 
                                                             (0xc0000000U 
                                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xaU])) 
                                                            | (0U 
                                                               != 
                                                               (0xc000000U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xbU])))) 
                                                   << 0x1bU)) 
                                    | ((0x4000000U 
                                        & ((IData)(
                                                   ((0U 
                                                     != 
                                                     (0x30000000U 
                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xaU])) 
                                                    | (0U 
                                                       != 
                                                       (0x3000000U 
                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xbU])))) 
                                           << 0x1aU)) 
                                       | ((0x2000000U 
                                           & ((IData)(
                                                      ((0U 
                                                        != 
                                                        (0xc000000U 
                                                         & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xaU])) 
                                                       | (0U 
                                                          != 
                                                          (0xc00000U 
                                                           & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xbU])))) 
                                              << 0x19U)) 
                                          | __Vtemp_25[2U]))));
    __Vtemp_36[3U] = ((8U & ((IData)(((0U != (0xc00U 
                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xcU])) 
                                      | (0U != (0xc0U 
                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xdU])))) 
                             << 3U)) | ((4U & ((IData)(
                                                       ((0U 
                                                         != 
                                                         (0x300U 
                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xcU])) 
                                                        | (0U 
                                                           != 
                                                           (0x30U 
                                                            & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xdU])))) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          ((0U 
                                                            != 
                                                            (0xc00U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xbU])) 
                                                           | (0U 
                                                              != 
                                                              (0xc0U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xcU])))) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           ((0U 
                                                             != 
                                                             (0x300U 
                                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xbU])) 
                                                            | (0U 
                                                               != 
                                                               (0x30U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xcU]))))))));
    __Vtemp_40[3U] = ((0x80U & ((IData)(((0U != (0xc0000U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xcU])) 
                                         | (0U != (0xc000U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xdU])))) 
                                << 7U)) | ((0x40U & 
                                            ((IData)(
                                                     ((0U 
                                                       != 
                                                       (0x30000U 
                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xcU])) 
                                                      | (0U 
                                                         != 
                                                         (0x3000U 
                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xdU])))) 
                                             << 6U)) 
                                           | ((0x20U 
                                               & ((IData)(
                                                          ((0U 
                                                            != 
                                                            (0xc000U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xcU])) 
                                                           | (0U 
                                                              != 
                                                              (0xc00U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xdU])))) 
                                                  << 5U)) 
                                              | ((0x10U 
                                                  & ((IData)(
                                                             ((0U 
                                                               != 
                                                               (0x3000U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xcU])) 
                                                              | (0U 
                                                                 != 
                                                                 (0x300U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xdU])))) 
                                                     << 4U)) 
                                                 | __Vtemp_36[3U]))));
    __Vtemp_44[3U] = ((0x800U & ((IData)(((0U != (0xc000000U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xcU])) 
                                          | (0U != 
                                             (0xc00000U 
                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xdU])))) 
                                 << 0xbU)) | ((0x400U 
                                               & ((IData)(
                                                          ((0U 
                                                            != 
                                                            (0x3000000U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xcU])) 
                                                           | (0U 
                                                              != 
                                                              (0x300000U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xdU])))) 
                                                  << 0xaU)) 
                                              | ((0x200U 
                                                  & ((IData)(
                                                             ((0U 
                                                               != 
                                                               (0xc00000U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xcU])) 
                                                              | (0U 
                                                                 != 
                                                                 (0xc0000U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xdU])))) 
                                                     << 9U)) 
                                                 | ((0x100U 
                                                     & ((IData)(
                                                                ((0U 
                                                                  != 
                                                                  (0x300000U 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xcU])) 
                                                                 | (0U 
                                                                    != 
                                                                    (0x30000U 
                                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xdU])))) 
                                                        << 8U)) 
                                                    | __Vtemp_40[3U]))));
    __Vtemp_49[3U] = (((IData)((0U != (0x30000003U 
                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xeU]))) 
                       << 0x10U) | (((IData)((0U != 
                                              (0xc000000cU 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xdU]))) 
                                     << 0xfU) | (((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000003U 
                                                            & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xdU]))) 
                                                  << 0xeU) 
                                                 | ((0x2000U 
                                                     & ((IData)(
                                                                ((0U 
                                                                  != 
                                                                  (0xc0000000U 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xcU])) 
                                                                 | (0U 
                                                                    != 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xdU])))) 
                                                        << 0xdU)) 
                                                    | ((0x1000U 
                                                        & ((IData)(
                                                                   ((0U 
                                                                     != 
                                                                     (0x30000000U 
                                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xcU])) 
                                                                    | (0U 
                                                                       != 
                                                                       (0x3000000U 
                                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xdU])))) 
                                                           << 0xcU)) 
                                                       | __Vtemp_44[3U])))));
    __Vtemp_53[3U] = ((0x100000U & ((IData)(((0U != 
                                              (0x300U 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xeU])) 
                                             | (0U 
                                                != 
                                                (0x30U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xfU])))) 
                                    << 0x14U)) | ((0x80000U 
                                                   & ((IData)(
                                                              ((0U 
                                                                != 
                                                                (0xc0U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xeU])) 
                                                               | (0U 
                                                                  != 
                                                                  (0xcU 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xfU])))) 
                                                      << 0x13U)) 
                                                  | ((0x40000U 
                                                      & ((IData)(
                                                                 ((0U 
                                                                   != 
                                                                   (0x30U 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xeU])) 
                                                                  | (0U 
                                                                     != 
                                                                     (3U 
                                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xfU])))) 
                                                         << 0x12U)) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0xc000000cU 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xeU]))) 
                                                         << 0x11U) 
                                                        | __Vtemp_49[3U]))));
    __Vtemp_57[3U] = ((0x1000000U & ((IData)(((0U != 
                                               (0x30000U 
                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xeU])) 
                                              | (0U 
                                                 != 
                                                 (0x3000U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xfU])))) 
                                     << 0x18U)) | (
                                                   (0x800000U 
                                                    & ((IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0xc000U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xeU])) 
                                                                | (0U 
                                                                   != 
                                                                   (0xc00U 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xfU])))) 
                                                       << 0x17U)) 
                                                   | ((0x400000U 
                                                       & ((IData)(
                                                                  ((0U 
                                                                    != 
                                                                    (0x3000U 
                                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xeU])) 
                                                                   | (0U 
                                                                      != 
                                                                      (0x300U 
                                                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xfU])))) 
                                                          << 0x16U)) 
                                                      | ((0x200000U 
                                                          & ((IData)(
                                                                     ((0U 
                                                                       != 
                                                                       (0xc00U 
                                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xeU])) 
                                                                      | (0U 
                                                                         != 
                                                                         (0xc0U 
                                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xfU])))) 
                                                             << 0x15U)) 
                                                         | __Vtemp_53[3U]))));
    __Vtemp_61[3U] = ((0x10000000U & ((IData)(((0U 
                                                != 
                                                (0x3000000U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xeU])) 
                                               | (0U 
                                                  != 
                                                  (0x300000U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xfU])))) 
                                      << 0x1cU)) | 
                      ((0x8000000U & ((IData)(((0U 
                                                != 
                                                (0xc00000U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xeU])) 
                                               | (0U 
                                                  != 
                                                  (0xc0000U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xfU])))) 
                                      << 0x1bU)) | 
                       ((0x4000000U & ((IData)(((0U 
                                                 != 
                                                 (0x300000U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xeU])) 
                                                | (0U 
                                                   != 
                                                   (0x30000U 
                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xfU])))) 
                                       << 0x1aU)) | 
                        ((0x2000000U & ((IData)(((0U 
                                                  != 
                                                  (0xc0000U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xeU])) 
                                                 | (0U 
                                                    != 
                                                    (0xc000U 
                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xfU])))) 
                                        << 0x19U)) 
                         | __Vtemp_57[3U]))));
    __Vtemp_69[4U] = ((0x10U & ((IData)(((0U != (0x30U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x10U])) 
                                         | (0U != (3U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x11U])))) 
                                << 4U)) | (((IData)(
                                                    (0U 
                                                     != 
                                                     (0xc000000cU 
                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x10U]))) 
                                            << 3U) 
                                           | (((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30000003U 
                                                         & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x10U]))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((IData)(
                                                             ((0U 
                                                               != 
                                                               (0xc0000000U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xfU])) 
                                                              | (0U 
                                                                 != 
                                                                 (0xc000000U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x10U])))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              ((0U 
                                                                != 
                                                                (0x30000000U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xfU])) 
                                                               | (0U 
                                                                  != 
                                                                  (0x3000000U 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x10U])))))))));
    __Vtemp_73[4U] = ((0x100U & ((IData)(((0U != (0x3000U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x10U])) 
                                          | (0U != 
                                             (0x300U 
                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x11U])))) 
                                 << 8U)) | ((0x80U 
                                             & ((IData)(
                                                        ((0U 
                                                          != 
                                                          (0xc00U 
                                                           & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x10U])) 
                                                         | (0U 
                                                            != 
                                                            (0xc0U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x11U])))) 
                                                << 7U)) 
                                            | ((0x40U 
                                                & ((IData)(
                                                           ((0U 
                                                             != 
                                                             (0x300U 
                                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x10U])) 
                                                            | (0U 
                                                               != 
                                                               (0x30U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x11U])))) 
                                                   << 6U)) 
                                               | ((0x20U 
                                                   & ((IData)(
                                                              ((0U 
                                                                != 
                                                                (0xc0U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x10U])) 
                                                               | (0U 
                                                                  != 
                                                                  (0xcU 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x11U])))) 
                                                      << 5U)) 
                                                  | __Vtemp_69[4U]))));
    __Vtemp_77[4U] = ((0x1000U & ((IData)(((0U != (0x30000U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x11U])) 
                                           | (0U != 
                                              (0x3000U 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x12U])))) 
                                  << 0xcU)) | ((0x800U 
                                                & ((IData)(
                                                           ((0U 
                                                             != 
                                                             (0xc0000U 
                                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x10U])) 
                                                            | (0U 
                                                               != 
                                                               (0xc000U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x11U])))) 
                                                   << 0xbU)) 
                                               | ((0x400U 
                                                   & ((IData)(
                                                              ((0U 
                                                                != 
                                                                (0x30000U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x10U])) 
                                                               | (0U 
                                                                  != 
                                                                  (0x3000U 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x11U])))) 
                                                      << 0xaU)) 
                                                  | ((0x200U 
                                                      & ((IData)(
                                                                 ((0U 
                                                                   != 
                                                                   (0xc000U 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x10U])) 
                                                                  | (0U 
                                                                     != 
                                                                     (0xc00U 
                                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x11U])))) 
                                                         << 9U)) 
                                                     | __Vtemp_73[4U]))));
    __Vtemp_81[4U] = ((0x10000U & ((IData)(((0U != 
                                             (0x3000000U 
                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x11U])) 
                                            | (0U != 
                                               (0x300000U 
                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x12U])))) 
                                   << 0x10U)) | ((0x8000U 
                                                  & ((IData)(
                                                             ((0U 
                                                               != 
                                                               (0xc00000U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x11U])) 
                                                              | (0U 
                                                                 != 
                                                                 (0xc0000U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x12U])))) 
                                                     << 0xfU)) 
                                                 | ((0x4000U 
                                                     & ((IData)(
                                                                ((0U 
                                                                  != 
                                                                  (0x300000U 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x11U])) 
                                                                 | (0U 
                                                                    != 
                                                                    (0x30000U 
                                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x12U])))) 
                                                        << 0xeU)) 
                                                    | ((0x2000U 
                                                        & ((IData)(
                                                                   ((0U 
                                                                     != 
                                                                     (0xc0000U 
                                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x11U])) 
                                                                    | (0U 
                                                                       != 
                                                                       (0xc000U 
                                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x12U])))) 
                                                           << 0xdU)) 
                                                       | __Vtemp_77[4U]))));
    __Vtemp_85[4U] = (((IData)((0U != (0x30000003U 
                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x12U]))) 
                       << 0x14U) | ((0x80000U & ((IData)(
                                                         ((0U 
                                                           != 
                                                           (0xc0000000U 
                                                            & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x11U])) 
                                                          | (0U 
                                                             != 
                                                             (0xc000000U 
                                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x12U])))) 
                                                 << 0x13U)) 
                                    | ((0x40000U & 
                                        ((IData)(((0U 
                                                   != 
                                                   (0x30000000U 
                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x11U])) 
                                                  | (0U 
                                                     != 
                                                     (0x3000000U 
                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x12U])))) 
                                         << 0x12U)) 
                                       | ((0x20000U 
                                           & ((IData)(
                                                      ((0U 
                                                        != 
                                                        (0xc000000U 
                                                         & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x11U])) 
                                                       | (0U 
                                                          != 
                                                          (0xc00000U 
                                                           & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x12U])))) 
                                              << 0x11U)) 
                                          | __Vtemp_81[4U]))));
    __Vtemp_89[4U] = ((0x1000000U & ((IData)(((0U != 
                                               (0x300U 
                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x12U])) 
                                              | (0U 
                                                 != 
                                                 (0x30U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x13U])))) 
                                     << 0x18U)) | (
                                                   (0x800000U 
                                                    & ((IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0xc0U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x12U])) 
                                                                | (0U 
                                                                   != 
                                                                   (0xcU 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x13U])))) 
                                                       << 0x17U)) 
                                                   | ((0x400000U 
                                                       & ((IData)(
                                                                  ((0U 
                                                                    != 
                                                                    (0x30U 
                                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x12U])) 
                                                                   | (0U 
                                                                      != 
                                                                      (3U 
                                                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x13U])))) 
                                                          << 0x16U)) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xc000000cU 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x12U]))) 
                                                          << 0x15U) 
                                                         | __Vtemp_85[4U]))));
    __Vtemp_93[4U] = ((0x10000000U & ((IData)(((0U 
                                                != 
                                                (0x3000U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x13U])) 
                                               | (0U 
                                                  != 
                                                  (0x300U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x14U])))) 
                                      << 0x1cU)) | 
                      ((0x8000000U & ((IData)(((0U 
                                                != 
                                                (0xc00U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x13U])) 
                                               | (0U 
                                                  != 
                                                  (0xc0U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x14U])))) 
                                      << 0x1bU)) | 
                       ((0x4000000U & ((IData)(((0U 
                                                 != 
                                                 (0x300U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x13U])) 
                                                | (0U 
                                                   != 
                                                   (0x30U 
                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x14U])))) 
                                       << 0x1aU)) | 
                        ((0x2000000U & ((IData)(((0U 
                                                  != 
                                                  (0xc00U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x12U])) 
                                                 | (0U 
                                                    != 
                                                    (0xc0U 
                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x13U])))) 
                                        << 0x19U)) 
                         | __Vtemp_89[4U]))));
    __Vtemp_100[5U] = ((8U & ((IData)(((0U != (0xc000000U 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x13U])) 
                                       | (0U != (0xc00000U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x14U])))) 
                              << 3U)) | ((4U & ((IData)(
                                                        ((0U 
                                                          != 
                                                          (0x3000000U 
                                                           & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x13U])) 
                                                         | (0U 
                                                            != 
                                                            (0x300000U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x14U])))) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           ((0U 
                                                             != 
                                                             (0xc00000U 
                                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x13U])) 
                                                            | (0U 
                                                               != 
                                                               (0xc0000U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x14U])))) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            ((0U 
                                                              != 
                                                              (0x300000U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x13U])) 
                                                             | (0U 
                                                                != 
                                                                (0x30000U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x14U]))))))));
    __Vtemp_105[5U] = (((IData)((0U != (0x30000003U 
                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x15U]))) 
                        << 8U) | (((IData)((0U != (0xc000000cU 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x14U]))) 
                                   << 7U) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (0x30000003U 
                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x14U]))) 
                                              << 6U) 
                                             | ((0x20U 
                                                 & ((IData)(
                                                            ((0U 
                                                              != 
                                                              (0xc0000000U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x13U])) 
                                                             | (0U 
                                                                != 
                                                                (0xc000000U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x14U])))) 
                                                    << 5U)) 
                                                | ((0x10U 
                                                    & ((IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0x30000000U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x13U])) 
                                                                | (0U 
                                                                   != 
                                                                   (0x3000000U 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x14U])))) 
                                                       << 4U)) 
                                                   | __Vtemp_100[5U])))));
    __Vtemp_109[5U] = ((0x1000U & ((IData)(((0U != 
                                             (0x300U 
                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x15U])) 
                                            | (0U != 
                                               (0x30U 
                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x16U])))) 
                                   << 0xcU)) | ((0x800U 
                                                 & ((IData)(
                                                            ((0U 
                                                              != 
                                                              (0xc0U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x15U])) 
                                                             | (0U 
                                                                != 
                                                                (0xcU 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x16U])))) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0x30U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x15U])) 
                                                                | (0U 
                                                                   != 
                                                                   (3U 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x16U])))) 
                                                       << 0xaU)) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0xc000000cU 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x15U]))) 
                                                       << 9U) 
                                                      | __Vtemp_105[5U]))));
    __Vtemp_113[5U] = ((0x10000U & ((IData)(((0U != 
                                              (0x30000U 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x15U])) 
                                             | (0U 
                                                != 
                                                (0x3000U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x16U])))) 
                                    << 0x10U)) | ((0x8000U 
                                                   & ((IData)(
                                                              ((0U 
                                                                != 
                                                                (0xc000U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x15U])) 
                                                               | (0U 
                                                                  != 
                                                                  (0xc00U 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x16U])))) 
                                                      << 0xfU)) 
                                                  | ((0x4000U 
                                                      & ((IData)(
                                                                 ((0U 
                                                                   != 
                                                                   (0x3000U 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x15U])) 
                                                                  | (0U 
                                                                     != 
                                                                     (0x300U 
                                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x16U])))) 
                                                         << 0xeU)) 
                                                     | ((0x2000U 
                                                         & ((IData)(
                                                                    ((0U 
                                                                      != 
                                                                      (0xc00U 
                                                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x15U])) 
                                                                     | (0U 
                                                                        != 
                                                                        (0xc0U 
                                                                         & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x16U])))) 
                                                            << 0xdU)) 
                                                        | __Vtemp_109[5U]))));
    __Vtemp_117[5U] = ((0x100000U & ((IData)(((0U != 
                                               (0x3000000U 
                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x15U])) 
                                              | (0U 
                                                 != 
                                                 (0x300000U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x16U])))) 
                                     << 0x14U)) | (
                                                   (0x80000U 
                                                    & ((IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0xc00000U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x15U])) 
                                                                | (0U 
                                                                   != 
                                                                   (0xc0000U 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x16U])))) 
                                                       << 0x13U)) 
                                                   | ((0x40000U 
                                                       & ((IData)(
                                                                  ((0U 
                                                                    != 
                                                                    (0x300000U 
                                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x15U])) 
                                                                   | (0U 
                                                                      != 
                                                                      (0x30000U 
                                                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x16U])))) 
                                                          << 0x12U)) 
                                                      | ((0x20000U 
                                                          & ((IData)(
                                                                     ((0U 
                                                                       != 
                                                                       (0xc0000U 
                                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x15U])) 
                                                                      | (0U 
                                                                         != 
                                                                         (0xc000U 
                                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x16U])))) 
                                                             << 0x11U)) 
                                                         | __Vtemp_113[5U]))));
    __Vtemp_121[5U] = ((0x1000000U & ((IData)(((0U 
                                                != 
                                                (0x30000000U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x16U])) 
                                               | (0U 
                                                  != 
                                                  (0x3000000U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x17U])))) 
                                      << 0x18U)) | 
                       ((0x800000U & ((IData)(((0U 
                                                != 
                                                (0xc000000U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x16U])) 
                                               | (0U 
                                                  != 
                                                  (0xc00000U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x17U])))) 
                                      << 0x17U)) | 
                        ((0x400000U & ((IData)(((0U 
                                                 != 
                                                 (0x3000000U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x16U])) 
                                                | (0U 
                                                   != 
                                                   (0x300000U 
                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x17U])))) 
                                       << 0x16U)) | 
                         ((0x200000U & ((IData)(((0U 
                                                  != 
                                                  (0xc000000U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x15U])) 
                                                 | (0U 
                                                    != 
                                                    (0xc00000U 
                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x16U])))) 
                                        << 0x15U)) 
                          | __Vtemp_117[5U]))));
    __Vtemp_126[5U] = ((0x20000000U & ((IData)(((0U 
                                                 != 
                                                 (0xc0U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x17U])) 
                                                | (0U 
                                                   != 
                                                   (0xcU 
                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x18U])))) 
                                       << 0x1dU)) | 
                       ((0x10000000U & ((IData)(((0U 
                                                  != 
                                                  (0x30U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x17U])) 
                                                 | (0U 
                                                    != 
                                                    (3U 
                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x18U])))) 
                                        << 0x1cU)) 
                        | (((IData)((0U != (0xc000000cU 
                                            & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x17U]))) 
                            << 0x1bU) | (((IData)((0U 
                                                   != 
                                                   (0x30000003U 
                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x17U]))) 
                                          << 0x1aU) 
                                         | ((0x2000000U 
                                             & ((IData)(
                                                        ((0U 
                                                          != 
                                                          (0xc0000000U 
                                                           & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x16U])) 
                                                         | (0U 
                                                            != 
                                                            (0xc000000U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x17U])))) 
                                                << 0x19U)) 
                                            | __Vtemp_121[5U])))));
    vlSelf->img_out[0U] = __Vtemp_1[0U];
    vlSelf->img_out[1U] = __Vtemp_1[1U];
    vlSelf->img_out[2U] = (((IData)(((0U != (0xc0U 
                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xbU])) 
                                     | (0U != (0xcU 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xcU])))) 
                            << 0x1fU) | ((0x40000000U 
                                          & ((IData)(
                                                     ((0U 
                                                       != 
                                                       (0x30U 
                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xbU])) 
                                                      | (0U 
                                                         != 
                                                         (3U 
                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xcU])))) 
                                             << 0x1eU)) 
                                         | (((IData)(
                                                     (0U 
                                                      != 
                                                      (0xc000000cU 
                                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xbU]))) 
                                             << 0x1dU) 
                                            | __Vtemp_29[2U])));
    vlSelf->img_out[3U] = (((IData)(((0U != (0xc000000U 
                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xfU])) 
                                     | (0U != (0xc00000U 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x10U])))) 
                            << 0x1fU) | ((0x40000000U 
                                          & ((IData)(
                                                     ((0U 
                                                       != 
                                                       (0x3000000U 
                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xfU])) 
                                                      | (0U 
                                                         != 
                                                         (0x300000U 
                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x10U])))) 
                                             << 0x1eU)) 
                                         | ((0x20000000U 
                                             & ((IData)(
                                                        ((0U 
                                                          != 
                                                          (0xc000000U 
                                                           & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xeU])) 
                                                         | (0U 
                                                            != 
                                                            (0xc00000U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0xfU])))) 
                                                << 0x1dU)) 
                                            | __Vtemp_61[3U])));
    vlSelf->img_out[4U] = (((IData)(((0U != (0xc0000U 
                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x13U])) 
                                     | (0U != (0xc000U 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x14U])))) 
                            << 0x1fU) | ((0x40000000U 
                                          & ((IData)(
                                                     ((0U 
                                                       != 
                                                       (0x30000U 
                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x13U])) 
                                                      | (0U 
                                                         != 
                                                         (0x3000U 
                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x14U])))) 
                                             << 0x1eU)) 
                                         | ((0x20000000U 
                                             & ((IData)(
                                                        ((0U 
                                                          != 
                                                          (0xc000U 
                                                           & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x13U])) 
                                                         | (0U 
                                                            != 
                                                            (0xc00U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x14U])))) 
                                                << 0x1dU)) 
                                            | __Vtemp_93[4U])));
    vlSelf->img_out[5U] = (((IData)(((0U != (0xc00U 
                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x17U])) 
                                     | (0U != (0xc0U 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x18U])))) 
                            << 0x1fU) | ((0x40000000U 
                                          & ((IData)(
                                                     ((0U 
                                                       != 
                                                       (0x300U 
                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x17U])) 
                                                      | (0U 
                                                         != 
                                                         (0x30U 
                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x18U])))) 
                                             << 0x1eU)) 
                                         | __Vtemp_126[5U]));
    vlSelf->img_out[6U] = ((8U & ((IData)(((0U != (0xc0000U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x17U])) 
                                           | (0U != 
                                              (0xc000U 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x18U])))) 
                                  << 3U)) | ((4U & 
                                              ((IData)(
                                                       ((0U 
                                                         != 
                                                         (0x30000U 
                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x17U])) 
                                                        | (0U 
                                                           != 
                                                           (0x3000U 
                                                            & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x18U])))) 
                                               << 2U)) 
                                             | ((2U 
                                                 & ((IData)(
                                                            ((0U 
                                                              != 
                                                              (0xc000U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x17U])) 
                                                             | (0U 
                                                                != 
                                                                (0xc00U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x18U])))) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             ((0U 
                                                               != 
                                                               (0x3000U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x17U])) 
                                                              | (0U 
                                                                 != 
                                                                 (0x300U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__1__KET____DOT__core.img_out[0x18U]))))))));
}

VL_ATTR_COLD void Vdut_MaxPoolCore__I1c___stl_sequent__TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__2__KET____DOT__maxpool__0(Vdut_MaxPoolCore__I1c* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdut_MaxPoolCore__I1c___stl_sequent__TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__2__KET____DOT__maxpool__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_25;
    VlWide<3>/*95:0*/ __Vtemp_29;
    VlWide<4>/*127:0*/ __Vtemp_36;
    VlWide<4>/*127:0*/ __Vtemp_40;
    VlWide<4>/*127:0*/ __Vtemp_44;
    VlWide<4>/*127:0*/ __Vtemp_49;
    VlWide<4>/*127:0*/ __Vtemp_53;
    VlWide<4>/*127:0*/ __Vtemp_57;
    VlWide<4>/*127:0*/ __Vtemp_61;
    VlWide<5>/*159:0*/ __Vtemp_69;
    VlWide<5>/*159:0*/ __Vtemp_73;
    VlWide<5>/*159:0*/ __Vtemp_77;
    VlWide<5>/*159:0*/ __Vtemp_81;
    VlWide<5>/*159:0*/ __Vtemp_85;
    VlWide<5>/*159:0*/ __Vtemp_89;
    VlWide<5>/*159:0*/ __Vtemp_93;
    VlWide<6>/*191:0*/ __Vtemp_100;
    VlWide<6>/*191:0*/ __Vtemp_105;
    VlWide<6>/*191:0*/ __Vtemp_109;
    VlWide<6>/*191:0*/ __Vtemp_113;
    VlWide<6>/*191:0*/ __Vtemp_117;
    VlWide<6>/*191:0*/ __Vtemp_121;
    VlWide<6>/*191:0*/ __Vtemp_126;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)((1U & (IData)(
                                                            ((0U 
                                                              != 
                                                              (0xc000U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[7U])) 
                                                             | (0U 
                                                                != 
                                                                (0xc00U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[8U]))))))) 
                              << 0x3fU) | (((QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       ((0U 
                                                                         != 
                                                                         (0x3000U 
                                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[7U])) 
                                                                        | (0U 
                                                                           != 
                                                                           (0x300U 
                                                                            & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[8U]))))))) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          ((0U 
                                                                            != 
                                                                            (0xc00U 
                                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[7U])) 
                                                                           | (0U 
                                                                              != 
                                                                              (0xc0U 
                                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[8U]))))))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             ((0U 
                                                                               != 
                                                                               (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[7U])) 
                                                                              | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[8U]))))))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[7U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[8U]))))))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[7U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[8U]))))))) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0xc000000cU 
                                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[7U])))) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0x30000003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[7U])))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000000cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[6U])))) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[6U])))) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[6U]))))))) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[6U]))))))) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[6U]))))))) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[4U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[5U]))))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[4U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[5U]))))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[4U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[5U]))))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[4U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[5U]))))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000000cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[4U]))))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[4U]))))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[4U]))))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[4U]))))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000000cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])))) 
                                                                                << 2U)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000000cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U]))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_1[1U] = (IData)(((((QData)((IData)((1U 
                                                & (IData)(
                                                          ((0U 
                                                            != 
                                                            (0xc000U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[7U])) 
                                                           | (0U 
                                                              != 
                                                              (0xc00U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[8U]))))))) 
                               << 0x3fU) | (((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        ((0U 
                                                                          != 
                                                                          (0x3000U 
                                                                           & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[7U])) 
                                                                         | (0U 
                                                                            != 
                                                                            (0x300U 
                                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[8U]))))))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           ((0U 
                                                                             != 
                                                                             (0xc00U 
                                                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[7U])) 
                                                                            | (0U 
                                                                               != 
                                                                               (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[8U]))))))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[7U])) 
                                                                               | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[8U]))))))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[7U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[8U]))))))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[7U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[8U]))))))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (0U 
                                                                             != 
                                                                             (0xc000000cU 
                                                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[7U])))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[7U])))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000000cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[6U])))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[6U])))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[6U]))))))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[6U]))))))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[6U]))))))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[4U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[5U]))))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[4U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[5U]))))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[4U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[5U]))))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[4U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[5U]))))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000000cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[4U]))))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[4U]))))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[4U]))))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[4U]))))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000000cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[1U])))) 
                                                                                << 2U)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000000cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U]))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0U])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                             >> 0x20U));
    __Vtemp_4[2U] = ((8U & ((IData)(((0U != (0xc00000U 
                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[7U])) 
                                     | (0U != (0xc0000U 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[8U])))) 
                            << 3U)) | ((4U & ((IData)(
                                                      ((0U 
                                                        != 
                                                        (0x300000U 
                                                         & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[7U])) 
                                                       | (0U 
                                                          != 
                                                          (0x30000U 
                                                           & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[8U])))) 
                                              << 2U)) 
                                       | ((2U & ((IData)(
                                                         ((0U 
                                                           != 
                                                           (0xc0000U 
                                                            & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[7U])) 
                                                          | (0U 
                                                             != 
                                                             (0xc000U 
                                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[8U])))) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          ((0U 
                                                            != 
                                                            (0x30000U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[7U])) 
                                                           | (0U 
                                                              != 
                                                              (0x3000U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[8U]))))))));
    __Vtemp_8[2U] = ((0x80U & ((IData)(((0U != (0xc000000U 
                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[8U])) 
                                        | (0U != (0xc00000U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[9U])))) 
                               << 7U)) | ((0x40U & 
                                           ((IData)(
                                                    ((0U 
                                                      != 
                                                      (0x3000000U 
                                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[8U])) 
                                                     | (0U 
                                                        != 
                                                        (0x300000U 
                                                         & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[9U])))) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & ((IData)(
                                                         ((0U 
                                                           != 
                                                           (0xc000000U 
                                                            & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[7U])) 
                                                          | (0U 
                                                             != 
                                                             (0xc00000U 
                                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[8U])))) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & ((IData)(
                                                            ((0U 
                                                              != 
                                                              (0x3000000U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[7U])) 
                                                             | (0U 
                                                                != 
                                                                (0x300000U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[8U])))) 
                                                    << 4U)) 
                                                | __Vtemp_4[2U]))));
    __Vtemp_13[2U] = ((0x1000U & ((IData)(((0U != (0x30U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[9U])) 
                                           | (0U != 
                                              (3U & 
                                               vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xaU])))) 
                                  << 0xcU)) | (((IData)(
                                                        (0U 
                                                         != 
                                                         (0xc000000cU 
                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[9U]))) 
                                                << 0xbU) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x30000003U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[9U]))) 
                                                   << 0xaU) 
                                                  | ((0x200U 
                                                      & ((IData)(
                                                                 ((0U 
                                                                   != 
                                                                   (0xc0000000U 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[8U])) 
                                                                  | (0U 
                                                                     != 
                                                                     (0xc000000U 
                                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[9U])))) 
                                                         << 9U)) 
                                                     | ((0x100U 
                                                         & ((IData)(
                                                                    ((0U 
                                                                      != 
                                                                      (0x30000000U 
                                                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[8U])) 
                                                                     | (0U 
                                                                        != 
                                                                        (0x3000000U 
                                                                         & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[9U])))) 
                                                            << 8U)) 
                                                        | __Vtemp_8[2U])))));
    __Vtemp_17[2U] = ((0x10000U & ((IData)(((0U != 
                                             (0x3000U 
                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[9U])) 
                                            | (0U != 
                                               (0x300U 
                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xaU])))) 
                                   << 0x10U)) | ((0x8000U 
                                                  & ((IData)(
                                                             ((0U 
                                                               != 
                                                               (0xc00U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[9U])) 
                                                              | (0U 
                                                                 != 
                                                                 (0xc0U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xaU])))) 
                                                     << 0xfU)) 
                                                 | ((0x4000U 
                                                     & ((IData)(
                                                                ((0U 
                                                                  != 
                                                                  (0x300U 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[9U])) 
                                                                 | (0U 
                                                                    != 
                                                                    (0x30U 
                                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xaU])))) 
                                                        << 0xeU)) 
                                                    | ((0x2000U 
                                                        & ((IData)(
                                                                   ((0U 
                                                                     != 
                                                                     (0xc0U 
                                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[9U])) 
                                                                    | (0U 
                                                                       != 
                                                                       (0xcU 
                                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xaU])))) 
                                                           << 0xdU)) 
                                                       | __Vtemp_13[2U]))));
    __Vtemp_21[2U] = ((0x100000U & ((IData)(((0U != 
                                              (0x30000U 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xaU])) 
                                             | (0U 
                                                != 
                                                (0x3000U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xbU])))) 
                                    << 0x14U)) | ((0x80000U 
                                                   & ((IData)(
                                                              ((0U 
                                                                != 
                                                                (0xc0000U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[9U])) 
                                                               | (0U 
                                                                  != 
                                                                  (0xc000U 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xaU])))) 
                                                      << 0x13U)) 
                                                  | ((0x40000U 
                                                      & ((IData)(
                                                                 ((0U 
                                                                   != 
                                                                   (0x30000U 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[9U])) 
                                                                  | (0U 
                                                                     != 
                                                                     (0x3000U 
                                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xaU])))) 
                                                         << 0x12U)) 
                                                     | ((0x20000U 
                                                         & ((IData)(
                                                                    ((0U 
                                                                      != 
                                                                      (0xc000U 
                                                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[9U])) 
                                                                     | (0U 
                                                                        != 
                                                                        (0xc00U 
                                                                         & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xaU])))) 
                                                            << 0x11U)) 
                                                        | __Vtemp_17[2U]))));
    __Vtemp_25[2U] = ((0x1000000U & ((IData)(((0U != 
                                               (0x3000000U 
                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xaU])) 
                                              | (0U 
                                                 != 
                                                 (0x300000U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xbU])))) 
                                     << 0x18U)) | (
                                                   (0x800000U 
                                                    & ((IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0xc00000U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xaU])) 
                                                                | (0U 
                                                                   != 
                                                                   (0xc0000U 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xbU])))) 
                                                       << 0x17U)) 
                                                   | ((0x400000U 
                                                       & ((IData)(
                                                                  ((0U 
                                                                    != 
                                                                    (0x300000U 
                                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xaU])) 
                                                                   | (0U 
                                                                      != 
                                                                      (0x30000U 
                                                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xbU])))) 
                                                          << 0x16U)) 
                                                      | ((0x200000U 
                                                          & ((IData)(
                                                                     ((0U 
                                                                       != 
                                                                       (0xc0000U 
                                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xaU])) 
                                                                      | (0U 
                                                                         != 
                                                                         (0xc000U 
                                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xbU])))) 
                                                             << 0x15U)) 
                                                         | __Vtemp_21[2U]))));
    __Vtemp_29[2U] = (((IData)((0U != (0x30000003U 
                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xbU]))) 
                       << 0x1cU) | ((0x8000000U & ((IData)(
                                                           ((0U 
                                                             != 
                                                             (0xc0000000U 
                                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xaU])) 
                                                            | (0U 
                                                               != 
                                                               (0xc000000U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xbU])))) 
                                                   << 0x1bU)) 
                                    | ((0x4000000U 
                                        & ((IData)(
                                                   ((0U 
                                                     != 
                                                     (0x30000000U 
                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xaU])) 
                                                    | (0U 
                                                       != 
                                                       (0x3000000U 
                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xbU])))) 
                                           << 0x1aU)) 
                                       | ((0x2000000U 
                                           & ((IData)(
                                                      ((0U 
                                                        != 
                                                        (0xc000000U 
                                                         & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xaU])) 
                                                       | (0U 
                                                          != 
                                                          (0xc00000U 
                                                           & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xbU])))) 
                                              << 0x19U)) 
                                          | __Vtemp_25[2U]))));
    __Vtemp_36[3U] = ((8U & ((IData)(((0U != (0xc00U 
                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xcU])) 
                                      | (0U != (0xc0U 
                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xdU])))) 
                             << 3U)) | ((4U & ((IData)(
                                                       ((0U 
                                                         != 
                                                         (0x300U 
                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xcU])) 
                                                        | (0U 
                                                           != 
                                                           (0x30U 
                                                            & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xdU])))) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          ((0U 
                                                            != 
                                                            (0xc00U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xbU])) 
                                                           | (0U 
                                                              != 
                                                              (0xc0U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xcU])))) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           ((0U 
                                                             != 
                                                             (0x300U 
                                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xbU])) 
                                                            | (0U 
                                                               != 
                                                               (0x30U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xcU]))))))));
    __Vtemp_40[3U] = ((0x80U & ((IData)(((0U != (0xc0000U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xcU])) 
                                         | (0U != (0xc000U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xdU])))) 
                                << 7U)) | ((0x40U & 
                                            ((IData)(
                                                     ((0U 
                                                       != 
                                                       (0x30000U 
                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xcU])) 
                                                      | (0U 
                                                         != 
                                                         (0x3000U 
                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xdU])))) 
                                             << 6U)) 
                                           | ((0x20U 
                                               & ((IData)(
                                                          ((0U 
                                                            != 
                                                            (0xc000U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xcU])) 
                                                           | (0U 
                                                              != 
                                                              (0xc00U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xdU])))) 
                                                  << 5U)) 
                                              | ((0x10U 
                                                  & ((IData)(
                                                             ((0U 
                                                               != 
                                                               (0x3000U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xcU])) 
                                                              | (0U 
                                                                 != 
                                                                 (0x300U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xdU])))) 
                                                     << 4U)) 
                                                 | __Vtemp_36[3U]))));
    __Vtemp_44[3U] = ((0x800U & ((IData)(((0U != (0xc000000U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xcU])) 
                                          | (0U != 
                                             (0xc00000U 
                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xdU])))) 
                                 << 0xbU)) | ((0x400U 
                                               & ((IData)(
                                                          ((0U 
                                                            != 
                                                            (0x3000000U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xcU])) 
                                                           | (0U 
                                                              != 
                                                              (0x300000U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xdU])))) 
                                                  << 0xaU)) 
                                              | ((0x200U 
                                                  & ((IData)(
                                                             ((0U 
                                                               != 
                                                               (0xc00000U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xcU])) 
                                                              | (0U 
                                                                 != 
                                                                 (0xc0000U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xdU])))) 
                                                     << 9U)) 
                                                 | ((0x100U 
                                                     & ((IData)(
                                                                ((0U 
                                                                  != 
                                                                  (0x300000U 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xcU])) 
                                                                 | (0U 
                                                                    != 
                                                                    (0x30000U 
                                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xdU])))) 
                                                        << 8U)) 
                                                    | __Vtemp_40[3U]))));
    __Vtemp_49[3U] = (((IData)((0U != (0x30000003U 
                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xeU]))) 
                       << 0x10U) | (((IData)((0U != 
                                              (0xc000000cU 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xdU]))) 
                                     << 0xfU) | (((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000003U 
                                                            & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xdU]))) 
                                                  << 0xeU) 
                                                 | ((0x2000U 
                                                     & ((IData)(
                                                                ((0U 
                                                                  != 
                                                                  (0xc0000000U 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xcU])) 
                                                                 | (0U 
                                                                    != 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xdU])))) 
                                                        << 0xdU)) 
                                                    | ((0x1000U 
                                                        & ((IData)(
                                                                   ((0U 
                                                                     != 
                                                                     (0x30000000U 
                                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xcU])) 
                                                                    | (0U 
                                                                       != 
                                                                       (0x3000000U 
                                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xdU])))) 
                                                           << 0xcU)) 
                                                       | __Vtemp_44[3U])))));
    __Vtemp_53[3U] = ((0x100000U & ((IData)(((0U != 
                                              (0x300U 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xeU])) 
                                             | (0U 
                                                != 
                                                (0x30U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xfU])))) 
                                    << 0x14U)) | ((0x80000U 
                                                   & ((IData)(
                                                              ((0U 
                                                                != 
                                                                (0xc0U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xeU])) 
                                                               | (0U 
                                                                  != 
                                                                  (0xcU 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xfU])))) 
                                                      << 0x13U)) 
                                                  | ((0x40000U 
                                                      & ((IData)(
                                                                 ((0U 
                                                                   != 
                                                                   (0x30U 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xeU])) 
                                                                  | (0U 
                                                                     != 
                                                                     (3U 
                                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xfU])))) 
                                                         << 0x12U)) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0xc000000cU 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xeU]))) 
                                                         << 0x11U) 
                                                        | __Vtemp_49[3U]))));
    __Vtemp_57[3U] = ((0x1000000U & ((IData)(((0U != 
                                               (0x30000U 
                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xeU])) 
                                              | (0U 
                                                 != 
                                                 (0x3000U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xfU])))) 
                                     << 0x18U)) | (
                                                   (0x800000U 
                                                    & ((IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0xc000U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xeU])) 
                                                                | (0U 
                                                                   != 
                                                                   (0xc00U 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xfU])))) 
                                                       << 0x17U)) 
                                                   | ((0x400000U 
                                                       & ((IData)(
                                                                  ((0U 
                                                                    != 
                                                                    (0x3000U 
                                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xeU])) 
                                                                   | (0U 
                                                                      != 
                                                                      (0x300U 
                                                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xfU])))) 
                                                          << 0x16U)) 
                                                      | ((0x200000U 
                                                          & ((IData)(
                                                                     ((0U 
                                                                       != 
                                                                       (0xc00U 
                                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xeU])) 
                                                                      | (0U 
                                                                         != 
                                                                         (0xc0U 
                                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xfU])))) 
                                                             << 0x15U)) 
                                                         | __Vtemp_53[3U]))));
    __Vtemp_61[3U] = ((0x10000000U & ((IData)(((0U 
                                                != 
                                                (0x3000000U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xeU])) 
                                               | (0U 
                                                  != 
                                                  (0x300000U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xfU])))) 
                                      << 0x1cU)) | 
                      ((0x8000000U & ((IData)(((0U 
                                                != 
                                                (0xc00000U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xeU])) 
                                               | (0U 
                                                  != 
                                                  (0xc0000U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xfU])))) 
                                      << 0x1bU)) | 
                       ((0x4000000U & ((IData)(((0U 
                                                 != 
                                                 (0x300000U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xeU])) 
                                                | (0U 
                                                   != 
                                                   (0x30000U 
                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xfU])))) 
                                       << 0x1aU)) | 
                        ((0x2000000U & ((IData)(((0U 
                                                  != 
                                                  (0xc0000U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xeU])) 
                                                 | (0U 
                                                    != 
                                                    (0xc000U 
                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xfU])))) 
                                        << 0x19U)) 
                         | __Vtemp_57[3U]))));
    __Vtemp_69[4U] = ((0x10U & ((IData)(((0U != (0x30U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x10U])) 
                                         | (0U != (3U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x11U])))) 
                                << 4U)) | (((IData)(
                                                    (0U 
                                                     != 
                                                     (0xc000000cU 
                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x10U]))) 
                                            << 3U) 
                                           | (((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30000003U 
                                                         & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x10U]))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((IData)(
                                                             ((0U 
                                                               != 
                                                               (0xc0000000U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xfU])) 
                                                              | (0U 
                                                                 != 
                                                                 (0xc000000U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x10U])))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              ((0U 
                                                                != 
                                                                (0x30000000U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xfU])) 
                                                               | (0U 
                                                                  != 
                                                                  (0x3000000U 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x10U])))))))));
    __Vtemp_73[4U] = ((0x100U & ((IData)(((0U != (0x3000U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x10U])) 
                                          | (0U != 
                                             (0x300U 
                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x11U])))) 
                                 << 8U)) | ((0x80U 
                                             & ((IData)(
                                                        ((0U 
                                                          != 
                                                          (0xc00U 
                                                           & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x10U])) 
                                                         | (0U 
                                                            != 
                                                            (0xc0U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x11U])))) 
                                                << 7U)) 
                                            | ((0x40U 
                                                & ((IData)(
                                                           ((0U 
                                                             != 
                                                             (0x300U 
                                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x10U])) 
                                                            | (0U 
                                                               != 
                                                               (0x30U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x11U])))) 
                                                   << 6U)) 
                                               | ((0x20U 
                                                   & ((IData)(
                                                              ((0U 
                                                                != 
                                                                (0xc0U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x10U])) 
                                                               | (0U 
                                                                  != 
                                                                  (0xcU 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x11U])))) 
                                                      << 5U)) 
                                                  | __Vtemp_69[4U]))));
    __Vtemp_77[4U] = ((0x1000U & ((IData)(((0U != (0x30000U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x11U])) 
                                           | (0U != 
                                              (0x3000U 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x12U])))) 
                                  << 0xcU)) | ((0x800U 
                                                & ((IData)(
                                                           ((0U 
                                                             != 
                                                             (0xc0000U 
                                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x10U])) 
                                                            | (0U 
                                                               != 
                                                               (0xc000U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x11U])))) 
                                                   << 0xbU)) 
                                               | ((0x400U 
                                                   & ((IData)(
                                                              ((0U 
                                                                != 
                                                                (0x30000U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x10U])) 
                                                               | (0U 
                                                                  != 
                                                                  (0x3000U 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x11U])))) 
                                                      << 0xaU)) 
                                                  | ((0x200U 
                                                      & ((IData)(
                                                                 ((0U 
                                                                   != 
                                                                   (0xc000U 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x10U])) 
                                                                  | (0U 
                                                                     != 
                                                                     (0xc00U 
                                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x11U])))) 
                                                         << 9U)) 
                                                     | __Vtemp_73[4U]))));
    __Vtemp_81[4U] = ((0x10000U & ((IData)(((0U != 
                                             (0x3000000U 
                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x11U])) 
                                            | (0U != 
                                               (0x300000U 
                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x12U])))) 
                                   << 0x10U)) | ((0x8000U 
                                                  & ((IData)(
                                                             ((0U 
                                                               != 
                                                               (0xc00000U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x11U])) 
                                                              | (0U 
                                                                 != 
                                                                 (0xc0000U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x12U])))) 
                                                     << 0xfU)) 
                                                 | ((0x4000U 
                                                     & ((IData)(
                                                                ((0U 
                                                                  != 
                                                                  (0x300000U 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x11U])) 
                                                                 | (0U 
                                                                    != 
                                                                    (0x30000U 
                                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x12U])))) 
                                                        << 0xeU)) 
                                                    | ((0x2000U 
                                                        & ((IData)(
                                                                   ((0U 
                                                                     != 
                                                                     (0xc0000U 
                                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x11U])) 
                                                                    | (0U 
                                                                       != 
                                                                       (0xc000U 
                                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x12U])))) 
                                                           << 0xdU)) 
                                                       | __Vtemp_77[4U]))));
    __Vtemp_85[4U] = (((IData)((0U != (0x30000003U 
                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x12U]))) 
                       << 0x14U) | ((0x80000U & ((IData)(
                                                         ((0U 
                                                           != 
                                                           (0xc0000000U 
                                                            & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x11U])) 
                                                          | (0U 
                                                             != 
                                                             (0xc000000U 
                                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x12U])))) 
                                                 << 0x13U)) 
                                    | ((0x40000U & 
                                        ((IData)(((0U 
                                                   != 
                                                   (0x30000000U 
                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x11U])) 
                                                  | (0U 
                                                     != 
                                                     (0x3000000U 
                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x12U])))) 
                                         << 0x12U)) 
                                       | ((0x20000U 
                                           & ((IData)(
                                                      ((0U 
                                                        != 
                                                        (0xc000000U 
                                                         & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x11U])) 
                                                       | (0U 
                                                          != 
                                                          (0xc00000U 
                                                           & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x12U])))) 
                                              << 0x11U)) 
                                          | __Vtemp_81[4U]))));
    __Vtemp_89[4U] = ((0x1000000U & ((IData)(((0U != 
                                               (0x300U 
                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x12U])) 
                                              | (0U 
                                                 != 
                                                 (0x30U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x13U])))) 
                                     << 0x18U)) | (
                                                   (0x800000U 
                                                    & ((IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0xc0U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x12U])) 
                                                                | (0U 
                                                                   != 
                                                                   (0xcU 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x13U])))) 
                                                       << 0x17U)) 
                                                   | ((0x400000U 
                                                       & ((IData)(
                                                                  ((0U 
                                                                    != 
                                                                    (0x30U 
                                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x12U])) 
                                                                   | (0U 
                                                                      != 
                                                                      (3U 
                                                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x13U])))) 
                                                          << 0x16U)) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xc000000cU 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x12U]))) 
                                                          << 0x15U) 
                                                         | __Vtemp_85[4U]))));
    __Vtemp_93[4U] = ((0x10000000U & ((IData)(((0U 
                                                != 
                                                (0x3000U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x13U])) 
                                               | (0U 
                                                  != 
                                                  (0x300U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x14U])))) 
                                      << 0x1cU)) | 
                      ((0x8000000U & ((IData)(((0U 
                                                != 
                                                (0xc00U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x13U])) 
                                               | (0U 
                                                  != 
                                                  (0xc0U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x14U])))) 
                                      << 0x1bU)) | 
                       ((0x4000000U & ((IData)(((0U 
                                                 != 
                                                 (0x300U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x13U])) 
                                                | (0U 
                                                   != 
                                                   (0x30U 
                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x14U])))) 
                                       << 0x1aU)) | 
                        ((0x2000000U & ((IData)(((0U 
                                                  != 
                                                  (0xc00U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x12U])) 
                                                 | (0U 
                                                    != 
                                                    (0xc0U 
                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x13U])))) 
                                        << 0x19U)) 
                         | __Vtemp_89[4U]))));
    __Vtemp_100[5U] = ((8U & ((IData)(((0U != (0xc000000U 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x13U])) 
                                       | (0U != (0xc00000U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x14U])))) 
                              << 3U)) | ((4U & ((IData)(
                                                        ((0U 
                                                          != 
                                                          (0x3000000U 
                                                           & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x13U])) 
                                                         | (0U 
                                                            != 
                                                            (0x300000U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x14U])))) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           ((0U 
                                                             != 
                                                             (0xc00000U 
                                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x13U])) 
                                                            | (0U 
                                                               != 
                                                               (0xc0000U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x14U])))) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            ((0U 
                                                              != 
                                                              (0x300000U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x13U])) 
                                                             | (0U 
                                                                != 
                                                                (0x30000U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x14U]))))))));
    __Vtemp_105[5U] = (((IData)((0U != (0x30000003U 
                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x15U]))) 
                        << 8U) | (((IData)((0U != (0xc000000cU 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x14U]))) 
                                   << 7U) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (0x30000003U 
                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x14U]))) 
                                              << 6U) 
                                             | ((0x20U 
                                                 & ((IData)(
                                                            ((0U 
                                                              != 
                                                              (0xc0000000U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x13U])) 
                                                             | (0U 
                                                                != 
                                                                (0xc000000U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x14U])))) 
                                                    << 5U)) 
                                                | ((0x10U 
                                                    & ((IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0x30000000U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x13U])) 
                                                                | (0U 
                                                                   != 
                                                                   (0x3000000U 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x14U])))) 
                                                       << 4U)) 
                                                   | __Vtemp_100[5U])))));
    __Vtemp_109[5U] = ((0x1000U & ((IData)(((0U != 
                                             (0x300U 
                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x15U])) 
                                            | (0U != 
                                               (0x30U 
                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x16U])))) 
                                   << 0xcU)) | ((0x800U 
                                                 & ((IData)(
                                                            ((0U 
                                                              != 
                                                              (0xc0U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x15U])) 
                                                             | (0U 
                                                                != 
                                                                (0xcU 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x16U])))) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0x30U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x15U])) 
                                                                | (0U 
                                                                   != 
                                                                   (3U 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x16U])))) 
                                                       << 0xaU)) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0xc000000cU 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x15U]))) 
                                                       << 9U) 
                                                      | __Vtemp_105[5U]))));
    __Vtemp_113[5U] = ((0x10000U & ((IData)(((0U != 
                                              (0x30000U 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x15U])) 
                                             | (0U 
                                                != 
                                                (0x3000U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x16U])))) 
                                    << 0x10U)) | ((0x8000U 
                                                   & ((IData)(
                                                              ((0U 
                                                                != 
                                                                (0xc000U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x15U])) 
                                                               | (0U 
                                                                  != 
                                                                  (0xc00U 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x16U])))) 
                                                      << 0xfU)) 
                                                  | ((0x4000U 
                                                      & ((IData)(
                                                                 ((0U 
                                                                   != 
                                                                   (0x3000U 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x15U])) 
                                                                  | (0U 
                                                                     != 
                                                                     (0x300U 
                                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x16U])))) 
                                                         << 0xeU)) 
                                                     | ((0x2000U 
                                                         & ((IData)(
                                                                    ((0U 
                                                                      != 
                                                                      (0xc00U 
                                                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x15U])) 
                                                                     | (0U 
                                                                        != 
                                                                        (0xc0U 
                                                                         & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x16U])))) 
                                                            << 0xdU)) 
                                                        | __Vtemp_109[5U]))));
    __Vtemp_117[5U] = ((0x100000U & ((IData)(((0U != 
                                               (0x3000000U 
                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x15U])) 
                                              | (0U 
                                                 != 
                                                 (0x300000U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x16U])))) 
                                     << 0x14U)) | (
                                                   (0x80000U 
                                                    & ((IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0xc00000U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x15U])) 
                                                                | (0U 
                                                                   != 
                                                                   (0xc0000U 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x16U])))) 
                                                       << 0x13U)) 
                                                   | ((0x40000U 
                                                       & ((IData)(
                                                                  ((0U 
                                                                    != 
                                                                    (0x300000U 
                                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x15U])) 
                                                                   | (0U 
                                                                      != 
                                                                      (0x30000U 
                                                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x16U])))) 
                                                          << 0x12U)) 
                                                      | ((0x20000U 
                                                          & ((IData)(
                                                                     ((0U 
                                                                       != 
                                                                       (0xc0000U 
                                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x15U])) 
                                                                      | (0U 
                                                                         != 
                                                                         (0xc000U 
                                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x16U])))) 
                                                             << 0x11U)) 
                                                         | __Vtemp_113[5U]))));
    __Vtemp_121[5U] = ((0x1000000U & ((IData)(((0U 
                                                != 
                                                (0x30000000U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x16U])) 
                                               | (0U 
                                                  != 
                                                  (0x3000000U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x17U])))) 
                                      << 0x18U)) | 
                       ((0x800000U & ((IData)(((0U 
                                                != 
                                                (0xc000000U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x16U])) 
                                               | (0U 
                                                  != 
                                                  (0xc00000U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x17U])))) 
                                      << 0x17U)) | 
                        ((0x400000U & ((IData)(((0U 
                                                 != 
                                                 (0x3000000U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x16U])) 
                                                | (0U 
                                                   != 
                                                   (0x300000U 
                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x17U])))) 
                                       << 0x16U)) | 
                         ((0x200000U & ((IData)(((0U 
                                                  != 
                                                  (0xc000000U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x15U])) 
                                                 | (0U 
                                                    != 
                                                    (0xc00000U 
                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x16U])))) 
                                        << 0x15U)) 
                          | __Vtemp_117[5U]))));
    __Vtemp_126[5U] = ((0x20000000U & ((IData)(((0U 
                                                 != 
                                                 (0xc0U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x17U])) 
                                                | (0U 
                                                   != 
                                                   (0xcU 
                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x18U])))) 
                                       << 0x1dU)) | 
                       ((0x10000000U & ((IData)(((0U 
                                                  != 
                                                  (0x30U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x17U])) 
                                                 | (0U 
                                                    != 
                                                    (3U 
                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x18U])))) 
                                        << 0x1cU)) 
                        | (((IData)((0U != (0xc000000cU 
                                            & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x17U]))) 
                            << 0x1bU) | (((IData)((0U 
                                                   != 
                                                   (0x30000003U 
                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x17U]))) 
                                          << 0x1aU) 
                                         | ((0x2000000U 
                                             & ((IData)(
                                                        ((0U 
                                                          != 
                                                          (0xc0000000U 
                                                           & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x16U])) 
                                                         | (0U 
                                                            != 
                                                            (0xc000000U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x17U])))) 
                                                << 0x19U)) 
                                            | __Vtemp_121[5U])))));
    vlSelf->img_out[0U] = __Vtemp_1[0U];
    vlSelf->img_out[1U] = __Vtemp_1[1U];
    vlSelf->img_out[2U] = (((IData)(((0U != (0xc0U 
                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xbU])) 
                                     | (0U != (0xcU 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xcU])))) 
                            << 0x1fU) | ((0x40000000U 
                                          & ((IData)(
                                                     ((0U 
                                                       != 
                                                       (0x30U 
                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xbU])) 
                                                      | (0U 
                                                         != 
                                                         (3U 
                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xcU])))) 
                                             << 0x1eU)) 
                                         | (((IData)(
                                                     (0U 
                                                      != 
                                                      (0xc000000cU 
                                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xbU]))) 
                                             << 0x1dU) 
                                            | __Vtemp_29[2U])));
    vlSelf->img_out[3U] = (((IData)(((0U != (0xc000000U 
                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xfU])) 
                                     | (0U != (0xc00000U 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x10U])))) 
                            << 0x1fU) | ((0x40000000U 
                                          & ((IData)(
                                                     ((0U 
                                                       != 
                                                       (0x3000000U 
                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xfU])) 
                                                      | (0U 
                                                         != 
                                                         (0x300000U 
                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x10U])))) 
                                             << 0x1eU)) 
                                         | ((0x20000000U 
                                             & ((IData)(
                                                        ((0U 
                                                          != 
                                                          (0xc000000U 
                                                           & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xeU])) 
                                                         | (0U 
                                                            != 
                                                            (0xc00000U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0xfU])))) 
                                                << 0x1dU)) 
                                            | __Vtemp_61[3U])));
    vlSelf->img_out[4U] = (((IData)(((0U != (0xc0000U 
                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x13U])) 
                                     | (0U != (0xc000U 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x14U])))) 
                            << 0x1fU) | ((0x40000000U 
                                          & ((IData)(
                                                     ((0U 
                                                       != 
                                                       (0x30000U 
                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x13U])) 
                                                      | (0U 
                                                         != 
                                                         (0x3000U 
                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x14U])))) 
                                             << 0x1eU)) 
                                         | ((0x20000000U 
                                             & ((IData)(
                                                        ((0U 
                                                          != 
                                                          (0xc000U 
                                                           & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x13U])) 
                                                         | (0U 
                                                            != 
                                                            (0xc00U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x14U])))) 
                                                << 0x1dU)) 
                                            | __Vtemp_93[4U])));
    vlSelf->img_out[5U] = (((IData)(((0U != (0xc00U 
                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x17U])) 
                                     | (0U != (0xc0U 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x18U])))) 
                            << 0x1fU) | ((0x40000000U 
                                          & ((IData)(
                                                     ((0U 
                                                       != 
                                                       (0x300U 
                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x17U])) 
                                                      | (0U 
                                                         != 
                                                         (0x30U 
                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x18U])))) 
                                             << 0x1eU)) 
                                         | __Vtemp_126[5U]));
    vlSelf->img_out[6U] = ((8U & ((IData)(((0U != (0xc0000U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x17U])) 
                                           | (0U != 
                                              (0xc000U 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x18U])))) 
                                  << 3U)) | ((4U & 
                                              ((IData)(
                                                       ((0U 
                                                         != 
                                                         (0x30000U 
                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x17U])) 
                                                        | (0U 
                                                           != 
                                                           (0x3000U 
                                                            & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x18U])))) 
                                               << 2U)) 
                                             | ((2U 
                                                 & ((IData)(
                                                            ((0U 
                                                              != 
                                                              (0xc000U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x17U])) 
                                                             | (0U 
                                                                != 
                                                                (0xc00U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x18U])))) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             ((0U 
                                                               != 
                                                               (0x3000U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x17U])) 
                                                              | (0U 
                                                                 != 
                                                                 (0x300U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__2__KET____DOT__core.img_out[0x18U]))))))));
}

VL_ATTR_COLD void Vdut_MaxPoolCore__I1c___stl_sequent__TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__3__KET____DOT__maxpool__0(Vdut_MaxPoolCore__I1c* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdut_MaxPoolCore__I1c___stl_sequent__TOP__dut__DOT__pool1__DOT__maxpool_core_gen__BRA__3__KET____DOT__maxpool__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_25;
    VlWide<3>/*95:0*/ __Vtemp_29;
    VlWide<4>/*127:0*/ __Vtemp_36;
    VlWide<4>/*127:0*/ __Vtemp_40;
    VlWide<4>/*127:0*/ __Vtemp_44;
    VlWide<4>/*127:0*/ __Vtemp_49;
    VlWide<4>/*127:0*/ __Vtemp_53;
    VlWide<4>/*127:0*/ __Vtemp_57;
    VlWide<4>/*127:0*/ __Vtemp_61;
    VlWide<5>/*159:0*/ __Vtemp_69;
    VlWide<5>/*159:0*/ __Vtemp_73;
    VlWide<5>/*159:0*/ __Vtemp_77;
    VlWide<5>/*159:0*/ __Vtemp_81;
    VlWide<5>/*159:0*/ __Vtemp_85;
    VlWide<5>/*159:0*/ __Vtemp_89;
    VlWide<5>/*159:0*/ __Vtemp_93;
    VlWide<6>/*191:0*/ __Vtemp_100;
    VlWide<6>/*191:0*/ __Vtemp_105;
    VlWide<6>/*191:0*/ __Vtemp_109;
    VlWide<6>/*191:0*/ __Vtemp_113;
    VlWide<6>/*191:0*/ __Vtemp_117;
    VlWide<6>/*191:0*/ __Vtemp_121;
    VlWide<6>/*191:0*/ __Vtemp_126;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)((1U & (IData)(
                                                            ((0U 
                                                              != 
                                                              (0xc000U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[7U])) 
                                                             | (0U 
                                                                != 
                                                                (0xc00U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[8U]))))))) 
                              << 0x3fU) | (((QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       ((0U 
                                                                         != 
                                                                         (0x3000U 
                                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[7U])) 
                                                                        | (0U 
                                                                           != 
                                                                           (0x300U 
                                                                            & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[8U]))))))) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          ((0U 
                                                                            != 
                                                                            (0xc00U 
                                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[7U])) 
                                                                           | (0U 
                                                                              != 
                                                                              (0xc0U 
                                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[8U]))))))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             ((0U 
                                                                               != 
                                                                               (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[7U])) 
                                                                              | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[8U]))))))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[7U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[8U]))))))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[7U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[8U]))))))) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0xc000000cU 
                                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[7U])))) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0x30000003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[7U])))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000000cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[6U])))) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[6U])))) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[6U]))))))) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[6U]))))))) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[6U]))))))) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[4U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[5U]))))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[4U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[5U]))))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[4U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[5U]))))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[4U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[5U]))))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000000cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[4U]))))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[4U]))))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[4U]))))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[4U]))))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000000cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])))) 
                                                                                << 2U)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000000cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U]))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_1[1U] = (IData)(((((QData)((IData)((1U 
                                                & (IData)(
                                                          ((0U 
                                                            != 
                                                            (0xc000U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[7U])) 
                                                           | (0U 
                                                              != 
                                                              (0xc00U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[8U]))))))) 
                               << 0x3fU) | (((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        ((0U 
                                                                          != 
                                                                          (0x3000U 
                                                                           & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[7U])) 
                                                                         | (0U 
                                                                            != 
                                                                            (0x300U 
                                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[8U]))))))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           ((0U 
                                                                             != 
                                                                             (0xc00U 
                                                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[7U])) 
                                                                            | (0U 
                                                                               != 
                                                                               (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[8U]))))))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[7U])) 
                                                                               | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[8U]))))))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[7U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[8U]))))))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[7U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[8U]))))))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (0U 
                                                                             != 
                                                                             (0xc000000cU 
                                                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[7U])))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[7U])))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000000cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[6U])))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[6U])))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[6U]))))))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[6U]))))))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[6U]))))))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[5U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[6U]))))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[4U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[5U]))))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[4U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[5U]))))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[4U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[5U]))))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[4U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[5U]))))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000000cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[4U]))))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[4U]))))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[4U]))))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[4U]))))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[4U])))) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[3U])))) 
                                                                                << 0x14U)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000000cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U]))) 
                                                                                << 0x12U) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U])))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[2U])))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x3000U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc00U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U])) 
                                                                                | (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[1U])))) 
                                                                                << 2U)) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc000000cU 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U]))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30000003U 
                                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0U])))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                             >> 0x20U));
    __Vtemp_4[2U] = ((8U & ((IData)(((0U != (0xc00000U 
                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[7U])) 
                                     | (0U != (0xc0000U 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[8U])))) 
                            << 3U)) | ((4U & ((IData)(
                                                      ((0U 
                                                        != 
                                                        (0x300000U 
                                                         & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[7U])) 
                                                       | (0U 
                                                          != 
                                                          (0x30000U 
                                                           & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[8U])))) 
                                              << 2U)) 
                                       | ((2U & ((IData)(
                                                         ((0U 
                                                           != 
                                                           (0xc0000U 
                                                            & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[7U])) 
                                                          | (0U 
                                                             != 
                                                             (0xc000U 
                                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[8U])))) 
                                                 << 1U)) 
                                          | (1U & (IData)(
                                                          ((0U 
                                                            != 
                                                            (0x30000U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[7U])) 
                                                           | (0U 
                                                              != 
                                                              (0x3000U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[8U]))))))));
    __Vtemp_8[2U] = ((0x80U & ((IData)(((0U != (0xc000000U 
                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[8U])) 
                                        | (0U != (0xc00000U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[9U])))) 
                               << 7U)) | ((0x40U & 
                                           ((IData)(
                                                    ((0U 
                                                      != 
                                                      (0x3000000U 
                                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[8U])) 
                                                     | (0U 
                                                        != 
                                                        (0x300000U 
                                                         & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[9U])))) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & ((IData)(
                                                         ((0U 
                                                           != 
                                                           (0xc000000U 
                                                            & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[7U])) 
                                                          | (0U 
                                                             != 
                                                             (0xc00000U 
                                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[8U])))) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & ((IData)(
                                                            ((0U 
                                                              != 
                                                              (0x3000000U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[7U])) 
                                                             | (0U 
                                                                != 
                                                                (0x300000U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[8U])))) 
                                                    << 4U)) 
                                                | __Vtemp_4[2U]))));
    __Vtemp_13[2U] = ((0x1000U & ((IData)(((0U != (0x30U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[9U])) 
                                           | (0U != 
                                              (3U & 
                                               vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xaU])))) 
                                  << 0xcU)) | (((IData)(
                                                        (0U 
                                                         != 
                                                         (0xc000000cU 
                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[9U]))) 
                                                << 0xbU) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x30000003U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[9U]))) 
                                                   << 0xaU) 
                                                  | ((0x200U 
                                                      & ((IData)(
                                                                 ((0U 
                                                                   != 
                                                                   (0xc0000000U 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[8U])) 
                                                                  | (0U 
                                                                     != 
                                                                     (0xc000000U 
                                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[9U])))) 
                                                         << 9U)) 
                                                     | ((0x100U 
                                                         & ((IData)(
                                                                    ((0U 
                                                                      != 
                                                                      (0x30000000U 
                                                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[8U])) 
                                                                     | (0U 
                                                                        != 
                                                                        (0x3000000U 
                                                                         & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[9U])))) 
                                                            << 8U)) 
                                                        | __Vtemp_8[2U])))));
    __Vtemp_17[2U] = ((0x10000U & ((IData)(((0U != 
                                             (0x3000U 
                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[9U])) 
                                            | (0U != 
                                               (0x300U 
                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xaU])))) 
                                   << 0x10U)) | ((0x8000U 
                                                  & ((IData)(
                                                             ((0U 
                                                               != 
                                                               (0xc00U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[9U])) 
                                                              | (0U 
                                                                 != 
                                                                 (0xc0U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xaU])))) 
                                                     << 0xfU)) 
                                                 | ((0x4000U 
                                                     & ((IData)(
                                                                ((0U 
                                                                  != 
                                                                  (0x300U 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[9U])) 
                                                                 | (0U 
                                                                    != 
                                                                    (0x30U 
                                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xaU])))) 
                                                        << 0xeU)) 
                                                    | ((0x2000U 
                                                        & ((IData)(
                                                                   ((0U 
                                                                     != 
                                                                     (0xc0U 
                                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[9U])) 
                                                                    | (0U 
                                                                       != 
                                                                       (0xcU 
                                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xaU])))) 
                                                           << 0xdU)) 
                                                       | __Vtemp_13[2U]))));
    __Vtemp_21[2U] = ((0x100000U & ((IData)(((0U != 
                                              (0x30000U 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xaU])) 
                                             | (0U 
                                                != 
                                                (0x3000U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xbU])))) 
                                    << 0x14U)) | ((0x80000U 
                                                   & ((IData)(
                                                              ((0U 
                                                                != 
                                                                (0xc0000U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[9U])) 
                                                               | (0U 
                                                                  != 
                                                                  (0xc000U 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xaU])))) 
                                                      << 0x13U)) 
                                                  | ((0x40000U 
                                                      & ((IData)(
                                                                 ((0U 
                                                                   != 
                                                                   (0x30000U 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[9U])) 
                                                                  | (0U 
                                                                     != 
                                                                     (0x3000U 
                                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xaU])))) 
                                                         << 0x12U)) 
                                                     | ((0x20000U 
                                                         & ((IData)(
                                                                    ((0U 
                                                                      != 
                                                                      (0xc000U 
                                                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[9U])) 
                                                                     | (0U 
                                                                        != 
                                                                        (0xc00U 
                                                                         & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xaU])))) 
                                                            << 0x11U)) 
                                                        | __Vtemp_17[2U]))));
    __Vtemp_25[2U] = ((0x1000000U & ((IData)(((0U != 
                                               (0x3000000U 
                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xaU])) 
                                              | (0U 
                                                 != 
                                                 (0x300000U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xbU])))) 
                                     << 0x18U)) | (
                                                   (0x800000U 
                                                    & ((IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0xc00000U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xaU])) 
                                                                | (0U 
                                                                   != 
                                                                   (0xc0000U 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xbU])))) 
                                                       << 0x17U)) 
                                                   | ((0x400000U 
                                                       & ((IData)(
                                                                  ((0U 
                                                                    != 
                                                                    (0x300000U 
                                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xaU])) 
                                                                   | (0U 
                                                                      != 
                                                                      (0x30000U 
                                                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xbU])))) 
                                                          << 0x16U)) 
                                                      | ((0x200000U 
                                                          & ((IData)(
                                                                     ((0U 
                                                                       != 
                                                                       (0xc0000U 
                                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xaU])) 
                                                                      | (0U 
                                                                         != 
                                                                         (0xc000U 
                                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xbU])))) 
                                                             << 0x15U)) 
                                                         | __Vtemp_21[2U]))));
    __Vtemp_29[2U] = (((IData)((0U != (0x30000003U 
                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xbU]))) 
                       << 0x1cU) | ((0x8000000U & ((IData)(
                                                           ((0U 
                                                             != 
                                                             (0xc0000000U 
                                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xaU])) 
                                                            | (0U 
                                                               != 
                                                               (0xc000000U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xbU])))) 
                                                   << 0x1bU)) 
                                    | ((0x4000000U 
                                        & ((IData)(
                                                   ((0U 
                                                     != 
                                                     (0x30000000U 
                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xaU])) 
                                                    | (0U 
                                                       != 
                                                       (0x3000000U 
                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xbU])))) 
                                           << 0x1aU)) 
                                       | ((0x2000000U 
                                           & ((IData)(
                                                      ((0U 
                                                        != 
                                                        (0xc000000U 
                                                         & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xaU])) 
                                                       | (0U 
                                                          != 
                                                          (0xc00000U 
                                                           & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xbU])))) 
                                              << 0x19U)) 
                                          | __Vtemp_25[2U]))));
    __Vtemp_36[3U] = ((8U & ((IData)(((0U != (0xc00U 
                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xcU])) 
                                      | (0U != (0xc0U 
                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xdU])))) 
                             << 3U)) | ((4U & ((IData)(
                                                       ((0U 
                                                         != 
                                                         (0x300U 
                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xcU])) 
                                                        | (0U 
                                                           != 
                                                           (0x30U 
                                                            & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xdU])))) 
                                               << 2U)) 
                                        | ((2U & ((IData)(
                                                          ((0U 
                                                            != 
                                                            (0xc00U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xbU])) 
                                                           | (0U 
                                                              != 
                                                              (0xc0U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xcU])))) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           ((0U 
                                                             != 
                                                             (0x300U 
                                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xbU])) 
                                                            | (0U 
                                                               != 
                                                               (0x30U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xcU]))))))));
    __Vtemp_40[3U] = ((0x80U & ((IData)(((0U != (0xc0000U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xcU])) 
                                         | (0U != (0xc000U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xdU])))) 
                                << 7U)) | ((0x40U & 
                                            ((IData)(
                                                     ((0U 
                                                       != 
                                                       (0x30000U 
                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xcU])) 
                                                      | (0U 
                                                         != 
                                                         (0x3000U 
                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xdU])))) 
                                             << 6U)) 
                                           | ((0x20U 
                                               & ((IData)(
                                                          ((0U 
                                                            != 
                                                            (0xc000U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xcU])) 
                                                           | (0U 
                                                              != 
                                                              (0xc00U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xdU])))) 
                                                  << 5U)) 
                                              | ((0x10U 
                                                  & ((IData)(
                                                             ((0U 
                                                               != 
                                                               (0x3000U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xcU])) 
                                                              | (0U 
                                                                 != 
                                                                 (0x300U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xdU])))) 
                                                     << 4U)) 
                                                 | __Vtemp_36[3U]))));
    __Vtemp_44[3U] = ((0x800U & ((IData)(((0U != (0xc000000U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xcU])) 
                                          | (0U != 
                                             (0xc00000U 
                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xdU])))) 
                                 << 0xbU)) | ((0x400U 
                                               & ((IData)(
                                                          ((0U 
                                                            != 
                                                            (0x3000000U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xcU])) 
                                                           | (0U 
                                                              != 
                                                              (0x300000U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xdU])))) 
                                                  << 0xaU)) 
                                              | ((0x200U 
                                                  & ((IData)(
                                                             ((0U 
                                                               != 
                                                               (0xc00000U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xcU])) 
                                                              | (0U 
                                                                 != 
                                                                 (0xc0000U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xdU])))) 
                                                     << 9U)) 
                                                 | ((0x100U 
                                                     & ((IData)(
                                                                ((0U 
                                                                  != 
                                                                  (0x300000U 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xcU])) 
                                                                 | (0U 
                                                                    != 
                                                                    (0x30000U 
                                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xdU])))) 
                                                        << 8U)) 
                                                    | __Vtemp_40[3U]))));
    __Vtemp_49[3U] = (((IData)((0U != (0x30000003U 
                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xeU]))) 
                       << 0x10U) | (((IData)((0U != 
                                              (0xc000000cU 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xdU]))) 
                                     << 0xfU) | (((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000003U 
                                                            & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xdU]))) 
                                                  << 0xeU) 
                                                 | ((0x2000U 
                                                     & ((IData)(
                                                                ((0U 
                                                                  != 
                                                                  (0xc0000000U 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xcU])) 
                                                                 | (0U 
                                                                    != 
                                                                    (0xc000000U 
                                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xdU])))) 
                                                        << 0xdU)) 
                                                    | ((0x1000U 
                                                        & ((IData)(
                                                                   ((0U 
                                                                     != 
                                                                     (0x30000000U 
                                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xcU])) 
                                                                    | (0U 
                                                                       != 
                                                                       (0x3000000U 
                                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xdU])))) 
                                                           << 0xcU)) 
                                                       | __Vtemp_44[3U])))));
    __Vtemp_53[3U] = ((0x100000U & ((IData)(((0U != 
                                              (0x300U 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xeU])) 
                                             | (0U 
                                                != 
                                                (0x30U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xfU])))) 
                                    << 0x14U)) | ((0x80000U 
                                                   & ((IData)(
                                                              ((0U 
                                                                != 
                                                                (0xc0U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xeU])) 
                                                               | (0U 
                                                                  != 
                                                                  (0xcU 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xfU])))) 
                                                      << 0x13U)) 
                                                  | ((0x40000U 
                                                      & ((IData)(
                                                                 ((0U 
                                                                   != 
                                                                   (0x30U 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xeU])) 
                                                                  | (0U 
                                                                     != 
                                                                     (3U 
                                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xfU])))) 
                                                         << 0x12U)) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0xc000000cU 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xeU]))) 
                                                         << 0x11U) 
                                                        | __Vtemp_49[3U]))));
    __Vtemp_57[3U] = ((0x1000000U & ((IData)(((0U != 
                                               (0x30000U 
                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xeU])) 
                                              | (0U 
                                                 != 
                                                 (0x3000U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xfU])))) 
                                     << 0x18U)) | (
                                                   (0x800000U 
                                                    & ((IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0xc000U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xeU])) 
                                                                | (0U 
                                                                   != 
                                                                   (0xc00U 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xfU])))) 
                                                       << 0x17U)) 
                                                   | ((0x400000U 
                                                       & ((IData)(
                                                                  ((0U 
                                                                    != 
                                                                    (0x3000U 
                                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xeU])) 
                                                                   | (0U 
                                                                      != 
                                                                      (0x300U 
                                                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xfU])))) 
                                                          << 0x16U)) 
                                                      | ((0x200000U 
                                                          & ((IData)(
                                                                     ((0U 
                                                                       != 
                                                                       (0xc00U 
                                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xeU])) 
                                                                      | (0U 
                                                                         != 
                                                                         (0xc0U 
                                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xfU])))) 
                                                             << 0x15U)) 
                                                         | __Vtemp_53[3U]))));
    __Vtemp_61[3U] = ((0x10000000U & ((IData)(((0U 
                                                != 
                                                (0x3000000U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xeU])) 
                                               | (0U 
                                                  != 
                                                  (0x300000U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xfU])))) 
                                      << 0x1cU)) | 
                      ((0x8000000U & ((IData)(((0U 
                                                != 
                                                (0xc00000U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xeU])) 
                                               | (0U 
                                                  != 
                                                  (0xc0000U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xfU])))) 
                                      << 0x1bU)) | 
                       ((0x4000000U & ((IData)(((0U 
                                                 != 
                                                 (0x300000U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xeU])) 
                                                | (0U 
                                                   != 
                                                   (0x30000U 
                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xfU])))) 
                                       << 0x1aU)) | 
                        ((0x2000000U & ((IData)(((0U 
                                                  != 
                                                  (0xc0000U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xeU])) 
                                                 | (0U 
                                                    != 
                                                    (0xc000U 
                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xfU])))) 
                                        << 0x19U)) 
                         | __Vtemp_57[3U]))));
    __Vtemp_69[4U] = ((0x10U & ((IData)(((0U != (0x30U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x10U])) 
                                         | (0U != (3U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x11U])))) 
                                << 4U)) | (((IData)(
                                                    (0U 
                                                     != 
                                                     (0xc000000cU 
                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x10U]))) 
                                            << 3U) 
                                           | (((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30000003U 
                                                         & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x10U]))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((IData)(
                                                             ((0U 
                                                               != 
                                                               (0xc0000000U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xfU])) 
                                                              | (0U 
                                                                 != 
                                                                 (0xc000000U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x10U])))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              ((0U 
                                                                != 
                                                                (0x30000000U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xfU])) 
                                                               | (0U 
                                                                  != 
                                                                  (0x3000000U 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x10U])))))))));
    __Vtemp_73[4U] = ((0x100U & ((IData)(((0U != (0x3000U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x10U])) 
                                          | (0U != 
                                             (0x300U 
                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x11U])))) 
                                 << 8U)) | ((0x80U 
                                             & ((IData)(
                                                        ((0U 
                                                          != 
                                                          (0xc00U 
                                                           & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x10U])) 
                                                         | (0U 
                                                            != 
                                                            (0xc0U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x11U])))) 
                                                << 7U)) 
                                            | ((0x40U 
                                                & ((IData)(
                                                           ((0U 
                                                             != 
                                                             (0x300U 
                                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x10U])) 
                                                            | (0U 
                                                               != 
                                                               (0x30U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x11U])))) 
                                                   << 6U)) 
                                               | ((0x20U 
                                                   & ((IData)(
                                                              ((0U 
                                                                != 
                                                                (0xc0U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x10U])) 
                                                               | (0U 
                                                                  != 
                                                                  (0xcU 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x11U])))) 
                                                      << 5U)) 
                                                  | __Vtemp_69[4U]))));
    __Vtemp_77[4U] = ((0x1000U & ((IData)(((0U != (0x30000U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x11U])) 
                                           | (0U != 
                                              (0x3000U 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x12U])))) 
                                  << 0xcU)) | ((0x800U 
                                                & ((IData)(
                                                           ((0U 
                                                             != 
                                                             (0xc0000U 
                                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x10U])) 
                                                            | (0U 
                                                               != 
                                                               (0xc000U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x11U])))) 
                                                   << 0xbU)) 
                                               | ((0x400U 
                                                   & ((IData)(
                                                              ((0U 
                                                                != 
                                                                (0x30000U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x10U])) 
                                                               | (0U 
                                                                  != 
                                                                  (0x3000U 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x11U])))) 
                                                      << 0xaU)) 
                                                  | ((0x200U 
                                                      & ((IData)(
                                                                 ((0U 
                                                                   != 
                                                                   (0xc000U 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x10U])) 
                                                                  | (0U 
                                                                     != 
                                                                     (0xc00U 
                                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x11U])))) 
                                                         << 9U)) 
                                                     | __Vtemp_73[4U]))));
    __Vtemp_81[4U] = ((0x10000U & ((IData)(((0U != 
                                             (0x3000000U 
                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x11U])) 
                                            | (0U != 
                                               (0x300000U 
                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x12U])))) 
                                   << 0x10U)) | ((0x8000U 
                                                  & ((IData)(
                                                             ((0U 
                                                               != 
                                                               (0xc00000U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x11U])) 
                                                              | (0U 
                                                                 != 
                                                                 (0xc0000U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x12U])))) 
                                                     << 0xfU)) 
                                                 | ((0x4000U 
                                                     & ((IData)(
                                                                ((0U 
                                                                  != 
                                                                  (0x300000U 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x11U])) 
                                                                 | (0U 
                                                                    != 
                                                                    (0x30000U 
                                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x12U])))) 
                                                        << 0xeU)) 
                                                    | ((0x2000U 
                                                        & ((IData)(
                                                                   ((0U 
                                                                     != 
                                                                     (0xc0000U 
                                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x11U])) 
                                                                    | (0U 
                                                                       != 
                                                                       (0xc000U 
                                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x12U])))) 
                                                           << 0xdU)) 
                                                       | __Vtemp_77[4U]))));
    __Vtemp_85[4U] = (((IData)((0U != (0x30000003U 
                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x12U]))) 
                       << 0x14U) | ((0x80000U & ((IData)(
                                                         ((0U 
                                                           != 
                                                           (0xc0000000U 
                                                            & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x11U])) 
                                                          | (0U 
                                                             != 
                                                             (0xc000000U 
                                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x12U])))) 
                                                 << 0x13U)) 
                                    | ((0x40000U & 
                                        ((IData)(((0U 
                                                   != 
                                                   (0x30000000U 
                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x11U])) 
                                                  | (0U 
                                                     != 
                                                     (0x3000000U 
                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x12U])))) 
                                         << 0x12U)) 
                                       | ((0x20000U 
                                           & ((IData)(
                                                      ((0U 
                                                        != 
                                                        (0xc000000U 
                                                         & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x11U])) 
                                                       | (0U 
                                                          != 
                                                          (0xc00000U 
                                                           & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x12U])))) 
                                              << 0x11U)) 
                                          | __Vtemp_81[4U]))));
    __Vtemp_89[4U] = ((0x1000000U & ((IData)(((0U != 
                                               (0x300U 
                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x12U])) 
                                              | (0U 
                                                 != 
                                                 (0x30U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x13U])))) 
                                     << 0x18U)) | (
                                                   (0x800000U 
                                                    & ((IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0xc0U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x12U])) 
                                                                | (0U 
                                                                   != 
                                                                   (0xcU 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x13U])))) 
                                                       << 0x17U)) 
                                                   | ((0x400000U 
                                                       & ((IData)(
                                                                  ((0U 
                                                                    != 
                                                                    (0x30U 
                                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x12U])) 
                                                                   | (0U 
                                                                      != 
                                                                      (3U 
                                                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x13U])))) 
                                                          << 0x16U)) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xc000000cU 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x12U]))) 
                                                          << 0x15U) 
                                                         | __Vtemp_85[4U]))));
    __Vtemp_93[4U] = ((0x10000000U & ((IData)(((0U 
                                                != 
                                                (0x3000U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x13U])) 
                                               | (0U 
                                                  != 
                                                  (0x300U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x14U])))) 
                                      << 0x1cU)) | 
                      ((0x8000000U & ((IData)(((0U 
                                                != 
                                                (0xc00U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x13U])) 
                                               | (0U 
                                                  != 
                                                  (0xc0U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x14U])))) 
                                      << 0x1bU)) | 
                       ((0x4000000U & ((IData)(((0U 
                                                 != 
                                                 (0x300U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x13U])) 
                                                | (0U 
                                                   != 
                                                   (0x30U 
                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x14U])))) 
                                       << 0x1aU)) | 
                        ((0x2000000U & ((IData)(((0U 
                                                  != 
                                                  (0xc00U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x12U])) 
                                                 | (0U 
                                                    != 
                                                    (0xc0U 
                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x13U])))) 
                                        << 0x19U)) 
                         | __Vtemp_89[4U]))));
    __Vtemp_100[5U] = ((8U & ((IData)(((0U != (0xc000000U 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x13U])) 
                                       | (0U != (0xc00000U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x14U])))) 
                              << 3U)) | ((4U & ((IData)(
                                                        ((0U 
                                                          != 
                                                          (0x3000000U 
                                                           & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x13U])) 
                                                         | (0U 
                                                            != 
                                                            (0x300000U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x14U])))) 
                                                << 2U)) 
                                         | ((2U & ((IData)(
                                                           ((0U 
                                                             != 
                                                             (0xc00000U 
                                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x13U])) 
                                                            | (0U 
                                                               != 
                                                               (0xc0000U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x14U])))) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            ((0U 
                                                              != 
                                                              (0x300000U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x13U])) 
                                                             | (0U 
                                                                != 
                                                                (0x30000U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x14U]))))))));
    __Vtemp_105[5U] = (((IData)((0U != (0x30000003U 
                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x15U]))) 
                        << 8U) | (((IData)((0U != (0xc000000cU 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x14U]))) 
                                   << 7U) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (0x30000003U 
                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x14U]))) 
                                              << 6U) 
                                             | ((0x20U 
                                                 & ((IData)(
                                                            ((0U 
                                                              != 
                                                              (0xc0000000U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x13U])) 
                                                             | (0U 
                                                                != 
                                                                (0xc000000U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x14U])))) 
                                                    << 5U)) 
                                                | ((0x10U 
                                                    & ((IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0x30000000U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x13U])) 
                                                                | (0U 
                                                                   != 
                                                                   (0x3000000U 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x14U])))) 
                                                       << 4U)) 
                                                   | __Vtemp_100[5U])))));
    __Vtemp_109[5U] = ((0x1000U & ((IData)(((0U != 
                                             (0x300U 
                                              & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x15U])) 
                                            | (0U != 
                                               (0x30U 
                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x16U])))) 
                                   << 0xcU)) | ((0x800U 
                                                 & ((IData)(
                                                            ((0U 
                                                              != 
                                                              (0xc0U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x15U])) 
                                                             | (0U 
                                                                != 
                                                                (0xcU 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x16U])))) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0x30U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x15U])) 
                                                                | (0U 
                                                                   != 
                                                                   (3U 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x16U])))) 
                                                       << 0xaU)) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0xc000000cU 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x15U]))) 
                                                       << 9U) 
                                                      | __Vtemp_105[5U]))));
    __Vtemp_113[5U] = ((0x10000U & ((IData)(((0U != 
                                              (0x30000U 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x15U])) 
                                             | (0U 
                                                != 
                                                (0x3000U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x16U])))) 
                                    << 0x10U)) | ((0x8000U 
                                                   & ((IData)(
                                                              ((0U 
                                                                != 
                                                                (0xc000U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x15U])) 
                                                               | (0U 
                                                                  != 
                                                                  (0xc00U 
                                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x16U])))) 
                                                      << 0xfU)) 
                                                  | ((0x4000U 
                                                      & ((IData)(
                                                                 ((0U 
                                                                   != 
                                                                   (0x3000U 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x15U])) 
                                                                  | (0U 
                                                                     != 
                                                                     (0x300U 
                                                                      & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x16U])))) 
                                                         << 0xeU)) 
                                                     | ((0x2000U 
                                                         & ((IData)(
                                                                    ((0U 
                                                                      != 
                                                                      (0xc00U 
                                                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x15U])) 
                                                                     | (0U 
                                                                        != 
                                                                        (0xc0U 
                                                                         & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x16U])))) 
                                                            << 0xdU)) 
                                                        | __Vtemp_109[5U]))));
    __Vtemp_117[5U] = ((0x100000U & ((IData)(((0U != 
                                               (0x3000000U 
                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x15U])) 
                                              | (0U 
                                                 != 
                                                 (0x300000U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x16U])))) 
                                     << 0x14U)) | (
                                                   (0x80000U 
                                                    & ((IData)(
                                                               ((0U 
                                                                 != 
                                                                 (0xc00000U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x15U])) 
                                                                | (0U 
                                                                   != 
                                                                   (0xc0000U 
                                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x16U])))) 
                                                       << 0x13U)) 
                                                   | ((0x40000U 
                                                       & ((IData)(
                                                                  ((0U 
                                                                    != 
                                                                    (0x300000U 
                                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x15U])) 
                                                                   | (0U 
                                                                      != 
                                                                      (0x30000U 
                                                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x16U])))) 
                                                          << 0x12U)) 
                                                      | ((0x20000U 
                                                          & ((IData)(
                                                                     ((0U 
                                                                       != 
                                                                       (0xc0000U 
                                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x15U])) 
                                                                      | (0U 
                                                                         != 
                                                                         (0xc000U 
                                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x16U])))) 
                                                             << 0x11U)) 
                                                         | __Vtemp_113[5U]))));
    __Vtemp_121[5U] = ((0x1000000U & ((IData)(((0U 
                                                != 
                                                (0x30000000U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x16U])) 
                                               | (0U 
                                                  != 
                                                  (0x3000000U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x17U])))) 
                                      << 0x18U)) | 
                       ((0x800000U & ((IData)(((0U 
                                                != 
                                                (0xc000000U 
                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x16U])) 
                                               | (0U 
                                                  != 
                                                  (0xc00000U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x17U])))) 
                                      << 0x17U)) | 
                        ((0x400000U & ((IData)(((0U 
                                                 != 
                                                 (0x3000000U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x16U])) 
                                                | (0U 
                                                   != 
                                                   (0x300000U 
                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x17U])))) 
                                       << 0x16U)) | 
                         ((0x200000U & ((IData)(((0U 
                                                  != 
                                                  (0xc000000U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x15U])) 
                                                 | (0U 
                                                    != 
                                                    (0xc00000U 
                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x16U])))) 
                                        << 0x15U)) 
                          | __Vtemp_117[5U]))));
    __Vtemp_126[5U] = ((0x20000000U & ((IData)(((0U 
                                                 != 
                                                 (0xc0U 
                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x17U])) 
                                                | (0U 
                                                   != 
                                                   (0xcU 
                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x18U])))) 
                                       << 0x1dU)) | 
                       ((0x10000000U & ((IData)(((0U 
                                                  != 
                                                  (0x30U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x17U])) 
                                                 | (0U 
                                                    != 
                                                    (3U 
                                                     & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x18U])))) 
                                        << 0x1cU)) 
                        | (((IData)((0U != (0xc000000cU 
                                            & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x17U]))) 
                            << 0x1bU) | (((IData)((0U 
                                                   != 
                                                   (0x30000003U 
                                                    & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x17U]))) 
                                          << 0x1aU) 
                                         | ((0x2000000U 
                                             & ((IData)(
                                                        ((0U 
                                                          != 
                                                          (0xc0000000U 
                                                           & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x16U])) 
                                                         | (0U 
                                                            != 
                                                            (0xc000000U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x17U])))) 
                                                << 0x19U)) 
                                            | __Vtemp_121[5U])))));
    vlSelf->img_out[0U] = __Vtemp_1[0U];
    vlSelf->img_out[1U] = __Vtemp_1[1U];
    vlSelf->img_out[2U] = (((IData)(((0U != (0xc0U 
                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xbU])) 
                                     | (0U != (0xcU 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xcU])))) 
                            << 0x1fU) | ((0x40000000U 
                                          & ((IData)(
                                                     ((0U 
                                                       != 
                                                       (0x30U 
                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xbU])) 
                                                      | (0U 
                                                         != 
                                                         (3U 
                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xcU])))) 
                                             << 0x1eU)) 
                                         | (((IData)(
                                                     (0U 
                                                      != 
                                                      (0xc000000cU 
                                                       & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xbU]))) 
                                             << 0x1dU) 
                                            | __Vtemp_29[2U])));
    vlSelf->img_out[3U] = (((IData)(((0U != (0xc000000U 
                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xfU])) 
                                     | (0U != (0xc00000U 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x10U])))) 
                            << 0x1fU) | ((0x40000000U 
                                          & ((IData)(
                                                     ((0U 
                                                       != 
                                                       (0x3000000U 
                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xfU])) 
                                                      | (0U 
                                                         != 
                                                         (0x300000U 
                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x10U])))) 
                                             << 0x1eU)) 
                                         | ((0x20000000U 
                                             & ((IData)(
                                                        ((0U 
                                                          != 
                                                          (0xc000000U 
                                                           & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xeU])) 
                                                         | (0U 
                                                            != 
                                                            (0xc00000U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0xfU])))) 
                                                << 0x1dU)) 
                                            | __Vtemp_61[3U])));
    vlSelf->img_out[4U] = (((IData)(((0U != (0xc0000U 
                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x13U])) 
                                     | (0U != (0xc000U 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x14U])))) 
                            << 0x1fU) | ((0x40000000U 
                                          & ((IData)(
                                                     ((0U 
                                                       != 
                                                       (0x30000U 
                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x13U])) 
                                                      | (0U 
                                                         != 
                                                         (0x3000U 
                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x14U])))) 
                                             << 0x1eU)) 
                                         | ((0x20000000U 
                                             & ((IData)(
                                                        ((0U 
                                                          != 
                                                          (0xc000U 
                                                           & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x13U])) 
                                                         | (0U 
                                                            != 
                                                            (0xc00U 
                                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x14U])))) 
                                                << 0x1dU)) 
                                            | __Vtemp_93[4U])));
    vlSelf->img_out[5U] = (((IData)(((0U != (0xc00U 
                                             & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x17U])) 
                                     | (0U != (0xc0U 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x18U])))) 
                            << 0x1fU) | ((0x40000000U 
                                          & ((IData)(
                                                     ((0U 
                                                       != 
                                                       (0x300U 
                                                        & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x17U])) 
                                                      | (0U 
                                                         != 
                                                         (0x30U 
                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x18U])))) 
                                             << 0x1eU)) 
                                         | __Vtemp_126[5U]));
    vlSelf->img_out[6U] = ((8U & ((IData)(((0U != (0xc0000U 
                                                   & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x17U])) 
                                           | (0U != 
                                              (0xc000U 
                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x18U])))) 
                                  << 3U)) | ((4U & 
                                              ((IData)(
                                                       ((0U 
                                                         != 
                                                         (0x30000U 
                                                          & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x17U])) 
                                                        | (0U 
                                                           != 
                                                           (0x3000U 
                                                            & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x18U])))) 
                                               << 2U)) 
                                             | ((2U 
                                                 & ((IData)(
                                                            ((0U 
                                                              != 
                                                              (0xc000U 
                                                               & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x17U])) 
                                                             | (0U 
                                                                != 
                                                                (0xc00U 
                                                                 & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x18U])))) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             ((0U 
                                                               != 
                                                               (0x3000U 
                                                                & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x17U])) 
                                                              | (0U 
                                                                 != 
                                                                 (0x300U 
                                                                  & vlSymsp->TOP__dut__DOT__conv1__DOT__conv_core_gen__BRA__3__KET____DOT__core.img_out[0x18U]))))))));
}
