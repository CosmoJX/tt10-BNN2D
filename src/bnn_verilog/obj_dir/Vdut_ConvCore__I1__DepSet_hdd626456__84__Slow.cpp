// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "Vdut__pch.h"
#include "Vdut_ConvCore__I1.h"
#include "Vdut__Syms.h"

VL_ATTR_COLD void Vdut_ConvCore__I1___stl_sequent__TOP__dut__DOT__conv__DOT__conv_core_gen__BRA__8__KET____DOT__core__4(Vdut_ConvCore__I1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdut_ConvCore__I1___stl_sequent__TOP__dut__DOT__conv__DOT__conv_core_gen__BRA__8__KET____DOT__core__4\n"); );
    // Body
    vlSelf->__PVT__popcount[0xaU][0xcU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xaU][0xcU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                    >> 1U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 1U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0xcU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xaU][0xcU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0xcU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xaU][0xcU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                    >> 3U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 3U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0xcU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xaU][0xcU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                    >> 4U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 4U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0xcU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xaU][0xcU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                    >> 5U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 5U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0xcU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xaU][0xcU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                    >> 6U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 6U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0xcU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xaU][0xcU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                    >> 7U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 7U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0xdU] = 0U;
    vlSelf->__PVT__popcount[0xaU][0xdU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xaU][0xdU] 
                                            + (((1U 
                                                 & (IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch)) 
                                                == 
                                                (1U 
                                                 & vlSymsp->TOP.dut__DOT__weights
                                                 [8U]))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0xdU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xaU][0xdU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                    >> 1U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 1U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0xdU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xaU][0xdU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0xdU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xaU][0xdU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                    >> 3U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 3U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0xdU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xaU][0xdU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                    >> 4U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 4U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0xdU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xaU][0xdU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                    >> 5U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 5U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0xdU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xaU][0xdU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                    >> 6U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 6U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0xdU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xaU][0xdU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                    >> 7U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 7U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0xeU] = 0U;
    vlSelf->__PVT__popcount[0xaU][0xeU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xaU][0xeU] 
                                            + (((1U 
                                                 & (IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch)) 
                                                == 
                                                (1U 
                                                 & vlSymsp->TOP.dut__DOT__weights
                                                 [8U]))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0xeU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xaU][0xeU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                    >> 1U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 1U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0xeU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xaU][0xeU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0xeU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xaU][0xeU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                    >> 3U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 3U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0xeU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xaU][0xeU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                    >> 4U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 4U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0xeU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xaU][0xeU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                    >> 5U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 5U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0xeU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xaU][0xeU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                    >> 6U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 6U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0xeU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xaU][0xeU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                    >> 7U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 7U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0xfU] = 0U;
    vlSelf->__PVT__popcount[0xaU][0xfU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xaU][0xfU] 
                                            + (((1U 
                                                 & (IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch)) 
                                                == 
                                                (1U 
                                                 & vlSymsp->TOP.dut__DOT__weights
                                                 [8U]))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0xfU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xaU][0xfU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                    >> 1U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 1U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0xfU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xaU][0xfU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0xfU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xaU][0xfU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                    >> 3U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 3U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0xfU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xaU][0xfU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                    >> 4U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 4U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0xfU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xaU][0xfU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                    >> 5U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 5U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0xfU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xaU][0xfU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                    >> 6U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 6U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0xfU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xaU][0xfU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                    >> 7U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 7U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x10U] = 0U;
    vlSelf->__PVT__popcount[0xaU][0x10U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x10U] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x10U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x10U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x10U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x10U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x10U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x10U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x10U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x10U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x10U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x10U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x10U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x10U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x10U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x10U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x11U] = 0U;
    vlSelf->__PVT__popcount[0xaU][0x11U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x11U] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x11U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x11U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x11U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x11U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x11U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x11U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x11U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x11U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x11U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x11U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x11U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x11U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x11U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x11U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x12U] = 0U;
    vlSelf->__PVT__popcount[0xaU][0x12U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x12U] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x12U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x12U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x12U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x12U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x12U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x12U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x12U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x12U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x12U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x12U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x12U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x12U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x12U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x12U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x13U] = 0U;
    vlSelf->__PVT__popcount[0xaU][0x13U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x13U] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x13U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x13U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x13U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x13U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x13U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x13U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x13U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x13U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x13U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x13U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x13U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x13U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x13U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x13U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x14U] = 0U;
    vlSelf->__PVT__popcount[0xaU][0x14U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x14U] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x14U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x14U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x14U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x14U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x14U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x14U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x14U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x14U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x14U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x14U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x14U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x14U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x14U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x14U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x15U] = 0U;
    vlSelf->__PVT__popcount[0xaU][0x15U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x15U] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x15U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x15U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x15U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x15U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x15U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x15U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x15U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x15U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x15U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x15U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x15U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x15U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x15U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x15U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x16U] = 0U;
    vlSelf->__PVT__popcount[0xaU][0x16U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x16U] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x16U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x16U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x16U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x16U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x16U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x16U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x16U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x16U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x16U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x16U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x16U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x16U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x16U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x16U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x17U] = 0U;
    vlSelf->__PVT__popcount[0xaU][0x17U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x17U] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x17U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x17U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x17U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x17U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x17U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x17U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x17U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x17U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x17U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x17U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x17U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x17U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x17U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x17U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x18U] = 0U;
    vlSelf->__PVT__popcount[0xaU][0x18U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x18U] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x18U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x18U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x18U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x18U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x18U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x18U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x18U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x18U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x18U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x18U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x18U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x18U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x18U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x18U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x19U] = 0U;
    vlSelf->__PVT__popcount[0xaU][0x19U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x19U] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x19U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x19U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x19U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x19U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x19U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x19U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x19U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x19U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x19U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x19U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x19U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x19U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x19U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x19U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x1aU] = 0U;
    vlSelf->__PVT__popcount[0xaU][0x1aU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x1aU] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x1aU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x1aU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x1aU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x1aU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x1aU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x1aU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x1aU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x1aU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x1aU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x1aU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x1aU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x1aU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x1aU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x1aU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x1bU] = 0U;
    vlSelf->__PVT__popcount[0xaU][0x1bU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x1bU] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x1bU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x1bU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x1bU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x1bU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x1bU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x1bU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x1bU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x1bU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x1bU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x1bU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x1bU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x1bU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xaU][0x1bU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x1bU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0U] = 0U;
    vlSelf->__PVT__popcount[0xbU][0U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [0U] 
                                                  + 
                                                  (((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [0U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [0U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [0U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [0U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [0U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [0U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [0U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][1U] = 0U;
    vlSelf->__PVT__popcount[0xbU][1U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [1U] 
                                                  + 
                                                  (((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][1U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [1U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][1U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [1U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][1U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [1U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][1U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [1U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][1U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [1U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][1U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [1U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][1U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [1U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][2U] = 0U;
    vlSelf->__PVT__popcount[0xbU][2U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [2U] 
                                                  + 
                                                  (((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][2U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [2U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][2U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [2U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][2U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [2U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][2U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [2U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][2U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [2U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][2U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [2U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][2U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [2U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][3U] = 0U;
    vlSelf->__PVT__popcount[0xbU][3U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [3U] 
                                                  + 
                                                  (((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][3U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [3U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][3U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [3U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][3U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [3U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][3U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [3U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][3U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [3U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][3U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [3U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][3U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [3U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][4U] = 0U;
    vlSelf->__PVT__popcount[0xbU][4U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [4U] 
                                                  + 
                                                  (((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][4U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [4U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][4U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [4U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][4U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [4U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][4U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [4U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][4U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [4U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][4U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [4U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][4U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [4U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][5U] = 0U;
    vlSelf->__PVT__popcount[0xbU][5U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [5U] 
                                                  + 
                                                  (((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][5U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [5U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][5U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [5U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][5U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [5U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][5U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [5U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][5U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [5U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][5U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [5U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][5U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [5U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][6U] = 0U;
    vlSelf->__PVT__popcount[0xbU][6U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [6U] 
                                                  + 
                                                  (((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][6U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [6U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][6U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [6U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][6U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [6U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][6U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [6U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][6U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [6U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][6U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [6U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][6U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [6U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][7U] = 0U;
    vlSelf->__PVT__popcount[0xbU][7U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [7U] 
                                                  + 
                                                  (((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][7U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [7U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][7U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [7U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][7U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [7U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][7U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [7U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][7U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [7U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][7U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [7U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][7U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [7U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][8U] = 0U;
    vlSelf->__PVT__popcount[0xbU][8U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [8U] 
                                                  + 
                                                  (((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][8U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [8U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][8U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [8U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][8U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [8U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][8U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [8U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][8U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [8U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][8U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [8U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][8U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [8U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][9U] = 0U;
    vlSelf->__PVT__popcount[0xbU][9U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [9U] 
                                                  + 
                                                  (((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][9U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [9U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][9U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [9U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][9U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [9U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][9U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [9U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][9U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [9U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][9U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [9U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][9U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xbU]
                                                  [9U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xaU] = 0U;
    vlSelf->__PVT__popcount[0xbU][0xaU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xaU] 
                                            + (((1U 
                                                 & (IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch)) 
                                                == 
                                                (1U 
                                                 & vlSymsp->TOP.dut__DOT__weights
                                                 [8U]))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xaU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xaU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                    >> 1U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 1U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xaU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xaU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xaU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xaU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                    >> 3U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 3U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xaU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xaU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                    >> 4U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 4U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xaU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xaU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                    >> 5U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 5U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xaU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xaU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                    >> 6U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 6U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xaU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xaU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                    >> 7U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 7U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xbU] = 0U;
    vlSelf->__PVT__popcount[0xbU][0xbU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xbU] 
                                            + (((1U 
                                                 & (IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch)) 
                                                == 
                                                (1U 
                                                 & vlSymsp->TOP.dut__DOT__weights
                                                 [8U]))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xbU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xbU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                    >> 1U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 1U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xbU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xbU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xbU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xbU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                    >> 3U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 3U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xbU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xbU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                    >> 4U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 4U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xbU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xbU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                    >> 5U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 5U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xbU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xbU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                    >> 6U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 6U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xbU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xbU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                    >> 7U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 7U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xcU] = 0U;
    vlSelf->__PVT__popcount[0xbU][0xcU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xcU] 
                                            + (((1U 
                                                 & (IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch)) 
                                                == 
                                                (1U 
                                                 & vlSymsp->TOP.dut__DOT__weights
                                                 [8U]))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xcU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xcU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                    >> 1U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 1U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xcU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xcU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xcU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xcU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                    >> 3U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 3U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xcU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xcU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                    >> 4U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 4U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xcU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xcU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                    >> 5U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 5U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xcU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xcU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                    >> 6U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 6U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xcU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xcU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                    >> 7U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 7U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xdU] = 0U;
    vlSelf->__PVT__popcount[0xbU][0xdU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xdU] 
                                            + (((1U 
                                                 & (IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch)) 
                                                == 
                                                (1U 
                                                 & vlSymsp->TOP.dut__DOT__weights
                                                 [8U]))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xdU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xdU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                    >> 1U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 1U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xdU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xdU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xdU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xdU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                    >> 3U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 3U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xdU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xdU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                    >> 4U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 4U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xdU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xdU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                    >> 5U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 5U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xdU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xdU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                    >> 6U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 6U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xdU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xdU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                    >> 7U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 7U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xeU] = 0U;
    vlSelf->__PVT__popcount[0xbU][0xeU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xeU] 
                                            + (((1U 
                                                 & (IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch)) 
                                                == 
                                                (1U 
                                                 & vlSymsp->TOP.dut__DOT__weights
                                                 [8U]))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xeU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xeU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                    >> 1U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 1U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xeU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xeU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xeU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xeU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                    >> 3U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 3U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xeU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xeU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                    >> 4U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 4U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xeU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xeU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                    >> 5U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 5U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xeU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xeU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                    >> 6U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 6U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xeU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xeU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                    >> 7U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 7U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xfU] = 0U;
    vlSelf->__PVT__popcount[0xbU][0xfU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xfU] 
                                            + (((1U 
                                                 & (IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch)) 
                                                == 
                                                (1U 
                                                 & vlSymsp->TOP.dut__DOT__weights
                                                 [8U]))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xfU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xfU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                    >> 1U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 1U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xfU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xfU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xfU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xfU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                    >> 3U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 3U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xfU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xfU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                    >> 4U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 4U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xfU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xfU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                    >> 5U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 5U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xfU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xfU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                    >> 6U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 6U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0xfU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xbU][0xfU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                    >> 7U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 7U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x10U] = 0U;
    vlSelf->__PVT__popcount[0xbU][0x10U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x10U] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x10U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x10U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x10U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x10U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x10U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x10U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x10U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x10U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x10U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x10U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x10U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x10U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x10U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x10U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x11U] = 0U;
    vlSelf->__PVT__popcount[0xbU][0x11U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x11U] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x11U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x11U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x11U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x11U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x11U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x11U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x11U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x11U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x11U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x11U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x11U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x11U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x11U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x11U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x12U] = 0U;
    vlSelf->__PVT__popcount[0xbU][0x12U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x12U] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x12U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x12U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x12U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x12U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x12U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x12U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x12U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x12U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x12U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x12U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x12U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x12U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x12U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x12U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x13U] = 0U;
    vlSelf->__PVT__popcount[0xbU][0x13U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x13U] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x13U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x13U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x13U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x13U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x13U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x13U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x13U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x13U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x13U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x13U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x13U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x13U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x13U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x13U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x14U] = 0U;
    vlSelf->__PVT__popcount[0xbU][0x14U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x14U] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x14U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x14U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x14U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x14U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x14U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x14U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x14U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x14U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x14U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x14U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x14U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x14U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x14U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x14U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x15U] = 0U;
    vlSelf->__PVT__popcount[0xbU][0x15U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x15U] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x15U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x15U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x15U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x15U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x15U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x15U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x15U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x15U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x15U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x15U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x15U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x15U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x15U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x15U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x16U] = 0U;
    vlSelf->__PVT__popcount[0xbU][0x16U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x16U] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x16U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x16U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x16U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x16U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x16U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x16U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x16U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x16U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x16U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x16U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x16U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x16U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x16U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x16U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x17U] = 0U;
    vlSelf->__PVT__popcount[0xbU][0x17U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x17U] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x17U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x17U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x17U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x17U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x17U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x17U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x17U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x17U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x17U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x17U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x17U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x17U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x17U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x17U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x18U] = 0U;
    vlSelf->__PVT__popcount[0xbU][0x18U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x18U] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x18U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x18U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x18U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x18U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x18U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x18U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x18U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x18U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x18U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x18U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x18U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x18U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x18U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x18U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x19U] = 0U;
    vlSelf->__PVT__popcount[0xbU][0x19U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x19U] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x19U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x19U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x19U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x19U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x19U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x19U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x19U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x19U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x19U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x19U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x19U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x19U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x19U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x19U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x1aU] = 0U;
    vlSelf->__PVT__popcount[0xbU][0x1aU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x1aU] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x1aU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x1aU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x1aU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x1aU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x1aU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x1aU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x1aU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x1aU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x1aU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x1aU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x1aU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x1aU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x1aU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x1aU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x1bU] = 0U;
    vlSelf->__PVT__popcount[0xbU][0x1bU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x1bU] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x1bU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x1bU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x1bU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x1bU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x1bU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x1bU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x1bU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x1bU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x1bU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x1bU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x1bU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x1bU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xbU][0x1bU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x1bU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0U] = 0U;
    vlSelf->__PVT__popcount[0xcU][0U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [0U] 
                                                  + 
                                                  (((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [0U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [0U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [0U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [0U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [0U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [0U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [0U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][1U] = 0U;
    vlSelf->__PVT__popcount[0xcU][1U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [1U] 
                                                  + 
                                                  (((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][1U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [1U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][1U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [1U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][1U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [1U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][1U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [1U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][1U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [1U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][1U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [1U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][1U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [1U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][2U] = 0U;
    vlSelf->__PVT__popcount[0xcU][2U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [2U] 
                                                  + 
                                                  (((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][2U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [2U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][2U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [2U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][2U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [2U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][2U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [2U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][2U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [2U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][2U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [2U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][2U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [2U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][3U] = 0U;
    vlSelf->__PVT__popcount[0xcU][3U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [3U] 
                                                  + 
                                                  (((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][3U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [3U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][3U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [3U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][3U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [3U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][3U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [3U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][3U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [3U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][3U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [3U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][3U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [3U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][4U] = 0U;
    vlSelf->__PVT__popcount[0xcU][4U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [4U] 
                                                  + 
                                                  (((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][4U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [4U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][4U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [4U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][4U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [4U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][4U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [4U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][4U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [4U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][4U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [4U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][4U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [4U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][5U] = 0U;
    vlSelf->__PVT__popcount[0xcU][5U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [5U] 
                                                  + 
                                                  (((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][5U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [5U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][5U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [5U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][5U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [5U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][5U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [5U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][5U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [5U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][5U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [5U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][5U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [5U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][6U] = 0U;
    vlSelf->__PVT__popcount[0xcU][6U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [6U] 
                                                  + 
                                                  (((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][6U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [6U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][6U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [6U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][6U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [6U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][6U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [6U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][6U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [6U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][6U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [6U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][6U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [6U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][7U] = 0U;
    vlSelf->__PVT__popcount[0xcU][7U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [7U] 
                                                  + 
                                                  (((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][7U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [7U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][7U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [7U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][7U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [7U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][7U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [7U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][7U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [7U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][7U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [7U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][7U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [7U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][8U] = 0U;
    vlSelf->__PVT__popcount[0xcU][8U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [8U] 
                                                  + 
                                                  (((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][8U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [8U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][8U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [8U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][8U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [8U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][8U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [8U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][8U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [8U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][8U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [8U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][8U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [8U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][9U] = 0U;
    vlSelf->__PVT__popcount[0xcU][9U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [9U] 
                                                  + 
                                                  (((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][9U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [9U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][9U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [9U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][9U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [9U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][9U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [9U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][9U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [9U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][9U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [9U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][9U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [9U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xaU] = 0U;
    vlSelf->__PVT__popcount[0xcU][0xaU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xaU] 
                                            + (((1U 
                                                 & (IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch)) 
                                                == 
                                                (1U 
                                                 & vlSymsp->TOP.dut__DOT__weights
                                                 [8U]))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xaU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xaU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                    >> 1U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 1U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xaU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xaU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xaU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xaU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                    >> 3U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 3U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xaU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xaU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                    >> 4U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 4U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xaU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xaU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                    >> 5U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 5U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xaU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xaU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                    >> 6U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 6U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xaU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xaU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                    >> 7U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 7U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xbU] = 0U;
    vlSelf->__PVT__popcount[0xcU][0xbU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xbU] 
                                            + (((1U 
                                                 & (IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch)) 
                                                == 
                                                (1U 
                                                 & vlSymsp->TOP.dut__DOT__weights
                                                 [8U]))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xbU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xbU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                    >> 1U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 1U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xbU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xbU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xbU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xbU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                    >> 3U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 3U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xbU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xbU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                    >> 4U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 4U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xbU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xbU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                    >> 5U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 5U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xbU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xbU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                    >> 6U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 6U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xbU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xbU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                    >> 7U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 7U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xcU] = 0U;
    vlSelf->__PVT__popcount[0xcU][0xcU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xcU] 
                                            + (((1U 
                                                 & (IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch)) 
                                                == 
                                                (1U 
                                                 & vlSymsp->TOP.dut__DOT__weights
                                                 [8U]))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xcU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xcU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                    >> 1U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 1U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xcU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xcU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xcU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xcU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                    >> 3U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 3U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xcU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xcU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                    >> 4U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 4U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xcU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xcU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                    >> 5U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 5U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xcU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xcU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                    >> 6U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 6U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xcU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xcU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                    >> 7U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 7U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xdU] = 0U;
    vlSelf->__PVT__popcount[0xcU][0xdU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xdU] 
                                            + (((1U 
                                                 & (IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch)) 
                                                == 
                                                (1U 
                                                 & vlSymsp->TOP.dut__DOT__weights
                                                 [8U]))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xdU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xdU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                    >> 1U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 1U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xdU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xdU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xdU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xdU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                    >> 3U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 3U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xdU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xdU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                    >> 4U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 4U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xdU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xdU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                    >> 5U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 5U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xdU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xdU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                    >> 6U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 6U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xdU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xdU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                    >> 7U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 7U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xeU] = 0U;
    vlSelf->__PVT__popcount[0xcU][0xeU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xeU] 
                                            + (((1U 
                                                 & (IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch)) 
                                                == 
                                                (1U 
                                                 & vlSymsp->TOP.dut__DOT__weights
                                                 [8U]))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xeU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xeU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                    >> 1U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 1U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xeU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xeU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xeU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xeU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                    >> 3U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 3U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xeU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xeU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                    >> 4U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 4U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xeU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xeU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                    >> 5U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 5U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xeU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xeU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                    >> 6U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 6U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xeU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xeU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                    >> 7U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 7U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xfU] = 0U;
    vlSelf->__PVT__popcount[0xcU][0xfU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xfU] 
                                            + (((1U 
                                                 & (IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch)) 
                                                == 
                                                (1U 
                                                 & vlSymsp->TOP.dut__DOT__weights
                                                 [8U]))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xfU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xfU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                    >> 1U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 1U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xfU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xfU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xfU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xfU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                    >> 3U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 3U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xfU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xfU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                    >> 4U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 4U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xfU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xfU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                    >> 5U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 5U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xfU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xfU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                    >> 6U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 6U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0xfU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xcU][0xfU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                    >> 7U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 7U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x10U] = 0U;
    vlSelf->__PVT__popcount[0xcU][0x10U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x10U] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x10U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x10U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x10U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x10U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x10U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x10U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x10U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x10U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x10U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x10U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x10U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x10U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x10U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x10U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x11U] = 0U;
    vlSelf->__PVT__popcount[0xcU][0x11U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x11U] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x11U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x11U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x11U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x11U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x11U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x11U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x11U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x11U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x11U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x11U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x11U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x11U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x11U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x11U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x12U] = 0U;
    vlSelf->__PVT__popcount[0xcU][0x12U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x12U] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x12U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x12U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x12U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x12U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x12U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x12U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x12U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x12U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x12U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x12U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x12U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x12U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x12U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x12U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x13U] = 0U;
    vlSelf->__PVT__popcount[0xcU][0x13U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x13U] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x13U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x13U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x13U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x13U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x13U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x13U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x13U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x13U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x13U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x13U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x13U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x13U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x13U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x13U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x14U] = 0U;
    vlSelf->__PVT__popcount[0xcU][0x14U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x14U] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x14U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x14U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x14U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x14U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x14U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x14U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x14U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x14U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x14U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x14U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x14U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x14U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x14U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x14U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x15U] = 0U;
    vlSelf->__PVT__popcount[0xcU][0x15U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x15U] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x15U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x15U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x15U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x15U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x15U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x15U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x15U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x15U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x15U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x15U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x15U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x15U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x15U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x15U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x16U] = 0U;
    vlSelf->__PVT__popcount[0xcU][0x16U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x16U] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x16U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x16U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x16U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x16U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x16U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x16U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x16U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x16U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x16U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x16U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x16U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x16U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x16U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x16U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x17U] = 0U;
    vlSelf->__PVT__popcount[0xcU][0x17U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x17U] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x17U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x17U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x17U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x17U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x17U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x17U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x17U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x17U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x17U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x17U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x17U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x17U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x17U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x17U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x18U] = 0U;
    vlSelf->__PVT__popcount[0xcU][0x18U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x18U] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x18U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x18U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x18U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x18U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x18U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x18U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x18U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x18U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x18U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x18U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x18U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x18U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x18U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x18U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x19U] = 0U;
    vlSelf->__PVT__popcount[0xcU][0x19U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x19U] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x19U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x19U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x19U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x19U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x19U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x19U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x19U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x19U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x19U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x19U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x19U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x19U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x19U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x19U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x1aU] = 0U;
    vlSelf->__PVT__popcount[0xcU][0x1aU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x1aU] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x1aU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x1aU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x1aU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x1aU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x1aU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x1aU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x1aU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x1aU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x1aU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x1aU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x1aU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x1aU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x1aU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x1aU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x1bU] = 0U;
    vlSelf->__PVT__popcount[0xcU][0x1bU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x1bU] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x1bU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x1bU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x1bU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x1bU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x1bU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x1bU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x1bU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x1bU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x1bU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x1bU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x1bU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x1bU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xcU][0x1bU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x1bU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0U] = 0U;
    vlSelf->__PVT__popcount[0xdU][0U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [0U] 
                                                  + 
                                                  (((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [0U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [0U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [0U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [0U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [0U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [0U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [0U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][1U] = 0U;
    vlSelf->__PVT__popcount[0xdU][1U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [1U] 
                                                  + 
                                                  (((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][1U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [1U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][1U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [1U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][1U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [1U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][1U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [1U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][1U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [1U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][1U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [1U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][1U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [1U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][2U] = 0U;
    vlSelf->__PVT__popcount[0xdU][2U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [2U] 
                                                  + 
                                                  (((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][2U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [2U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][2U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [2U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][2U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [2U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][2U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [2U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][2U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [2U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][2U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [2U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][2U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [2U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][3U] = 0U;
    vlSelf->__PVT__popcount[0xdU][3U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [3U] 
                                                  + 
                                                  (((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][3U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [3U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][3U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [3U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][3U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [3U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][3U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [3U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][3U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [3U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][3U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [3U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][3U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [3U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][4U] = 0U;
    vlSelf->__PVT__popcount[0xdU][4U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [4U] 
                                                  + 
                                                  (((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][4U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [4U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][4U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [4U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][4U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [4U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][4U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [4U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][4U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [4U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][4U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [4U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][4U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [4U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][5U] = 0U;
    vlSelf->__PVT__popcount[0xdU][5U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [5U] 
                                                  + 
                                                  (((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][5U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [5U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][5U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [5U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][5U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [5U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][5U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [5U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][5U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [5U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][5U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [5U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][5U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [5U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][6U] = 0U;
    vlSelf->__PVT__popcount[0xdU][6U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [6U] 
                                                  + 
                                                  (((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][6U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [6U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][6U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [6U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][6U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [6U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][6U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [6U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][6U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [6U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][6U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [6U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][6U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [6U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][7U] = 0U;
    vlSelf->__PVT__popcount[0xdU][7U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [7U] 
                                                  + 
                                                  (((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][7U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [7U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][7U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [7U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][7U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [7U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][7U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [7U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][7U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [7U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][7U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [7U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][7U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [7U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][8U] = 0U;
    vlSelf->__PVT__popcount[0xdU][8U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [8U] 
                                                  + 
                                                  (((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][8U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [8U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][8U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [8U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][8U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [8U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][8U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [8U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][8U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [8U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][8U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [8U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][8U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [8U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][9U] = 0U;
    vlSelf->__PVT__popcount[0xdU][9U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [9U] 
                                                  + 
                                                  (((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][9U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [9U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][9U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [9U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][9U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [9U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][9U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [9U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][9U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [9U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][9U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [9U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][9U] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [9U] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xaU] = 0U;
    vlSelf->__PVT__popcount[0xdU][0xaU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xaU] 
                                            + (((1U 
                                                 & (IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch)) 
                                                == 
                                                (1U 
                                                 & vlSymsp->TOP.dut__DOT__weights
                                                 [8U]))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xaU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xaU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                    >> 1U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 1U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xaU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xaU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xaU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xaU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                    >> 3U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 3U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xaU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xaU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                    >> 4U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 4U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xaU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xaU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                    >> 5U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 5U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xaU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xaU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                    >> 6U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 6U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xaU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xaU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                    >> 7U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 7U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xbU] = 0U;
    vlSelf->__PVT__popcount[0xdU][0xbU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xbU] 
                                            + (((1U 
                                                 & (IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch)) 
                                                == 
                                                (1U 
                                                 & vlSymsp->TOP.dut__DOT__weights
                                                 [8U]))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xbU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xbU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                    >> 1U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 1U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xbU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xbU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xbU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xbU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                    >> 3U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 3U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xbU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xbU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                    >> 4U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 4U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xbU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xbU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                    >> 5U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 5U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xbU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xbU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                    >> 6U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 6U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xbU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xbU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                    >> 7U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 7U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xcU] = 0U;
    vlSelf->__PVT__popcount[0xdU][0xcU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xcU] 
                                            + (((1U 
                                                 & (IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch)) 
                                                == 
                                                (1U 
                                                 & vlSymsp->TOP.dut__DOT__weights
                                                 [8U]))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xcU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xcU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                    >> 1U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 1U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xcU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xcU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xcU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xcU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                    >> 3U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 3U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xcU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xcU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                    >> 4U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 4U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xcU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xcU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                    >> 5U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 5U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xcU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xcU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                    >> 6U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 6U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xcU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xcU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                    >> 7U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 7U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xdU] = 0U;
    vlSelf->__PVT__popcount[0xdU][0xdU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xdU] 
                                            + (((1U 
                                                 & (IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch)) 
                                                == 
                                                (1U 
                                                 & vlSymsp->TOP.dut__DOT__weights
                                                 [8U]))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xdU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xdU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                    >> 1U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 1U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xdU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xdU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xdU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xdU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                    >> 3U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 3U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xdU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xdU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                    >> 4U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 4U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xdU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xdU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                    >> 5U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 5U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xdU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xdU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                    >> 6U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 6U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xdU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xdU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                    >> 7U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 7U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xeU] = 0U;
    vlSelf->__PVT__popcount[0xdU][0xeU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xeU] 
                                            + (((1U 
                                                 & (IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch)) 
                                                == 
                                                (1U 
                                                 & vlSymsp->TOP.dut__DOT__weights
                                                 [8U]))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xeU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xeU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                    >> 1U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 1U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xeU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xeU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xeU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xeU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                    >> 3U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 3U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xeU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xeU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                    >> 4U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 4U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xeU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xeU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                    >> 5U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 5U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xeU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xeU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                    >> 6U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 6U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xeU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xeU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                    >> 7U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 7U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xfU] = 0U;
    vlSelf->__PVT__popcount[0xdU][0xfU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xfU] 
                                            + (((1U 
                                                 & (IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch)) 
                                                == 
                                                (1U 
                                                 & vlSymsp->TOP.dut__DOT__weights
                                                 [8U]))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xfU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xfU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                    >> 1U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 1U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xfU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xfU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                    >> 2U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 2U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xfU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xfU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                    >> 3U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 3U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xfU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xfU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                    >> 4U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 4U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xfU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xfU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                    >> 5U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 5U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xfU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xfU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                    >> 6U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 6U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0xfU] = (0xffU & 
                                           (vlSelf->__PVT__popcount
                                            [0xdU][0xfU] 
                                            + (((1U 
                                                 & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                    >> 7U)) 
                                                == 
                                                (1U 
                                                 & (vlSymsp->TOP.dut__DOT__weights
                                                    [8U] 
                                                    >> 7U)))
                                                ? 1U
                                                : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0x10U] = 0U;
    vlSelf->__PVT__popcount[0xdU][0x10U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x10U] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0x10U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x10U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0x10U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x10U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0x10U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x10U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0x10U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x10U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0x10U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x10U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0x10U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x10U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0x10U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x10U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0x11U] = 0U;
    vlSelf->__PVT__popcount[0xdU][0x11U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x11U] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0x11U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x11U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0x11U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x11U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0x11U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x11U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0x11U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x11U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0x11U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x11U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0x11U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x11U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0x11U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x11U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0x12U] = 0U;
    vlSelf->__PVT__popcount[0xdU][0x12U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x12U] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0x12U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x12U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0x12U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x12U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0x12U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x12U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0x12U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x12U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0x12U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x12U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0x12U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x12U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0x12U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x12U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0x13U] = 0U;
    vlSelf->__PVT__popcount[0xdU][0x13U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x13U] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0x13U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x13U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0x13U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x13U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0x13U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x13U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0x13U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x13U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0x13U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x13U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0x13U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x13U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0x13U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x13U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0x14U] = 0U;
    vlSelf->__PVT__popcount[0xdU][0x14U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x14U] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0x14U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x14U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0x14U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x14U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0x14U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x14U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0x14U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x14U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0x14U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x14U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0x14U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x14U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0x14U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x14U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0x15U] = 0U;
    vlSelf->__PVT__popcount[0xdU][0x15U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x15U] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0xdU][0x15U] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x15U] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
}
