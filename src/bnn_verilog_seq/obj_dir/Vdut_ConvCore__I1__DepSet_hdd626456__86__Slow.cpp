// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "Vdut__pch.h"
#include "Vdut_ConvCore__I1.h"
#include "Vdut__Syms.h"

VL_ATTR_COLD void Vdut_ConvCore__I1___stl_sequent__TOP__dut__DOT__conv__DOT__conv_core_gen__BRA__8__KET____DOT__core__6(Vdut_ConvCore__I1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdut_ConvCore__I1___stl_sequent__TOP__dut__DOT__conv__DOT__conv_core_gen__BRA__8__KET____DOT__core__6\n"); );
    // Body
    vlSelf->__PVT__popcount[0x11U][2U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [2U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][2U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [2U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][2U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [2U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][2U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [2U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][2U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [2U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][3U] = 0U;
    vlSelf->__PVT__popcount[0x11U][3U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [3U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][3U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [3U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][3U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [3U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][3U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [3U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][3U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [3U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][3U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [3U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][3U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [3U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][3U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [3U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][4U] = 0U;
    vlSelf->__PVT__popcount[0x11U][4U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [4U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][4U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [4U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][4U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [4U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][4U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [4U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][4U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [4U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][4U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [4U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][4U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [4U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][4U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [4U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][5U] = 0U;
    vlSelf->__PVT__popcount[0x11U][5U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [5U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][5U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [5U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][5U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [5U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][5U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [5U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][5U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [5U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][5U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [5U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][5U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [5U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][5U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [5U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][6U] = 0U;
    vlSelf->__PVT__popcount[0x11U][6U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [6U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][6U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [6U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][6U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [6U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][6U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [6U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][6U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [6U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][6U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [6U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][6U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [6U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][6U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [6U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][7U] = 0U;
    vlSelf->__PVT__popcount[0x11U][7U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [7U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][7U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [7U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][7U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [7U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][7U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [7U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][7U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [7U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][7U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [7U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][7U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [7U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][7U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [7U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][8U] = 0U;
    vlSelf->__PVT__popcount[0x11U][8U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [8U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][8U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [8U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][8U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [8U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][8U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [8U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][8U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [8U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][8U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [8U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][8U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [8U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][8U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [8U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][9U] = 0U;
    vlSelf->__PVT__popcount[0x11U][9U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [9U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][9U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [9U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][9U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [9U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][9U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [9U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][9U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [9U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][9U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [9U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][9U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [9U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][9U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x11U]
                                                   [9U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xaU] = 0U;
    vlSelf->__PVT__popcount[0x11U][0xaU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xaU] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xaU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xaU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xaU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xaU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xaU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xaU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xaU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xaU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xaU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xaU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xaU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xaU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xaU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xaU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xbU] = 0U;
    vlSelf->__PVT__popcount[0x11U][0xbU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xbU] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xbU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xbU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xbU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xbU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xbU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xbU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xbU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xbU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xbU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xbU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xbU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xbU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xbU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xbU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xcU] = 0U;
    vlSelf->__PVT__popcount[0x11U][0xcU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xcU] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xcU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xcU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xcU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xcU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xcU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xcU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xcU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xcU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xcU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xcU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xcU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xcU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xcU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xcU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xdU] = 0U;
    vlSelf->__PVT__popcount[0x11U][0xdU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xdU] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xdU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xdU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xdU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xdU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xdU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xdU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xdU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xdU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xdU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xdU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xdU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xdU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xdU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xdU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xeU] = 0U;
    vlSelf->__PVT__popcount[0x11U][0xeU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xeU] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xeU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xeU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xeU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xeU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xeU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xeU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xeU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xeU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xeU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xeU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xeU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xeU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xeU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xeU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xfU] = 0U;
    vlSelf->__PVT__popcount[0x11U][0xfU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xfU] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xfU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xfU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xfU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xfU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xfU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xfU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xfU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xfU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xfU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xfU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xfU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xfU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0xfU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x11U]
                                             [0xfU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x10U] = 0U;
    vlSelf->__PVT__popcount[0x11U][0x10U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x10U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x10U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x10U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x10U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x10U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x10U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x10U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x10U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x10U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x10U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x10U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x10U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x10U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x10U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x10U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x11U] = 0U;
    vlSelf->__PVT__popcount[0x11U][0x11U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x11U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x11U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x11U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x11U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x11U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x11U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x11U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x11U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x11U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x11U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x11U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x11U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x11U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x11U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x11U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x12U] = 0U;
    vlSelf->__PVT__popcount[0x11U][0x12U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x12U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x12U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x12U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x12U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x12U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x12U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x12U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x12U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x12U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x12U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x12U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x12U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x12U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x12U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x12U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x13U] = 0U;
    vlSelf->__PVT__popcount[0x11U][0x13U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x13U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x13U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x13U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x13U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x13U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x13U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x13U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x13U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x13U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x13U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x13U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x13U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x13U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x13U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x13U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x14U] = 0U;
    vlSelf->__PVT__popcount[0x11U][0x14U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x14U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x14U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x14U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x14U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x14U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x14U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x14U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x14U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x14U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x14U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x14U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x14U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x14U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x14U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x14U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x15U] = 0U;
    vlSelf->__PVT__popcount[0x11U][0x15U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x15U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x15U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x15U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x15U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x15U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x15U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x15U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x15U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x15U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x15U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x15U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x15U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x15U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x15U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x15U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x16U] = 0U;
    vlSelf->__PVT__popcount[0x11U][0x16U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x16U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x16U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x16U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x16U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x16U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x16U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x16U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x16U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x16U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x16U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x16U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x16U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x16U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x16U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x16U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x17U] = 0U;
    vlSelf->__PVT__popcount[0x11U][0x17U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x17U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x17U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x17U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x17U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x17U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x17U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x17U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x17U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x17U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x17U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x17U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x17U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x17U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x17U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x17U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x18U] = 0U;
    vlSelf->__PVT__popcount[0x11U][0x18U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x18U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x18U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x18U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x18U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x18U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x18U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x18U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x18U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x18U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x18U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x18U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x18U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x18U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x18U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x18U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x19U] = 0U;
    vlSelf->__PVT__popcount[0x11U][0x19U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x19U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x19U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x19U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x19U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x19U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x19U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x19U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x19U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x19U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x19U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x19U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x19U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x19U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x19U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x19U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x1aU] = 0U;
    vlSelf->__PVT__popcount[0x11U][0x1aU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x1aU] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x1aU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x1aU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x1aU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x1aU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x1aU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x1aU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x1aU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x1aU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x1aU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x1aU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x1aU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x1aU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x1aU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x1aU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x1bU] = 0U;
    vlSelf->__PVT__popcount[0x11U][0x1bU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x1bU] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x1bU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x1bU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x1bU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x1bU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x1bU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x1bU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x1bU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x1bU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x1bU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x1bU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x1bU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x1bU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x11U][0x1bU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x11U]
                                                [0x1bU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0U] = 0U;
    vlSelf->__PVT__popcount[0x12U][0U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [0U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [0U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [0U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [0U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [0U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [0U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [0U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [0U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][1U] = 0U;
    vlSelf->__PVT__popcount[0x12U][1U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [1U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][1U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [1U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][1U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [1U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][1U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [1U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][1U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [1U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][1U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [1U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][1U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [1U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][1U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [1U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][2U] = 0U;
    vlSelf->__PVT__popcount[0x12U][2U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [2U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][2U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [2U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][2U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [2U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][2U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [2U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][2U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [2U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][2U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [2U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][2U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [2U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][2U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [2U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][3U] = 0U;
    vlSelf->__PVT__popcount[0x12U][3U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [3U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][3U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [3U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][3U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [3U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][3U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [3U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][3U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [3U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][3U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [3U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][3U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [3U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][3U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [3U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][4U] = 0U;
    vlSelf->__PVT__popcount[0x12U][4U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [4U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][4U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [4U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][4U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [4U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][4U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [4U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][4U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [4U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][4U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [4U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][4U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [4U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][4U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [4U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][5U] = 0U;
    vlSelf->__PVT__popcount[0x12U][5U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [5U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][5U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [5U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][5U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [5U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][5U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [5U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][5U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [5U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][5U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [5U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][5U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [5U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][5U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [5U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][6U] = 0U;
    vlSelf->__PVT__popcount[0x12U][6U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [6U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][6U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [6U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][6U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [6U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][6U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [6U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][6U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [6U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][6U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [6U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][6U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [6U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][6U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [6U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][7U] = 0U;
    vlSelf->__PVT__popcount[0x12U][7U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [7U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][7U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [7U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][7U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [7U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][7U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [7U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][7U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [7U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][7U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [7U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][7U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [7U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][7U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [7U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][8U] = 0U;
    vlSelf->__PVT__popcount[0x12U][8U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [8U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][8U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [8U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][8U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [8U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][8U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [8U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][8U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [8U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][8U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [8U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][8U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [8U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][8U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [8U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][9U] = 0U;
    vlSelf->__PVT__popcount[0x12U][9U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [9U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][9U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [9U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][9U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [9U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][9U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [9U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][9U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [9U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][9U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [9U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][9U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [9U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][9U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x12U]
                                                   [9U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xaU] = 0U;
    vlSelf->__PVT__popcount[0x12U][0xaU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xaU] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xaU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xaU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xaU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xaU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xaU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xaU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xaU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xaU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xaU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xaU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xaU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xaU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xaU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xaU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xbU] = 0U;
    vlSelf->__PVT__popcount[0x12U][0xbU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xbU] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xbU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xbU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xbU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xbU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xbU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xbU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xbU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xbU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xbU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xbU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xbU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xbU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xbU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xbU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xcU] = 0U;
    vlSelf->__PVT__popcount[0x12U][0xcU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xcU] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xcU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xcU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xcU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xcU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xcU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xcU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xcU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xcU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xcU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xcU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xcU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xcU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xcU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xcU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xdU] = 0U;
    vlSelf->__PVT__popcount[0x12U][0xdU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xdU] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xdU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xdU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xdU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xdU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xdU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xdU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xdU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xdU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xdU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xdU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xdU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xdU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xdU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xdU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xeU] = 0U;
    vlSelf->__PVT__popcount[0x12U][0xeU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xeU] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xeU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xeU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xeU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xeU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xeU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xeU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xeU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xeU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xeU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xeU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xeU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xeU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xeU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xeU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xfU] = 0U;
    vlSelf->__PVT__popcount[0x12U][0xfU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xfU] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xfU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xfU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xfU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xfU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xfU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xfU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xfU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xfU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xfU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xfU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xfU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xfU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0xfU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x12U]
                                             [0xfU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x10U] = 0U;
    vlSelf->__PVT__popcount[0x12U][0x10U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x10U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x10U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x10U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x10U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x10U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x10U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x10U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x10U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x10U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x10U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x10U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x10U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x10U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x10U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x10U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x11U] = 0U;
    vlSelf->__PVT__popcount[0x12U][0x11U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x11U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x11U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x11U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x11U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x11U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x11U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x11U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x11U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x11U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x11U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x11U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x11U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x11U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x11U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x11U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x12U] = 0U;
    vlSelf->__PVT__popcount[0x12U][0x12U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x12U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x12U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x12U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x12U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x12U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x12U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x12U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x12U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x12U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x12U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x12U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x12U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x12U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x12U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x12U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x13U] = 0U;
    vlSelf->__PVT__popcount[0x12U][0x13U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x13U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x13U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x13U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x13U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x13U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x13U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x13U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x13U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x13U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x13U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x13U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x13U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x13U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x13U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x13U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x14U] = 0U;
    vlSelf->__PVT__popcount[0x12U][0x14U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x14U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x14U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x14U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x14U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x14U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x14U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x14U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x14U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x14U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x14U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x14U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x14U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x14U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x14U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x14U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x15U] = 0U;
    vlSelf->__PVT__popcount[0x12U][0x15U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x15U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x15U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x15U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x15U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x15U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x15U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x15U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x15U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x15U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x15U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x15U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x15U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x15U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x15U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x15U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x16U] = 0U;
    vlSelf->__PVT__popcount[0x12U][0x16U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x16U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x16U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x16U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x16U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x16U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x16U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x16U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x16U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x16U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x16U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x16U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x16U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x16U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x16U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x16U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x17U] = 0U;
    vlSelf->__PVT__popcount[0x12U][0x17U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x17U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x17U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x17U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x17U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x17U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x17U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x17U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x17U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x17U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x17U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x17U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x17U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x17U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x17U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x17U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x18U] = 0U;
    vlSelf->__PVT__popcount[0x12U][0x18U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x18U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x18U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x18U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x18U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x18U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x18U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x18U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x18U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x18U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x18U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x18U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x18U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x18U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x18U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x18U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x19U] = 0U;
    vlSelf->__PVT__popcount[0x12U][0x19U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x19U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x19U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x19U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x19U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x19U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x19U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x19U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x19U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x19U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x19U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x19U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x19U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x19U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x19U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x19U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x1aU] = 0U;
    vlSelf->__PVT__popcount[0x12U][0x1aU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x1aU] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x1aU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x1aU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x1aU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x1aU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x1aU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x1aU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x1aU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x1aU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x1aU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x1aU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x1aU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x1aU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x1aU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x1aU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x1bU] = 0U;
    vlSelf->__PVT__popcount[0x12U][0x1bU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x1bU] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x1bU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x1bU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x1bU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x1bU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x1bU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x1bU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x1bU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x1bU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x1bU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x1bU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x1bU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x1bU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x12U][0x1bU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x12U]
                                                [0x1bU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0U] = 0U;
    vlSelf->__PVT__popcount[0x13U][0U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [0U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [0U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [0U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [0U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [0U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [0U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [0U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [0U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][1U] = 0U;
    vlSelf->__PVT__popcount[0x13U][1U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [1U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][1U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [1U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][1U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [1U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][1U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [1U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][1U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [1U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][1U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [1U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][1U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [1U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][1U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [1U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][2U] = 0U;
    vlSelf->__PVT__popcount[0x13U][2U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [2U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][2U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [2U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][2U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [2U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][2U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [2U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][2U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [2U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][2U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [2U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][2U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [2U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][2U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [2U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][3U] = 0U;
    vlSelf->__PVT__popcount[0x13U][3U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [3U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][3U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [3U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][3U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [3U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][3U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [3U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][3U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [3U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][3U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [3U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][3U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [3U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][3U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [3U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][4U] = 0U;
    vlSelf->__PVT__popcount[0x13U][4U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [4U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][4U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [4U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][4U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [4U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][4U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [4U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][4U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [4U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][4U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [4U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][4U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [4U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][4U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [4U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][5U] = 0U;
    vlSelf->__PVT__popcount[0x13U][5U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [5U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][5U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [5U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][5U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [5U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][5U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [5U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][5U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [5U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][5U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [5U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][5U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [5U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][5U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [5U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][6U] = 0U;
    vlSelf->__PVT__popcount[0x13U][6U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [6U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][6U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [6U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][6U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [6U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][6U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [6U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][6U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [6U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][6U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [6U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][6U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [6U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][6U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [6U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][7U] = 0U;
    vlSelf->__PVT__popcount[0x13U][7U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [7U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][7U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [7U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][7U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [7U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][7U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [7U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][7U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [7U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][7U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [7U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][7U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [7U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][7U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [7U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][8U] = 0U;
    vlSelf->__PVT__popcount[0x13U][8U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [8U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][8U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [8U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][8U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [8U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][8U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [8U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][8U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [8U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][8U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [8U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][8U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [8U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][8U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [8U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][9U] = 0U;
    vlSelf->__PVT__popcount[0x13U][9U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [9U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][9U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [9U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][9U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [9U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][9U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [9U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][9U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [9U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][9U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [9U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][9U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [9U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][9U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x13U]
                                                   [9U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xaU] = 0U;
    vlSelf->__PVT__popcount[0x13U][0xaU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xaU] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xaU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xaU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xaU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xaU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xaU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xaU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xaU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xaU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xaU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xaU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xaU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xaU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xaU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xaU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xbU] = 0U;
    vlSelf->__PVT__popcount[0x13U][0xbU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xbU] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xbU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xbU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xbU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xbU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xbU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xbU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xbU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xbU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xbU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xbU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xbU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xbU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xbU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xbU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xcU] = 0U;
    vlSelf->__PVT__popcount[0x13U][0xcU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xcU] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xcU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xcU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xcU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xcU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xcU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xcU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xcU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xcU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xcU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xcU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xcU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xcU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xcU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xcU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xdU] = 0U;
    vlSelf->__PVT__popcount[0x13U][0xdU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xdU] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xdU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xdU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xdU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xdU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xdU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xdU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xdU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xdU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xdU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xdU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xdU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xdU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xdU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xdU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xeU] = 0U;
    vlSelf->__PVT__popcount[0x13U][0xeU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xeU] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xeU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xeU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xeU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xeU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xeU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xeU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xeU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xeU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xeU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xeU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xeU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xeU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xeU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xeU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xfU] = 0U;
    vlSelf->__PVT__popcount[0x13U][0xfU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xfU] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xfU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xfU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xfU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xfU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xfU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xfU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xfU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xfU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xfU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xfU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xfU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xfU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0xfU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x13U]
                                             [0xfU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x10U] = 0U;
    vlSelf->__PVT__popcount[0x13U][0x10U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x10U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x10U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x10U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x10U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x10U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x10U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x10U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x10U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x10U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x10U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x10U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x10U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x10U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x10U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x10U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x11U] = 0U;
    vlSelf->__PVT__popcount[0x13U][0x11U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x11U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x11U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x11U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x11U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x11U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x11U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x11U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x11U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x11U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x11U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x11U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x11U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x11U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x11U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x11U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x12U] = 0U;
    vlSelf->__PVT__popcount[0x13U][0x12U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x12U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x12U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x12U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x12U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x12U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x12U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x12U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x12U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x12U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x12U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x12U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x12U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x12U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x12U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x12U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x13U] = 0U;
    vlSelf->__PVT__popcount[0x13U][0x13U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x13U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x13U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x13U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x13U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x13U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x13U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x13U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x13U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x13U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x13U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x13U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x13U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x13U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x13U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x13U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x14U] = 0U;
    vlSelf->__PVT__popcount[0x13U][0x14U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x14U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x14U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x14U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x14U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x14U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x14U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x14U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x14U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x14U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x14U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x14U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x14U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x14U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x14U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x14U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x15U] = 0U;
    vlSelf->__PVT__popcount[0x13U][0x15U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x15U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x15U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x15U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x15U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x15U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x15U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x15U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x15U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x15U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x15U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x15U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x15U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x15U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x15U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x15U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x16U] = 0U;
    vlSelf->__PVT__popcount[0x13U][0x16U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x16U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x16U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x16U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x16U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x16U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x16U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x16U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x16U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x16U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x16U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x16U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x16U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x16U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x16U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x16U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x17U] = 0U;
    vlSelf->__PVT__popcount[0x13U][0x17U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x17U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x17U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x17U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x17U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x17U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x17U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x17U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x17U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x17U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x17U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x17U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x17U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x17U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x17U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x17U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x18U] = 0U;
    vlSelf->__PVT__popcount[0x13U][0x18U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x18U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x18U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x18U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x18U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x18U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x18U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x18U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x18U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x18U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x18U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x18U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x18U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x18U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x18U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x18U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x19U] = 0U;
    vlSelf->__PVT__popcount[0x13U][0x19U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x19U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x19U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x19U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x19U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x19U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x19U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x19U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x19U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x19U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x19U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x19U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x19U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x19U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x19U] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x19U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x1aU] = 0U;
    vlSelf->__PVT__popcount[0x13U][0x1aU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x1aU] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x1aU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x1aU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x1aU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x1aU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x1aU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x1aU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x1aU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x1aU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x1aU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x1aU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x1aU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x1aU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x1aU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x1aU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x1bU] = 0U;
    vlSelf->__PVT__popcount[0x13U][0x1bU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x1bU] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [8U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x1bU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x1bU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x1bU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x1bU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x1bU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x1bU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x1bU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x1bU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x1bU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x1bU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x1bU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x1bU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x13U][0x1bU] = (0xffU 
                                             & (vlSelf->__PVT__popcount
                                                [0x13U]
                                                [0x1bU] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [8U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][0U] = 0U;
    vlSelf->__PVT__popcount[0x14U][0U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [0U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][0U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [0U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][0U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [0U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][0U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [0U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][0U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [0U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][0U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [0U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][0U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [0U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][0U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [0U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][1U] = 0U;
    vlSelf->__PVT__popcount[0x14U][1U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [1U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][1U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [1U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][1U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [1U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][1U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [1U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][1U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [1U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][1U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [1U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][1U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [1U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][1U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [1U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][2U] = 0U;
    vlSelf->__PVT__popcount[0x14U][2U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [2U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][2U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [2U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][2U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [2U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][2U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [2U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][2U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [2U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][2U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [2U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][2U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [2U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][2U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [2U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][3U] = 0U;
    vlSelf->__PVT__popcount[0x14U][3U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [3U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][3U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [3U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][3U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [3U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][3U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [3U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][3U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [3U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][3U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [3U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][3U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [3U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][3U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [3U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][4U] = 0U;
    vlSelf->__PVT__popcount[0x14U][4U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [4U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][4U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [4U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][4U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [4U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][4U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [4U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][4U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [4U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][4U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [4U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][4U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [4U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][4U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [4U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][5U] = 0U;
    vlSelf->__PVT__popcount[0x14U][5U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [5U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][5U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [5U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][5U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [5U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][5U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [5U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][5U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [5U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][5U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [5U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][5U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [5U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][5U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [5U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][6U] = 0U;
    vlSelf->__PVT__popcount[0x14U][6U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [6U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][6U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [6U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][6U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [6U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][6U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [6U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][6U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [6U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][6U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [6U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][6U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [6U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][6U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [6U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][7U] = 0U;
    vlSelf->__PVT__popcount[0x14U][7U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [7U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][7U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [7U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][7U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [7U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][7U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [7U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][7U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [7U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][7U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [7U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][7U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [7U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][7U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [7U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][8U] = 0U;
    vlSelf->__PVT__popcount[0x14U][8U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [8U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][8U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [8U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][8U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [8U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][8U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [8U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][8U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [8U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][8U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [8U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][8U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [8U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][8U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [8U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][9U] = 0U;
    vlSelf->__PVT__popcount[0x14U][9U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [9U] 
                                                   + 
                                                   (((1U 
                                                      & (IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch)) 
                                                     == 
                                                     (1U 
                                                      & vlSymsp->TOP.dut__DOT__weights
                                                      [8U]))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][9U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [9U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][9U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [9U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 2U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][9U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [9U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                         >> 3U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 3U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][9U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [9U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                         >> 4U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 4U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][9U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [9U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                         >> 5U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 5U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][9U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [9U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                         >> 6U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 6U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][9U] = (0xffU & (
                                                   vlSelf->__PVT__popcount
                                                   [0x14U]
                                                   [9U] 
                                                   + 
                                                   (((1U 
                                                      & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & (vlSymsp->TOP.dut__DOT__weights
                                                         [8U] 
                                                         >> 7U)))
                                                     ? 1U
                                                     : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][0xaU] = 0U;
    vlSelf->__PVT__popcount[0x14U][0xaU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x14U]
                                             [0xaU] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][0xaU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x14U]
                                             [0xaU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][0xaU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x14U]
                                             [0xaU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][0xaU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x14U]
                                             [0xaU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][0xaU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x14U]
                                             [0xaU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                     >> 4U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 4U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][0xaU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x14U]
                                             [0xaU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                     >> 5U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 5U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][0xaU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x14U]
                                             [0xaU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                     >> 6U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 6U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][0xaU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x14U]
                                             [0xaU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                     >> 7U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 7U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][0xbU] = 0U;
    vlSelf->__PVT__popcount[0x14U][0xbU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x14U]
                                             [0xbU] 
                                             + (((1U 
                                                  & (IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch)) 
                                                 == 
                                                 (1U 
                                                  & vlSymsp->TOP.dut__DOT__weights
                                                  [8U]))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][0xbU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x14U]
                                             [0xbU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                     >> 1U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 1U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][0xbU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x14U]
                                             [0xbU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                     >> 2U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 2U)))
                                                 ? 1U
                                                 : 0xffU)));
    vlSelf->__PVT__popcount[0x14U][0xbU] = (0xffU & 
                                            (vlSelf->__PVT__popcount
                                             [0x14U]
                                             [0xbU] 
                                             + (((1U 
                                                  & ((IData)(vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                     >> 3U)) 
                                                 == 
                                                 (1U 
                                                  & (vlSymsp->TOP.dut__DOT__weights
                                                     [8U] 
                                                     >> 3U)))
                                                 ? 1U
                                                 : 0xffU)));
}
