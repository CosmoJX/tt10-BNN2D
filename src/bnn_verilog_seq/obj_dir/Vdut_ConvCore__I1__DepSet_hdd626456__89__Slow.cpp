// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "Vdut__pch.h"
#include "Vdut_ConvCore__I1.h"
#include "Vdut__Syms.h"

VL_ATTR_COLD void Vdut_ConvCore__I1___stl_sequent__TOP__dut__DOT__conv__DOT__conv_core_gen__BRA__8__KET____DOT__core__9(Vdut_ConvCore__I1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdut_ConvCore__I1___stl_sequent__TOP__dut__DOT__conv__DOT__conv_core_gen__BRA__8__KET____DOT__core__9\n"); );
    // Body
    vlSelf->__PVT__popcount[0x1bU][1U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [1U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][1U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [1U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][2U] = 0U;
    vlSelf->__PVT__popcount[0x1bU][2U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [2U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][2U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [2U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][2U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [2U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][2U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [2U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][2U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [2U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][2U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [2U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][2U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [2U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][2U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [2U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][3U] = 0U;
    vlSelf->__PVT__popcount[0x1bU][3U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [3U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][3U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [3U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][3U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [3U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][3U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [3U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][3U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [3U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][3U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [3U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][3U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [3U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][3U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [3U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][4U] = 0U;
    vlSelf->__PVT__popcount[0x1bU][4U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [4U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][4U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [4U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][4U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [4U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][4U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [4U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][4U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [4U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][4U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [4U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][4U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [4U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][4U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [4U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][5U] = 0U;
    vlSelf->__PVT__popcount[0x1bU][5U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [5U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][5U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [5U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][5U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [5U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][5U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [5U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][5U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [5U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][5U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [5U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][5U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [5U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][5U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [5U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][6U] = 0U;
    vlSelf->__PVT__popcount[0x1bU][6U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [6U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][6U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [6U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][6U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [6U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][6U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [6U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][6U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [6U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][6U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [6U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][6U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [6U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][6U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [6U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][7U] = 0U;
    vlSelf->__PVT__popcount[0x1bU][7U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [7U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][7U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [7U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][7U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [7U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][7U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [7U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][7U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [7U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][7U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [7U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][7U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [7U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][7U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [7U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][8U] = 0U;
    vlSelf->__PVT__popcount[0x1bU][8U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [8U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][8U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [8U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][8U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [8U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][8U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [8U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][8U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [8U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][8U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [8U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][8U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [8U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][8U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [8U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][9U] = 0U;
    vlSelf->__PVT__popcount[0x1bU][9U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [9U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][9U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [9U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][9U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [9U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][9U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [9U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][9U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [9U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][9U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [9U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][9U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [9U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][9U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [9U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xaU] = 0U;
    vlSelf->__PVT__popcount[0x1bU][0xaU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xaU] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xaU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xaU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xaU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xaU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xaU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xaU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xaU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xaU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xaU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xaU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xaU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xaU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xaU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xaU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xbU] = 0U;
    vlSelf->__PVT__popcount[0x1bU][0xbU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xbU] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xbU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xbU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xbU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xbU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xbU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xbU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xbU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xbU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xbU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xbU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xbU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xbU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xbU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xbU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xcU] = 0U;
    vlSelf->__PVT__popcount[0x1bU][0xcU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xcU] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xcU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xcU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xcU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xcU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xcU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xcU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xcU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xcU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xcU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xcU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xcU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xcU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xcU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xcU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xdU] = 0U;
    vlSelf->__PVT__popcount[0x1bU][0xdU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xdU] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xdU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xdU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xdU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xdU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xdU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xdU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xdU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xdU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xdU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xdU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xdU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xdU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xdU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xdU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xeU] = 0U;
    vlSelf->__PVT__popcount[0x1bU][0xeU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xeU] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xeU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xeU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xeU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xeU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xeU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xeU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xeU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xeU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xeU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xeU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xeU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xeU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xeU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xeU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xfU] = 0U;
    vlSelf->__PVT__popcount[0x1bU][0xfU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xfU] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xfU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xfU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xfU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xfU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xfU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xfU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xfU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xfU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xfU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xfU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xfU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xfU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0xfU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x1bU]
                                             [0xfU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x10U] = 0U;
    vlSelf->__PVT__popcount[0x1bU][0x10U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x10U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x10U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x10U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x10U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x10U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x10U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x10U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x10U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x10U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x10U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x10U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x10U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x10U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x10U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x10U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x11U] = 0U;
    vlSelf->__PVT__popcount[0x1bU][0x11U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x11U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x11U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x11U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x11U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x11U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x11U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x11U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x11U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x11U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x11U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x11U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x11U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x11U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x11U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x11U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x12U] = 0U;
    vlSelf->__PVT__popcount[0x1bU][0x12U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x12U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x12U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x12U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x12U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x12U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x12U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x12U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x12U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x12U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x12U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x12U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x12U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x12U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x12U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x12U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x13U] = 0U;
    vlSelf->__PVT__popcount[0x1bU][0x13U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x13U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x13U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x13U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x13U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x13U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x13U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x13U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x13U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x13U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x13U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x13U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x13U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x13U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x13U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x13U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x14U] = 0U;
    vlSelf->__PVT__popcount[0x1bU][0x14U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x14U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x14U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x14U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x14U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x14U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x14U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x14U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x14U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x14U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x14U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x14U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x14U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x14U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x14U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x14U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x15U] = 0U;
    vlSelf->__PVT__popcount[0x1bU][0x15U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x15U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x15U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x15U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x15U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x15U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x15U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x15U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x15U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x15U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x15U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x15U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x15U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x15U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x15U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x15U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x16U] = 0U;
    vlSelf->__PVT__popcount[0x1bU][0x16U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x16U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x16U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x16U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x16U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x16U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x16U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x16U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x16U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x16U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x16U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x16U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x16U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x16U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x16U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x16U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x17U] = 0U;
    vlSelf->__PVT__popcount[0x1bU][0x17U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x17U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x17U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x17U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x17U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x17U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x17U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x17U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x17U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x17U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x17U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x17U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x17U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x17U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x17U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x17U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x18U] = 0U;
    vlSelf->__PVT__popcount[0x1bU][0x18U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x18U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x18U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x18U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x18U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x18U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x18U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x18U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x18U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x18U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x18U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x18U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x18U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x18U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x18U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x18U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x19U] = 0U;
    vlSelf->__PVT__popcount[0x1bU][0x19U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x19U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x19U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x19U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x19U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x19U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x19U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x19U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x19U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x19U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x19U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x19U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x19U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x19U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x19U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x19U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x1aU] = 0U;
    vlSelf->__PVT__popcount[0x1bU][0x1aU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x1aU] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x1aU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x1aU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x1aU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x1aU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x1aU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x1aU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x1aU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x1aU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x1aU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x1aU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x1aU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x1aU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x1aU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x1aU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x1bU] = 0U;
    vlSelf->__PVT__popcount[0x1bU][0x1bU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x1bU] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x1bU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x1bU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x1bU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x1bU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x1bU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x1bU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x1bU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x1bU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x1bU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x1bU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x1bU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x1bU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x1bU][0x1bU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x1bU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->img_out[0U] = ((0xfffffffeU & vlSelf->img_out[0U]) 
                           | (1U & (~ (vlSelf->__PVT__popcount
                                       [0U][0U] >> 7U))));
    vlSelf->img_out[0U] = ((0xfffffffdU & vlSelf->img_out[0U]) 
                           | (2U & ((~ (vlSelf->__PVT__popcount
                                        [0U][1U] >> 7U)) 
                                    << 1U)));
    vlSelf->img_out[0U] = ((0xfffffffbU & vlSelf->img_out[0U]) 
                           | (4U & ((~ (vlSelf->__PVT__popcount
                                        [0U][2U] >> 7U)) 
                                    << 2U)));
    vlSelf->img_out[0U] = ((0xfffffff7U & vlSelf->img_out[0U]) 
                           | (8U & ((~ (vlSelf->__PVT__popcount
                                        [0U][3U] >> 7U)) 
                                    << 3U)));
    vlSelf->img_out[0U] = ((0xffffffefU & vlSelf->img_out[0U]) 
                           | (0x10U & ((~ (vlSelf->__PVT__popcount
                                           [0U][4U] 
                                           >> 7U)) 
                                       << 4U)));
    vlSelf->img_out[0U] = ((0xffffffdfU & vlSelf->img_out[0U]) 
                           | (0x20U & ((~ (vlSelf->__PVT__popcount
                                           [0U][5U] 
                                           >> 7U)) 
                                       << 5U)));
    vlSelf->img_out[0U] = ((0xffffffbfU & vlSelf->img_out[0U]) 
                           | (0x40U & ((~ (vlSelf->__PVT__popcount
                                           [0U][6U] 
                                           >> 7U)) 
                                       << 6U)));
    vlSelf->img_out[0U] = ((0xffffff7fU & vlSelf->img_out[0U]) 
                           | (0x80U & ((~ (vlSelf->__PVT__popcount
                                           [0U][7U] 
                                           >> 7U)) 
                                       << 7U)));
    vlSelf->img_out[0U] = ((0xfffffeffU & vlSelf->img_out[0U]) 
                           | (0x100U & ((~ (vlSelf->__PVT__popcount
                                            [0U][8U] 
                                            >> 7U)) 
                                        << 8U)));
    vlSelf->img_out[0U] = ((0xfffffdffU & vlSelf->img_out[0U]) 
                           | (0x200U & ((~ (vlSelf->__PVT__popcount
                                            [0U][9U] 
                                            >> 7U)) 
                                        << 9U)));
    vlSelf->img_out[0U] = ((0xfffffbffU & vlSelf->img_out[0U]) 
                           | (0x400U & ((~ (vlSelf->__PVT__popcount
                                            [0U][0xaU] 
                                            >> 7U)) 
                                        << 0xaU)));
    vlSelf->img_out[0U] = ((0xfffff7ffU & vlSelf->img_out[0U]) 
                           | (0x800U & ((~ (vlSelf->__PVT__popcount
                                            [0U][0xbU] 
                                            >> 7U)) 
                                        << 0xbU)));
    vlSelf->img_out[0U] = ((0xffffefffU & vlSelf->img_out[0U]) 
                           | (0x1000U & ((~ (vlSelf->__PVT__popcount
                                             [0U][0xcU] 
                                             >> 7U)) 
                                         << 0xcU)));
    vlSelf->img_out[0U] = ((0xffffdfffU & vlSelf->img_out[0U]) 
                           | (0x2000U & ((~ (vlSelf->__PVT__popcount
                                             [0U][0xdU] 
                                             >> 7U)) 
                                         << 0xdU)));
    vlSelf->img_out[0U] = ((0xffffbfffU & vlSelf->img_out[0U]) 
                           | (0x4000U & ((~ (vlSelf->__PVT__popcount
                                             [0U][0xeU] 
                                             >> 7U)) 
                                         << 0xeU)));
    vlSelf->img_out[0U] = ((0xffff7fffU & vlSelf->img_out[0U]) 
                           | (0x8000U & ((~ (vlSelf->__PVT__popcount
                                             [0U][0xfU] 
                                             >> 7U)) 
                                         << 0xfU)));
    vlSelf->img_out[0U] = ((0xfffeffffU & vlSelf->img_out[0U]) 
                           | (0x10000U & ((~ (vlSelf->__PVT__popcount
                                              [0U][0x10U] 
                                              >> 7U)) 
                                          << 0x10U)));
    vlSelf->img_out[0U] = ((0xfffdffffU & vlSelf->img_out[0U]) 
                           | (0x20000U & ((~ (vlSelf->__PVT__popcount
                                              [0U][0x11U] 
                                              >> 7U)) 
                                          << 0x11U)));
    vlSelf->img_out[0U] = ((0xfffbffffU & vlSelf->img_out[0U]) 
                           | (0x40000U & ((~ (vlSelf->__PVT__popcount
                                              [0U][0x12U] 
                                              >> 7U)) 
                                          << 0x12U)));
    vlSelf->img_out[0U] = ((0xfff7ffffU & vlSelf->img_out[0U]) 
                           | (0x80000U & ((~ (vlSelf->__PVT__popcount
                                              [0U][0x13U] 
                                              >> 7U)) 
                                          << 0x13U)));
    vlSelf->img_out[0U] = ((0xffefffffU & vlSelf->img_out[0U]) 
                           | (0x100000U & ((~ (vlSelf->__PVT__popcount
                                               [0U]
                                               [0x14U] 
                                               >> 7U)) 
                                           << 0x14U)));
    vlSelf->img_out[0U] = ((0xffdfffffU & vlSelf->img_out[0U]) 
                           | (0x200000U & ((~ (vlSelf->__PVT__popcount
                                               [0U]
                                               [0x15U] 
                                               >> 7U)) 
                                           << 0x15U)));
    vlSelf->img_out[0U] = ((0xffbfffffU & vlSelf->img_out[0U]) 
                           | (0x400000U & ((~ (vlSelf->__PVT__popcount
                                               [0U]
                                               [0x16U] 
                                               >> 7U)) 
                                           << 0x16U)));
    vlSelf->img_out[0U] = ((0xff7fffffU & vlSelf->img_out[0U]) 
                           | (0x800000U & ((~ (vlSelf->__PVT__popcount
                                               [0U]
                                               [0x17U] 
                                               >> 7U)) 
                                           << 0x17U)));
    vlSelf->img_out[0U] = ((0xfeffffffU & vlSelf->img_out[0U]) 
                           | (0x1000000U & ((~ (vlSelf->__PVT__popcount
                                                [0U]
                                                [0x18U] 
                                                >> 7U)) 
                                            << 0x18U)));
    vlSelf->img_out[0U] = ((0xfdffffffU & vlSelf->img_out[0U]) 
                           | (0x2000000U & ((~ (vlSelf->__PVT__popcount
                                                [0U]
                                                [0x19U] 
                                                >> 7U)) 
                                            << 0x19U)));
    vlSelf->img_out[0U] = ((0xfbffffffU & vlSelf->img_out[0U]) 
                           | (0x4000000U & ((~ (vlSelf->__PVT__popcount
                                                [0U]
                                                [0x1aU] 
                                                >> 7U)) 
                                            << 0x1aU)));
    vlSelf->img_out[0U] = ((0xf7ffffffU & vlSelf->img_out[0U]) 
                           | (0x8000000U & ((~ (vlSelf->__PVT__popcount
                                                [0U]
                                                [0x1bU] 
                                                >> 7U)) 
                                            << 0x1bU)));
    vlSelf->img_out[0U] = ((0xefffffffU & vlSelf->img_out[0U]) 
                           | (0x10000000U & ((~ (vlSelf->__PVT__popcount
                                                 [1U]
                                                 [0U] 
                                                 >> 7U)) 
                                             << 0x1cU)));
    vlSelf->img_out[0U] = ((0xdfffffffU & vlSelf->img_out[0U]) 
                           | (0x20000000U & ((~ (vlSelf->__PVT__popcount
                                                 [1U]
                                                 [1U] 
                                                 >> 7U)) 
                                             << 0x1dU)));
    vlSelf->img_out[0U] = ((0xbfffffffU & vlSelf->img_out[0U]) 
                           | (0x40000000U & ((~ (vlSelf->__PVT__popcount
                                                 [1U]
                                                 [2U] 
                                                 >> 7U)) 
                                             << 0x1eU)));
    vlSelf->img_out[0U] = ((0x7fffffffU & vlSelf->img_out[0U]) 
                           | ((~ (vlSelf->__PVT__popcount
                                  [1U][3U] >> 7U)) 
                              << 0x1fU));
    vlSelf->img_out[1U] = ((0xfffffffeU & vlSelf->img_out[1U]) 
                           | (1U & (~ (vlSelf->__PVT__popcount
                                       [1U][4U] >> 7U))));
    vlSelf->img_out[1U] = ((0xfffffffdU & vlSelf->img_out[1U]) 
                           | (2U & ((~ (vlSelf->__PVT__popcount
                                        [1U][5U] >> 7U)) 
                                    << 1U)));
    vlSelf->img_out[1U] = ((0xfffffffbU & vlSelf->img_out[1U]) 
                           | (4U & ((~ (vlSelf->__PVT__popcount
                                        [1U][6U] >> 7U)) 
                                    << 2U)));
    vlSelf->img_out[1U] = ((0xfffffff7U & vlSelf->img_out[1U]) 
                           | (8U & ((~ (vlSelf->__PVT__popcount
                                        [1U][7U] >> 7U)) 
                                    << 3U)));
    vlSelf->img_out[1U] = ((0xffffffefU & vlSelf->img_out[1U]) 
                           | (0x10U & ((~ (vlSelf->__PVT__popcount
                                           [1U][8U] 
                                           >> 7U)) 
                                       << 4U)));
    vlSelf->img_out[1U] = ((0xffffffdfU & vlSelf->img_out[1U]) 
                           | (0x20U & ((~ (vlSelf->__PVT__popcount
                                           [1U][9U] 
                                           >> 7U)) 
                                       << 5U)));
    vlSelf->img_out[1U] = ((0xffffffbfU & vlSelf->img_out[1U]) 
                           | (0x40U & ((~ (vlSelf->__PVT__popcount
                                           [1U][0xaU] 
                                           >> 7U)) 
                                       << 6U)));
    vlSelf->img_out[1U] = ((0xffffff7fU & vlSelf->img_out[1U]) 
                           | (0x80U & ((~ (vlSelf->__PVT__popcount
                                           [1U][0xbU] 
                                           >> 7U)) 
                                       << 7U)));
    vlSelf->img_out[1U] = ((0xfffffeffU & vlSelf->img_out[1U]) 
                           | (0x100U & ((~ (vlSelf->__PVT__popcount
                                            [1U][0xcU] 
                                            >> 7U)) 
                                        << 8U)));
    vlSelf->img_out[1U] = ((0xfffffdffU & vlSelf->img_out[1U]) 
                           | (0x200U & ((~ (vlSelf->__PVT__popcount
                                            [1U][0xdU] 
                                            >> 7U)) 
                                        << 9U)));
    vlSelf->img_out[1U] = ((0xfffffbffU & vlSelf->img_out[1U]) 
                           | (0x400U & ((~ (vlSelf->__PVT__popcount
                                            [1U][0xeU] 
                                            >> 7U)) 
                                        << 0xaU)));
    vlSelf->img_out[1U] = ((0xfffff7ffU & vlSelf->img_out[1U]) 
                           | (0x800U & ((~ (vlSelf->__PVT__popcount
                                            [1U][0xfU] 
                                            >> 7U)) 
                                        << 0xbU)));
    vlSelf->img_out[1U] = ((0xffffefffU & vlSelf->img_out[1U]) 
                           | (0x1000U & ((~ (vlSelf->__PVT__popcount
                                             [1U][0x10U] 
                                             >> 7U)) 
                                         << 0xcU)));
    vlSelf->img_out[1U] = ((0xffffdfffU & vlSelf->img_out[1U]) 
                           | (0x2000U & ((~ (vlSelf->__PVT__popcount
                                             [1U][0x11U] 
                                             >> 7U)) 
                                         << 0xdU)));
    vlSelf->img_out[1U] = ((0xffffbfffU & vlSelf->img_out[1U]) 
                           | (0x4000U & ((~ (vlSelf->__PVT__popcount
                                             [1U][0x12U] 
                                             >> 7U)) 
                                         << 0xeU)));
    vlSelf->img_out[1U] = ((0xffff7fffU & vlSelf->img_out[1U]) 
                           | (0x8000U & ((~ (vlSelf->__PVT__popcount
                                             [1U][0x13U] 
                                             >> 7U)) 
                                         << 0xfU)));
    vlSelf->img_out[1U] = ((0xfffeffffU & vlSelf->img_out[1U]) 
                           | (0x10000U & ((~ (vlSelf->__PVT__popcount
                                              [1U][0x14U] 
                                              >> 7U)) 
                                          << 0x10U)));
    vlSelf->img_out[1U] = ((0xfffdffffU & vlSelf->img_out[1U]) 
                           | (0x20000U & ((~ (vlSelf->__PVT__popcount
                                              [1U][0x15U] 
                                              >> 7U)) 
                                          << 0x11U)));
    vlSelf->img_out[1U] = ((0xfffbffffU & vlSelf->img_out[1U]) 
                           | (0x40000U & ((~ (vlSelf->__PVT__popcount
                                              [1U][0x16U] 
                                              >> 7U)) 
                                          << 0x12U)));
    vlSelf->img_out[1U] = ((0xfff7ffffU & vlSelf->img_out[1U]) 
                           | (0x80000U & ((~ (vlSelf->__PVT__popcount
                                              [1U][0x17U] 
                                              >> 7U)) 
                                          << 0x13U)));
    vlSelf->img_out[1U] = ((0xffefffffU & vlSelf->img_out[1U]) 
                           | (0x100000U & ((~ (vlSelf->__PVT__popcount
                                               [1U]
                                               [0x18U] 
                                               >> 7U)) 
                                           << 0x14U)));
    vlSelf->img_out[1U] = ((0xffdfffffU & vlSelf->img_out[1U]) 
                           | (0x200000U & ((~ (vlSelf->__PVT__popcount
                                               [1U]
                                               [0x19U] 
                                               >> 7U)) 
                                           << 0x15U)));
    vlSelf->img_out[1U] = ((0xffbfffffU & vlSelf->img_out[1U]) 
                           | (0x400000U & ((~ (vlSelf->__PVT__popcount
                                               [1U]
                                               [0x1aU] 
                                               >> 7U)) 
                                           << 0x16U)));
    vlSelf->img_out[1U] = ((0xff7fffffU & vlSelf->img_out[1U]) 
                           | (0x800000U & ((~ (vlSelf->__PVT__popcount
                                               [1U]
                                               [0x1bU] 
                                               >> 7U)) 
                                           << 0x17U)));
    vlSelf->img_out[1U] = ((0xfeffffffU & vlSelf->img_out[1U]) 
                           | (0x1000000U & ((~ (vlSelf->__PVT__popcount
                                                [2U]
                                                [0U] 
                                                >> 7U)) 
                                            << 0x18U)));
    vlSelf->img_out[1U] = ((0xfdffffffU & vlSelf->img_out[1U]) 
                           | (0x2000000U & ((~ (vlSelf->__PVT__popcount
                                                [2U]
                                                [1U] 
                                                >> 7U)) 
                                            << 0x19U)));
    vlSelf->img_out[1U] = ((0xfbffffffU & vlSelf->img_out[1U]) 
                           | (0x4000000U & ((~ (vlSelf->__PVT__popcount
                                                [2U]
                                                [2U] 
                                                >> 7U)) 
                                            << 0x1aU)));
    vlSelf->img_out[1U] = ((0xf7ffffffU & vlSelf->img_out[1U]) 
                           | (0x8000000U & ((~ (vlSelf->__PVT__popcount
                                                [2U]
                                                [3U] 
                                                >> 7U)) 
                                            << 0x1bU)));
    vlSelf->img_out[1U] = ((0xefffffffU & vlSelf->img_out[1U]) 
                           | (0x10000000U & ((~ (vlSelf->__PVT__popcount
                                                 [2U]
                                                 [4U] 
                                                 >> 7U)) 
                                             << 0x1cU)));
    vlSelf->img_out[1U] = ((0xdfffffffU & vlSelf->img_out[1U]) 
                           | (0x20000000U & ((~ (vlSelf->__PVT__popcount
                                                 [2U]
                                                 [5U] 
                                                 >> 7U)) 
                                             << 0x1dU)));
    vlSelf->img_out[1U] = ((0xbfffffffU & vlSelf->img_out[1U]) 
                           | (0x40000000U & ((~ (vlSelf->__PVT__popcount
                                                 [2U]
                                                 [6U] 
                                                 >> 7U)) 
                                             << 0x1eU)));
    vlSelf->img_out[1U] = ((0x7fffffffU & vlSelf->img_out[1U]) 
                           | ((~ (vlSelf->__PVT__popcount
                                  [2U][7U] >> 7U)) 
                              << 0x1fU));
    vlSelf->img_out[2U] = ((0xfffffffeU & vlSelf->img_out[2U]) 
                           | (1U & (~ (vlSelf->__PVT__popcount
                                       [2U][8U] >> 7U))));
    vlSelf->img_out[2U] = ((0xfffffffdU & vlSelf->img_out[2U]) 
                           | (2U & ((~ (vlSelf->__PVT__popcount
                                        [2U][9U] >> 7U)) 
                                    << 1U)));
    vlSelf->img_out[2U] = ((0xfffffffbU & vlSelf->img_out[2U]) 
                           | (4U & ((~ (vlSelf->__PVT__popcount
                                        [2U][0xaU] 
                                        >> 7U)) << 2U)));
    vlSelf->img_out[2U] = ((0xfffffff7U & vlSelf->img_out[2U]) 
                           | (8U & ((~ (vlSelf->__PVT__popcount
                                        [2U][0xbU] 
                                        >> 7U)) << 3U)));
    vlSelf->img_out[2U] = ((0xffffffefU & vlSelf->img_out[2U]) 
                           | (0x10U & ((~ (vlSelf->__PVT__popcount
                                           [2U][0xcU] 
                                           >> 7U)) 
                                       << 4U)));
    vlSelf->img_out[2U] = ((0xffffffdfU & vlSelf->img_out[2U]) 
                           | (0x20U & ((~ (vlSelf->__PVT__popcount
                                           [2U][0xdU] 
                                           >> 7U)) 
                                       << 5U)));
    vlSelf->img_out[2U] = ((0xffffffbfU & vlSelf->img_out[2U]) 
                           | (0x40U & ((~ (vlSelf->__PVT__popcount
                                           [2U][0xeU] 
                                           >> 7U)) 
                                       << 6U)));
    vlSelf->img_out[2U] = ((0xffffff7fU & vlSelf->img_out[2U]) 
                           | (0x80U & ((~ (vlSelf->__PVT__popcount
                                           [2U][0xfU] 
                                           >> 7U)) 
                                       << 7U)));
    vlSelf->img_out[2U] = ((0xfffffeffU & vlSelf->img_out[2U]) 
                           | (0x100U & ((~ (vlSelf->__PVT__popcount
                                            [2U][0x10U] 
                                            >> 7U)) 
                                        << 8U)));
    vlSelf->img_out[2U] = ((0xfffffdffU & vlSelf->img_out[2U]) 
                           | (0x200U & ((~ (vlSelf->__PVT__popcount
                                            [2U][0x11U] 
                                            >> 7U)) 
                                        << 9U)));
    vlSelf->img_out[2U] = ((0xfffffbffU & vlSelf->img_out[2U]) 
                           | (0x400U & ((~ (vlSelf->__PVT__popcount
                                            [2U][0x12U] 
                                            >> 7U)) 
                                        << 0xaU)));
    vlSelf->img_out[2U] = ((0xfffff7ffU & vlSelf->img_out[2U]) 
                           | (0x800U & ((~ (vlSelf->__PVT__popcount
                                            [2U][0x13U] 
                                            >> 7U)) 
                                        << 0xbU)));
    vlSelf->img_out[2U] = ((0xffffefffU & vlSelf->img_out[2U]) 
                           | (0x1000U & ((~ (vlSelf->__PVT__popcount
                                             [2U][0x14U] 
                                             >> 7U)) 
                                         << 0xcU)));
    vlSelf->img_out[2U] = ((0xffffdfffU & vlSelf->img_out[2U]) 
                           | (0x2000U & ((~ (vlSelf->__PVT__popcount
                                             [2U][0x15U] 
                                             >> 7U)) 
                                         << 0xdU)));
    vlSelf->img_out[2U] = ((0xffffbfffU & vlSelf->img_out[2U]) 
                           | (0x4000U & ((~ (vlSelf->__PVT__popcount
                                             [2U][0x16U] 
                                             >> 7U)) 
                                         << 0xeU)));
    vlSelf->img_out[2U] = ((0xffff7fffU & vlSelf->img_out[2U]) 
                           | (0x8000U & ((~ (vlSelf->__PVT__popcount
                                             [2U][0x17U] 
                                             >> 7U)) 
                                         << 0xfU)));
    vlSelf->img_out[2U] = ((0xfffeffffU & vlSelf->img_out[2U]) 
                           | (0x10000U & ((~ (vlSelf->__PVT__popcount
                                              [2U][0x18U] 
                                              >> 7U)) 
                                          << 0x10U)));
    vlSelf->img_out[2U] = ((0xfffdffffU & vlSelf->img_out[2U]) 
                           | (0x20000U & ((~ (vlSelf->__PVT__popcount
                                              [2U][0x19U] 
                                              >> 7U)) 
                                          << 0x11U)));
    vlSelf->img_out[2U] = ((0xfffbffffU & vlSelf->img_out[2U]) 
                           | (0x40000U & ((~ (vlSelf->__PVT__popcount
                                              [2U][0x1aU] 
                                              >> 7U)) 
                                          << 0x12U)));
    vlSelf->img_out[2U] = ((0xfff7ffffU & vlSelf->img_out[2U]) 
                           | (0x80000U & ((~ (vlSelf->__PVT__popcount
                                              [2U][0x1bU] 
                                              >> 7U)) 
                                          << 0x13U)));
    vlSelf->img_out[2U] = ((0xffefffffU & vlSelf->img_out[2U]) 
                           | (0x100000U & ((~ (vlSelf->__PVT__popcount
                                               [3U]
                                               [0U] 
                                               >> 7U)) 
                                           << 0x14U)));
    vlSelf->img_out[2U] = ((0xffdfffffU & vlSelf->img_out[2U]) 
                           | (0x200000U & ((~ (vlSelf->__PVT__popcount
                                               [3U]
                                               [1U] 
                                               >> 7U)) 
                                           << 0x15U)));
    vlSelf->img_out[2U] = ((0xffbfffffU & vlSelf->img_out[2U]) 
                           | (0x400000U & ((~ (vlSelf->__PVT__popcount
                                               [3U]
                                               [2U] 
                                               >> 7U)) 
                                           << 0x16U)));
    vlSelf->img_out[2U] = ((0xff7fffffU & vlSelf->img_out[2U]) 
                           | (0x800000U & ((~ (vlSelf->__PVT__popcount
                                               [3U]
                                               [3U] 
                                               >> 7U)) 
                                           << 0x17U)));
    vlSelf->img_out[2U] = ((0xfeffffffU & vlSelf->img_out[2U]) 
                           | (0x1000000U & ((~ (vlSelf->__PVT__popcount
                                                [3U]
                                                [4U] 
                                                >> 7U)) 
                                            << 0x18U)));
    vlSelf->img_out[2U] = ((0xfdffffffU & vlSelf->img_out[2U]) 
                           | (0x2000000U & ((~ (vlSelf->__PVT__popcount
                                                [3U]
                                                [5U] 
                                                >> 7U)) 
                                            << 0x19U)));
    vlSelf->img_out[2U] = ((0xfbffffffU & vlSelf->img_out[2U]) 
                           | (0x4000000U & ((~ (vlSelf->__PVT__popcount
                                                [3U]
                                                [6U] 
                                                >> 7U)) 
                                            << 0x1aU)));
    vlSelf->img_out[2U] = ((0xf7ffffffU & vlSelf->img_out[2U]) 
                           | (0x8000000U & ((~ (vlSelf->__PVT__popcount
                                                [3U]
                                                [7U] 
                                                >> 7U)) 
                                            << 0x1bU)));
    vlSelf->img_out[2U] = ((0xefffffffU & vlSelf->img_out[2U]) 
                           | (0x10000000U & ((~ (vlSelf->__PVT__popcount
                                                 [3U]
                                                 [8U] 
                                                 >> 7U)) 
                                             << 0x1cU)));
    vlSelf->img_out[2U] = ((0xdfffffffU & vlSelf->img_out[2U]) 
                           | (0x20000000U & ((~ (vlSelf->__PVT__popcount
                                                 [3U]
                                                 [9U] 
                                                 >> 7U)) 
                                             << 0x1dU)));
    vlSelf->img_out[2U] = ((0xbfffffffU & vlSelf->img_out[2U]) 
                           | (0x40000000U & ((~ (vlSelf->__PVT__popcount
                                                 [3U]
                                                 [0xaU] 
                                                 >> 7U)) 
                                             << 0x1eU)));
    vlSelf->img_out[2U] = ((0x7fffffffU & vlSelf->img_out[2U]) 
                           | ((~ (vlSelf->__PVT__popcount
                                  [3U][0xbU] >> 7U)) 
                              << 0x1fU));
    vlSelf->img_out[3U] = ((0xfffffffeU & vlSelf->img_out[3U]) 
                           | (1U & (~ (vlSelf->__PVT__popcount
                                       [3U][0xcU] >> 7U))));
    vlSelf->img_out[3U] = ((0xfffffffdU & vlSelf->img_out[3U]) 
                           | (2U & ((~ (vlSelf->__PVT__popcount
                                        [3U][0xdU] 
                                        >> 7U)) << 1U)));
    vlSelf->img_out[3U] = ((0xfffffffbU & vlSelf->img_out[3U]) 
                           | (4U & ((~ (vlSelf->__PVT__popcount
                                        [3U][0xeU] 
                                        >> 7U)) << 2U)));
    vlSelf->img_out[3U] = ((0xfffffff7U & vlSelf->img_out[3U]) 
                           | (8U & ((~ (vlSelf->__PVT__popcount
                                        [3U][0xfU] 
                                        >> 7U)) << 3U)));
    vlSelf->img_out[3U] = ((0xffffffefU & vlSelf->img_out[3U]) 
                           | (0x10U & ((~ (vlSelf->__PVT__popcount
                                           [3U][0x10U] 
                                           >> 7U)) 
                                       << 4U)));
    vlSelf->img_out[3U] = ((0xffffffdfU & vlSelf->img_out[3U]) 
                           | (0x20U & ((~ (vlSelf->__PVT__popcount
                                           [3U][0x11U] 
                                           >> 7U)) 
                                       << 5U)));
    vlSelf->img_out[3U] = ((0xffffffbfU & vlSelf->img_out[3U]) 
                           | (0x40U & ((~ (vlSelf->__PVT__popcount
                                           [3U][0x12U] 
                                           >> 7U)) 
                                       << 6U)));
    vlSelf->img_out[3U] = ((0xffffff7fU & vlSelf->img_out[3U]) 
                           | (0x80U & ((~ (vlSelf->__PVT__popcount
                                           [3U][0x13U] 
                                           >> 7U)) 
                                       << 7U)));
    vlSelf->img_out[3U] = ((0xfffffeffU & vlSelf->img_out[3U]) 
                           | (0x100U & ((~ (vlSelf->__PVT__popcount
                                            [3U][0x14U] 
                                            >> 7U)) 
                                        << 8U)));
    vlSelf->img_out[3U] = ((0xfffffdffU & vlSelf->img_out[3U]) 
                           | (0x200U & ((~ (vlSelf->__PVT__popcount
                                            [3U][0x15U] 
                                            >> 7U)) 
                                        << 9U)));
    vlSelf->img_out[3U] = ((0xfffffbffU & vlSelf->img_out[3U]) 
                           | (0x400U & ((~ (vlSelf->__PVT__popcount
                                            [3U][0x16U] 
                                            >> 7U)) 
                                        << 0xaU)));
    vlSelf->img_out[3U] = ((0xfffff7ffU & vlSelf->img_out[3U]) 
                           | (0x800U & ((~ (vlSelf->__PVT__popcount
                                            [3U][0x17U] 
                                            >> 7U)) 
                                        << 0xbU)));
    vlSelf->img_out[3U] = ((0xffffefffU & vlSelf->img_out[3U]) 
                           | (0x1000U & ((~ (vlSelf->__PVT__popcount
                                             [3U][0x18U] 
                                             >> 7U)) 
                                         << 0xcU)));
    vlSelf->img_out[3U] = ((0xffffdfffU & vlSelf->img_out[3U]) 
                           | (0x2000U & ((~ (vlSelf->__PVT__popcount
                                             [3U][0x19U] 
                                             >> 7U)) 
                                         << 0xdU)));
    vlSelf->img_out[3U] = ((0xffffbfffU & vlSelf->img_out[3U]) 
                           | (0x4000U & ((~ (vlSelf->__PVT__popcount
                                             [3U][0x1aU] 
                                             >> 7U)) 
                                         << 0xeU)));
    vlSelf->img_out[3U] = ((0xffff7fffU & vlSelf->img_out[3U]) 
                           | (0x8000U & ((~ (vlSelf->__PVT__popcount
                                             [3U][0x1bU] 
                                             >> 7U)) 
                                         << 0xfU)));
    vlSelf->img_out[3U] = ((0xfffeffffU & vlSelf->img_out[3U]) 
                           | (0x10000U & ((~ (vlSelf->__PVT__popcount
                                              [4U][0U] 
                                              >> 7U)) 
                                          << 0x10U)));
    vlSelf->img_out[3U] = ((0xfffdffffU & vlSelf->img_out[3U]) 
                           | (0x20000U & ((~ (vlSelf->__PVT__popcount
                                              [4U][1U] 
                                              >> 7U)) 
                                          << 0x11U)));
    vlSelf->img_out[3U] = ((0xfffbffffU & vlSelf->img_out[3U]) 
                           | (0x40000U & ((~ (vlSelf->__PVT__popcount
                                              [4U][2U] 
                                              >> 7U)) 
                                          << 0x12U)));
    vlSelf->img_out[3U] = ((0xfff7ffffU & vlSelf->img_out[3U]) 
                           | (0x80000U & ((~ (vlSelf->__PVT__popcount
                                              [4U][3U] 
                                              >> 7U)) 
                                          << 0x13U)));
    vlSelf->img_out[3U] = ((0xffefffffU & vlSelf->img_out[3U]) 
                           | (0x100000U & ((~ (vlSelf->__PVT__popcount
                                               [4U]
                                               [4U] 
                                               >> 7U)) 
                                           << 0x14U)));
    vlSelf->img_out[3U] = ((0xffdfffffU & vlSelf->img_out[3U]) 
                           | (0x200000U & ((~ (vlSelf->__PVT__popcount
                                               [4U]
                                               [5U] 
                                               >> 7U)) 
                                           << 0x15U)));
    vlSelf->img_out[3U] = ((0xffbfffffU & vlSelf->img_out[3U]) 
                           | (0x400000U & ((~ (vlSelf->__PVT__popcount
                                               [4U]
                                               [6U] 
                                               >> 7U)) 
                                           << 0x16U)));
    vlSelf->img_out[3U] = ((0xff7fffffU & vlSelf->img_out[3U]) 
                           | (0x800000U & ((~ (vlSelf->__PVT__popcount
                                               [4U]
                                               [7U] 
                                               >> 7U)) 
                                           << 0x17U)));
    vlSelf->img_out[3U] = ((0xfeffffffU & vlSelf->img_out[3U]) 
                           | (0x1000000U & ((~ (vlSelf->__PVT__popcount
                                                [4U]
                                                [8U] 
                                                >> 7U)) 
                                            << 0x18U)));
    vlSelf->img_out[3U] = ((0xfdffffffU & vlSelf->img_out[3U]) 
                           | (0x2000000U & ((~ (vlSelf->__PVT__popcount
                                                [4U]
                                                [9U] 
                                                >> 7U)) 
                                            << 0x19U)));
    vlSelf->img_out[3U] = ((0xfbffffffU & vlSelf->img_out[3U]) 
                           | (0x4000000U & ((~ (vlSelf->__PVT__popcount
                                                [4U]
                                                [0xaU] 
                                                >> 7U)) 
                                            << 0x1aU)));
    vlSelf->img_out[3U] = ((0xf7ffffffU & vlSelf->img_out[3U]) 
                           | (0x8000000U & ((~ (vlSelf->__PVT__popcount
                                                [4U]
                                                [0xbU] 
                                                >> 7U)) 
                                            << 0x1bU)));
    vlSelf->img_out[3U] = ((0xefffffffU & vlSelf->img_out[3U]) 
                           | (0x10000000U & ((~ (vlSelf->__PVT__popcount
                                                 [4U]
                                                 [0xcU] 
                                                 >> 7U)) 
                                             << 0x1cU)));
    vlSelf->img_out[3U] = ((0xdfffffffU & vlSelf->img_out[3U]) 
                           | (0x20000000U & ((~ (vlSelf->__PVT__popcount
                                                 [4U]
                                                 [0xdU] 
                                                 >> 7U)) 
                                             << 0x1dU)));
    vlSelf->img_out[3U] = ((0xbfffffffU & vlSelf->img_out[3U]) 
                           | (0x40000000U & ((~ (vlSelf->__PVT__popcount
                                                 [4U]
                                                 [0xeU] 
                                                 >> 7U)) 
                                             << 0x1eU)));
    vlSelf->img_out[3U] = ((0x7fffffffU & vlSelf->img_out[3U]) 
                           | ((~ (vlSelf->__PVT__popcount
                                  [4U][0xfU] >> 7U)) 
                              << 0x1fU));
    vlSelf->img_out[4U] = ((0xfffffffeU & vlSelf->img_out[4U]) 
                           | (1U & (~ (vlSelf->__PVT__popcount
                                       [4U][0x10U] 
                                       >> 7U))));
    vlSelf->img_out[4U] = ((0xfffffffdU & vlSelf->img_out[4U]) 
                           | (2U & ((~ (vlSelf->__PVT__popcount
                                        [4U][0x11U] 
                                        >> 7U)) << 1U)));
    vlSelf->img_out[4U] = ((0xfffffffbU & vlSelf->img_out[4U]) 
                           | (4U & ((~ (vlSelf->__PVT__popcount
                                        [4U][0x12U] 
                                        >> 7U)) << 2U)));
    vlSelf->img_out[4U] = ((0xfffffff7U & vlSelf->img_out[4U]) 
                           | (8U & ((~ (vlSelf->__PVT__popcount
                                        [4U][0x13U] 
                                        >> 7U)) << 3U)));
    vlSelf->img_out[4U] = ((0xffffffefU & vlSelf->img_out[4U]) 
                           | (0x10U & ((~ (vlSelf->__PVT__popcount
                                           [4U][0x14U] 
                                           >> 7U)) 
                                       << 4U)));
    vlSelf->img_out[4U] = ((0xffffffdfU & vlSelf->img_out[4U]) 
                           | (0x20U & ((~ (vlSelf->__PVT__popcount
                                           [4U][0x15U] 
                                           >> 7U)) 
                                       << 5U)));
    vlSelf->img_out[4U] = ((0xffffffbfU & vlSelf->img_out[4U]) 
                           | (0x40U & ((~ (vlSelf->__PVT__popcount
                                           [4U][0x16U] 
                                           >> 7U)) 
                                       << 6U)));
    vlSelf->img_out[4U] = ((0xffffff7fU & vlSelf->img_out[4U]) 
                           | (0x80U & ((~ (vlSelf->__PVT__popcount
                                           [4U][0x17U] 
                                           >> 7U)) 
                                       << 7U)));
    vlSelf->img_out[4U] = ((0xfffffeffU & vlSelf->img_out[4U]) 
                           | (0x100U & ((~ (vlSelf->__PVT__popcount
                                            [4U][0x18U] 
                                            >> 7U)) 
                                        << 8U)));
    vlSelf->img_out[4U] = ((0xfffffdffU & vlSelf->img_out[4U]) 
                           | (0x200U & ((~ (vlSelf->__PVT__popcount
                                            [4U][0x19U] 
                                            >> 7U)) 
                                        << 9U)));
    vlSelf->img_out[4U] = ((0xfffffbffU & vlSelf->img_out[4U]) 
                           | (0x400U & ((~ (vlSelf->__PVT__popcount
                                            [4U][0x1aU] 
                                            >> 7U)) 
                                        << 0xaU)));
    vlSelf->img_out[4U] = ((0xfffff7ffU & vlSelf->img_out[4U]) 
                           | (0x800U & ((~ (vlSelf->__PVT__popcount
                                            [4U][0x1bU] 
                                            >> 7U)) 
                                        << 0xbU)));
    vlSelf->img_out[4U] = ((0xffffefffU & vlSelf->img_out[4U]) 
                           | (0x1000U & ((~ (vlSelf->__PVT__popcount
                                             [5U][0U] 
                                             >> 7U)) 
                                         << 0xcU)));
    vlSelf->img_out[4U] = ((0xffffdfffU & vlSelf->img_out[4U]) 
                           | (0x2000U & ((~ (vlSelf->__PVT__popcount
                                             [5U][1U] 
                                             >> 7U)) 
                                         << 0xdU)));
    vlSelf->img_out[4U] = ((0xffffbfffU & vlSelf->img_out[4U]) 
                           | (0x4000U & ((~ (vlSelf->__PVT__popcount
                                             [5U][2U] 
                                             >> 7U)) 
                                         << 0xeU)));
    vlSelf->img_out[4U] = ((0xffff7fffU & vlSelf->img_out[4U]) 
                           | (0x8000U & ((~ (vlSelf->__PVT__popcount
                                             [5U][3U] 
                                             >> 7U)) 
                                         << 0xfU)));
    vlSelf->img_out[4U] = ((0xfffeffffU & vlSelf->img_out[4U]) 
                           | (0x10000U & ((~ (vlSelf->__PVT__popcount
                                              [5U][4U] 
                                              >> 7U)) 
                                          << 0x10U)));
    vlSelf->img_out[4U] = ((0xfffdffffU & vlSelf->img_out[4U]) 
                           | (0x20000U & ((~ (vlSelf->__PVT__popcount
                                              [5U][5U] 
                                              >> 7U)) 
                                          << 0x11U)));
    vlSelf->img_out[4U] = ((0xfffbffffU & vlSelf->img_out[4U]) 
                           | (0x40000U & ((~ (vlSelf->__PVT__popcount
                                              [5U][6U] 
                                              >> 7U)) 
                                          << 0x12U)));
    vlSelf->img_out[4U] = ((0xfff7ffffU & vlSelf->img_out[4U]) 
                           | (0x80000U & ((~ (vlSelf->__PVT__popcount
                                              [5U][7U] 
                                              >> 7U)) 
                                          << 0x13U)));
    vlSelf->img_out[4U] = ((0xffefffffU & vlSelf->img_out[4U]) 
                           | (0x100000U & ((~ (vlSelf->__PVT__popcount
                                               [5U]
                                               [8U] 
                                               >> 7U)) 
                                           << 0x14U)));
    vlSelf->img_out[4U] = ((0xffdfffffU & vlSelf->img_out[4U]) 
                           | (0x200000U & ((~ (vlSelf->__PVT__popcount
                                               [5U]
                                               [9U] 
                                               >> 7U)) 
                                           << 0x15U)));
    vlSelf->img_out[4U] = ((0xffbfffffU & vlSelf->img_out[4U]) 
                           | (0x400000U & ((~ (vlSelf->__PVT__popcount
                                               [5U]
                                               [0xaU] 
                                               >> 7U)) 
                                           << 0x16U)));
    vlSelf->img_out[4U] = ((0xff7fffffU & vlSelf->img_out[4U]) 
                           | (0x800000U & ((~ (vlSelf->__PVT__popcount
                                               [5U]
                                               [0xbU] 
                                               >> 7U)) 
                                           << 0x17U)));
    vlSelf->img_out[4U] = ((0xfeffffffU & vlSelf->img_out[4U]) 
                           | (0x1000000U & ((~ (vlSelf->__PVT__popcount
                                                [5U]
                                                [0xcU] 
                                                >> 7U)) 
                                            << 0x18U)));
    vlSelf->img_out[4U] = ((0xfdffffffU & vlSelf->img_out[4U]) 
                           | (0x2000000U & ((~ (vlSelf->__PVT__popcount
                                                [5U]
                                                [0xdU] 
                                                >> 7U)) 
                                            << 0x19U)));
    vlSelf->img_out[4U] = ((0xfbffffffU & vlSelf->img_out[4U]) 
                           | (0x4000000U & ((~ (vlSelf->__PVT__popcount
                                                [5U]
                                                [0xeU] 
                                                >> 7U)) 
                                            << 0x1aU)));
    vlSelf->img_out[4U] = ((0xf7ffffffU & vlSelf->img_out[4U]) 
                           | (0x8000000U & ((~ (vlSelf->__PVT__popcount
                                                [5U]
                                                [0xfU] 
                                                >> 7U)) 
                                            << 0x1bU)));
    vlSelf->img_out[4U] = ((0xefffffffU & vlSelf->img_out[4U]) 
                           | (0x10000000U & ((~ (vlSelf->__PVT__popcount
                                                 [5U]
                                                 [0x10U] 
                                                 >> 7U)) 
                                             << 0x1cU)));
    vlSelf->img_out[4U] = ((0xdfffffffU & vlSelf->img_out[4U]) 
                           | (0x20000000U & ((~ (vlSelf->__PVT__popcount
                                                 [5U]
                                                 [0x11U] 
                                                 >> 7U)) 
                                             << 0x1dU)));
    vlSelf->img_out[4U] = ((0xbfffffffU & vlSelf->img_out[4U]) 
                           | (0x40000000U & ((~ (vlSelf->__PVT__popcount
                                                 [5U]
                                                 [0x12U] 
                                                 >> 7U)) 
                                             << 0x1eU)));
    vlSelf->img_out[4U] = ((0x7fffffffU & vlSelf->img_out[4U]) 
                           | ((~ (vlSelf->__PVT__popcount
                                  [5U][0x13U] >> 7U)) 
                              << 0x1fU));
    vlSelf->img_out[5U] = ((0xfffffffeU & vlSelf->img_out[5U]) 
                           | (1U & (~ (vlSelf->__PVT__popcount
                                       [5U][0x14U] 
                                       >> 7U))));
    vlSelf->img_out[5U] = ((0xfffffffdU & vlSelf->img_out[5U]) 
                           | (2U & ((~ (vlSelf->__PVT__popcount
                                        [5U][0x15U] 
                                        >> 7U)) << 1U)));
    vlSelf->img_out[5U] = ((0xfffffffbU & vlSelf->img_out[5U]) 
                           | (4U & ((~ (vlSelf->__PVT__popcount
                                        [5U][0x16U] 
                                        >> 7U)) << 2U)));
    vlSelf->img_out[5U] = ((0xfffffff7U & vlSelf->img_out[5U]) 
                           | (8U & ((~ (vlSelf->__PVT__popcount
                                        [5U][0x17U] 
                                        >> 7U)) << 3U)));
    vlSelf->img_out[5U] = ((0xffffffefU & vlSelf->img_out[5U]) 
                           | (0x10U & ((~ (vlSelf->__PVT__popcount
                                           [5U][0x18U] 
                                           >> 7U)) 
                                       << 4U)));
    vlSelf->img_out[5U] = ((0xffffffdfU & vlSelf->img_out[5U]) 
                           | (0x20U & ((~ (vlSelf->__PVT__popcount
                                           [5U][0x19U] 
                                           >> 7U)) 
                                       << 5U)));
    vlSelf->img_out[5U] = ((0xffffffbfU & vlSelf->img_out[5U]) 
                           | (0x40U & ((~ (vlSelf->__PVT__popcount
                                           [5U][0x1aU] 
                                           >> 7U)) 
                                       << 6U)));
    vlSelf->img_out[5U] = ((0xffffff7fU & vlSelf->img_out[5U]) 
                           | (0x80U & ((~ (vlSelf->__PVT__popcount
                                           [5U][0x1bU] 
                                           >> 7U)) 
                                       << 7U)));
    vlSelf->img_out[5U] = ((0xfffffeffU & vlSelf->img_out[5U]) 
                           | (0x100U & ((~ (vlSelf->__PVT__popcount
                                            [6U][0U] 
                                            >> 7U)) 
                                        << 8U)));
    vlSelf->img_out[5U] = ((0xfffffdffU & vlSelf->img_out[5U]) 
                           | (0x200U & ((~ (vlSelf->__PVT__popcount
                                            [6U][1U] 
                                            >> 7U)) 
                                        << 9U)));
    vlSelf->img_out[5U] = ((0xfffffbffU & vlSelf->img_out[5U]) 
                           | (0x400U & ((~ (vlSelf->__PVT__popcount
                                            [6U][2U] 
                                            >> 7U)) 
                                        << 0xaU)));
    vlSelf->img_out[5U] = ((0xfffff7ffU & vlSelf->img_out[5U]) 
                           | (0x800U & ((~ (vlSelf->__PVT__popcount
                                            [6U][3U] 
                                            >> 7U)) 
                                        << 0xbU)));
    vlSelf->img_out[5U] = ((0xffffefffU & vlSelf->img_out[5U]) 
                           | (0x1000U & ((~ (vlSelf->__PVT__popcount
                                             [6U][4U] 
                                             >> 7U)) 
                                         << 0xcU)));
    vlSelf->img_out[5U] = ((0xffffdfffU & vlSelf->img_out[5U]) 
                           | (0x2000U & ((~ (vlSelf->__PVT__popcount
                                             [6U][5U] 
                                             >> 7U)) 
                                         << 0xdU)));
    vlSelf->img_out[5U] = ((0xffffbfffU & vlSelf->img_out[5U]) 
                           | (0x4000U & ((~ (vlSelf->__PVT__popcount
                                             [6U][6U] 
                                             >> 7U)) 
                                         << 0xeU)));
    vlSelf->img_out[5U] = ((0xffff7fffU & vlSelf->img_out[5U]) 
                           | (0x8000U & ((~ (vlSelf->__PVT__popcount
                                             [6U][7U] 
                                             >> 7U)) 
                                         << 0xfU)));
    vlSelf->img_out[5U] = ((0xfffeffffU & vlSelf->img_out[5U]) 
                           | (0x10000U & ((~ (vlSelf->__PVT__popcount
                                              [6U][8U] 
                                              >> 7U)) 
                                          << 0x10U)));
    vlSelf->img_out[5U] = ((0xfffdffffU & vlSelf->img_out[5U]) 
                           | (0x20000U & ((~ (vlSelf->__PVT__popcount
                                              [6U][9U] 
                                              >> 7U)) 
                                          << 0x11U)));
    vlSelf->img_out[5U] = ((0xfffbffffU & vlSelf->img_out[5U]) 
                           | (0x40000U & ((~ (vlSelf->__PVT__popcount
                                              [6U][0xaU] 
                                              >> 7U)) 
                                          << 0x12U)));
    vlSelf->img_out[5U] = ((0xfff7ffffU & vlSelf->img_out[5U]) 
                           | (0x80000U & ((~ (vlSelf->__PVT__popcount
                                              [6U][0xbU] 
                                              >> 7U)) 
                                          << 0x13U)));
    vlSelf->img_out[5U] = ((0xffefffffU & vlSelf->img_out[5U]) 
                           | (0x100000U & ((~ (vlSelf->__PVT__popcount
                                               [6U]
                                               [0xcU] 
                                               >> 7U)) 
                                           << 0x14U)));
    vlSelf->img_out[5U] = ((0xffdfffffU & vlSelf->img_out[5U]) 
                           | (0x200000U & ((~ (vlSelf->__PVT__popcount
                                               [6U]
                                               [0xdU] 
                                               >> 7U)) 
                                           << 0x15U)));
    vlSelf->img_out[5U] = ((0xffbfffffU & vlSelf->img_out[5U]) 
                           | (0x400000U & ((~ (vlSelf->__PVT__popcount
                                               [6U]
                                               [0xeU] 
                                               >> 7U)) 
                                           << 0x16U)));
    vlSelf->img_out[5U] = ((0xff7fffffU & vlSelf->img_out[5U]) 
                           | (0x800000U & ((~ (vlSelf->__PVT__popcount
                                               [6U]
                                               [0xfU] 
                                               >> 7U)) 
                                           << 0x17U)));
    vlSelf->img_out[5U] = ((0xfeffffffU & vlSelf->img_out[5U]) 
                           | (0x1000000U & ((~ (vlSelf->__PVT__popcount
                                                [6U]
                                                [0x10U] 
                                                >> 7U)) 
                                            << 0x18U)));
    vlSelf->img_out[5U] = ((0xfdffffffU & vlSelf->img_out[5U]) 
                           | (0x2000000U & ((~ (vlSelf->__PVT__popcount
                                                [6U]
                                                [0x11U] 
                                                >> 7U)) 
                                            << 0x19U)));
    vlSelf->img_out[5U] = ((0xfbffffffU & vlSelf->img_out[5U]) 
                           | (0x4000000U & ((~ (vlSelf->__PVT__popcount
                                                [6U]
                                                [0x12U] 
                                                >> 7U)) 
                                            << 0x1aU)));
    vlSelf->img_out[5U] = ((0xf7ffffffU & vlSelf->img_out[5U]) 
                           | (0x8000000U & ((~ (vlSelf->__PVT__popcount
                                                [6U]
                                                [0x13U] 
                                                >> 7U)) 
                                            << 0x1bU)));
    vlSelf->img_out[5U] = ((0xefffffffU & vlSelf->img_out[5U]) 
                           | (0x10000000U & ((~ (vlSelf->__PVT__popcount
                                                 [6U]
                                                 [0x14U] 
                                                 >> 7U)) 
                                             << 0x1cU)));
    vlSelf->img_out[5U] = ((0xdfffffffU & vlSelf->img_out[5U]) 
                           | (0x20000000U & ((~ (vlSelf->__PVT__popcount
                                                 [6U]
                                                 [0x15U] 
                                                 >> 7U)) 
                                             << 0x1dU)));
    vlSelf->img_out[5U] = ((0xbfffffffU & vlSelf->img_out[5U]) 
                           | (0x40000000U & ((~ (vlSelf->__PVT__popcount
                                                 [6U]
                                                 [0x16U] 
                                                 >> 7U)) 
                                             << 0x1eU)));
    vlSelf->img_out[5U] = ((0x7fffffffU & vlSelf->img_out[5U]) 
                           | ((~ (vlSelf->__PVT__popcount
                                  [6U][0x17U] >> 7U)) 
                              << 0x1fU));
    vlSelf->img_out[6U] = ((0xfffffffeU & vlSelf->img_out[6U]) 
                           | (1U & (~ (vlSelf->__PVT__popcount
                                       [6U][0x18U] 
                                       >> 7U))));
    vlSelf->img_out[6U] = ((0xfffffffdU & vlSelf->img_out[6U]) 
                           | (2U & ((~ (vlSelf->__PVT__popcount
                                        [6U][0x19U] 
                                        >> 7U)) << 1U)));
    vlSelf->img_out[6U] = ((0xfffffffbU & vlSelf->img_out[6U]) 
                           | (4U & ((~ (vlSelf->__PVT__popcount
                                        [6U][0x1aU] 
                                        >> 7U)) << 2U)));
    vlSelf->img_out[6U] = ((0xfffffff7U & vlSelf->img_out[6U]) 
                           | (8U & ((~ (vlSelf->__PVT__popcount
                                        [6U][0x1bU] 
                                        >> 7U)) << 3U)));
    vlSelf->img_out[6U] = ((0xffffffefU & vlSelf->img_out[6U]) 
                           | (0x10U & ((~ (vlSelf->__PVT__popcount
                                           [7U][0U] 
                                           >> 7U)) 
                                       << 4U)));
    vlSelf->img_out[6U] = ((0xffffffdfU & vlSelf->img_out[6U]) 
                           | (0x20U & ((~ (vlSelf->__PVT__popcount
                                           [7U][1U] 
                                           >> 7U)) 
                                       << 5U)));
    vlSelf->img_out[6U] = ((0xffffffbfU & vlSelf->img_out[6U]) 
                           | (0x40U & ((~ (vlSelf->__PVT__popcount
                                           [7U][2U] 
                                           >> 7U)) 
                                       << 6U)));
    vlSelf->img_out[6U] = ((0xffffff7fU & vlSelf->img_out[6U]) 
                           | (0x80U & ((~ (vlSelf->__PVT__popcount
                                           [7U][3U] 
                                           >> 7U)) 
                                       << 7U)));
    vlSelf->img_out[6U] = ((0xfffffeffU & vlSelf->img_out[6U]) 
                           | (0x100U & ((~ (vlSelf->__PVT__popcount
                                            [7U][4U] 
                                            >> 7U)) 
                                        << 8U)));
    vlSelf->img_out[6U] = ((0xfffffdffU & vlSelf->img_out[6U]) 
                           | (0x200U & ((~ (vlSelf->__PVT__popcount
                                            [7U][5U] 
                                            >> 7U)) 
                                        << 9U)));
    vlSelf->img_out[6U] = ((0xfffffbffU & vlSelf->img_out[6U]) 
                           | (0x400U & ((~ (vlSelf->__PVT__popcount
                                            [7U][6U] 
                                            >> 7U)) 
                                        << 0xaU)));
    vlSelf->img_out[6U] = ((0xfffff7ffU & vlSelf->img_out[6U]) 
                           | (0x800U & ((~ (vlSelf->__PVT__popcount
                                            [7U][7U] 
                                            >> 7U)) 
                                        << 0xbU)));
    vlSelf->img_out[6U] = ((0xffffefffU & vlSelf->img_out[6U]) 
                           | (0x1000U & ((~ (vlSelf->__PVT__popcount
                                             [7U][8U] 
                                             >> 7U)) 
                                         << 0xcU)));
    vlSelf->img_out[6U] = ((0xffffdfffU & vlSelf->img_out[6U]) 
                           | (0x2000U & ((~ (vlSelf->__PVT__popcount
                                             [7U][9U] 
                                             >> 7U)) 
                                         << 0xdU)));
    vlSelf->img_out[6U] = ((0xffffbfffU & vlSelf->img_out[6U]) 
                           | (0x4000U & ((~ (vlSelf->__PVT__popcount
                                             [7U][0xaU] 
                                             >> 7U)) 
                                         << 0xeU)));
    vlSelf->img_out[6U] = ((0xffff7fffU & vlSelf->img_out[6U]) 
                           | (0x8000U & ((~ (vlSelf->__PVT__popcount
                                             [7U][0xbU] 
                                             >> 7U)) 
                                         << 0xfU)));
    vlSelf->img_out[6U] = ((0xfffeffffU & vlSelf->img_out[6U]) 
                           | (0x10000U & ((~ (vlSelf->__PVT__popcount
                                              [7U][0xcU] 
                                              >> 7U)) 
                                          << 0x10U)));
    vlSelf->img_out[6U] = ((0xfffdffffU & vlSelf->img_out[6U]) 
                           | (0x20000U & ((~ (vlSelf->__PVT__popcount
                                              [7U][0xdU] 
                                              >> 7U)) 
                                          << 0x11U)));
    vlSelf->img_out[6U] = ((0xfffbffffU & vlSelf->img_out[6U]) 
                           | (0x40000U & ((~ (vlSelf->__PVT__popcount
                                              [7U][0xeU] 
                                              >> 7U)) 
                                          << 0x12U)));
    vlSelf->img_out[6U] = ((0xfff7ffffU & vlSelf->img_out[6U]) 
                           | (0x80000U & ((~ (vlSelf->__PVT__popcount
                                              [7U][0xfU] 
                                              >> 7U)) 
                                          << 0x13U)));
    vlSelf->img_out[6U] = ((0xffefffffU & vlSelf->img_out[6U]) 
                           | (0x100000U & ((~ (vlSelf->__PVT__popcount
                                               [7U]
                                               [0x10U] 
                                               >> 7U)) 
                                           << 0x14U)));
    vlSelf->img_out[6U] = ((0xffdfffffU & vlSelf->img_out[6U]) 
                           | (0x200000U & ((~ (vlSelf->__PVT__popcount
                                               [7U]
                                               [0x11U] 
                                               >> 7U)) 
                                           << 0x15U)));
    vlSelf->img_out[6U] = ((0xffbfffffU & vlSelf->img_out[6U]) 
                           | (0x400000U & ((~ (vlSelf->__PVT__popcount
                                               [7U]
                                               [0x12U] 
                                               >> 7U)) 
                                           << 0x16U)));
    vlSelf->img_out[6U] = ((0xff7fffffU & vlSelf->img_out[6U]) 
                           | (0x800000U & ((~ (vlSelf->__PVT__popcount
                                               [7U]
                                               [0x13U] 
                                               >> 7U)) 
                                           << 0x17U)));
    vlSelf->img_out[6U] = ((0xfeffffffU & vlSelf->img_out[6U]) 
                           | (0x1000000U & ((~ (vlSelf->__PVT__popcount
                                                [7U]
                                                [0x14U] 
                                                >> 7U)) 
                                            << 0x18U)));
    vlSelf->img_out[6U] = ((0xfdffffffU & vlSelf->img_out[6U]) 
                           | (0x2000000U & ((~ (vlSelf->__PVT__popcount
                                                [7U]
                                                [0x15U] 
                                                >> 7U)) 
                                            << 0x19U)));
    vlSelf->img_out[6U] = ((0xfbffffffU & vlSelf->img_out[6U]) 
                           | (0x4000000U & ((~ (vlSelf->__PVT__popcount
                                                [7U]
                                                [0x16U] 
                                                >> 7U)) 
                                            << 0x1aU)));
    vlSelf->img_out[6U] = ((0xf7ffffffU & vlSelf->img_out[6U]) 
                           | (0x8000000U & ((~ (vlSelf->__PVT__popcount
                                                [7U]
                                                [0x17U] 
                                                >> 7U)) 
                                            << 0x1bU)));
    vlSelf->img_out[6U] = ((0xefffffffU & vlSelf->img_out[6U]) 
                           | (0x10000000U & ((~ (vlSelf->__PVT__popcount
                                                 [7U]
                                                 [0x18U] 
                                                 >> 7U)) 
                                             << 0x1cU)));
    vlSelf->img_out[6U] = ((0xdfffffffU & vlSelf->img_out[6U]) 
                           | (0x20000000U & ((~ (vlSelf->__PVT__popcount
                                                 [7U]
                                                 [0x19U] 
                                                 >> 7U)) 
                                             << 0x1dU)));
    vlSelf->img_out[6U] = ((0xbfffffffU & vlSelf->img_out[6U]) 
                           | (0x40000000U & ((~ (vlSelf->__PVT__popcount
                                                 [7U]
                                                 [0x1aU] 
                                                 >> 7U)) 
                                             << 0x1eU)));
    vlSelf->img_out[6U] = ((0x7fffffffU & vlSelf->img_out[6U]) 
                           | ((~ (vlSelf->__PVT__popcount
                                  [7U][0x1bU] >> 7U)) 
                              << 0x1fU));
    vlSelf->img_out[7U] = ((0xfffffffeU & vlSelf->img_out[7U]) 
                           | (1U & (~ (vlSelf->__PVT__popcount
                                       [8U][0U] >> 7U))));
    vlSelf->img_out[7U] = ((0xfffffffdU & vlSelf->img_out[7U]) 
                           | (2U & ((~ (vlSelf->__PVT__popcount
                                        [8U][1U] >> 7U)) 
                                    << 1U)));
    vlSelf->img_out[7U] = ((0xfffffffbU & vlSelf->img_out[7U]) 
                           | (4U & ((~ (vlSelf->__PVT__popcount
                                        [8U][2U] >> 7U)) 
                                    << 2U)));
    vlSelf->img_out[7U] = ((0xfffffff7U & vlSelf->img_out[7U]) 
                           | (8U & ((~ (vlSelf->__PVT__popcount
                                        [8U][3U] >> 7U)) 
                                    << 3U)));
    vlSelf->img_out[7U] = ((0xffffffefU & vlSelf->img_out[7U]) 
                           | (0x10U & ((~ (vlSelf->__PVT__popcount
                                           [8U][4U] 
                                           >> 7U)) 
                                       << 4U)));
    vlSelf->img_out[7U] = ((0xffffffdfU & vlSelf->img_out[7U]) 
                           | (0x20U & ((~ (vlSelf->__PVT__popcount
                                           [8U][5U] 
                                           >> 7U)) 
                                       << 5U)));
    vlSelf->img_out[7U] = ((0xffffffbfU & vlSelf->img_out[7U]) 
                           | (0x40U & ((~ (vlSelf->__PVT__popcount
                                           [8U][6U] 
                                           >> 7U)) 
                                       << 6U)));
    vlSelf->img_out[7U] = ((0xffffff7fU & vlSelf->img_out[7U]) 
                           | (0x80U & ((~ (vlSelf->__PVT__popcount
                                           [8U][7U] 
                                           >> 7U)) 
                                       << 7U)));
    vlSelf->img_out[7U] = ((0xfffffeffU & vlSelf->img_out[7U]) 
                           | (0x100U & ((~ (vlSelf->__PVT__popcount
                                            [8U][8U] 
                                            >> 7U)) 
                                        << 8U)));
    vlSelf->img_out[7U] = ((0xfffffdffU & vlSelf->img_out[7U]) 
                           | (0x200U & ((~ (vlSelf->__PVT__popcount
                                            [8U][9U] 
                                            >> 7U)) 
                                        << 9U)));
    vlSelf->img_out[7U] = ((0xfffffbffU & vlSelf->img_out[7U]) 
                           | (0x400U & ((~ (vlSelf->__PVT__popcount
                                            [8U][0xaU] 
                                            >> 7U)) 
                                        << 0xaU)));
    vlSelf->img_out[7U] = ((0xfffff7ffU & vlSelf->img_out[7U]) 
                           | (0x800U & ((~ (vlSelf->__PVT__popcount
                                            [8U][0xbU] 
                                            >> 7U)) 
                                        << 0xbU)));
    vlSelf->img_out[7U] = ((0xffffefffU & vlSelf->img_out[7U]) 
                           | (0x1000U & ((~ (vlSelf->__PVT__popcount
                                             [8U][0xcU] 
                                             >> 7U)) 
                                         << 0xcU)));
    vlSelf->img_out[7U] = ((0xffffdfffU & vlSelf->img_out[7U]) 
                           | (0x2000U & ((~ (vlSelf->__PVT__popcount
                                             [8U][0xdU] 
                                             >> 7U)) 
                                         << 0xdU)));
    vlSelf->img_out[7U] = ((0xffffbfffU & vlSelf->img_out[7U]) 
                           | (0x4000U & ((~ (vlSelf->__PVT__popcount
                                             [8U][0xeU] 
                                             >> 7U)) 
                                         << 0xeU)));
    vlSelf->img_out[7U] = ((0xffff7fffU & vlSelf->img_out[7U]) 
                           | (0x8000U & ((~ (vlSelf->__PVT__popcount
                                             [8U][0xfU] 
                                             >> 7U)) 
                                         << 0xfU)));
    vlSelf->img_out[7U] = ((0xfffeffffU & vlSelf->img_out[7U]) 
                           | (0x10000U & ((~ (vlSelf->__PVT__popcount
                                              [8U][0x10U] 
                                              >> 7U)) 
                                          << 0x10U)));
    vlSelf->img_out[7U] = ((0xfffdffffU & vlSelf->img_out[7U]) 
                           | (0x20000U & ((~ (vlSelf->__PVT__popcount
                                              [8U][0x11U] 
                                              >> 7U)) 
                                          << 0x11U)));
    vlSelf->img_out[7U] = ((0xfffbffffU & vlSelf->img_out[7U]) 
                           | (0x40000U & ((~ (vlSelf->__PVT__popcount
                                              [8U][0x12U] 
                                              >> 7U)) 
                                          << 0x12U)));
    vlSelf->img_out[7U] = ((0xfff7ffffU & vlSelf->img_out[7U]) 
                           | (0x80000U & ((~ (vlSelf->__PVT__popcount
                                              [8U][0x13U] 
                                              >> 7U)) 
                                          << 0x13U)));
    vlSelf->img_out[7U] = ((0xffefffffU & vlSelf->img_out[7U]) 
                           | (0x100000U & ((~ (vlSelf->__PVT__popcount
                                               [8U]
                                               [0x14U] 
                                               >> 7U)) 
                                           << 0x14U)));
    vlSelf->img_out[7U] = ((0xffdfffffU & vlSelf->img_out[7U]) 
                           | (0x200000U & ((~ (vlSelf->__PVT__popcount
                                               [8U]
                                               [0x15U] 
                                               >> 7U)) 
                                           << 0x15U)));
    vlSelf->img_out[7U] = ((0xffbfffffU & vlSelf->img_out[7U]) 
                           | (0x400000U & ((~ (vlSelf->__PVT__popcount
                                               [8U]
                                               [0x16U] 
                                               >> 7U)) 
                                           << 0x16U)));
    vlSelf->img_out[7U] = ((0xff7fffffU & vlSelf->img_out[7U]) 
                           | (0x800000U & ((~ (vlSelf->__PVT__popcount
                                               [8U]
                                               [0x17U] 
                                               >> 7U)) 
                                           << 0x17U)));
    vlSelf->img_out[7U] = ((0xfeffffffU & vlSelf->img_out[7U]) 
                           | (0x1000000U & ((~ (vlSelf->__PVT__popcount
                                                [8U]
                                                [0x18U] 
                                                >> 7U)) 
                                            << 0x18U)));
    vlSelf->img_out[7U] = ((0xfdffffffU & vlSelf->img_out[7U]) 
                           | (0x2000000U & ((~ (vlSelf->__PVT__popcount
                                                [8U]
                                                [0x19U] 
                                                >> 7U)) 
                                            << 0x19U)));
    vlSelf->img_out[7U] = ((0xfbffffffU & vlSelf->img_out[7U]) 
                           | (0x4000000U & ((~ (vlSelf->__PVT__popcount
                                                [8U]
                                                [0x1aU] 
                                                >> 7U)) 
                                            << 0x1aU)));
    vlSelf->img_out[7U] = ((0xf7ffffffU & vlSelf->img_out[7U]) 
                           | (0x8000000U & ((~ (vlSelf->__PVT__popcount
                                                [8U]
                                                [0x1bU] 
                                                >> 7U)) 
                                            << 0x1bU)));
    vlSelf->img_out[7U] = ((0xefffffffU & vlSelf->img_out[7U]) 
                           | (0x10000000U & ((~ (vlSelf->__PVT__popcount
                                                 [9U]
                                                 [0U] 
                                                 >> 7U)) 
                                             << 0x1cU)));
    vlSelf->img_out[7U] = ((0xdfffffffU & vlSelf->img_out[7U]) 
                           | (0x20000000U & ((~ (vlSelf->__PVT__popcount
                                                 [9U]
                                                 [1U] 
                                                 >> 7U)) 
                                             << 0x1dU)));
    vlSelf->img_out[7U] = ((0xbfffffffU & vlSelf->img_out[7U]) 
                           | (0x40000000U & ((~ (vlSelf->__PVT__popcount
                                                 [9U]
                                                 [2U] 
                                                 >> 7U)) 
                                             << 0x1eU)));
    vlSelf->img_out[7U] = ((0x7fffffffU & vlSelf->img_out[7U]) 
                           | ((~ (vlSelf->__PVT__popcount
                                  [9U][3U] >> 7U)) 
                              << 0x1fU));
    vlSelf->img_out[8U] = ((0xfffffffeU & vlSelf->img_out[8U]) 
                           | (1U & (~ (vlSelf->__PVT__popcount
                                       [9U][4U] >> 7U))));
    vlSelf->img_out[8U] = ((0xfffffffdU & vlSelf->img_out[8U]) 
                           | (2U & ((~ (vlSelf->__PVT__popcount
                                        [9U][5U] >> 7U)) 
                                    << 1U)));
    vlSelf->img_out[8U] = ((0xfffffffbU & vlSelf->img_out[8U]) 
                           | (4U & ((~ (vlSelf->__PVT__popcount
                                        [9U][6U] >> 7U)) 
                                    << 2U)));
    vlSelf->img_out[8U] = ((0xfffffff7U & vlSelf->img_out[8U]) 
                           | (8U & ((~ (vlSelf->__PVT__popcount
                                        [9U][7U] >> 7U)) 
                                    << 3U)));
    vlSelf->img_out[8U] = ((0xffffffefU & vlSelf->img_out[8U]) 
                           | (0x10U & ((~ (vlSelf->__PVT__popcount
                                           [9U][8U] 
                                           >> 7U)) 
                                       << 4U)));
    vlSelf->img_out[8U] = ((0xffffffdfU & vlSelf->img_out[8U]) 
                           | (0x20U & ((~ (vlSelf->__PVT__popcount
                                           [9U][9U] 
                                           >> 7U)) 
                                       << 5U)));
    vlSelf->img_out[8U] = ((0xffffffbfU & vlSelf->img_out[8U]) 
                           | (0x40U & ((~ (vlSelf->__PVT__popcount
                                           [9U][0xaU] 
                                           >> 7U)) 
                                       << 6U)));
    vlSelf->img_out[8U] = ((0xffffff7fU & vlSelf->img_out[8U]) 
                           | (0x80U & ((~ (vlSelf->__PVT__popcount
                                           [9U][0xbU] 
                                           >> 7U)) 
                                       << 7U)));
    vlSelf->img_out[8U] = ((0xfffffeffU & vlSelf->img_out[8U]) 
                           | (0x100U & ((~ (vlSelf->__PVT__popcount
                                            [9U][0xcU] 
                                            >> 7U)) 
                                        << 8U)));
    vlSelf->img_out[8U] = ((0xfffffdffU & vlSelf->img_out[8U]) 
                           | (0x200U & ((~ (vlSelf->__PVT__popcount
                                            [9U][0xdU] 
                                            >> 7U)) 
                                        << 9U)));
    vlSelf->img_out[8U] = ((0xfffffbffU & vlSelf->img_out[8U]) 
                           | (0x400U & ((~ (vlSelf->__PVT__popcount
                                            [9U][0xeU] 
                                            >> 7U)) 
                                        << 0xaU)));
    vlSelf->img_out[8U] = ((0xfffff7ffU & vlSelf->img_out[8U]) 
                           | (0x800U & ((~ (vlSelf->__PVT__popcount
                                            [9U][0xfU] 
                                            >> 7U)) 
                                        << 0xbU)));
    vlSelf->img_out[8U] = ((0xffffefffU & vlSelf->img_out[8U]) 
                           | (0x1000U & ((~ (vlSelf->__PVT__popcount
                                             [9U][0x10U] 
                                             >> 7U)) 
                                         << 0xcU)));
    vlSelf->img_out[8U] = ((0xffffdfffU & vlSelf->img_out[8U]) 
                           | (0x2000U & ((~ (vlSelf->__PVT__popcount
                                             [9U][0x11U] 
                                             >> 7U)) 
                                         << 0xdU)));
    vlSelf->img_out[8U] = ((0xffffbfffU & vlSelf->img_out[8U]) 
                           | (0x4000U & ((~ (vlSelf->__PVT__popcount
                                             [9U][0x12U] 
                                             >> 7U)) 
                                         << 0xeU)));
    vlSelf->img_out[8U] = ((0xffff7fffU & vlSelf->img_out[8U]) 
                           | (0x8000U & ((~ (vlSelf->__PVT__popcount
                                             [9U][0x13U] 
                                             >> 7U)) 
                                         << 0xfU)));
    vlSelf->img_out[8U] = ((0xfffeffffU & vlSelf->img_out[8U]) 
                           | (0x10000U & ((~ (vlSelf->__PVT__popcount
                                              [9U][0x14U] 
                                              >> 7U)) 
                                          << 0x10U)));
    vlSelf->img_out[8U] = ((0xfffdffffU & vlSelf->img_out[8U]) 
                           | (0x20000U & ((~ (vlSelf->__PVT__popcount
                                              [9U][0x15U] 
                                              >> 7U)) 
                                          << 0x11U)));
    vlSelf->img_out[8U] = ((0xfffbffffU & vlSelf->img_out[8U]) 
                           | (0x40000U & ((~ (vlSelf->__PVT__popcount
                                              [9U][0x16U] 
                                              >> 7U)) 
                                          << 0x12U)));
    vlSelf->img_out[8U] = ((0xfff7ffffU & vlSelf->img_out[8U]) 
                           | (0x80000U & ((~ (vlSelf->__PVT__popcount
                                              [9U][0x17U] 
                                              >> 7U)) 
                                          << 0x13U)));
    vlSelf->img_out[8U] = ((0xffefffffU & vlSelf->img_out[8U]) 
                           | (0x100000U & ((~ (vlSelf->__PVT__popcount
                                               [9U]
                                               [0x18U] 
                                               >> 7U)) 
                                           << 0x14U)));
    vlSelf->img_out[8U] = ((0xffdfffffU & vlSelf->img_out[8U]) 
                           | (0x200000U & ((~ (vlSelf->__PVT__popcount
                                               [9U]
                                               [0x19U] 
                                               >> 7U)) 
                                           << 0x15U)));
    vlSelf->img_out[8U] = ((0xffbfffffU & vlSelf->img_out[8U]) 
                           | (0x400000U & ((~ (vlSelf->__PVT__popcount
                                               [9U]
                                               [0x1aU] 
                                               >> 7U)) 
                                           << 0x16U)));
    vlSelf->img_out[8U] = ((0xff7fffffU & vlSelf->img_out[8U]) 
                           | (0x800000U & ((~ (vlSelf->__PVT__popcount
                                               [9U]
                                               [0x1bU] 
                                               >> 7U)) 
                                           << 0x17U)));
    vlSelf->img_out[8U] = ((0xfeffffffU & vlSelf->img_out[8U]) 
                           | (0x1000000U & ((~ (vlSelf->__PVT__popcount
                                                [0xaU]
                                                [0U] 
                                                >> 7U)) 
                                            << 0x18U)));
    vlSelf->img_out[8U] = ((0xfdffffffU & vlSelf->img_out[8U]) 
                           | (0x2000000U & ((~ (vlSelf->__PVT__popcount
                                                [0xaU]
                                                [1U] 
                                                >> 7U)) 
                                            << 0x19U)));
    vlSelf->img_out[8U] = ((0xfbffffffU & vlSelf->img_out[8U]) 
                           | (0x4000000U & ((~ (vlSelf->__PVT__popcount
                                                [0xaU]
                                                [2U] 
                                                >> 7U)) 
                                            << 0x1aU)));
    vlSelf->img_out[8U] = ((0xf7ffffffU & vlSelf->img_out[8U]) 
                           | (0x8000000U & ((~ (vlSelf->__PVT__popcount
                                                [0xaU]
                                                [3U] 
                                                >> 7U)) 
                                            << 0x1bU)));
    vlSelf->img_out[8U] = ((0xefffffffU & vlSelf->img_out[8U]) 
                           | (0x10000000U & ((~ (vlSelf->__PVT__popcount
                                                 [0xaU]
                                                 [4U] 
                                                 >> 7U)) 
                                             << 0x1cU)));
    vlSelf->img_out[8U] = ((0xdfffffffU & vlSelf->img_out[8U]) 
                           | (0x20000000U & ((~ (vlSelf->__PVT__popcount
                                                 [0xaU]
                                                 [5U] 
                                                 >> 7U)) 
                                             << 0x1dU)));
    vlSelf->img_out[8U] = ((0xbfffffffU & vlSelf->img_out[8U]) 
                           | (0x40000000U & ((~ (vlSelf->__PVT__popcount
                                                 [0xaU]
                                                 [6U] 
                                                 >> 7U)) 
                                             << 0x1eU)));
    vlSelf->img_out[8U] = ((0x7fffffffU & vlSelf->img_out[8U]) 
                           | ((~ (vlSelf->__PVT__popcount
                                  [0xaU][7U] >> 7U)) 
                              << 0x1fU));
    vlSelf->img_out[9U] = ((0xfffffffeU & vlSelf->img_out[9U]) 
                           | (1U & (~ (vlSelf->__PVT__popcount
                                       [0xaU][8U] >> 7U))));
    vlSelf->img_out[9U] = ((0xfffffffdU & vlSelf->img_out[9U]) 
                           | (2U & ((~ (vlSelf->__PVT__popcount
                                        [0xaU][9U] 
                                        >> 7U)) << 1U)));
    vlSelf->img_out[9U] = ((0xfffffffbU & vlSelf->img_out[9U]) 
                           | (4U & ((~ (vlSelf->__PVT__popcount
                                        [0xaU][0xaU] 
                                        >> 7U)) << 2U)));
    vlSelf->img_out[9U] = ((0xfffffff7U & vlSelf->img_out[9U]) 
                           | (8U & ((~ (vlSelf->__PVT__popcount
                                        [0xaU][0xbU] 
                                        >> 7U)) << 3U)));
    vlSelf->img_out[9U] = ((0xffffffefU & vlSelf->img_out[9U]) 
                           | (0x10U & ((~ (vlSelf->__PVT__popcount
                                           [0xaU][0xcU] 
                                           >> 7U)) 
                                       << 4U)));
    vlSelf->img_out[9U] = ((0xffffffdfU & vlSelf->img_out[9U]) 
                           | (0x20U & ((~ (vlSelf->__PVT__popcount
                                           [0xaU][0xdU] 
                                           >> 7U)) 
                                       << 5U)));
    vlSelf->img_out[9U] = ((0xffffffbfU & vlSelf->img_out[9U]) 
                           | (0x40U & ((~ (vlSelf->__PVT__popcount
                                           [0xaU][0xeU] 
                                           >> 7U)) 
                                       << 6U)));
    vlSelf->img_out[9U] = ((0xffffff7fU & vlSelf->img_out[9U]) 
                           | (0x80U & ((~ (vlSelf->__PVT__popcount
                                           [0xaU][0xfU] 
                                           >> 7U)) 
                                       << 7U)));
    vlSelf->img_out[9U] = ((0xfffffeffU & vlSelf->img_out[9U]) 
                           | (0x100U & ((~ (vlSelf->__PVT__popcount
                                            [0xaU][0x10U] 
                                            >> 7U)) 
                                        << 8U)));
    vlSelf->img_out[9U] = ((0xfffffdffU & vlSelf->img_out[9U]) 
                           | (0x200U & ((~ (vlSelf->__PVT__popcount
                                            [0xaU][0x11U] 
                                            >> 7U)) 
                                        << 9U)));
    vlSelf->img_out[9U] = ((0xfffffbffU & vlSelf->img_out[9U]) 
                           | (0x400U & ((~ (vlSelf->__PVT__popcount
                                            [0xaU][0x12U] 
                                            >> 7U)) 
                                        << 0xaU)));
    vlSelf->img_out[9U] = ((0xfffff7ffU & vlSelf->img_out[9U]) 
                           | (0x800U & ((~ (vlSelf->__PVT__popcount
                                            [0xaU][0x13U] 
                                            >> 7U)) 
                                        << 0xbU)));
    vlSelf->img_out[9U] = ((0xffffefffU & vlSelf->img_out[9U]) 
                           | (0x1000U & ((~ (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x14U] 
                                             >> 7U)) 
                                         << 0xcU)));
    vlSelf->img_out[9U] = ((0xffffdfffU & vlSelf->img_out[9U]) 
                           | (0x2000U & ((~ (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x15U] 
                                             >> 7U)) 
                                         << 0xdU)));
    vlSelf->img_out[9U] = ((0xffffbfffU & vlSelf->img_out[9U]) 
                           | (0x4000U & ((~ (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x16U] 
                                             >> 7U)) 
                                         << 0xeU)));
    vlSelf->img_out[9U] = ((0xffff7fffU & vlSelf->img_out[9U]) 
                           | (0x8000U & ((~ (vlSelf->__PVT__popcount
                                             [0xaU]
                                             [0x17U] 
                                             >> 7U)) 
                                         << 0xfU)));
    vlSelf->img_out[9U] = ((0xfffeffffU & vlSelf->img_out[9U]) 
                           | (0x10000U & ((~ (vlSelf->__PVT__popcount
                                              [0xaU]
                                              [0x18U] 
                                              >> 7U)) 
                                          << 0x10U)));
    vlSelf->img_out[9U] = ((0xfffdffffU & vlSelf->img_out[9U]) 
                           | (0x20000U & ((~ (vlSelf->__PVT__popcount
                                              [0xaU]
                                              [0x19U] 
                                              >> 7U)) 
                                          << 0x11U)));
    vlSelf->img_out[9U] = ((0xfffbffffU & vlSelf->img_out[9U]) 
                           | (0x40000U & ((~ (vlSelf->__PVT__popcount
                                              [0xaU]
                                              [0x1aU] 
                                              >> 7U)) 
                                          << 0x12U)));
    vlSelf->img_out[9U] = ((0xfff7ffffU & vlSelf->img_out[9U]) 
                           | (0x80000U & ((~ (vlSelf->__PVT__popcount
                                              [0xaU]
                                              [0x1bU] 
                                              >> 7U)) 
                                          << 0x13U)));
    vlSelf->img_out[9U] = ((0xffefffffU & vlSelf->img_out[9U]) 
                           | (0x100000U & ((~ (vlSelf->__PVT__popcount
                                               [0xbU]
                                               [0U] 
                                               >> 7U)) 
                                           << 0x14U)));
    vlSelf->img_out[9U] = ((0xffdfffffU & vlSelf->img_out[9U]) 
                           | (0x200000U & ((~ (vlSelf->__PVT__popcount
                                               [0xbU]
                                               [1U] 
                                               >> 7U)) 
                                           << 0x15U)));
    vlSelf->img_out[9U] = ((0xffbfffffU & vlSelf->img_out[9U]) 
                           | (0x400000U & ((~ (vlSelf->__PVT__popcount
                                               [0xbU]
                                               [2U] 
                                               >> 7U)) 
                                           << 0x16U)));
    vlSelf->img_out[9U] = ((0xff7fffffU & vlSelf->img_out[9U]) 
                           | (0x800000U & ((~ (vlSelf->__PVT__popcount
                                               [0xbU]
                                               [3U] 
                                               >> 7U)) 
                                           << 0x17U)));
    vlSelf->img_out[9U] = ((0xfeffffffU & vlSelf->img_out[9U]) 
                           | (0x1000000U & ((~ (vlSelf->__PVT__popcount
                                                [0xbU]
                                                [4U] 
                                                >> 7U)) 
                                            << 0x18U)));
    vlSelf->img_out[9U] = ((0xfdffffffU & vlSelf->img_out[9U]) 
                           | (0x2000000U & ((~ (vlSelf->__PVT__popcount
                                                [0xbU]
                                                [5U] 
                                                >> 7U)) 
                                            << 0x19U)));
    vlSelf->img_out[9U] = ((0xfbffffffU & vlSelf->img_out[9U]) 
                           | (0x4000000U & ((~ (vlSelf->__PVT__popcount
                                                [0xbU]
                                                [6U] 
                                                >> 7U)) 
                                            << 0x1aU)));
    vlSelf->img_out[9U] = ((0xf7ffffffU & vlSelf->img_out[9U]) 
                           | (0x8000000U & ((~ (vlSelf->__PVT__popcount
                                                [0xbU]
                                                [7U] 
                                                >> 7U)) 
                                            << 0x1bU)));
    vlSelf->img_out[9U] = ((0xefffffffU & vlSelf->img_out[9U]) 
                           | (0x10000000U & ((~ (vlSelf->__PVT__popcount
                                                 [0xbU]
                                                 [8U] 
                                                 >> 7U)) 
                                             << 0x1cU)));
    vlSelf->img_out[9U] = ((0xdfffffffU & vlSelf->img_out[9U]) 
                           | (0x20000000U & ((~ (vlSelf->__PVT__popcount
                                                 [0xbU]
                                                 [9U] 
                                                 >> 7U)) 
                                             << 0x1dU)));
    vlSelf->img_out[9U] = ((0xbfffffffU & vlSelf->img_out[9U]) 
                           | (0x40000000U & ((~ (vlSelf->__PVT__popcount
                                                 [0xbU]
                                                 [0xaU] 
                                                 >> 7U)) 
                                             << 0x1eU)));
    vlSelf->img_out[9U] = ((0x7fffffffU & vlSelf->img_out[9U]) 
                           | ((~ (vlSelf->__PVT__popcount
                                  [0xbU][0xbU] >> 7U)) 
                              << 0x1fU));
    vlSelf->img_out[0xaU] = ((0xfffffffeU & vlSelf->img_out[0xaU]) 
                             | (1U & (~ (vlSelf->__PVT__popcount
                                         [0xbU][0xcU] 
                                         >> 7U))));
    vlSelf->img_out[0xaU] = ((0xfffffffdU & vlSelf->img_out[0xaU]) 
                             | (2U & ((~ (vlSelf->__PVT__popcount
                                          [0xbU][0xdU] 
                                          >> 7U)) << 1U)));
    vlSelf->img_out[0xaU] = ((0xfffffffbU & vlSelf->img_out[0xaU]) 
                             | (4U & ((~ (vlSelf->__PVT__popcount
                                          [0xbU][0xeU] 
                                          >> 7U)) << 2U)));
    vlSelf->img_out[0xaU] = ((0xfffffff7U & vlSelf->img_out[0xaU]) 
                             | (8U & ((~ (vlSelf->__PVT__popcount
                                          [0xbU][0xfU] 
                                          >> 7U)) << 3U)));
    vlSelf->img_out[0xaU] = ((0xffffffefU & vlSelf->img_out[0xaU]) 
                             | (0x10U & ((~ (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x10U] 
                                             >> 7U)) 
                                         << 4U)));
    vlSelf->img_out[0xaU] = ((0xffffffdfU & vlSelf->img_out[0xaU]) 
                             | (0x20U & ((~ (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x11U] 
                                             >> 7U)) 
                                         << 5U)));
    vlSelf->img_out[0xaU] = ((0xffffffbfU & vlSelf->img_out[0xaU]) 
                             | (0x40U & ((~ (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x12U] 
                                             >> 7U)) 
                                         << 6U)));
    vlSelf->img_out[0xaU] = ((0xffffff7fU & vlSelf->img_out[0xaU]) 
                             | (0x80U & ((~ (vlSelf->__PVT__popcount
                                             [0xbU]
                                             [0x13U] 
                                             >> 7U)) 
                                         << 7U)));
    vlSelf->img_out[0xaU] = ((0xfffffeffU & vlSelf->img_out[0xaU]) 
                             | (0x100U & ((~ (vlSelf->__PVT__popcount
                                              [0xbU]
                                              [0x14U] 
                                              >> 7U)) 
                                          << 8U)));
    vlSelf->img_out[0xaU] = ((0xfffffdffU & vlSelf->img_out[0xaU]) 
                             | (0x200U & ((~ (vlSelf->__PVT__popcount
                                              [0xbU]
                                              [0x15U] 
                                              >> 7U)) 
                                          << 9U)));
    vlSelf->img_out[0xaU] = ((0xfffffbffU & vlSelf->img_out[0xaU]) 
                             | (0x400U & ((~ (vlSelf->__PVT__popcount
                                              [0xbU]
                                              [0x16U] 
                                              >> 7U)) 
                                          << 0xaU)));
    vlSelf->img_out[0xaU] = ((0xfffff7ffU & vlSelf->img_out[0xaU]) 
                             | (0x800U & ((~ (vlSelf->__PVT__popcount
                                              [0xbU]
                                              [0x17U] 
                                              >> 7U)) 
                                          << 0xbU)));
    vlSelf->img_out[0xaU] = ((0xffffefffU & vlSelf->img_out[0xaU]) 
                             | (0x1000U & ((~ (vlSelf->__PVT__popcount
                                               [0xbU]
                                               [0x18U] 
                                               >> 7U)) 
                                           << 0xcU)));
    vlSelf->img_out[0xaU] = ((0xffffdfffU & vlSelf->img_out[0xaU]) 
                             | (0x2000U & ((~ (vlSelf->__PVT__popcount
                                               [0xbU]
                                               [0x19U] 
                                               >> 7U)) 
                                           << 0xdU)));
    vlSelf->img_out[0xaU] = ((0xffffbfffU & vlSelf->img_out[0xaU]) 
                             | (0x4000U & ((~ (vlSelf->__PVT__popcount
                                               [0xbU]
                                               [0x1aU] 
                                               >> 7U)) 
                                           << 0xeU)));
    vlSelf->img_out[0xaU] = ((0xffff7fffU & vlSelf->img_out[0xaU]) 
                             | (0x8000U & ((~ (vlSelf->__PVT__popcount
                                               [0xbU]
                                               [0x1bU] 
                                               >> 7U)) 
                                           << 0xfU)));
    vlSelf->img_out[0xaU] = ((0xfffeffffU & vlSelf->img_out[0xaU]) 
                             | (0x10000U & ((~ (vlSelf->__PVT__popcount
                                                [0xcU]
                                                [0U] 
                                                >> 7U)) 
                                            << 0x10U)));
    vlSelf->img_out[0xaU] = ((0xfffdffffU & vlSelf->img_out[0xaU]) 
                             | (0x20000U & ((~ (vlSelf->__PVT__popcount
                                                [0xcU]
                                                [1U] 
                                                >> 7U)) 
                                            << 0x11U)));
    vlSelf->img_out[0xaU] = ((0xfffbffffU & vlSelf->img_out[0xaU]) 
                             | (0x40000U & ((~ (vlSelf->__PVT__popcount
                                                [0xcU]
                                                [2U] 
                                                >> 7U)) 
                                            << 0x12U)));
    vlSelf->img_out[0xaU] = ((0xfff7ffffU & vlSelf->img_out[0xaU]) 
                             | (0x80000U & ((~ (vlSelf->__PVT__popcount
                                                [0xcU]
                                                [3U] 
                                                >> 7U)) 
                                            << 0x13U)));
    vlSelf->img_out[0xaU] = ((0xffefffffU & vlSelf->img_out[0xaU]) 
                             | (0x100000U & ((~ (vlSelf->__PVT__popcount
                                                 [0xcU]
                                                 [4U] 
                                                 >> 7U)) 
                                             << 0x14U)));
    vlSelf->img_out[0xaU] = ((0xffdfffffU & vlSelf->img_out[0xaU]) 
                             | (0x200000U & ((~ (vlSelf->__PVT__popcount
                                                 [0xcU]
                                                 [5U] 
                                                 >> 7U)) 
                                             << 0x15U)));
    vlSelf->img_out[0xaU] = ((0xffbfffffU & vlSelf->img_out[0xaU]) 
                             | (0x400000U & ((~ (vlSelf->__PVT__popcount
                                                 [0xcU]
                                                 [6U] 
                                                 >> 7U)) 
                                             << 0x16U)));
    vlSelf->img_out[0xaU] = ((0xff7fffffU & vlSelf->img_out[0xaU]) 
                             | (0x800000U & ((~ (vlSelf->__PVT__popcount
                                                 [0xcU]
                                                 [7U] 
                                                 >> 7U)) 
                                             << 0x17U)));
    vlSelf->img_out[0xaU] = ((0xfeffffffU & vlSelf->img_out[0xaU]) 
                             | (0x1000000U & ((~ (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [8U] 
                                                  >> 7U)) 
                                              << 0x18U)));
    vlSelf->img_out[0xaU] = ((0xfdffffffU & vlSelf->img_out[0xaU]) 
                             | (0x2000000U & ((~ (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [9U] 
                                                  >> 7U)) 
                                              << 0x19U)));
    vlSelf->img_out[0xaU] = ((0xfbffffffU & vlSelf->img_out[0xaU]) 
                             | (0x4000000U & ((~ (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [0xaU] 
                                                  >> 7U)) 
                                              << 0x1aU)));
    vlSelf->img_out[0xaU] = ((0xf7ffffffU & vlSelf->img_out[0xaU]) 
                             | (0x8000000U & ((~ (vlSelf->__PVT__popcount
                                                  [0xcU]
                                                  [0xbU] 
                                                  >> 7U)) 
                                              << 0x1bU)));
    vlSelf->img_out[0xaU] = ((0xefffffffU & vlSelf->img_out[0xaU]) 
                             | (0x10000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0xcU]
                                                   [0xcU] 
                                                   >> 7U)) 
                                               << 0x1cU)));
    vlSelf->img_out[0xaU] = ((0xdfffffffU & vlSelf->img_out[0xaU]) 
                             | (0x20000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0xcU]
                                                   [0xdU] 
                                                   >> 7U)) 
                                               << 0x1dU)));
    vlSelf->img_out[0xaU] = ((0xbfffffffU & vlSelf->img_out[0xaU]) 
                             | (0x40000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0xcU]
                                                   [0xeU] 
                                                   >> 7U)) 
                                               << 0x1eU)));
    vlSelf->img_out[0xaU] = ((0x7fffffffU & vlSelf->img_out[0xaU]) 
                             | ((~ (vlSelf->__PVT__popcount
                                    [0xcU][0xfU] >> 7U)) 
                                << 0x1fU));
    vlSelf->img_out[0xbU] = ((0xfffffffeU & vlSelf->img_out[0xbU]) 
                             | (1U & (~ (vlSelf->__PVT__popcount
                                         [0xcU][0x10U] 
                                         >> 7U))));
    vlSelf->img_out[0xbU] = ((0xfffffffdU & vlSelf->img_out[0xbU]) 
                             | (2U & ((~ (vlSelf->__PVT__popcount
                                          [0xcU][0x11U] 
                                          >> 7U)) << 1U)));
    vlSelf->img_out[0xbU] = ((0xfffffffbU & vlSelf->img_out[0xbU]) 
                             | (4U & ((~ (vlSelf->__PVT__popcount
                                          [0xcU][0x12U] 
                                          >> 7U)) << 2U)));
    vlSelf->img_out[0xbU] = ((0xfffffff7U & vlSelf->img_out[0xbU]) 
                             | (8U & ((~ (vlSelf->__PVT__popcount
                                          [0xcU][0x13U] 
                                          >> 7U)) << 3U)));
    vlSelf->img_out[0xbU] = ((0xffffffefU & vlSelf->img_out[0xbU]) 
                             | (0x10U & ((~ (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x14U] 
                                             >> 7U)) 
                                         << 4U)));
    vlSelf->img_out[0xbU] = ((0xffffffdfU & vlSelf->img_out[0xbU]) 
                             | (0x20U & ((~ (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x15U] 
                                             >> 7U)) 
                                         << 5U)));
    vlSelf->img_out[0xbU] = ((0xffffffbfU & vlSelf->img_out[0xbU]) 
                             | (0x40U & ((~ (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x16U] 
                                             >> 7U)) 
                                         << 6U)));
    vlSelf->img_out[0xbU] = ((0xffffff7fU & vlSelf->img_out[0xbU]) 
                             | (0x80U & ((~ (vlSelf->__PVT__popcount
                                             [0xcU]
                                             [0x17U] 
                                             >> 7U)) 
                                         << 7U)));
    vlSelf->img_out[0xbU] = ((0xfffffeffU & vlSelf->img_out[0xbU]) 
                             | (0x100U & ((~ (vlSelf->__PVT__popcount
                                              [0xcU]
                                              [0x18U] 
                                              >> 7U)) 
                                          << 8U)));
    vlSelf->img_out[0xbU] = ((0xfffffdffU & vlSelf->img_out[0xbU]) 
                             | (0x200U & ((~ (vlSelf->__PVT__popcount
                                              [0xcU]
                                              [0x19U] 
                                              >> 7U)) 
                                          << 9U)));
    vlSelf->img_out[0xbU] = ((0xfffffbffU & vlSelf->img_out[0xbU]) 
                             | (0x400U & ((~ (vlSelf->__PVT__popcount
                                              [0xcU]
                                              [0x1aU] 
                                              >> 7U)) 
                                          << 0xaU)));
    vlSelf->img_out[0xbU] = ((0xfffff7ffU & vlSelf->img_out[0xbU]) 
                             | (0x800U & ((~ (vlSelf->__PVT__popcount
                                              [0xcU]
                                              [0x1bU] 
                                              >> 7U)) 
                                          << 0xbU)));
    vlSelf->img_out[0xbU] = ((0xffffefffU & vlSelf->img_out[0xbU]) 
                             | (0x1000U & ((~ (vlSelf->__PVT__popcount
                                               [0xdU]
                                               [0U] 
                                               >> 7U)) 
                                           << 0xcU)));
    vlSelf->img_out[0xbU] = ((0xffffdfffU & vlSelf->img_out[0xbU]) 
                             | (0x2000U & ((~ (vlSelf->__PVT__popcount
                                               [0xdU]
                                               [1U] 
                                               >> 7U)) 
                                           << 0xdU)));
    vlSelf->img_out[0xbU] = ((0xffffbfffU & vlSelf->img_out[0xbU]) 
                             | (0x4000U & ((~ (vlSelf->__PVT__popcount
                                               [0xdU]
                                               [2U] 
                                               >> 7U)) 
                                           << 0xeU)));
    vlSelf->img_out[0xbU] = ((0xffff7fffU & vlSelf->img_out[0xbU]) 
                             | (0x8000U & ((~ (vlSelf->__PVT__popcount
                                               [0xdU]
                                               [3U] 
                                               >> 7U)) 
                                           << 0xfU)));
    vlSelf->img_out[0xbU] = ((0xfffeffffU & vlSelf->img_out[0xbU]) 
                             | (0x10000U & ((~ (vlSelf->__PVT__popcount
                                                [0xdU]
                                                [4U] 
                                                >> 7U)) 
                                            << 0x10U)));
    vlSelf->img_out[0xbU] = ((0xfffdffffU & vlSelf->img_out[0xbU]) 
                             | (0x20000U & ((~ (vlSelf->__PVT__popcount
                                                [0xdU]
                                                [5U] 
                                                >> 7U)) 
                                            << 0x11U)));
    vlSelf->img_out[0xbU] = ((0xfffbffffU & vlSelf->img_out[0xbU]) 
                             | (0x40000U & ((~ (vlSelf->__PVT__popcount
                                                [0xdU]
                                                [6U] 
                                                >> 7U)) 
                                            << 0x12U)));
    vlSelf->img_out[0xbU] = ((0xfff7ffffU & vlSelf->img_out[0xbU]) 
                             | (0x80000U & ((~ (vlSelf->__PVT__popcount
                                                [0xdU]
                                                [7U] 
                                                >> 7U)) 
                                            << 0x13U)));
    vlSelf->img_out[0xbU] = ((0xffefffffU & vlSelf->img_out[0xbU]) 
                             | (0x100000U & ((~ (vlSelf->__PVT__popcount
                                                 [0xdU]
                                                 [8U] 
                                                 >> 7U)) 
                                             << 0x14U)));
    vlSelf->img_out[0xbU] = ((0xffdfffffU & vlSelf->img_out[0xbU]) 
                             | (0x200000U & ((~ (vlSelf->__PVT__popcount
                                                 [0xdU]
                                                 [9U] 
                                                 >> 7U)) 
                                             << 0x15U)));
    vlSelf->img_out[0xbU] = ((0xffbfffffU & vlSelf->img_out[0xbU]) 
                             | (0x400000U & ((~ (vlSelf->__PVT__popcount
                                                 [0xdU]
                                                 [0xaU] 
                                                 >> 7U)) 
                                             << 0x16U)));
    vlSelf->img_out[0xbU] = ((0xff7fffffU & vlSelf->img_out[0xbU]) 
                             | (0x800000U & ((~ (vlSelf->__PVT__popcount
                                                 [0xdU]
                                                 [0xbU] 
                                                 >> 7U)) 
                                             << 0x17U)));
    vlSelf->img_out[0xbU] = ((0xfeffffffU & vlSelf->img_out[0xbU]) 
                             | (0x1000000U & ((~ (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [0xcU] 
                                                  >> 7U)) 
                                              << 0x18U)));
    vlSelf->img_out[0xbU] = ((0xfdffffffU & vlSelf->img_out[0xbU]) 
                             | (0x2000000U & ((~ (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [0xdU] 
                                                  >> 7U)) 
                                              << 0x19U)));
    vlSelf->img_out[0xbU] = ((0xfbffffffU & vlSelf->img_out[0xbU]) 
                             | (0x4000000U & ((~ (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [0xeU] 
                                                  >> 7U)) 
                                              << 0x1aU)));
    vlSelf->img_out[0xbU] = ((0xf7ffffffU & vlSelf->img_out[0xbU]) 
                             | (0x8000000U & ((~ (vlSelf->__PVT__popcount
                                                  [0xdU]
                                                  [0xfU] 
                                                  >> 7U)) 
                                              << 0x1bU)));
    vlSelf->img_out[0xbU] = ((0xefffffffU & vlSelf->img_out[0xbU]) 
                             | (0x10000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0xdU]
                                                   [0x10U] 
                                                   >> 7U)) 
                                               << 0x1cU)));
    vlSelf->img_out[0xbU] = ((0xdfffffffU & vlSelf->img_out[0xbU]) 
                             | (0x20000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0xdU]
                                                   [0x11U] 
                                                   >> 7U)) 
                                               << 0x1dU)));
    vlSelf->img_out[0xbU] = ((0xbfffffffU & vlSelf->img_out[0xbU]) 
                             | (0x40000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0xdU]
                                                   [0x12U] 
                                                   >> 7U)) 
                                               << 0x1eU)));
    vlSelf->img_out[0xbU] = ((0x7fffffffU & vlSelf->img_out[0xbU]) 
                             | ((~ (vlSelf->__PVT__popcount
                                    [0xdU][0x13U] >> 7U)) 
                                << 0x1fU));
    vlSelf->img_out[0xcU] = ((0xfffffffeU & vlSelf->img_out[0xcU]) 
                             | (1U & (~ (vlSelf->__PVT__popcount
                                         [0xdU][0x14U] 
                                         >> 7U))));
    vlSelf->img_out[0xcU] = ((0xfffffffdU & vlSelf->img_out[0xcU]) 
                             | (2U & ((~ (vlSelf->__PVT__popcount
                                          [0xdU][0x15U] 
                                          >> 7U)) << 1U)));
    vlSelf->img_out[0xcU] = ((0xfffffffbU & vlSelf->img_out[0xcU]) 
                             | (4U & ((~ (vlSelf->__PVT__popcount
                                          [0xdU][0x16U] 
                                          >> 7U)) << 2U)));
    vlSelf->img_out[0xcU] = ((0xfffffff7U & vlSelf->img_out[0xcU]) 
                             | (8U & ((~ (vlSelf->__PVT__popcount
                                          [0xdU][0x17U] 
                                          >> 7U)) << 3U)));
    vlSelf->img_out[0xcU] = ((0xffffffefU & vlSelf->img_out[0xcU]) 
                             | (0x10U & ((~ (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x18U] 
                                             >> 7U)) 
                                         << 4U)));
    vlSelf->img_out[0xcU] = ((0xffffffdfU & vlSelf->img_out[0xcU]) 
                             | (0x20U & ((~ (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x19U] 
                                             >> 7U)) 
                                         << 5U)));
    vlSelf->img_out[0xcU] = ((0xffffffbfU & vlSelf->img_out[0xcU]) 
                             | (0x40U & ((~ (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x1aU] 
                                             >> 7U)) 
                                         << 6U)));
    vlSelf->img_out[0xcU] = ((0xffffff7fU & vlSelf->img_out[0xcU]) 
                             | (0x80U & ((~ (vlSelf->__PVT__popcount
                                             [0xdU]
                                             [0x1bU] 
                                             >> 7U)) 
                                         << 7U)));
    vlSelf->img_out[0xcU] = ((0xfffffeffU & vlSelf->img_out[0xcU]) 
                             | (0x100U & ((~ (vlSelf->__PVT__popcount
                                              [0xeU]
                                              [0U] 
                                              >> 7U)) 
                                          << 8U)));
    vlSelf->img_out[0xcU] = ((0xfffffdffU & vlSelf->img_out[0xcU]) 
                             | (0x200U & ((~ (vlSelf->__PVT__popcount
                                              [0xeU]
                                              [1U] 
                                              >> 7U)) 
                                          << 9U)));
    vlSelf->img_out[0xcU] = ((0xfffffbffU & vlSelf->img_out[0xcU]) 
                             | (0x400U & ((~ (vlSelf->__PVT__popcount
                                              [0xeU]
                                              [2U] 
                                              >> 7U)) 
                                          << 0xaU)));
    vlSelf->img_out[0xcU] = ((0xfffff7ffU & vlSelf->img_out[0xcU]) 
                             | (0x800U & ((~ (vlSelf->__PVT__popcount
                                              [0xeU]
                                              [3U] 
                                              >> 7U)) 
                                          << 0xbU)));
    vlSelf->img_out[0xcU] = ((0xffffefffU & vlSelf->img_out[0xcU]) 
                             | (0x1000U & ((~ (vlSelf->__PVT__popcount
                                               [0xeU]
                                               [4U] 
                                               >> 7U)) 
                                           << 0xcU)));
    vlSelf->img_out[0xcU] = ((0xffffdfffU & vlSelf->img_out[0xcU]) 
                             | (0x2000U & ((~ (vlSelf->__PVT__popcount
                                               [0xeU]
                                               [5U] 
                                               >> 7U)) 
                                           << 0xdU)));
    vlSelf->img_out[0xcU] = ((0xffffbfffU & vlSelf->img_out[0xcU]) 
                             | (0x4000U & ((~ (vlSelf->__PVT__popcount
                                               [0xeU]
                                               [6U] 
                                               >> 7U)) 
                                           << 0xeU)));
    vlSelf->img_out[0xcU] = ((0xffff7fffU & vlSelf->img_out[0xcU]) 
                             | (0x8000U & ((~ (vlSelf->__PVT__popcount
                                               [0xeU]
                                               [7U] 
                                               >> 7U)) 
                                           << 0xfU)));
    vlSelf->img_out[0xcU] = ((0xfffeffffU & vlSelf->img_out[0xcU]) 
                             | (0x10000U & ((~ (vlSelf->__PVT__popcount
                                                [0xeU]
                                                [8U] 
                                                >> 7U)) 
                                            << 0x10U)));
    vlSelf->img_out[0xcU] = ((0xfffdffffU & vlSelf->img_out[0xcU]) 
                             | (0x20000U & ((~ (vlSelf->__PVT__popcount
                                                [0xeU]
                                                [9U] 
                                                >> 7U)) 
                                            << 0x11U)));
    vlSelf->img_out[0xcU] = ((0xfffbffffU & vlSelf->img_out[0xcU]) 
                             | (0x40000U & ((~ (vlSelf->__PVT__popcount
                                                [0xeU]
                                                [0xaU] 
                                                >> 7U)) 
                                            << 0x12U)));
    vlSelf->img_out[0xcU] = ((0xfff7ffffU & vlSelf->img_out[0xcU]) 
                             | (0x80000U & ((~ (vlSelf->__PVT__popcount
                                                [0xeU]
                                                [0xbU] 
                                                >> 7U)) 
                                            << 0x13U)));
    vlSelf->img_out[0xcU] = ((0xffefffffU & vlSelf->img_out[0xcU]) 
                             | (0x100000U & ((~ (vlSelf->__PVT__popcount
                                                 [0xeU]
                                                 [0xcU] 
                                                 >> 7U)) 
                                             << 0x14U)));
    vlSelf->img_out[0xcU] = ((0xffdfffffU & vlSelf->img_out[0xcU]) 
                             | (0x200000U & ((~ (vlSelf->__PVT__popcount
                                                 [0xeU]
                                                 [0xdU] 
                                                 >> 7U)) 
                                             << 0x15U)));
    vlSelf->img_out[0xcU] = ((0xffbfffffU & vlSelf->img_out[0xcU]) 
                             | (0x400000U & ((~ (vlSelf->__PVT__popcount
                                                 [0xeU]
                                                 [0xeU] 
                                                 >> 7U)) 
                                             << 0x16U)));
    vlSelf->img_out[0xcU] = ((0xff7fffffU & vlSelf->img_out[0xcU]) 
                             | (0x800000U & ((~ (vlSelf->__PVT__popcount
                                                 [0xeU]
                                                 [0xfU] 
                                                 >> 7U)) 
                                             << 0x17U)));
    vlSelf->img_out[0xcU] = ((0xfeffffffU & vlSelf->img_out[0xcU]) 
                             | (0x1000000U & ((~ (vlSelf->__PVT__popcount
                                                  [0xeU]
                                                  [0x10U] 
                                                  >> 7U)) 
                                              << 0x18U)));
    vlSelf->img_out[0xcU] = ((0xfdffffffU & vlSelf->img_out[0xcU]) 
                             | (0x2000000U & ((~ (vlSelf->__PVT__popcount
                                                  [0xeU]
                                                  [0x11U] 
                                                  >> 7U)) 
                                              << 0x19U)));
    vlSelf->img_out[0xcU] = ((0xfbffffffU & vlSelf->img_out[0xcU]) 
                             | (0x4000000U & ((~ (vlSelf->__PVT__popcount
                                                  [0xeU]
                                                  [0x12U] 
                                                  >> 7U)) 
                                              << 0x1aU)));
    vlSelf->img_out[0xcU] = ((0xf7ffffffU & vlSelf->img_out[0xcU]) 
                             | (0x8000000U & ((~ (vlSelf->__PVT__popcount
                                                  [0xeU]
                                                  [0x13U] 
                                                  >> 7U)) 
                                              << 0x1bU)));
    vlSelf->img_out[0xcU] = ((0xefffffffU & vlSelf->img_out[0xcU]) 
                             | (0x10000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0xeU]
                                                   [0x14U] 
                                                   >> 7U)) 
                                               << 0x1cU)));
    vlSelf->img_out[0xcU] = ((0xdfffffffU & vlSelf->img_out[0xcU]) 
                             | (0x20000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0xeU]
                                                   [0x15U] 
                                                   >> 7U)) 
                                               << 0x1dU)));
    vlSelf->img_out[0xcU] = ((0xbfffffffU & vlSelf->img_out[0xcU]) 
                             | (0x40000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0xeU]
                                                   [0x16U] 
                                                   >> 7U)) 
                                               << 0x1eU)));
    vlSelf->img_out[0xcU] = ((0x7fffffffU & vlSelf->img_out[0xcU]) 
                             | ((~ (vlSelf->__PVT__popcount
                                    [0xeU][0x17U] >> 7U)) 
                                << 0x1fU));
    vlSelf->img_out[0xdU] = ((0xfffffffeU & vlSelf->img_out[0xdU]) 
                             | (1U & (~ (vlSelf->__PVT__popcount
                                         [0xeU][0x18U] 
                                         >> 7U))));
    vlSelf->img_out[0xdU] = ((0xfffffffdU & vlSelf->img_out[0xdU]) 
                             | (2U & ((~ (vlSelf->__PVT__popcount
                                          [0xeU][0x19U] 
                                          >> 7U)) << 1U)));
    vlSelf->img_out[0xdU] = ((0xfffffffbU & vlSelf->img_out[0xdU]) 
                             | (4U & ((~ (vlSelf->__PVT__popcount
                                          [0xeU][0x1aU] 
                                          >> 7U)) << 2U)));
    vlSelf->img_out[0xdU] = ((0xfffffff7U & vlSelf->img_out[0xdU]) 
                             | (8U & ((~ (vlSelf->__PVT__popcount
                                          [0xeU][0x1bU] 
                                          >> 7U)) << 3U)));
    vlSelf->img_out[0xdU] = ((0xffffffefU & vlSelf->img_out[0xdU]) 
                             | (0x10U & ((~ (vlSelf->__PVT__popcount
                                             [0xfU]
                                             [0U] >> 7U)) 
                                         << 4U)));
    vlSelf->img_out[0xdU] = ((0xffffffdfU & vlSelf->img_out[0xdU]) 
                             | (0x20U & ((~ (vlSelf->__PVT__popcount
                                             [0xfU]
                                             [1U] >> 7U)) 
                                         << 5U)));
    vlSelf->img_out[0xdU] = ((0xffffffbfU & vlSelf->img_out[0xdU]) 
                             | (0x40U & ((~ (vlSelf->__PVT__popcount
                                             [0xfU]
                                             [2U] >> 7U)) 
                                         << 6U)));
    vlSelf->img_out[0xdU] = ((0xffffff7fU & vlSelf->img_out[0xdU]) 
                             | (0x80U & ((~ (vlSelf->__PVT__popcount
                                             [0xfU]
                                             [3U] >> 7U)) 
                                         << 7U)));
    vlSelf->img_out[0xdU] = ((0xfffffeffU & vlSelf->img_out[0xdU]) 
                             | (0x100U & ((~ (vlSelf->__PVT__popcount
                                              [0xfU]
                                              [4U] 
                                              >> 7U)) 
                                          << 8U)));
    vlSelf->img_out[0xdU] = ((0xfffffdffU & vlSelf->img_out[0xdU]) 
                             | (0x200U & ((~ (vlSelf->__PVT__popcount
                                              [0xfU]
                                              [5U] 
                                              >> 7U)) 
                                          << 9U)));
    vlSelf->img_out[0xdU] = ((0xfffffbffU & vlSelf->img_out[0xdU]) 
                             | (0x400U & ((~ (vlSelf->__PVT__popcount
                                              [0xfU]
                                              [6U] 
                                              >> 7U)) 
                                          << 0xaU)));
    vlSelf->img_out[0xdU] = ((0xfffff7ffU & vlSelf->img_out[0xdU]) 
                             | (0x800U & ((~ (vlSelf->__PVT__popcount
                                              [0xfU]
                                              [7U] 
                                              >> 7U)) 
                                          << 0xbU)));
    vlSelf->img_out[0xdU] = ((0xffffefffU & vlSelf->img_out[0xdU]) 
                             | (0x1000U & ((~ (vlSelf->__PVT__popcount
                                               [0xfU]
                                               [8U] 
                                               >> 7U)) 
                                           << 0xcU)));
    vlSelf->img_out[0xdU] = ((0xffffdfffU & vlSelf->img_out[0xdU]) 
                             | (0x2000U & ((~ (vlSelf->__PVT__popcount
                                               [0xfU]
                                               [9U] 
                                               >> 7U)) 
                                           << 0xdU)));
    vlSelf->img_out[0xdU] = ((0xffffbfffU & vlSelf->img_out[0xdU]) 
                             | (0x4000U & ((~ (vlSelf->__PVT__popcount
                                               [0xfU]
                                               [0xaU] 
                                               >> 7U)) 
                                           << 0xeU)));
    vlSelf->img_out[0xdU] = ((0xffff7fffU & vlSelf->img_out[0xdU]) 
                             | (0x8000U & ((~ (vlSelf->__PVT__popcount
                                               [0xfU]
                                               [0xbU] 
                                               >> 7U)) 
                                           << 0xfU)));
    vlSelf->img_out[0xdU] = ((0xfffeffffU & vlSelf->img_out[0xdU]) 
                             | (0x10000U & ((~ (vlSelf->__PVT__popcount
                                                [0xfU]
                                                [0xcU] 
                                                >> 7U)) 
                                            << 0x10U)));
    vlSelf->img_out[0xdU] = ((0xfffdffffU & vlSelf->img_out[0xdU]) 
                             | (0x20000U & ((~ (vlSelf->__PVT__popcount
                                                [0xfU]
                                                [0xdU] 
                                                >> 7U)) 
                                            << 0x11U)));
    vlSelf->img_out[0xdU] = ((0xfffbffffU & vlSelf->img_out[0xdU]) 
                             | (0x40000U & ((~ (vlSelf->__PVT__popcount
                                                [0xfU]
                                                [0xeU] 
                                                >> 7U)) 
                                            << 0x12U)));
    vlSelf->img_out[0xdU] = ((0xfff7ffffU & vlSelf->img_out[0xdU]) 
                             | (0x80000U & ((~ (vlSelf->__PVT__popcount
                                                [0xfU]
                                                [0xfU] 
                                                >> 7U)) 
                                            << 0x13U)));
    vlSelf->img_out[0xdU] = ((0xffefffffU & vlSelf->img_out[0xdU]) 
                             | (0x100000U & ((~ (vlSelf->__PVT__popcount
                                                 [0xfU]
                                                 [0x10U] 
                                                 >> 7U)) 
                                             << 0x14U)));
    vlSelf->img_out[0xdU] = ((0xffdfffffU & vlSelf->img_out[0xdU]) 
                             | (0x200000U & ((~ (vlSelf->__PVT__popcount
                                                 [0xfU]
                                                 [0x11U] 
                                                 >> 7U)) 
                                             << 0x15U)));
    vlSelf->img_out[0xdU] = ((0xffbfffffU & vlSelf->img_out[0xdU]) 
                             | (0x400000U & ((~ (vlSelf->__PVT__popcount
                                                 [0xfU]
                                                 [0x12U] 
                                                 >> 7U)) 
                                             << 0x16U)));
    vlSelf->img_out[0xdU] = ((0xff7fffffU & vlSelf->img_out[0xdU]) 
                             | (0x800000U & ((~ (vlSelf->__PVT__popcount
                                                 [0xfU]
                                                 [0x13U] 
                                                 >> 7U)) 
                                             << 0x17U)));
    vlSelf->img_out[0xdU] = ((0xfeffffffU & vlSelf->img_out[0xdU]) 
                             | (0x1000000U & ((~ (vlSelf->__PVT__popcount
                                                  [0xfU]
                                                  [0x14U] 
                                                  >> 7U)) 
                                              << 0x18U)));
    vlSelf->img_out[0xdU] = ((0xfdffffffU & vlSelf->img_out[0xdU]) 
                             | (0x2000000U & ((~ (vlSelf->__PVT__popcount
                                                  [0xfU]
                                                  [0x15U] 
                                                  >> 7U)) 
                                              << 0x19U)));
    vlSelf->img_out[0xdU] = ((0xfbffffffU & vlSelf->img_out[0xdU]) 
                             | (0x4000000U & ((~ (vlSelf->__PVT__popcount
                                                  [0xfU]
                                                  [0x16U] 
                                                  >> 7U)) 
                                              << 0x1aU)));
    vlSelf->img_out[0xdU] = ((0xf7ffffffU & vlSelf->img_out[0xdU]) 
                             | (0x8000000U & ((~ (vlSelf->__PVT__popcount
                                                  [0xfU]
                                                  [0x17U] 
                                                  >> 7U)) 
                                              << 0x1bU)));
    vlSelf->img_out[0xdU] = ((0xefffffffU & vlSelf->img_out[0xdU]) 
                             | (0x10000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0xfU]
                                                   [0x18U] 
                                                   >> 7U)) 
                                               << 0x1cU)));
    vlSelf->img_out[0xdU] = ((0xdfffffffU & vlSelf->img_out[0xdU]) 
                             | (0x20000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0xfU]
                                                   [0x19U] 
                                                   >> 7U)) 
                                               << 0x1dU)));
    vlSelf->img_out[0xdU] = ((0xbfffffffU & vlSelf->img_out[0xdU]) 
                             | (0x40000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0xfU]
                                                   [0x1aU] 
                                                   >> 7U)) 
                                               << 0x1eU)));
    vlSelf->img_out[0xdU] = ((0x7fffffffU & vlSelf->img_out[0xdU]) 
                             | ((~ (vlSelf->__PVT__popcount
                                    [0xfU][0x1bU] >> 7U)) 
                                << 0x1fU));
    vlSelf->img_out[0xeU] = ((0xfffffffeU & vlSelf->img_out[0xeU]) 
                             | (1U & (~ (vlSelf->__PVT__popcount
                                         [0x10U][0U] 
                                         >> 7U))));
    vlSelf->img_out[0xeU] = ((0xfffffffdU & vlSelf->img_out[0xeU]) 
                             | (2U & ((~ (vlSelf->__PVT__popcount
                                          [0x10U][1U] 
                                          >> 7U)) << 1U)));
    vlSelf->img_out[0xeU] = ((0xfffffffbU & vlSelf->img_out[0xeU]) 
                             | (4U & ((~ (vlSelf->__PVT__popcount
                                          [0x10U][2U] 
                                          >> 7U)) << 2U)));
    vlSelf->img_out[0xeU] = ((0xfffffff7U & vlSelf->img_out[0xeU]) 
                             | (8U & ((~ (vlSelf->__PVT__popcount
                                          [0x10U][3U] 
                                          >> 7U)) << 3U)));
    vlSelf->img_out[0xeU] = ((0xffffffefU & vlSelf->img_out[0xeU]) 
                             | (0x10U & ((~ (vlSelf->__PVT__popcount
                                             [0x10U]
                                             [4U] >> 7U)) 
                                         << 4U)));
    vlSelf->img_out[0xeU] = ((0xffffffdfU & vlSelf->img_out[0xeU]) 
                             | (0x20U & ((~ (vlSelf->__PVT__popcount
                                             [0x10U]
                                             [5U] >> 7U)) 
                                         << 5U)));
    vlSelf->img_out[0xeU] = ((0xffffffbfU & vlSelf->img_out[0xeU]) 
                             | (0x40U & ((~ (vlSelf->__PVT__popcount
                                             [0x10U]
                                             [6U] >> 7U)) 
                                         << 6U)));
    vlSelf->img_out[0xeU] = ((0xffffff7fU & vlSelf->img_out[0xeU]) 
                             | (0x80U & ((~ (vlSelf->__PVT__popcount
                                             [0x10U]
                                             [7U] >> 7U)) 
                                         << 7U)));
    vlSelf->img_out[0xeU] = ((0xfffffeffU & vlSelf->img_out[0xeU]) 
                             | (0x100U & ((~ (vlSelf->__PVT__popcount
                                              [0x10U]
                                              [8U] 
                                              >> 7U)) 
                                          << 8U)));
    vlSelf->img_out[0xeU] = ((0xfffffdffU & vlSelf->img_out[0xeU]) 
                             | (0x200U & ((~ (vlSelf->__PVT__popcount
                                              [0x10U]
                                              [9U] 
                                              >> 7U)) 
                                          << 9U)));
    vlSelf->img_out[0xeU] = ((0xfffffbffU & vlSelf->img_out[0xeU]) 
                             | (0x400U & ((~ (vlSelf->__PVT__popcount
                                              [0x10U]
                                              [0xaU] 
                                              >> 7U)) 
                                          << 0xaU)));
    vlSelf->img_out[0xeU] = ((0xfffff7ffU & vlSelf->img_out[0xeU]) 
                             | (0x800U & ((~ (vlSelf->__PVT__popcount
                                              [0x10U]
                                              [0xbU] 
                                              >> 7U)) 
                                          << 0xbU)));
    vlSelf->img_out[0xeU] = ((0xffffefffU & vlSelf->img_out[0xeU]) 
                             | (0x1000U & ((~ (vlSelf->__PVT__popcount
                                               [0x10U]
                                               [0xcU] 
                                               >> 7U)) 
                                           << 0xcU)));
    vlSelf->img_out[0xeU] = ((0xffffdfffU & vlSelf->img_out[0xeU]) 
                             | (0x2000U & ((~ (vlSelf->__PVT__popcount
                                               [0x10U]
                                               [0xdU] 
                                               >> 7U)) 
                                           << 0xdU)));
    vlSelf->img_out[0xeU] = ((0xffffbfffU & vlSelf->img_out[0xeU]) 
                             | (0x4000U & ((~ (vlSelf->__PVT__popcount
                                               [0x10U]
                                               [0xeU] 
                                               >> 7U)) 
                                           << 0xeU)));
    vlSelf->img_out[0xeU] = ((0xffff7fffU & vlSelf->img_out[0xeU]) 
                             | (0x8000U & ((~ (vlSelf->__PVT__popcount
                                               [0x10U]
                                               [0xfU] 
                                               >> 7U)) 
                                           << 0xfU)));
    vlSelf->img_out[0xeU] = ((0xfffeffffU & vlSelf->img_out[0xeU]) 
                             | (0x10000U & ((~ (vlSelf->__PVT__popcount
                                                [0x10U]
                                                [0x10U] 
                                                >> 7U)) 
                                            << 0x10U)));
    vlSelf->img_out[0xeU] = ((0xfffdffffU & vlSelf->img_out[0xeU]) 
                             | (0x20000U & ((~ (vlSelf->__PVT__popcount
                                                [0x10U]
                                                [0x11U] 
                                                >> 7U)) 
                                            << 0x11U)));
    vlSelf->img_out[0xeU] = ((0xfffbffffU & vlSelf->img_out[0xeU]) 
                             | (0x40000U & ((~ (vlSelf->__PVT__popcount
                                                [0x10U]
                                                [0x12U] 
                                                >> 7U)) 
                                            << 0x12U)));
    vlSelf->img_out[0xeU] = ((0xfff7ffffU & vlSelf->img_out[0xeU]) 
                             | (0x80000U & ((~ (vlSelf->__PVT__popcount
                                                [0x10U]
                                                [0x13U] 
                                                >> 7U)) 
                                            << 0x13U)));
    vlSelf->img_out[0xeU] = ((0xffefffffU & vlSelf->img_out[0xeU]) 
                             | (0x100000U & ((~ (vlSelf->__PVT__popcount
                                                 [0x10U]
                                                 [0x14U] 
                                                 >> 7U)) 
                                             << 0x14U)));
    vlSelf->img_out[0xeU] = ((0xffdfffffU & vlSelf->img_out[0xeU]) 
                             | (0x200000U & ((~ (vlSelf->__PVT__popcount
                                                 [0x10U]
                                                 [0x15U] 
                                                 >> 7U)) 
                                             << 0x15U)));
    vlSelf->img_out[0xeU] = ((0xffbfffffU & vlSelf->img_out[0xeU]) 
                             | (0x400000U & ((~ (vlSelf->__PVT__popcount
                                                 [0x10U]
                                                 [0x16U] 
                                                 >> 7U)) 
                                             << 0x16U)));
    vlSelf->img_out[0xeU] = ((0xff7fffffU & vlSelf->img_out[0xeU]) 
                             | (0x800000U & ((~ (vlSelf->__PVT__popcount
                                                 [0x10U]
                                                 [0x17U] 
                                                 >> 7U)) 
                                             << 0x17U)));
    vlSelf->img_out[0xeU] = ((0xfeffffffU & vlSelf->img_out[0xeU]) 
                             | (0x1000000U & ((~ (vlSelf->__PVT__popcount
                                                  [0x10U]
                                                  [0x18U] 
                                                  >> 7U)) 
                                              << 0x18U)));
    vlSelf->img_out[0xeU] = ((0xfdffffffU & vlSelf->img_out[0xeU]) 
                             | (0x2000000U & ((~ (vlSelf->__PVT__popcount
                                                  [0x10U]
                                                  [0x19U] 
                                                  >> 7U)) 
                                              << 0x19U)));
    vlSelf->img_out[0xeU] = ((0xfbffffffU & vlSelf->img_out[0xeU]) 
                             | (0x4000000U & ((~ (vlSelf->__PVT__popcount
                                                  [0x10U]
                                                  [0x1aU] 
                                                  >> 7U)) 
                                              << 0x1aU)));
    vlSelf->img_out[0xeU] = ((0xf7ffffffU & vlSelf->img_out[0xeU]) 
                             | (0x8000000U & ((~ (vlSelf->__PVT__popcount
                                                  [0x10U]
                                                  [0x1bU] 
                                                  >> 7U)) 
                                              << 0x1bU)));
    vlSelf->img_out[0xeU] = ((0xefffffffU & vlSelf->img_out[0xeU]) 
                             | (0x10000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [0U] 
                                                   >> 7U)) 
                                               << 0x1cU)));
    vlSelf->img_out[0xeU] = ((0xdfffffffU & vlSelf->img_out[0xeU]) 
                             | (0x20000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [1U] 
                                                   >> 7U)) 
                                               << 0x1dU)));
    vlSelf->img_out[0xeU] = ((0xbfffffffU & vlSelf->img_out[0xeU]) 
                             | (0x40000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [2U] 
                                                   >> 7U)) 
                                               << 0x1eU)));
    vlSelf->img_out[0xeU] = ((0x7fffffffU & vlSelf->img_out[0xeU]) 
                             | ((~ (vlSelf->__PVT__popcount
                                    [0x11U][3U] >> 7U)) 
                                << 0x1fU));
    vlSelf->img_out[0xfU] = ((0xfffffffeU & vlSelf->img_out[0xfU]) 
                             | (1U & (~ (vlSelf->__PVT__popcount
                                         [0x11U][4U] 
                                         >> 7U))));
    vlSelf->img_out[0xfU] = ((0xfffffffdU & vlSelf->img_out[0xfU]) 
                             | (2U & ((~ (vlSelf->__PVT__popcount
                                          [0x11U][5U] 
                                          >> 7U)) << 1U)));
    vlSelf->img_out[0xfU] = ((0xfffffffbU & vlSelf->img_out[0xfU]) 
                             | (4U & ((~ (vlSelf->__PVT__popcount
                                          [0x11U][6U] 
                                          >> 7U)) << 2U)));
    vlSelf->img_out[0xfU] = ((0xfffffff7U & vlSelf->img_out[0xfU]) 
                             | (8U & ((~ (vlSelf->__PVT__popcount
                                          [0x11U][7U] 
                                          >> 7U)) << 3U)));
    vlSelf->img_out[0xfU] = ((0xffffffefU & vlSelf->img_out[0xfU]) 
                             | (0x10U & ((~ (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [8U] >> 7U)) 
                                         << 4U)));
    vlSelf->img_out[0xfU] = ((0xffffffdfU & vlSelf->img_out[0xfU]) 
                             | (0x20U & ((~ (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [9U] >> 7U)) 
                                         << 5U)));
    vlSelf->img_out[0xfU] = ((0xffffffbfU & vlSelf->img_out[0xfU]) 
                             | (0x40U & ((~ (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xaU] 
                                             >> 7U)) 
                                         << 6U)));
    vlSelf->img_out[0xfU] = ((0xffffff7fU & vlSelf->img_out[0xfU]) 
                             | (0x80U & ((~ (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xbU] 
                                             >> 7U)) 
                                         << 7U)));
    vlSelf->img_out[0xfU] = ((0xfffffeffU & vlSelf->img_out[0xfU]) 
                             | (0x100U & ((~ (vlSelf->__PVT__popcount
                                              [0x11U]
                                              [0xcU] 
                                              >> 7U)) 
                                          << 8U)));
    vlSelf->img_out[0xfU] = ((0xfffffdffU & vlSelf->img_out[0xfU]) 
                             | (0x200U & ((~ (vlSelf->__PVT__popcount
                                              [0x11U]
                                              [0xdU] 
                                              >> 7U)) 
                                          << 9U)));
    vlSelf->img_out[0xfU] = ((0xfffffbffU & vlSelf->img_out[0xfU]) 
                             | (0x400U & ((~ (vlSelf->__PVT__popcount
                                              [0x11U]
                                              [0xeU] 
                                              >> 7U)) 
                                          << 0xaU)));
    vlSelf->img_out[0xfU] = ((0xfffff7ffU & vlSelf->img_out[0xfU]) 
                             | (0x800U & ((~ (vlSelf->__PVT__popcount
                                              [0x11U]
                                              [0xfU] 
                                              >> 7U)) 
                                          << 0xbU)));
    vlSelf->img_out[0xfU] = ((0xffffefffU & vlSelf->img_out[0xfU]) 
                             | (0x1000U & ((~ (vlSelf->__PVT__popcount
                                               [0x11U]
                                               [0x10U] 
                                               >> 7U)) 
                                           << 0xcU)));
    vlSelf->img_out[0xfU] = ((0xffffdfffU & vlSelf->img_out[0xfU]) 
                             | (0x2000U & ((~ (vlSelf->__PVT__popcount
                                               [0x11U]
                                               [0x11U] 
                                               >> 7U)) 
                                           << 0xdU)));
    vlSelf->img_out[0xfU] = ((0xffffbfffU & vlSelf->img_out[0xfU]) 
                             | (0x4000U & ((~ (vlSelf->__PVT__popcount
                                               [0x11U]
                                               [0x12U] 
                                               >> 7U)) 
                                           << 0xeU)));
    vlSelf->img_out[0xfU] = ((0xffff7fffU & vlSelf->img_out[0xfU]) 
                             | (0x8000U & ((~ (vlSelf->__PVT__popcount
                                               [0x11U]
                                               [0x13U] 
                                               >> 7U)) 
                                           << 0xfU)));
    vlSelf->img_out[0xfU] = ((0xfffeffffU & vlSelf->img_out[0xfU]) 
                             | (0x10000U & ((~ (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x14U] 
                                                >> 7U)) 
                                            << 0x10U)));
    vlSelf->img_out[0xfU] = ((0xfffdffffU & vlSelf->img_out[0xfU]) 
                             | (0x20000U & ((~ (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x15U] 
                                                >> 7U)) 
                                            << 0x11U)));
    vlSelf->img_out[0xfU] = ((0xfffbffffU & vlSelf->img_out[0xfU]) 
                             | (0x40000U & ((~ (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x16U] 
                                                >> 7U)) 
                                            << 0x12U)));
    vlSelf->img_out[0xfU] = ((0xfff7ffffU & vlSelf->img_out[0xfU]) 
                             | (0x80000U & ((~ (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x17U] 
                                                >> 7U)) 
                                            << 0x13U)));
    vlSelf->img_out[0xfU] = ((0xffefffffU & vlSelf->img_out[0xfU]) 
                             | (0x100000U & ((~ (vlSelf->__PVT__popcount
                                                 [0x11U]
                                                 [0x18U] 
                                                 >> 7U)) 
                                             << 0x14U)));
    vlSelf->img_out[0xfU] = ((0xffdfffffU & vlSelf->img_out[0xfU]) 
                             | (0x200000U & ((~ (vlSelf->__PVT__popcount
                                                 [0x11U]
                                                 [0x19U] 
                                                 >> 7U)) 
                                             << 0x15U)));
    vlSelf->img_out[0xfU] = ((0xffbfffffU & vlSelf->img_out[0xfU]) 
                             | (0x400000U & ((~ (vlSelf->__PVT__popcount
                                                 [0x11U]
                                                 [0x1aU] 
                                                 >> 7U)) 
                                             << 0x16U)));
    vlSelf->img_out[0xfU] = ((0xff7fffffU & vlSelf->img_out[0xfU]) 
                             | (0x800000U & ((~ (vlSelf->__PVT__popcount
                                                 [0x11U]
                                                 [0x1bU] 
                                                 >> 7U)) 
                                             << 0x17U)));
    vlSelf->img_out[0xfU] = ((0xfeffffffU & vlSelf->img_out[0xfU]) 
                             | (0x1000000U & ((~ (vlSelf->__PVT__popcount
                                                  [0x12U]
                                                  [0U] 
                                                  >> 7U)) 
                                              << 0x18U)));
    vlSelf->img_out[0xfU] = ((0xfdffffffU & vlSelf->img_out[0xfU]) 
                             | (0x2000000U & ((~ (vlSelf->__PVT__popcount
                                                  [0x12U]
                                                  [1U] 
                                                  >> 7U)) 
                                              << 0x19U)));
    vlSelf->img_out[0xfU] = ((0xfbffffffU & vlSelf->img_out[0xfU]) 
                             | (0x4000000U & ((~ (vlSelf->__PVT__popcount
                                                  [0x12U]
                                                  [2U] 
                                                  >> 7U)) 
                                              << 0x1aU)));
    vlSelf->img_out[0xfU] = ((0xf7ffffffU & vlSelf->img_out[0xfU]) 
                             | (0x8000000U & ((~ (vlSelf->__PVT__popcount
                                                  [0x12U]
                                                  [3U] 
                                                  >> 7U)) 
                                              << 0x1bU)));
    vlSelf->img_out[0xfU] = ((0xefffffffU & vlSelf->img_out[0xfU]) 
                             | (0x10000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [4U] 
                                                   >> 7U)) 
                                               << 0x1cU)));
    vlSelf->img_out[0xfU] = ((0xdfffffffU & vlSelf->img_out[0xfU]) 
                             | (0x20000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [5U] 
                                                   >> 7U)) 
                                               << 0x1dU)));
    vlSelf->img_out[0xfU] = ((0xbfffffffU & vlSelf->img_out[0xfU]) 
                             | (0x40000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [6U] 
                                                   >> 7U)) 
                                               << 0x1eU)));
    vlSelf->img_out[0xfU] = ((0x7fffffffU & vlSelf->img_out[0xfU]) 
                             | ((~ (vlSelf->__PVT__popcount
                                    [0x12U][7U] >> 7U)) 
                                << 0x1fU));
    vlSelf->img_out[0x10U] = ((0xfffffffeU & vlSelf->img_out[0x10U]) 
                              | (1U & (~ (vlSelf->__PVT__popcount
                                          [0x12U][8U] 
                                          >> 7U))));
    vlSelf->img_out[0x10U] = ((0xfffffffdU & vlSelf->img_out[0x10U]) 
                              | (2U & ((~ (vlSelf->__PVT__popcount
                                           [0x12U][9U] 
                                           >> 7U)) 
                                       << 1U)));
    vlSelf->img_out[0x10U] = ((0xfffffffbU & vlSelf->img_out[0x10U]) 
                              | (4U & ((~ (vlSelf->__PVT__popcount
                                           [0x12U][0xaU] 
                                           >> 7U)) 
                                       << 2U)));
    vlSelf->img_out[0x10U] = ((0xfffffff7U & vlSelf->img_out[0x10U]) 
                              | (8U & ((~ (vlSelf->__PVT__popcount
                                           [0x12U][0xbU] 
                                           >> 7U)) 
                                       << 3U)));
    vlSelf->img_out[0x10U] = ((0xffffffefU & vlSelf->img_out[0x10U]) 
                              | (0x10U & ((~ (vlSelf->__PVT__popcount
                                              [0x12U]
                                              [0xcU] 
                                              >> 7U)) 
                                          << 4U)));
    vlSelf->img_out[0x10U] = ((0xffffffdfU & vlSelf->img_out[0x10U]) 
                              | (0x20U & ((~ (vlSelf->__PVT__popcount
                                              [0x12U]
                                              [0xdU] 
                                              >> 7U)) 
                                          << 5U)));
    vlSelf->img_out[0x10U] = ((0xffffffbfU & vlSelf->img_out[0x10U]) 
                              | (0x40U & ((~ (vlSelf->__PVT__popcount
                                              [0x12U]
                                              [0xeU] 
                                              >> 7U)) 
                                          << 6U)));
    vlSelf->img_out[0x10U] = ((0xffffff7fU & vlSelf->img_out[0x10U]) 
                              | (0x80U & ((~ (vlSelf->__PVT__popcount
                                              [0x12U]
                                              [0xfU] 
                                              >> 7U)) 
                                          << 7U)));
    vlSelf->img_out[0x10U] = ((0xfffffeffU & vlSelf->img_out[0x10U]) 
                              | (0x100U & ((~ (vlSelf->__PVT__popcount
                                               [0x12U]
                                               [0x10U] 
                                               >> 7U)) 
                                           << 8U)));
    vlSelf->img_out[0x10U] = ((0xfffffdffU & vlSelf->img_out[0x10U]) 
                              | (0x200U & ((~ (vlSelf->__PVT__popcount
                                               [0x12U]
                                               [0x11U] 
                                               >> 7U)) 
                                           << 9U)));
    vlSelf->img_out[0x10U] = ((0xfffffbffU & vlSelf->img_out[0x10U]) 
                              | (0x400U & ((~ (vlSelf->__PVT__popcount
                                               [0x12U]
                                               [0x12U] 
                                               >> 7U)) 
                                           << 0xaU)));
    vlSelf->img_out[0x10U] = ((0xfffff7ffU & vlSelf->img_out[0x10U]) 
                              | (0x800U & ((~ (vlSelf->__PVT__popcount
                                               [0x12U]
                                               [0x13U] 
                                               >> 7U)) 
                                           << 0xbU)));
    vlSelf->img_out[0x10U] = ((0xffffefffU & vlSelf->img_out[0x10U]) 
                              | (0x1000U & ((~ (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x14U] 
                                                >> 7U)) 
                                            << 0xcU)));
    vlSelf->img_out[0x10U] = ((0xffffdfffU & vlSelf->img_out[0x10U]) 
                              | (0x2000U & ((~ (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x15U] 
                                                >> 7U)) 
                                            << 0xdU)));
    vlSelf->img_out[0x10U] = ((0xffffbfffU & vlSelf->img_out[0x10U]) 
                              | (0x4000U & ((~ (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x16U] 
                                                >> 7U)) 
                                            << 0xeU)));
    vlSelf->img_out[0x10U] = ((0xffff7fffU & vlSelf->img_out[0x10U]) 
                              | (0x8000U & ((~ (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x17U] 
                                                >> 7U)) 
                                            << 0xfU)));
    vlSelf->img_out[0x10U] = ((0xfffeffffU & vlSelf->img_out[0x10U]) 
                              | (0x10000U & ((~ (vlSelf->__PVT__popcount
                                                 [0x12U]
                                                 [0x18U] 
                                                 >> 7U)) 
                                             << 0x10U)));
    vlSelf->img_out[0x10U] = ((0xfffdffffU & vlSelf->img_out[0x10U]) 
                              | (0x20000U & ((~ (vlSelf->__PVT__popcount
                                                 [0x12U]
                                                 [0x19U] 
                                                 >> 7U)) 
                                             << 0x11U)));
    vlSelf->img_out[0x10U] = ((0xfffbffffU & vlSelf->img_out[0x10U]) 
                              | (0x40000U & ((~ (vlSelf->__PVT__popcount
                                                 [0x12U]
                                                 [0x1aU] 
                                                 >> 7U)) 
                                             << 0x12U)));
    vlSelf->img_out[0x10U] = ((0xfff7ffffU & vlSelf->img_out[0x10U]) 
                              | (0x80000U & ((~ (vlSelf->__PVT__popcount
                                                 [0x12U]
                                                 [0x1bU] 
                                                 >> 7U)) 
                                             << 0x13U)));
    vlSelf->img_out[0x10U] = ((0xffefffffU & vlSelf->img_out[0x10U]) 
                              | (0x100000U & ((~ (vlSelf->__PVT__popcount
                                                  [0x13U]
                                                  [0U] 
                                                  >> 7U)) 
                                              << 0x14U)));
    vlSelf->img_out[0x10U] = ((0xffdfffffU & vlSelf->img_out[0x10U]) 
                              | (0x200000U & ((~ (vlSelf->__PVT__popcount
                                                  [0x13U]
                                                  [1U] 
                                                  >> 7U)) 
                                              << 0x15U)));
    vlSelf->img_out[0x10U] = ((0xffbfffffU & vlSelf->img_out[0x10U]) 
                              | (0x400000U & ((~ (vlSelf->__PVT__popcount
                                                  [0x13U]
                                                  [2U] 
                                                  >> 7U)) 
                                              << 0x16U)));
    vlSelf->img_out[0x10U] = ((0xff7fffffU & vlSelf->img_out[0x10U]) 
                              | (0x800000U & ((~ (vlSelf->__PVT__popcount
                                                  [0x13U]
                                                  [3U] 
                                                  >> 7U)) 
                                              << 0x17U)));
    vlSelf->img_out[0x10U] = ((0xfeffffffU & vlSelf->img_out[0x10U]) 
                              | (0x1000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [4U] 
                                                   >> 7U)) 
                                               << 0x18U)));
    vlSelf->img_out[0x10U] = ((0xfdffffffU & vlSelf->img_out[0x10U]) 
                              | (0x2000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [5U] 
                                                   >> 7U)) 
                                               << 0x19U)));
    vlSelf->img_out[0x10U] = ((0xfbffffffU & vlSelf->img_out[0x10U]) 
                              | (0x4000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [6U] 
                                                   >> 7U)) 
                                               << 0x1aU)));
    vlSelf->img_out[0x10U] = ((0xf7ffffffU & vlSelf->img_out[0x10U]) 
                              | (0x8000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [7U] 
                                                   >> 7U)) 
                                               << 0x1bU)));
    vlSelf->img_out[0x10U] = ((0xefffffffU & vlSelf->img_out[0x10U]) 
                              | (0x10000000U & ((~ 
                                                 (vlSelf->__PVT__popcount
                                                  [0x13U]
                                                  [8U] 
                                                  >> 7U)) 
                                                << 0x1cU)));
    vlSelf->img_out[0x10U] = ((0xdfffffffU & vlSelf->img_out[0x10U]) 
                              | (0x20000000U & ((~ 
                                                 (vlSelf->__PVT__popcount
                                                  [0x13U]
                                                  [9U] 
                                                  >> 7U)) 
                                                << 0x1dU)));
    vlSelf->img_out[0x10U] = ((0xbfffffffU & vlSelf->img_out[0x10U]) 
                              | (0x40000000U & ((~ 
                                                 (vlSelf->__PVT__popcount
                                                  [0x13U]
                                                  [0xaU] 
                                                  >> 7U)) 
                                                << 0x1eU)));
    vlSelf->img_out[0x10U] = ((0x7fffffffU & vlSelf->img_out[0x10U]) 
                              | ((~ (vlSelf->__PVT__popcount
                                     [0x13U][0xbU] 
                                     >> 7U)) << 0x1fU));
    vlSelf->img_out[0x11U] = ((0xfffffffeU & vlSelf->img_out[0x11U]) 
                              | (1U & (~ (vlSelf->__PVT__popcount
                                          [0x13U][0xcU] 
                                          >> 7U))));
    vlSelf->img_out[0x11U] = ((0xfffffffdU & vlSelf->img_out[0x11U]) 
                              | (2U & ((~ (vlSelf->__PVT__popcount
                                           [0x13U][0xdU] 
                                           >> 7U)) 
                                       << 1U)));
    vlSelf->img_out[0x11U] = ((0xfffffffbU & vlSelf->img_out[0x11U]) 
                              | (4U & ((~ (vlSelf->__PVT__popcount
                                           [0x13U][0xeU] 
                                           >> 7U)) 
                                       << 2U)));
    vlSelf->img_out[0x11U] = ((0xfffffff7U & vlSelf->img_out[0x11U]) 
                              | (8U & ((~ (vlSelf->__PVT__popcount
                                           [0x13U][0xfU] 
                                           >> 7U)) 
                                       << 3U)));
    vlSelf->img_out[0x11U] = ((0xffffffefU & vlSelf->img_out[0x11U]) 
                              | (0x10U & ((~ (vlSelf->__PVT__popcount
                                              [0x13U]
                                              [0x10U] 
                                              >> 7U)) 
                                          << 4U)));
    vlSelf->img_out[0x11U] = ((0xffffffdfU & vlSelf->img_out[0x11U]) 
                              | (0x20U & ((~ (vlSelf->__PVT__popcount
                                              [0x13U]
                                              [0x11U] 
                                              >> 7U)) 
                                          << 5U)));
    vlSelf->img_out[0x11U] = ((0xffffffbfU & vlSelf->img_out[0x11U]) 
                              | (0x40U & ((~ (vlSelf->__PVT__popcount
                                              [0x13U]
                                              [0x12U] 
                                              >> 7U)) 
                                          << 6U)));
    vlSelf->img_out[0x11U] = ((0xffffff7fU & vlSelf->img_out[0x11U]) 
                              | (0x80U & ((~ (vlSelf->__PVT__popcount
                                              [0x13U]
                                              [0x13U] 
                                              >> 7U)) 
                                          << 7U)));
    vlSelf->img_out[0x11U] = ((0xfffffeffU & vlSelf->img_out[0x11U]) 
                              | (0x100U & ((~ (vlSelf->__PVT__popcount
                                               [0x13U]
                                               [0x14U] 
                                               >> 7U)) 
                                           << 8U)));
    vlSelf->img_out[0x11U] = ((0xfffffdffU & vlSelf->img_out[0x11U]) 
                              | (0x200U & ((~ (vlSelf->__PVT__popcount
                                               [0x13U]
                                               [0x15U] 
                                               >> 7U)) 
                                           << 9U)));
    vlSelf->img_out[0x11U] = ((0xfffffbffU & vlSelf->img_out[0x11U]) 
                              | (0x400U & ((~ (vlSelf->__PVT__popcount
                                               [0x13U]
                                               [0x16U] 
                                               >> 7U)) 
                                           << 0xaU)));
    vlSelf->img_out[0x11U] = ((0xfffff7ffU & vlSelf->img_out[0x11U]) 
                              | (0x800U & ((~ (vlSelf->__PVT__popcount
                                               [0x13U]
                                               [0x17U] 
                                               >> 7U)) 
                                           << 0xbU)));
    vlSelf->img_out[0x11U] = ((0xffffefffU & vlSelf->img_out[0x11U]) 
                              | (0x1000U & ((~ (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x18U] 
                                                >> 7U)) 
                                            << 0xcU)));
    vlSelf->img_out[0x11U] = ((0xffffdfffU & vlSelf->img_out[0x11U]) 
                              | (0x2000U & ((~ (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x19U] 
                                                >> 7U)) 
                                            << 0xdU)));
    vlSelf->img_out[0x11U] = ((0xffffbfffU & vlSelf->img_out[0x11U]) 
                              | (0x4000U & ((~ (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x1aU] 
                                                >> 7U)) 
                                            << 0xeU)));
    vlSelf->img_out[0x11U] = ((0xffff7fffU & vlSelf->img_out[0x11U]) 
                              | (0x8000U & ((~ (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x1bU] 
                                                >> 7U)) 
                                            << 0xfU)));
    vlSelf->img_out[0x11U] = ((0xfffeffffU & vlSelf->img_out[0x11U]) 
                              | (0x10000U & ((~ (vlSelf->__PVT__popcount
                                                 [0x14U]
                                                 [0U] 
                                                 >> 7U)) 
                                             << 0x10U)));
    vlSelf->img_out[0x11U] = ((0xfffdffffU & vlSelf->img_out[0x11U]) 
                              | (0x20000U & ((~ (vlSelf->__PVT__popcount
                                                 [0x14U]
                                                 [1U] 
                                                 >> 7U)) 
                                             << 0x11U)));
    vlSelf->img_out[0x11U] = ((0xfffbffffU & vlSelf->img_out[0x11U]) 
                              | (0x40000U & ((~ (vlSelf->__PVT__popcount
                                                 [0x14U]
                                                 [2U] 
                                                 >> 7U)) 
                                             << 0x12U)));
    vlSelf->img_out[0x11U] = ((0xfff7ffffU & vlSelf->img_out[0x11U]) 
                              | (0x80000U & ((~ (vlSelf->__PVT__popcount
                                                 [0x14U]
                                                 [3U] 
                                                 >> 7U)) 
                                             << 0x13U)));
    vlSelf->img_out[0x11U] = ((0xffefffffU & vlSelf->img_out[0x11U]) 
                              | (0x100000U & ((~ (vlSelf->__PVT__popcount
                                                  [0x14U]
                                                  [4U] 
                                                  >> 7U)) 
                                              << 0x14U)));
    vlSelf->img_out[0x11U] = ((0xffdfffffU & vlSelf->img_out[0x11U]) 
                              | (0x200000U & ((~ (vlSelf->__PVT__popcount
                                                  [0x14U]
                                                  [5U] 
                                                  >> 7U)) 
                                              << 0x15U)));
    vlSelf->img_out[0x11U] = ((0xffbfffffU & vlSelf->img_out[0x11U]) 
                              | (0x400000U & ((~ (vlSelf->__PVT__popcount
                                                  [0x14U]
                                                  [6U] 
                                                  >> 7U)) 
                                              << 0x16U)));
    vlSelf->img_out[0x11U] = ((0xff7fffffU & vlSelf->img_out[0x11U]) 
                              | (0x800000U & ((~ (vlSelf->__PVT__popcount
                                                  [0x14U]
                                                  [7U] 
                                                  >> 7U)) 
                                              << 0x17U)));
    vlSelf->img_out[0x11U] = ((0xfeffffffU & vlSelf->img_out[0x11U]) 
                              | (0x1000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [8U] 
                                                   >> 7U)) 
                                               << 0x18U)));
    vlSelf->img_out[0x11U] = ((0xfdffffffU & vlSelf->img_out[0x11U]) 
                              | (0x2000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [9U] 
                                                   >> 7U)) 
                                               << 0x19U)));
    vlSelf->img_out[0x11U] = ((0xfbffffffU & vlSelf->img_out[0x11U]) 
                              | (0x4000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [0xaU] 
                                                   >> 7U)) 
                                               << 0x1aU)));
    vlSelf->img_out[0x11U] = ((0xf7ffffffU & vlSelf->img_out[0x11U]) 
                              | (0x8000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [0xbU] 
                                                   >> 7U)) 
                                               << 0x1bU)));
    vlSelf->img_out[0x11U] = ((0xefffffffU & vlSelf->img_out[0x11U]) 
                              | (0x10000000U & ((~ 
                                                 (vlSelf->__PVT__popcount
                                                  [0x14U]
                                                  [0xcU] 
                                                  >> 7U)) 
                                                << 0x1cU)));
    vlSelf->img_out[0x11U] = ((0xdfffffffU & vlSelf->img_out[0x11U]) 
                              | (0x20000000U & ((~ 
                                                 (vlSelf->__PVT__popcount
                                                  [0x14U]
                                                  [0xdU] 
                                                  >> 7U)) 
                                                << 0x1dU)));
    vlSelf->img_out[0x11U] = ((0xbfffffffU & vlSelf->img_out[0x11U]) 
                              | (0x40000000U & ((~ 
                                                 (vlSelf->__PVT__popcount
                                                  [0x14U]
                                                  [0xeU] 
                                                  >> 7U)) 
                                                << 0x1eU)));
    vlSelf->img_out[0x11U] = ((0x7fffffffU & vlSelf->img_out[0x11U]) 
                              | ((~ (vlSelf->__PVT__popcount
                                     [0x14U][0xfU] 
                                     >> 7U)) << 0x1fU));
    vlSelf->img_out[0x12U] = ((0xfffffffeU & vlSelf->img_out[0x12U]) 
                              | (1U & (~ (vlSelf->__PVT__popcount
                                          [0x14U][0x10U] 
                                          >> 7U))));
    vlSelf->img_out[0x12U] = ((0xfffffffdU & vlSelf->img_out[0x12U]) 
                              | (2U & ((~ (vlSelf->__PVT__popcount
                                           [0x14U][0x11U] 
                                           >> 7U)) 
                                       << 1U)));
    vlSelf->img_out[0x12U] = ((0xfffffffbU & vlSelf->img_out[0x12U]) 
                              | (4U & ((~ (vlSelf->__PVT__popcount
                                           [0x14U][0x12U] 
                                           >> 7U)) 
                                       << 2U)));
    vlSelf->img_out[0x12U] = ((0xfffffff7U & vlSelf->img_out[0x12U]) 
                              | (8U & ((~ (vlSelf->__PVT__popcount
                                           [0x14U][0x13U] 
                                           >> 7U)) 
                                       << 3U)));
    vlSelf->img_out[0x12U] = ((0xffffffefU & vlSelf->img_out[0x12U]) 
                              | (0x10U & ((~ (vlSelf->__PVT__popcount
                                              [0x14U]
                                              [0x14U] 
                                              >> 7U)) 
                                          << 4U)));
    vlSelf->img_out[0x12U] = ((0xffffffdfU & vlSelf->img_out[0x12U]) 
                              | (0x20U & ((~ (vlSelf->__PVT__popcount
                                              [0x14U]
                                              [0x15U] 
                                              >> 7U)) 
                                          << 5U)));
    vlSelf->img_out[0x12U] = ((0xffffffbfU & vlSelf->img_out[0x12U]) 
                              | (0x40U & ((~ (vlSelf->__PVT__popcount
                                              [0x14U]
                                              [0x16U] 
                                              >> 7U)) 
                                          << 6U)));
    vlSelf->img_out[0x12U] = ((0xffffff7fU & vlSelf->img_out[0x12U]) 
                              | (0x80U & ((~ (vlSelf->__PVT__popcount
                                              [0x14U]
                                              [0x17U] 
                                              >> 7U)) 
                                          << 7U)));
    vlSelf->img_out[0x12U] = ((0xfffffeffU & vlSelf->img_out[0x12U]) 
                              | (0x100U & ((~ (vlSelf->__PVT__popcount
                                               [0x14U]
                                               [0x18U] 
                                               >> 7U)) 
                                           << 8U)));
    vlSelf->img_out[0x12U] = ((0xfffffdffU & vlSelf->img_out[0x12U]) 
                              | (0x200U & ((~ (vlSelf->__PVT__popcount
                                               [0x14U]
                                               [0x19U] 
                                               >> 7U)) 
                                           << 9U)));
    vlSelf->img_out[0x12U] = ((0xfffffbffU & vlSelf->img_out[0x12U]) 
                              | (0x400U & ((~ (vlSelf->__PVT__popcount
                                               [0x14U]
                                               [0x1aU] 
                                               >> 7U)) 
                                           << 0xaU)));
    vlSelf->img_out[0x12U] = ((0xfffff7ffU & vlSelf->img_out[0x12U]) 
                              | (0x800U & ((~ (vlSelf->__PVT__popcount
                                               [0x14U]
                                               [0x1bU] 
                                               >> 7U)) 
                                           << 0xbU)));
    vlSelf->img_out[0x12U] = ((0xffffefffU & vlSelf->img_out[0x12U]) 
                              | (0x1000U & ((~ (vlSelf->__PVT__popcount
                                                [0x15U]
                                                [0U] 
                                                >> 7U)) 
                                            << 0xcU)));
    vlSelf->img_out[0x12U] = ((0xffffdfffU & vlSelf->img_out[0x12U]) 
                              | (0x2000U & ((~ (vlSelf->__PVT__popcount
                                                [0x15U]
                                                [1U] 
                                                >> 7U)) 
                                            << 0xdU)));
    vlSelf->img_out[0x12U] = ((0xffffbfffU & vlSelf->img_out[0x12U]) 
                              | (0x4000U & ((~ (vlSelf->__PVT__popcount
                                                [0x15U]
                                                [2U] 
                                                >> 7U)) 
                                            << 0xeU)));
    vlSelf->img_out[0x12U] = ((0xffff7fffU & vlSelf->img_out[0x12U]) 
                              | (0x8000U & ((~ (vlSelf->__PVT__popcount
                                                [0x15U]
                                                [3U] 
                                                >> 7U)) 
                                            << 0xfU)));
    vlSelf->img_out[0x12U] = ((0xfffeffffU & vlSelf->img_out[0x12U]) 
                              | (0x10000U & ((~ (vlSelf->__PVT__popcount
                                                 [0x15U]
                                                 [4U] 
                                                 >> 7U)) 
                                             << 0x10U)));
    vlSelf->img_out[0x12U] = ((0xfffdffffU & vlSelf->img_out[0x12U]) 
                              | (0x20000U & ((~ (vlSelf->__PVT__popcount
                                                 [0x15U]
                                                 [5U] 
                                                 >> 7U)) 
                                             << 0x11U)));
    vlSelf->img_out[0x12U] = ((0xfffbffffU & vlSelf->img_out[0x12U]) 
                              | (0x40000U & ((~ (vlSelf->__PVT__popcount
                                                 [0x15U]
                                                 [6U] 
                                                 >> 7U)) 
                                             << 0x12U)));
    vlSelf->img_out[0x12U] = ((0xfff7ffffU & vlSelf->img_out[0x12U]) 
                              | (0x80000U & ((~ (vlSelf->__PVT__popcount
                                                 [0x15U]
                                                 [7U] 
                                                 >> 7U)) 
                                             << 0x13U)));
    vlSelf->img_out[0x12U] = ((0xffefffffU & vlSelf->img_out[0x12U]) 
                              | (0x100000U & ((~ (vlSelf->__PVT__popcount
                                                  [0x15U]
                                                  [8U] 
                                                  >> 7U)) 
                                              << 0x14U)));
    vlSelf->img_out[0x12U] = ((0xffdfffffU & vlSelf->img_out[0x12U]) 
                              | (0x200000U & ((~ (vlSelf->__PVT__popcount
                                                  [0x15U]
                                                  [9U] 
                                                  >> 7U)) 
                                              << 0x15U)));
    vlSelf->img_out[0x12U] = ((0xffbfffffU & vlSelf->img_out[0x12U]) 
                              | (0x400000U & ((~ (vlSelf->__PVT__popcount
                                                  [0x15U]
                                                  [0xaU] 
                                                  >> 7U)) 
                                              << 0x16U)));
    vlSelf->img_out[0x12U] = ((0xff7fffffU & vlSelf->img_out[0x12U]) 
                              | (0x800000U & ((~ (vlSelf->__PVT__popcount
                                                  [0x15U]
                                                  [0xbU] 
                                                  >> 7U)) 
                                              << 0x17U)));
    vlSelf->img_out[0x12U] = ((0xfeffffffU & vlSelf->img_out[0x12U]) 
                              | (0x1000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0x15U]
                                                   [0xcU] 
                                                   >> 7U)) 
                                               << 0x18U)));
    vlSelf->img_out[0x12U] = ((0xfdffffffU & vlSelf->img_out[0x12U]) 
                              | (0x2000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0x15U]
                                                   [0xdU] 
                                                   >> 7U)) 
                                               << 0x19U)));
    vlSelf->img_out[0x12U] = ((0xfbffffffU & vlSelf->img_out[0x12U]) 
                              | (0x4000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0x15U]
                                                   [0xeU] 
                                                   >> 7U)) 
                                               << 0x1aU)));
    vlSelf->img_out[0x12U] = ((0xf7ffffffU & vlSelf->img_out[0x12U]) 
                              | (0x8000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0x15U]
                                                   [0xfU] 
                                                   >> 7U)) 
                                               << 0x1bU)));
    vlSelf->img_out[0x12U] = ((0xefffffffU & vlSelf->img_out[0x12U]) 
                              | (0x10000000U & ((~ 
                                                 (vlSelf->__PVT__popcount
                                                  [0x15U]
                                                  [0x10U] 
                                                  >> 7U)) 
                                                << 0x1cU)));
    vlSelf->img_out[0x12U] = ((0xdfffffffU & vlSelf->img_out[0x12U]) 
                              | (0x20000000U & ((~ 
                                                 (vlSelf->__PVT__popcount
                                                  [0x15U]
                                                  [0x11U] 
                                                  >> 7U)) 
                                                << 0x1dU)));
    vlSelf->img_out[0x12U] = ((0xbfffffffU & vlSelf->img_out[0x12U]) 
                              | (0x40000000U & ((~ 
                                                 (vlSelf->__PVT__popcount
                                                  [0x15U]
                                                  [0x12U] 
                                                  >> 7U)) 
                                                << 0x1eU)));
    vlSelf->img_out[0x12U] = ((0x7fffffffU & vlSelf->img_out[0x12U]) 
                              | ((~ (vlSelf->__PVT__popcount
                                     [0x15U][0x13U] 
                                     >> 7U)) << 0x1fU));
    vlSelf->img_out[0x13U] = ((0xfffffffeU & vlSelf->img_out[0x13U]) 
                              | (1U & (~ (vlSelf->__PVT__popcount
                                          [0x15U][0x14U] 
                                          >> 7U))));
    vlSelf->img_out[0x13U] = ((0xfffffffdU & vlSelf->img_out[0x13U]) 
                              | (2U & ((~ (vlSelf->__PVT__popcount
                                           [0x15U][0x15U] 
                                           >> 7U)) 
                                       << 1U)));
    vlSelf->img_out[0x13U] = ((0xfffffffbU & vlSelf->img_out[0x13U]) 
                              | (4U & ((~ (vlSelf->__PVT__popcount
                                           [0x15U][0x16U] 
                                           >> 7U)) 
                                       << 2U)));
    vlSelf->img_out[0x13U] = ((0xfffffff7U & vlSelf->img_out[0x13U]) 
                              | (8U & ((~ (vlSelf->__PVT__popcount
                                           [0x15U][0x17U] 
                                           >> 7U)) 
                                       << 3U)));
    vlSelf->img_out[0x13U] = ((0xffffffefU & vlSelf->img_out[0x13U]) 
                              | (0x10U & ((~ (vlSelf->__PVT__popcount
                                              [0x15U]
                                              [0x18U] 
                                              >> 7U)) 
                                          << 4U)));
    vlSelf->img_out[0x13U] = ((0xffffffdfU & vlSelf->img_out[0x13U]) 
                              | (0x20U & ((~ (vlSelf->__PVT__popcount
                                              [0x15U]
                                              [0x19U] 
                                              >> 7U)) 
                                          << 5U)));
    vlSelf->img_out[0x13U] = ((0xffffffbfU & vlSelf->img_out[0x13U]) 
                              | (0x40U & ((~ (vlSelf->__PVT__popcount
                                              [0x15U]
                                              [0x1aU] 
                                              >> 7U)) 
                                          << 6U)));
    vlSelf->img_out[0x13U] = ((0xffffff7fU & vlSelf->img_out[0x13U]) 
                              | (0x80U & ((~ (vlSelf->__PVT__popcount
                                              [0x15U]
                                              [0x1bU] 
                                              >> 7U)) 
                                          << 7U)));
    vlSelf->img_out[0x13U] = ((0xfffffeffU & vlSelf->img_out[0x13U]) 
                              | (0x100U & ((~ (vlSelf->__PVT__popcount
                                               [0x16U]
                                               [0U] 
                                               >> 7U)) 
                                           << 8U)));
    vlSelf->img_out[0x13U] = ((0xfffffdffU & vlSelf->img_out[0x13U]) 
                              | (0x200U & ((~ (vlSelf->__PVT__popcount
                                               [0x16U]
                                               [1U] 
                                               >> 7U)) 
                                           << 9U)));
    vlSelf->img_out[0x13U] = ((0xfffffbffU & vlSelf->img_out[0x13U]) 
                              | (0x400U & ((~ (vlSelf->__PVT__popcount
                                               [0x16U]
                                               [2U] 
                                               >> 7U)) 
                                           << 0xaU)));
    vlSelf->img_out[0x13U] = ((0xfffff7ffU & vlSelf->img_out[0x13U]) 
                              | (0x800U & ((~ (vlSelf->__PVT__popcount
                                               [0x16U]
                                               [3U] 
                                               >> 7U)) 
                                           << 0xbU)));
    vlSelf->img_out[0x13U] = ((0xffffefffU & vlSelf->img_out[0x13U]) 
                              | (0x1000U & ((~ (vlSelf->__PVT__popcount
                                                [0x16U]
                                                [4U] 
                                                >> 7U)) 
                                            << 0xcU)));
    vlSelf->img_out[0x13U] = ((0xffffdfffU & vlSelf->img_out[0x13U]) 
                              | (0x2000U & ((~ (vlSelf->__PVT__popcount
                                                [0x16U]
                                                [5U] 
                                                >> 7U)) 
                                            << 0xdU)));
    vlSelf->img_out[0x13U] = ((0xffffbfffU & vlSelf->img_out[0x13U]) 
                              | (0x4000U & ((~ (vlSelf->__PVT__popcount
                                                [0x16U]
                                                [6U] 
                                                >> 7U)) 
                                            << 0xeU)));
    vlSelf->img_out[0x13U] = ((0xffff7fffU & vlSelf->img_out[0x13U]) 
                              | (0x8000U & ((~ (vlSelf->__PVT__popcount
                                                [0x16U]
                                                [7U] 
                                                >> 7U)) 
                                            << 0xfU)));
    vlSelf->img_out[0x13U] = ((0xfffeffffU & vlSelf->img_out[0x13U]) 
                              | (0x10000U & ((~ (vlSelf->__PVT__popcount
                                                 [0x16U]
                                                 [8U] 
                                                 >> 7U)) 
                                             << 0x10U)));
    vlSelf->img_out[0x13U] = ((0xfffdffffU & vlSelf->img_out[0x13U]) 
                              | (0x20000U & ((~ (vlSelf->__PVT__popcount
                                                 [0x16U]
                                                 [9U] 
                                                 >> 7U)) 
                                             << 0x11U)));
    vlSelf->img_out[0x13U] = ((0xfffbffffU & vlSelf->img_out[0x13U]) 
                              | (0x40000U & ((~ (vlSelf->__PVT__popcount
                                                 [0x16U]
                                                 [0xaU] 
                                                 >> 7U)) 
                                             << 0x12U)));
    vlSelf->img_out[0x13U] = ((0xfff7ffffU & vlSelf->img_out[0x13U]) 
                              | (0x80000U & ((~ (vlSelf->__PVT__popcount
                                                 [0x16U]
                                                 [0xbU] 
                                                 >> 7U)) 
                                             << 0x13U)));
    vlSelf->img_out[0x13U] = ((0xffefffffU & vlSelf->img_out[0x13U]) 
                              | (0x100000U & ((~ (vlSelf->__PVT__popcount
                                                  [0x16U]
                                                  [0xcU] 
                                                  >> 7U)) 
                                              << 0x14U)));
    vlSelf->img_out[0x13U] = ((0xffdfffffU & vlSelf->img_out[0x13U]) 
                              | (0x200000U & ((~ (vlSelf->__PVT__popcount
                                                  [0x16U]
                                                  [0xdU] 
                                                  >> 7U)) 
                                              << 0x15U)));
    vlSelf->img_out[0x13U] = ((0xffbfffffU & vlSelf->img_out[0x13U]) 
                              | (0x400000U & ((~ (vlSelf->__PVT__popcount
                                                  [0x16U]
                                                  [0xeU] 
                                                  >> 7U)) 
                                              << 0x16U)));
    vlSelf->img_out[0x13U] = ((0xff7fffffU & vlSelf->img_out[0x13U]) 
                              | (0x800000U & ((~ (vlSelf->__PVT__popcount
                                                  [0x16U]
                                                  [0xfU] 
                                                  >> 7U)) 
                                              << 0x17U)));
    vlSelf->img_out[0x13U] = ((0xfeffffffU & vlSelf->img_out[0x13U]) 
                              | (0x1000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0x16U]
                                                   [0x10U] 
                                                   >> 7U)) 
                                               << 0x18U)));
    vlSelf->img_out[0x13U] = ((0xfdffffffU & vlSelf->img_out[0x13U]) 
                              | (0x2000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0x16U]
                                                   [0x11U] 
                                                   >> 7U)) 
                                               << 0x19U)));
    vlSelf->img_out[0x13U] = ((0xfbffffffU & vlSelf->img_out[0x13U]) 
                              | (0x4000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0x16U]
                                                   [0x12U] 
                                                   >> 7U)) 
                                               << 0x1aU)));
    vlSelf->img_out[0x13U] = ((0xf7ffffffU & vlSelf->img_out[0x13U]) 
                              | (0x8000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0x16U]
                                                   [0x13U] 
                                                   >> 7U)) 
                                               << 0x1bU)));
    vlSelf->img_out[0x13U] = ((0xefffffffU & vlSelf->img_out[0x13U]) 
                              | (0x10000000U & ((~ 
                                                 (vlSelf->__PVT__popcount
                                                  [0x16U]
                                                  [0x14U] 
                                                  >> 7U)) 
                                                << 0x1cU)));
    vlSelf->img_out[0x13U] = ((0xdfffffffU & vlSelf->img_out[0x13U]) 
                              | (0x20000000U & ((~ 
                                                 (vlSelf->__PVT__popcount
                                                  [0x16U]
                                                  [0x15U] 
                                                  >> 7U)) 
                                                << 0x1dU)));
    vlSelf->img_out[0x13U] = ((0xbfffffffU & vlSelf->img_out[0x13U]) 
                              | (0x40000000U & ((~ 
                                                 (vlSelf->__PVT__popcount
                                                  [0x16U]
                                                  [0x16U] 
                                                  >> 7U)) 
                                                << 0x1eU)));
    vlSelf->img_out[0x13U] = ((0x7fffffffU & vlSelf->img_out[0x13U]) 
                              | ((~ (vlSelf->__PVT__popcount
                                     [0x16U][0x17U] 
                                     >> 7U)) << 0x1fU));
    vlSelf->img_out[0x14U] = ((0xfffffffeU & vlSelf->img_out[0x14U]) 
                              | (1U & (~ (vlSelf->__PVT__popcount
                                          [0x16U][0x18U] 
                                          >> 7U))));
    vlSelf->img_out[0x14U] = ((0xfffffffdU & vlSelf->img_out[0x14U]) 
                              | (2U & ((~ (vlSelf->__PVT__popcount
                                           [0x16U][0x19U] 
                                           >> 7U)) 
                                       << 1U)));
    vlSelf->img_out[0x14U] = ((0xfffffffbU & vlSelf->img_out[0x14U]) 
                              | (4U & ((~ (vlSelf->__PVT__popcount
                                           [0x16U][0x1aU] 
                                           >> 7U)) 
                                       << 2U)));
    vlSelf->img_out[0x14U] = ((0xfffffff7U & vlSelf->img_out[0x14U]) 
                              | (8U & ((~ (vlSelf->__PVT__popcount
                                           [0x16U][0x1bU] 
                                           >> 7U)) 
                                       << 3U)));
    vlSelf->img_out[0x14U] = ((0xffffffefU & vlSelf->img_out[0x14U]) 
                              | (0x10U & ((~ (vlSelf->__PVT__popcount
                                              [0x17U]
                                              [0U] 
                                              >> 7U)) 
                                          << 4U)));
    vlSelf->img_out[0x14U] = ((0xffffffdfU & vlSelf->img_out[0x14U]) 
                              | (0x20U & ((~ (vlSelf->__PVT__popcount
                                              [0x17U]
                                              [1U] 
                                              >> 7U)) 
                                          << 5U)));
    vlSelf->img_out[0x14U] = ((0xffffffbfU & vlSelf->img_out[0x14U]) 
                              | (0x40U & ((~ (vlSelf->__PVT__popcount
                                              [0x17U]
                                              [2U] 
                                              >> 7U)) 
                                          << 6U)));
    vlSelf->img_out[0x14U] = ((0xffffff7fU & vlSelf->img_out[0x14U]) 
                              | (0x80U & ((~ (vlSelf->__PVT__popcount
                                              [0x17U]
                                              [3U] 
                                              >> 7U)) 
                                          << 7U)));
    vlSelf->img_out[0x14U] = ((0xfffffeffU & vlSelf->img_out[0x14U]) 
                              | (0x100U & ((~ (vlSelf->__PVT__popcount
                                               [0x17U]
                                               [4U] 
                                               >> 7U)) 
                                           << 8U)));
    vlSelf->img_out[0x14U] = ((0xfffffdffU & vlSelf->img_out[0x14U]) 
                              | (0x200U & ((~ (vlSelf->__PVT__popcount
                                               [0x17U]
                                               [5U] 
                                               >> 7U)) 
                                           << 9U)));
    vlSelf->img_out[0x14U] = ((0xfffffbffU & vlSelf->img_out[0x14U]) 
                              | (0x400U & ((~ (vlSelf->__PVT__popcount
                                               [0x17U]
                                               [6U] 
                                               >> 7U)) 
                                           << 0xaU)));
    vlSelf->img_out[0x14U] = ((0xfffff7ffU & vlSelf->img_out[0x14U]) 
                              | (0x800U & ((~ (vlSelf->__PVT__popcount
                                               [0x17U]
                                               [7U] 
                                               >> 7U)) 
                                           << 0xbU)));
    vlSelf->img_out[0x14U] = ((0xffffefffU & vlSelf->img_out[0x14U]) 
                              | (0x1000U & ((~ (vlSelf->__PVT__popcount
                                                [0x17U]
                                                [8U] 
                                                >> 7U)) 
                                            << 0xcU)));
    vlSelf->img_out[0x14U] = ((0xffffdfffU & vlSelf->img_out[0x14U]) 
                              | (0x2000U & ((~ (vlSelf->__PVT__popcount
                                                [0x17U]
                                                [9U] 
                                                >> 7U)) 
                                            << 0xdU)));
    vlSelf->img_out[0x14U] = ((0xffffbfffU & vlSelf->img_out[0x14U]) 
                              | (0x4000U & ((~ (vlSelf->__PVT__popcount
                                                [0x17U]
                                                [0xaU] 
                                                >> 7U)) 
                                            << 0xeU)));
    vlSelf->img_out[0x14U] = ((0xffff7fffU & vlSelf->img_out[0x14U]) 
                              | (0x8000U & ((~ (vlSelf->__PVT__popcount
                                                [0x17U]
                                                [0xbU] 
                                                >> 7U)) 
                                            << 0xfU)));
    vlSelf->img_out[0x14U] = ((0xfffeffffU & vlSelf->img_out[0x14U]) 
                              | (0x10000U & ((~ (vlSelf->__PVT__popcount
                                                 [0x17U]
                                                 [0xcU] 
                                                 >> 7U)) 
                                             << 0x10U)));
    vlSelf->img_out[0x14U] = ((0xfffdffffU & vlSelf->img_out[0x14U]) 
                              | (0x20000U & ((~ (vlSelf->__PVT__popcount
                                                 [0x17U]
                                                 [0xdU] 
                                                 >> 7U)) 
                                             << 0x11U)));
    vlSelf->img_out[0x14U] = ((0xfffbffffU & vlSelf->img_out[0x14U]) 
                              | (0x40000U & ((~ (vlSelf->__PVT__popcount
                                                 [0x17U]
                                                 [0xeU] 
                                                 >> 7U)) 
                                             << 0x12U)));
    vlSelf->img_out[0x14U] = ((0xfff7ffffU & vlSelf->img_out[0x14U]) 
                              | (0x80000U & ((~ (vlSelf->__PVT__popcount
                                                 [0x17U]
                                                 [0xfU] 
                                                 >> 7U)) 
                                             << 0x13U)));
    vlSelf->img_out[0x14U] = ((0xffefffffU & vlSelf->img_out[0x14U]) 
                              | (0x100000U & ((~ (vlSelf->__PVT__popcount
                                                  [0x17U]
                                                  [0x10U] 
                                                  >> 7U)) 
                                              << 0x14U)));
    vlSelf->img_out[0x14U] = ((0xffdfffffU & vlSelf->img_out[0x14U]) 
                              | (0x200000U & ((~ (vlSelf->__PVT__popcount
                                                  [0x17U]
                                                  [0x11U] 
                                                  >> 7U)) 
                                              << 0x15U)));
    vlSelf->img_out[0x14U] = ((0xffbfffffU & vlSelf->img_out[0x14U]) 
                              | (0x400000U & ((~ (vlSelf->__PVT__popcount
                                                  [0x17U]
                                                  [0x12U] 
                                                  >> 7U)) 
                                              << 0x16U)));
    vlSelf->img_out[0x14U] = ((0xff7fffffU & vlSelf->img_out[0x14U]) 
                              | (0x800000U & ((~ (vlSelf->__PVT__popcount
                                                  [0x17U]
                                                  [0x13U] 
                                                  >> 7U)) 
                                              << 0x17U)));
    vlSelf->img_out[0x14U] = ((0xfeffffffU & vlSelf->img_out[0x14U]) 
                              | (0x1000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0x17U]
                                                   [0x14U] 
                                                   >> 7U)) 
                                               << 0x18U)));
    vlSelf->img_out[0x14U] = ((0xfdffffffU & vlSelf->img_out[0x14U]) 
                              | (0x2000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0x17U]
                                                   [0x15U] 
                                                   >> 7U)) 
                                               << 0x19U)));
    vlSelf->img_out[0x14U] = ((0xfbffffffU & vlSelf->img_out[0x14U]) 
                              | (0x4000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0x17U]
                                                   [0x16U] 
                                                   >> 7U)) 
                                               << 0x1aU)));
    vlSelf->img_out[0x14U] = ((0xf7ffffffU & vlSelf->img_out[0x14U]) 
                              | (0x8000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0x17U]
                                                   [0x17U] 
                                                   >> 7U)) 
                                               << 0x1bU)));
    vlSelf->img_out[0x14U] = ((0xefffffffU & vlSelf->img_out[0x14U]) 
                              | (0x10000000U & ((~ 
                                                 (vlSelf->__PVT__popcount
                                                  [0x17U]
                                                  [0x18U] 
                                                  >> 7U)) 
                                                << 0x1cU)));
    vlSelf->img_out[0x14U] = ((0xdfffffffU & vlSelf->img_out[0x14U]) 
                              | (0x20000000U & ((~ 
                                                 (vlSelf->__PVT__popcount
                                                  [0x17U]
                                                  [0x19U] 
                                                  >> 7U)) 
                                                << 0x1dU)));
    vlSelf->img_out[0x14U] = ((0xbfffffffU & vlSelf->img_out[0x14U]) 
                              | (0x40000000U & ((~ 
                                                 (vlSelf->__PVT__popcount
                                                  [0x17U]
                                                  [0x1aU] 
                                                  >> 7U)) 
                                                << 0x1eU)));
    vlSelf->img_out[0x14U] = ((0x7fffffffU & vlSelf->img_out[0x14U]) 
                              | ((~ (vlSelf->__PVT__popcount
                                     [0x17U][0x1bU] 
                                     >> 7U)) << 0x1fU));
    vlSelf->img_out[0x15U] = ((0xfffffffeU & vlSelf->img_out[0x15U]) 
                              | (1U & (~ (vlSelf->__PVT__popcount
                                          [0x18U][0U] 
                                          >> 7U))));
    vlSelf->img_out[0x15U] = ((0xfffffffdU & vlSelf->img_out[0x15U]) 
                              | (2U & ((~ (vlSelf->__PVT__popcount
                                           [0x18U][1U] 
                                           >> 7U)) 
                                       << 1U)));
    vlSelf->img_out[0x15U] = ((0xfffffffbU & vlSelf->img_out[0x15U]) 
                              | (4U & ((~ (vlSelf->__PVT__popcount
                                           [0x18U][2U] 
                                           >> 7U)) 
                                       << 2U)));
    vlSelf->img_out[0x15U] = ((0xfffffff7U & vlSelf->img_out[0x15U]) 
                              | (8U & ((~ (vlSelf->__PVT__popcount
                                           [0x18U][3U] 
                                           >> 7U)) 
                                       << 3U)));
    vlSelf->img_out[0x15U] = ((0xffffffefU & vlSelf->img_out[0x15U]) 
                              | (0x10U & ((~ (vlSelf->__PVT__popcount
                                              [0x18U]
                                              [4U] 
                                              >> 7U)) 
                                          << 4U)));
    vlSelf->img_out[0x15U] = ((0xffffffdfU & vlSelf->img_out[0x15U]) 
                              | (0x20U & ((~ (vlSelf->__PVT__popcount
                                              [0x18U]
                                              [5U] 
                                              >> 7U)) 
                                          << 5U)));
    vlSelf->img_out[0x15U] = ((0xffffffbfU & vlSelf->img_out[0x15U]) 
                              | (0x40U & ((~ (vlSelf->__PVT__popcount
                                              [0x18U]
                                              [6U] 
                                              >> 7U)) 
                                          << 6U)));
    vlSelf->img_out[0x15U] = ((0xffffff7fU & vlSelf->img_out[0x15U]) 
                              | (0x80U & ((~ (vlSelf->__PVT__popcount
                                              [0x18U]
                                              [7U] 
                                              >> 7U)) 
                                          << 7U)));
    vlSelf->img_out[0x15U] = ((0xfffffeffU & vlSelf->img_out[0x15U]) 
                              | (0x100U & ((~ (vlSelf->__PVT__popcount
                                               [0x18U]
                                               [8U] 
                                               >> 7U)) 
                                           << 8U)));
    vlSelf->img_out[0x15U] = ((0xfffffdffU & vlSelf->img_out[0x15U]) 
                              | (0x200U & ((~ (vlSelf->__PVT__popcount
                                               [0x18U]
                                               [9U] 
                                               >> 7U)) 
                                           << 9U)));
    vlSelf->img_out[0x15U] = ((0xfffffbffU & vlSelf->img_out[0x15U]) 
                              | (0x400U & ((~ (vlSelf->__PVT__popcount
                                               [0x18U]
                                               [0xaU] 
                                               >> 7U)) 
                                           << 0xaU)));
    vlSelf->img_out[0x15U] = ((0xfffff7ffU & vlSelf->img_out[0x15U]) 
                              | (0x800U & ((~ (vlSelf->__PVT__popcount
                                               [0x18U]
                                               [0xbU] 
                                               >> 7U)) 
                                           << 0xbU)));
    vlSelf->img_out[0x15U] = ((0xffffefffU & vlSelf->img_out[0x15U]) 
                              | (0x1000U & ((~ (vlSelf->__PVT__popcount
                                                [0x18U]
                                                [0xcU] 
                                                >> 7U)) 
                                            << 0xcU)));
    vlSelf->img_out[0x15U] = ((0xffffdfffU & vlSelf->img_out[0x15U]) 
                              | (0x2000U & ((~ (vlSelf->__PVT__popcount
                                                [0x18U]
                                                [0xdU] 
                                                >> 7U)) 
                                            << 0xdU)));
    vlSelf->img_out[0x15U] = ((0xffffbfffU & vlSelf->img_out[0x15U]) 
                              | (0x4000U & ((~ (vlSelf->__PVT__popcount
                                                [0x18U]
                                                [0xeU] 
                                                >> 7U)) 
                                            << 0xeU)));
    vlSelf->img_out[0x15U] = ((0xffff7fffU & vlSelf->img_out[0x15U]) 
                              | (0x8000U & ((~ (vlSelf->__PVT__popcount
                                                [0x18U]
                                                [0xfU] 
                                                >> 7U)) 
                                            << 0xfU)));
    vlSelf->img_out[0x15U] = ((0xfffeffffU & vlSelf->img_out[0x15U]) 
                              | (0x10000U & ((~ (vlSelf->__PVT__popcount
                                                 [0x18U]
                                                 [0x10U] 
                                                 >> 7U)) 
                                             << 0x10U)));
    vlSelf->img_out[0x15U] = ((0xfffdffffU & vlSelf->img_out[0x15U]) 
                              | (0x20000U & ((~ (vlSelf->__PVT__popcount
                                                 [0x18U]
                                                 [0x11U] 
                                                 >> 7U)) 
                                             << 0x11U)));
    vlSelf->img_out[0x15U] = ((0xfffbffffU & vlSelf->img_out[0x15U]) 
                              | (0x40000U & ((~ (vlSelf->__PVT__popcount
                                                 [0x18U]
                                                 [0x12U] 
                                                 >> 7U)) 
                                             << 0x12U)));
    vlSelf->img_out[0x15U] = ((0xfff7ffffU & vlSelf->img_out[0x15U]) 
                              | (0x80000U & ((~ (vlSelf->__PVT__popcount
                                                 [0x18U]
                                                 [0x13U] 
                                                 >> 7U)) 
                                             << 0x13U)));
    vlSelf->img_out[0x15U] = ((0xffefffffU & vlSelf->img_out[0x15U]) 
                              | (0x100000U & ((~ (vlSelf->__PVT__popcount
                                                  [0x18U]
                                                  [0x14U] 
                                                  >> 7U)) 
                                              << 0x14U)));
    vlSelf->img_out[0x15U] = ((0xffdfffffU & vlSelf->img_out[0x15U]) 
                              | (0x200000U & ((~ (vlSelf->__PVT__popcount
                                                  [0x18U]
                                                  [0x15U] 
                                                  >> 7U)) 
                                              << 0x15U)));
    vlSelf->img_out[0x15U] = ((0xffbfffffU & vlSelf->img_out[0x15U]) 
                              | (0x400000U & ((~ (vlSelf->__PVT__popcount
                                                  [0x18U]
                                                  [0x16U] 
                                                  >> 7U)) 
                                              << 0x16U)));
    vlSelf->img_out[0x15U] = ((0xff7fffffU & vlSelf->img_out[0x15U]) 
                              | (0x800000U & ((~ (vlSelf->__PVT__popcount
                                                  [0x18U]
                                                  [0x17U] 
                                                  >> 7U)) 
                                              << 0x17U)));
    vlSelf->img_out[0x15U] = ((0xfeffffffU & vlSelf->img_out[0x15U]) 
                              | (0x1000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0x18U]
                                                   [0x18U] 
                                                   >> 7U)) 
                                               << 0x18U)));
    vlSelf->img_out[0x15U] = ((0xfdffffffU & vlSelf->img_out[0x15U]) 
                              | (0x2000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0x18U]
                                                   [0x19U] 
                                                   >> 7U)) 
                                               << 0x19U)));
    vlSelf->img_out[0x15U] = ((0xfbffffffU & vlSelf->img_out[0x15U]) 
                              | (0x4000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0x18U]
                                                   [0x1aU] 
                                                   >> 7U)) 
                                               << 0x1aU)));
    vlSelf->img_out[0x15U] = ((0xf7ffffffU & vlSelf->img_out[0x15U]) 
                              | (0x8000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0x18U]
                                                   [0x1bU] 
                                                   >> 7U)) 
                                               << 0x1bU)));
    vlSelf->img_out[0x15U] = ((0xefffffffU & vlSelf->img_out[0x15U]) 
                              | (0x10000000U & ((~ 
                                                 (vlSelf->__PVT__popcount
                                                  [0x19U]
                                                  [0U] 
                                                  >> 7U)) 
                                                << 0x1cU)));
    vlSelf->img_out[0x15U] = ((0xdfffffffU & vlSelf->img_out[0x15U]) 
                              | (0x20000000U & ((~ 
                                                 (vlSelf->__PVT__popcount
                                                  [0x19U]
                                                  [1U] 
                                                  >> 7U)) 
                                                << 0x1dU)));
    vlSelf->img_out[0x15U] = ((0xbfffffffU & vlSelf->img_out[0x15U]) 
                              | (0x40000000U & ((~ 
                                                 (vlSelf->__PVT__popcount
                                                  [0x19U]
                                                  [2U] 
                                                  >> 7U)) 
                                                << 0x1eU)));
    vlSelf->img_out[0x15U] = ((0x7fffffffU & vlSelf->img_out[0x15U]) 
                              | ((~ (vlSelf->__PVT__popcount
                                     [0x19U][3U] >> 7U)) 
                                 << 0x1fU));
    vlSelf->img_out[0x16U] = ((0xfffffffeU & vlSelf->img_out[0x16U]) 
                              | (1U & (~ (vlSelf->__PVT__popcount
                                          [0x19U][4U] 
                                          >> 7U))));
    vlSelf->img_out[0x16U] = ((0xfffffffdU & vlSelf->img_out[0x16U]) 
                              | (2U & ((~ (vlSelf->__PVT__popcount
                                           [0x19U][5U] 
                                           >> 7U)) 
                                       << 1U)));
    vlSelf->img_out[0x16U] = ((0xfffffffbU & vlSelf->img_out[0x16U]) 
                              | (4U & ((~ (vlSelf->__PVT__popcount
                                           [0x19U][6U] 
                                           >> 7U)) 
                                       << 2U)));
    vlSelf->img_out[0x16U] = ((0xfffffff7U & vlSelf->img_out[0x16U]) 
                              | (8U & ((~ (vlSelf->__PVT__popcount
                                           [0x19U][7U] 
                                           >> 7U)) 
                                       << 3U)));
    vlSelf->img_out[0x16U] = ((0xffffffefU & vlSelf->img_out[0x16U]) 
                              | (0x10U & ((~ (vlSelf->__PVT__popcount
                                              [0x19U]
                                              [8U] 
                                              >> 7U)) 
                                          << 4U)));
    vlSelf->img_out[0x16U] = ((0xffffffdfU & vlSelf->img_out[0x16U]) 
                              | (0x20U & ((~ (vlSelf->__PVT__popcount
                                              [0x19U]
                                              [9U] 
                                              >> 7U)) 
                                          << 5U)));
    vlSelf->img_out[0x16U] = ((0xffffffbfU & vlSelf->img_out[0x16U]) 
                              | (0x40U & ((~ (vlSelf->__PVT__popcount
                                              [0x19U]
                                              [0xaU] 
                                              >> 7U)) 
                                          << 6U)));
    vlSelf->img_out[0x16U] = ((0xffffff7fU & vlSelf->img_out[0x16U]) 
                              | (0x80U & ((~ (vlSelf->__PVT__popcount
                                              [0x19U]
                                              [0xbU] 
                                              >> 7U)) 
                                          << 7U)));
    vlSelf->img_out[0x16U] = ((0xfffffeffU & vlSelf->img_out[0x16U]) 
                              | (0x100U & ((~ (vlSelf->__PVT__popcount
                                               [0x19U]
                                               [0xcU] 
                                               >> 7U)) 
                                           << 8U)));
    vlSelf->img_out[0x16U] = ((0xfffffdffU & vlSelf->img_out[0x16U]) 
                              | (0x200U & ((~ (vlSelf->__PVT__popcount
                                               [0x19U]
                                               [0xdU] 
                                               >> 7U)) 
                                           << 9U)));
    vlSelf->img_out[0x16U] = ((0xfffffbffU & vlSelf->img_out[0x16U]) 
                              | (0x400U & ((~ (vlSelf->__PVT__popcount
                                               [0x19U]
                                               [0xeU] 
                                               >> 7U)) 
                                           << 0xaU)));
    vlSelf->img_out[0x16U] = ((0xfffff7ffU & vlSelf->img_out[0x16U]) 
                              | (0x800U & ((~ (vlSelf->__PVT__popcount
                                               [0x19U]
                                               [0xfU] 
                                               >> 7U)) 
                                           << 0xbU)));
    vlSelf->img_out[0x16U] = ((0xffffefffU & vlSelf->img_out[0x16U]) 
                              | (0x1000U & ((~ (vlSelf->__PVT__popcount
                                                [0x19U]
                                                [0x10U] 
                                                >> 7U)) 
                                            << 0xcU)));
    vlSelf->img_out[0x16U] = ((0xffffdfffU & vlSelf->img_out[0x16U]) 
                              | (0x2000U & ((~ (vlSelf->__PVT__popcount
                                                [0x19U]
                                                [0x11U] 
                                                >> 7U)) 
                                            << 0xdU)));
    vlSelf->img_out[0x16U] = ((0xffffbfffU & vlSelf->img_out[0x16U]) 
                              | (0x4000U & ((~ (vlSelf->__PVT__popcount
                                                [0x19U]
                                                [0x12U] 
                                                >> 7U)) 
                                            << 0xeU)));
    vlSelf->img_out[0x16U] = ((0xffff7fffU & vlSelf->img_out[0x16U]) 
                              | (0x8000U & ((~ (vlSelf->__PVT__popcount
                                                [0x19U]
                                                [0x13U] 
                                                >> 7U)) 
                                            << 0xfU)));
    vlSelf->img_out[0x16U] = ((0xfffeffffU & vlSelf->img_out[0x16U]) 
                              | (0x10000U & ((~ (vlSelf->__PVT__popcount
                                                 [0x19U]
                                                 [0x14U] 
                                                 >> 7U)) 
                                             << 0x10U)));
    vlSelf->img_out[0x16U] = ((0xfffdffffU & vlSelf->img_out[0x16U]) 
                              | (0x20000U & ((~ (vlSelf->__PVT__popcount
                                                 [0x19U]
                                                 [0x15U] 
                                                 >> 7U)) 
                                             << 0x11U)));
    vlSelf->img_out[0x16U] = ((0xfffbffffU & vlSelf->img_out[0x16U]) 
                              | (0x40000U & ((~ (vlSelf->__PVT__popcount
                                                 [0x19U]
                                                 [0x16U] 
                                                 >> 7U)) 
                                             << 0x12U)));
    vlSelf->img_out[0x16U] = ((0xfff7ffffU & vlSelf->img_out[0x16U]) 
                              | (0x80000U & ((~ (vlSelf->__PVT__popcount
                                                 [0x19U]
                                                 [0x17U] 
                                                 >> 7U)) 
                                             << 0x13U)));
    vlSelf->img_out[0x16U] = ((0xffefffffU & vlSelf->img_out[0x16U]) 
                              | (0x100000U & ((~ (vlSelf->__PVT__popcount
                                                  [0x19U]
                                                  [0x18U] 
                                                  >> 7U)) 
                                              << 0x14U)));
    vlSelf->img_out[0x16U] = ((0xffdfffffU & vlSelf->img_out[0x16U]) 
                              | (0x200000U & ((~ (vlSelf->__PVT__popcount
                                                  [0x19U]
                                                  [0x19U] 
                                                  >> 7U)) 
                                              << 0x15U)));
    vlSelf->img_out[0x16U] = ((0xffbfffffU & vlSelf->img_out[0x16U]) 
                              | (0x400000U & ((~ (vlSelf->__PVT__popcount
                                                  [0x19U]
                                                  [0x1aU] 
                                                  >> 7U)) 
                                              << 0x16U)));
    vlSelf->img_out[0x16U] = ((0xff7fffffU & vlSelf->img_out[0x16U]) 
                              | (0x800000U & ((~ (vlSelf->__PVT__popcount
                                                  [0x19U]
                                                  [0x1bU] 
                                                  >> 7U)) 
                                              << 0x17U)));
    vlSelf->img_out[0x16U] = ((0xfeffffffU & vlSelf->img_out[0x16U]) 
                              | (0x1000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0x1aU]
                                                   [0U] 
                                                   >> 7U)) 
                                               << 0x18U)));
    vlSelf->img_out[0x16U] = ((0xfdffffffU & vlSelf->img_out[0x16U]) 
                              | (0x2000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0x1aU]
                                                   [1U] 
                                                   >> 7U)) 
                                               << 0x19U)));
    vlSelf->img_out[0x16U] = ((0xfbffffffU & vlSelf->img_out[0x16U]) 
                              | (0x4000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0x1aU]
                                                   [2U] 
                                                   >> 7U)) 
                                               << 0x1aU)));
    vlSelf->img_out[0x16U] = ((0xf7ffffffU & vlSelf->img_out[0x16U]) 
                              | (0x8000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0x1aU]
                                                   [3U] 
                                                   >> 7U)) 
                                               << 0x1bU)));
    vlSelf->img_out[0x16U] = ((0xefffffffU & vlSelf->img_out[0x16U]) 
                              | (0x10000000U & ((~ 
                                                 (vlSelf->__PVT__popcount
                                                  [0x1aU]
                                                  [4U] 
                                                  >> 7U)) 
                                                << 0x1cU)));
    vlSelf->img_out[0x16U] = ((0xdfffffffU & vlSelf->img_out[0x16U]) 
                              | (0x20000000U & ((~ 
                                                 (vlSelf->__PVT__popcount
                                                  [0x1aU]
                                                  [5U] 
                                                  >> 7U)) 
                                                << 0x1dU)));
    vlSelf->img_out[0x16U] = ((0xbfffffffU & vlSelf->img_out[0x16U]) 
                              | (0x40000000U & ((~ 
                                                 (vlSelf->__PVT__popcount
                                                  [0x1aU]
                                                  [6U] 
                                                  >> 7U)) 
                                                << 0x1eU)));
    vlSelf->img_out[0x16U] = ((0x7fffffffU & vlSelf->img_out[0x16U]) 
                              | ((~ (vlSelf->__PVT__popcount
                                     [0x1aU][7U] >> 7U)) 
                                 << 0x1fU));
    vlSelf->img_out[0x17U] = ((0xfffffffeU & vlSelf->img_out[0x17U]) 
                              | (1U & (~ (vlSelf->__PVT__popcount
                                          [0x1aU][8U] 
                                          >> 7U))));
    vlSelf->img_out[0x17U] = ((0xfffffffdU & vlSelf->img_out[0x17U]) 
                              | (2U & ((~ (vlSelf->__PVT__popcount
                                           [0x1aU][9U] 
                                           >> 7U)) 
                                       << 1U)));
    vlSelf->img_out[0x17U] = ((0xfffffffbU & vlSelf->img_out[0x17U]) 
                              | (4U & ((~ (vlSelf->__PVT__popcount
                                           [0x1aU][0xaU] 
                                           >> 7U)) 
                                       << 2U)));
    vlSelf->img_out[0x17U] = ((0xfffffff7U & vlSelf->img_out[0x17U]) 
                              | (8U & ((~ (vlSelf->__PVT__popcount
                                           [0x1aU][0xbU] 
                                           >> 7U)) 
                                       << 3U)));
    vlSelf->img_out[0x17U] = ((0xffffffefU & vlSelf->img_out[0x17U]) 
                              | (0x10U & ((~ (vlSelf->__PVT__popcount
                                              [0x1aU]
                                              [0xcU] 
                                              >> 7U)) 
                                          << 4U)));
    vlSelf->img_out[0x17U] = ((0xffffffdfU & vlSelf->img_out[0x17U]) 
                              | (0x20U & ((~ (vlSelf->__PVT__popcount
                                              [0x1aU]
                                              [0xdU] 
                                              >> 7U)) 
                                          << 5U)));
    vlSelf->img_out[0x17U] = ((0xffffffbfU & vlSelf->img_out[0x17U]) 
                              | (0x40U & ((~ (vlSelf->__PVT__popcount
                                              [0x1aU]
                                              [0xeU] 
                                              >> 7U)) 
                                          << 6U)));
    vlSelf->img_out[0x17U] = ((0xffffff7fU & vlSelf->img_out[0x17U]) 
                              | (0x80U & ((~ (vlSelf->__PVT__popcount
                                              [0x1aU]
                                              [0xfU] 
                                              >> 7U)) 
                                          << 7U)));
    vlSelf->img_out[0x17U] = ((0xfffffeffU & vlSelf->img_out[0x17U]) 
                              | (0x100U & ((~ (vlSelf->__PVT__popcount
                                               [0x1aU]
                                               [0x10U] 
                                               >> 7U)) 
                                           << 8U)));
    vlSelf->img_out[0x17U] = ((0xfffffdffU & vlSelf->img_out[0x17U]) 
                              | (0x200U & ((~ (vlSelf->__PVT__popcount
                                               [0x1aU]
                                               [0x11U] 
                                               >> 7U)) 
                                           << 9U)));
    vlSelf->img_out[0x17U] = ((0xfffffbffU & vlSelf->img_out[0x17U]) 
                              | (0x400U & ((~ (vlSelf->__PVT__popcount
                                               [0x1aU]
                                               [0x12U] 
                                               >> 7U)) 
                                           << 0xaU)));
    vlSelf->img_out[0x17U] = ((0xfffff7ffU & vlSelf->img_out[0x17U]) 
                              | (0x800U & ((~ (vlSelf->__PVT__popcount
                                               [0x1aU]
                                               [0x13U] 
                                               >> 7U)) 
                                           << 0xbU)));
    vlSelf->img_out[0x17U] = ((0xffffefffU & vlSelf->img_out[0x17U]) 
                              | (0x1000U & ((~ (vlSelf->__PVT__popcount
                                                [0x1aU]
                                                [0x14U] 
                                                >> 7U)) 
                                            << 0xcU)));
    vlSelf->img_out[0x17U] = ((0xffffdfffU & vlSelf->img_out[0x17U]) 
                              | (0x2000U & ((~ (vlSelf->__PVT__popcount
                                                [0x1aU]
                                                [0x15U] 
                                                >> 7U)) 
                                            << 0xdU)));
    vlSelf->img_out[0x17U] = ((0xffffbfffU & vlSelf->img_out[0x17U]) 
                              | (0x4000U & ((~ (vlSelf->__PVT__popcount
                                                [0x1aU]
                                                [0x16U] 
                                                >> 7U)) 
                                            << 0xeU)));
    vlSelf->img_out[0x17U] = ((0xffff7fffU & vlSelf->img_out[0x17U]) 
                              | (0x8000U & ((~ (vlSelf->__PVT__popcount
                                                [0x1aU]
                                                [0x17U] 
                                                >> 7U)) 
                                            << 0xfU)));
    vlSelf->img_out[0x17U] = ((0xfffeffffU & vlSelf->img_out[0x17U]) 
                              | (0x10000U & ((~ (vlSelf->__PVT__popcount
                                                 [0x1aU]
                                                 [0x18U] 
                                                 >> 7U)) 
                                             << 0x10U)));
    vlSelf->img_out[0x17U] = ((0xfffdffffU & vlSelf->img_out[0x17U]) 
                              | (0x20000U & ((~ (vlSelf->__PVT__popcount
                                                 [0x1aU]
                                                 [0x19U] 
                                                 >> 7U)) 
                                             << 0x11U)));
    vlSelf->img_out[0x17U] = ((0xfffbffffU & vlSelf->img_out[0x17U]) 
                              | (0x40000U & ((~ (vlSelf->__PVT__popcount
                                                 [0x1aU]
                                                 [0x1aU] 
                                                 >> 7U)) 
                                             << 0x12U)));
    vlSelf->img_out[0x17U] = ((0xfff7ffffU & vlSelf->img_out[0x17U]) 
                              | (0x80000U & ((~ (vlSelf->__PVT__popcount
                                                 [0x1aU]
                                                 [0x1bU] 
                                                 >> 7U)) 
                                             << 0x13U)));
    vlSelf->img_out[0x17U] = ((0xffefffffU & vlSelf->img_out[0x17U]) 
                              | (0x100000U & ((~ (vlSelf->__PVT__popcount
                                                  [0x1bU]
                                                  [0U] 
                                                  >> 7U)) 
                                              << 0x14U)));
    vlSelf->img_out[0x17U] = ((0xffdfffffU & vlSelf->img_out[0x17U]) 
                              | (0x200000U & ((~ (vlSelf->__PVT__popcount
                                                  [0x1bU]
                                                  [1U] 
                                                  >> 7U)) 
                                              << 0x15U)));
    vlSelf->img_out[0x17U] = ((0xffbfffffU & vlSelf->img_out[0x17U]) 
                              | (0x400000U & ((~ (vlSelf->__PVT__popcount
                                                  [0x1bU]
                                                  [2U] 
                                                  >> 7U)) 
                                              << 0x16U)));
    vlSelf->img_out[0x17U] = ((0xff7fffffU & vlSelf->img_out[0x17U]) 
                              | (0x800000U & ((~ (vlSelf->__PVT__popcount
                                                  [0x1bU]
                                                  [3U] 
                                                  >> 7U)) 
                                              << 0x17U)));
    vlSelf->img_out[0x17U] = ((0xfeffffffU & vlSelf->img_out[0x17U]) 
                              | (0x1000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [4U] 
                                                   >> 7U)) 
                                               << 0x18U)));
    vlSelf->img_out[0x17U] = ((0xfdffffffU & vlSelf->img_out[0x17U]) 
                              | (0x2000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [5U] 
                                                   >> 7U)) 
                                               << 0x19U)));
    vlSelf->img_out[0x17U] = ((0xfbffffffU & vlSelf->img_out[0x17U]) 
                              | (0x4000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [6U] 
                                                   >> 7U)) 
                                               << 0x1aU)));
    vlSelf->img_out[0x17U] = ((0xf7ffffffU & vlSelf->img_out[0x17U]) 
                              | (0x8000000U & ((~ (
                                                   vlSelf->__PVT__popcount
                                                   [0x1bU]
                                                   [7U] 
                                                   >> 7U)) 
                                               << 0x1bU)));
    vlSelf->img_out[0x17U] = ((0xefffffffU & vlSelf->img_out[0x17U]) 
                              | (0x10000000U & ((~ 
                                                 (vlSelf->__PVT__popcount
                                                  [0x1bU]
                                                  [8U] 
                                                  >> 7U)) 
                                                << 0x1cU)));
    vlSelf->img_out[0x17U] = ((0xdfffffffU & vlSelf->img_out[0x17U]) 
                              | (0x20000000U & ((~ 
                                                 (vlSelf->__PVT__popcount
                                                  [0x1bU]
                                                  [9U] 
                                                  >> 7U)) 
                                                << 0x1dU)));
    vlSelf->img_out[0x17U] = ((0xbfffffffU & vlSelf->img_out[0x17U]) 
                              | (0x40000000U & ((~ 
                                                 (vlSelf->__PVT__popcount
                                                  [0x1bU]
                                                  [0xaU] 
                                                  >> 7U)) 
                                                << 0x1eU)));
    vlSelf->img_out[0x17U] = ((0x7fffffffU & vlSelf->img_out[0x17U]) 
                              | ((~ (vlSelf->__PVT__popcount
                                     [0x1bU][0xbU] 
                                     >> 7U)) << 0x1fU));
    vlSelf->img_out[0x18U] = ((0xfffeU & vlSelf->img_out[0x18U]) 
                              | (1U & (~ (vlSelf->__PVT__popcount
                                          [0x1bU][0xcU] 
                                          >> 7U))));
    vlSelf->img_out[0x18U] = ((0xfffdU & vlSelf->img_out[0x18U]) 
                              | (2U & ((~ (vlSelf->__PVT__popcount
                                           [0x1bU][0xdU] 
                                           >> 7U)) 
                                       << 1U)));
    vlSelf->img_out[0x18U] = ((0xfffbU & vlSelf->img_out[0x18U]) 
                              | (4U & ((~ (vlSelf->__PVT__popcount
                                           [0x1bU][0xeU] 
                                           >> 7U)) 
                                       << 2U)));
    vlSelf->img_out[0x18U] = ((0xfff7U & vlSelf->img_out[0x18U]) 
                              | (8U & ((~ (vlSelf->__PVT__popcount
                                           [0x1bU][0xfU] 
                                           >> 7U)) 
                                       << 3U)));
    vlSelf->img_out[0x18U] = ((0xffefU & vlSelf->img_out[0x18U]) 
                              | (0x10U & ((~ (vlSelf->__PVT__popcount
                                              [0x1bU]
                                              [0x10U] 
                                              >> 7U)) 
                                          << 4U)));
    vlSelf->img_out[0x18U] = ((0xffdfU & vlSelf->img_out[0x18U]) 
                              | (0x20U & ((~ (vlSelf->__PVT__popcount
                                              [0x1bU]
                                              [0x11U] 
                                              >> 7U)) 
                                          << 5U)));
    vlSelf->img_out[0x18U] = ((0xffbfU & vlSelf->img_out[0x18U]) 
                              | (0x40U & ((~ (vlSelf->__PVT__popcount
                                              [0x1bU]
                                              [0x12U] 
                                              >> 7U)) 
                                          << 6U)));
    vlSelf->img_out[0x18U] = ((0xff7fU & vlSelf->img_out[0x18U]) 
                              | (0x80U & ((~ (vlSelf->__PVT__popcount
                                              [0x1bU]
                                              [0x13U] 
                                              >> 7U)) 
                                          << 7U)));
    vlSelf->img_out[0x18U] = ((0xfeffU & vlSelf->img_out[0x18U]) 
                              | (0x100U & ((~ (vlSelf->__PVT__popcount
                                               [0x1bU]
                                               [0x14U] 
                                               >> 7U)) 
                                           << 8U)));
    vlSelf->img_out[0x18U] = ((0xfdffU & vlSelf->img_out[0x18U]) 
                              | (0x200U & ((~ (vlSelf->__PVT__popcount
                                               [0x1bU]
                                               [0x15U] 
                                               >> 7U)) 
                                           << 9U)));
    vlSelf->img_out[0x18U] = ((0xfbffU & vlSelf->img_out[0x18U]) 
                              | (0x400U & ((~ (vlSelf->__PVT__popcount
                                               [0x1bU]
                                               [0x16U] 
                                               >> 7U)) 
                                           << 0xaU)));
    vlSelf->img_out[0x18U] = ((0xf7ffU & vlSelf->img_out[0x18U]) 
                              | (0x800U & ((~ (vlSelf->__PVT__popcount
                                               [0x1bU]
                                               [0x17U] 
                                               >> 7U)) 
                                           << 0xbU)));
    vlSelf->img_out[0x18U] = ((0xefffU & vlSelf->img_out[0x18U]) 
                              | (0x1000U & ((~ (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x18U] 
                                                >> 7U)) 
                                            << 0xcU)));
    vlSelf->img_out[0x18U] = ((0xdfffU & vlSelf->img_out[0x18U]) 
                              | (0x2000U & ((~ (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x19U] 
                                                >> 7U)) 
                                            << 0xdU)));
    vlSelf->img_out[0x18U] = ((0xbfffU & vlSelf->img_out[0x18U]) 
                              | (0x4000U & ((~ (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x1aU] 
                                                >> 7U)) 
                                            << 0xeU)));
    vlSelf->img_out[0x18U] = ((0x7fffU & vlSelf->img_out[0x18U]) 
                              | (0x8000U & ((~ (vlSelf->__PVT__popcount
                                                [0x1bU]
                                                [0x1bU] 
                                                >> 7U)) 
                                            << 0xfU)));
}
