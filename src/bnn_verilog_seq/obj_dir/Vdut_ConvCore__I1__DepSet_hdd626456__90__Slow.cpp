// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "Vdut__pch.h"
#include "Vdut_ConvCore__I1.h"
#include "Vdut__Syms.h"

VL_ATTR_COLD void Vdut_ConvCore__I1___stl_sequent__TOP__dut__DOT__conv__DOT__conv_core_gen__BRA__9__KET____DOT__core__0(Vdut_ConvCore__I1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdut_ConvCore__I1___stl_sequent__TOP__dut__DOT__conv__DOT__conv_core_gen__BRA__9__KET____DOT__core__0\n"); );
    // Body
    vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][1U] >> 0x16U)) 
           | ((0x38U & ((vlSelf->img_in[0U][1U] << 5U) 
                        | (0x18U & (vlSelf->img_in[0U][0U] 
                                    >> 0x1bU)))) | 
              (7U & vlSelf->img_in[0U][0U])));
    vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][1U] >> 0x17U)) 
           | ((0x38U & ((vlSelf->img_in[0U][1U] << 4U) 
                        | (8U & (vlSelf->img_in[0U][0U] 
                                 >> 0x1cU)))) | (7U 
                                                 & (vlSelf->img_in
                                                    [0U][0U] 
                                                    >> 1U))));
    vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][2U] << 8U) 
                      | (0xc0U & (vlSelf->img_in[0U][1U] 
                                  >> 0x18U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][1U] 
                                                      << 3U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][0U] 
                                                        >> 2U))));
    vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][2U] << 7U) 
                      | (0x40U & (vlSelf->img_in[0U][1U] 
                                  >> 0x19U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][1U] 
                                                      << 2U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][0U] 
                                                        >> 3U))));
    vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][2U] << 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][1U] << 1U)) 
              | (7U & (vlSelf->img_in[0U][0U] >> 4U))));
    vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][2U] << 5U)) 
           | ((0x38U & vlSelf->img_in[0U][1U]) | (7U 
                                                  & (vlSelf->img_in
                                                     [0U][0U] 
                                                     >> 5U))));
    vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][2U] << 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][1U] >> 1U)) 
              | (7U & (vlSelf->img_in[0U][0U] >> 6U))));
    vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][2U] << 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][1U] >> 2U)) 
              | (7U & (vlSelf->img_in[0U][0U] >> 7U))));
    vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][2U] << 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][1U] >> 3U)) 
              | (7U & (vlSelf->img_in[0U][0U] >> 8U))));
    vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][2U] << 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][1U] >> 4U)) 
              | (7U & (vlSelf->img_in[0U][0U] >> 9U))));
    vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch 
        = ((0x1c0U & vlSelf->img_in[0U][2U]) | ((0x38U 
                                                 & (vlSelf->img_in
                                                    [0U][1U] 
                                                    >> 5U)) 
                                                | (7U 
                                                   & (vlSelf->img_in
                                                      [0U][0U] 
                                                      >> 0xaU))));
    vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][2U] >> 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][1U] >> 6U)) 
              | (7U & (vlSelf->img_in[0U][0U] >> 0xbU))));
    vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][2U] >> 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][1U] >> 7U)) 
              | (7U & (vlSelf->img_in[0U][0U] >> 0xcU))));
    vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][2U] >> 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][1U] >> 8U)) 
              | (7U & (vlSelf->img_in[0U][0U] >> 0xdU))));
    vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][2U] >> 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][1U] >> 9U)) 
              | (7U & (vlSelf->img_in[0U][0U] >> 0xeU))));
    vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][2U] >> 5U)) 
           | ((0x38U & (vlSelf->img_in[0U][1U] >> 0xaU)) 
              | (7U & (vlSelf->img_in[0U][0U] >> 0xfU))));
    vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][2U] >> 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][1U] >> 0xbU)) 
              | (7U & (vlSelf->img_in[0U][0U] >> 0x10U))));
    vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][2U] >> 7U)) 
           | ((0x38U & (vlSelf->img_in[0U][1U] >> 0xcU)) 
              | (7U & (vlSelf->img_in[0U][0U] >> 0x11U))));
    vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][2U] >> 8U)) 
           | ((0x38U & (vlSelf->img_in[0U][1U] >> 0xdU)) 
              | (7U & (vlSelf->img_in[0U][0U] >> 0x12U))));
    vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][2U] >> 9U)) 
           | ((0x38U & (vlSelf->img_in[0U][1U] >> 0xeU)) 
              | (7U & (vlSelf->img_in[0U][0U] >> 0x13U))));
    vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][2U] >> 0xaU)) 
           | ((0x38U & (vlSelf->img_in[0U][1U] >> 0xfU)) 
              | (7U & (vlSelf->img_in[0U][0U] >> 0x14U))));
    vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][2U] >> 0xbU)) 
           | ((0x38U & (vlSelf->img_in[0U][1U] >> 0x10U)) 
              | (7U & (vlSelf->img_in[0U][0U] >> 0x15U))));
    vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][2U] >> 0xcU)) 
           | ((0x38U & (vlSelf->img_in[0U][1U] >> 0x11U)) 
              | (7U & (vlSelf->img_in[0U][0U] >> 0x16U))));
    vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][2U] >> 0xdU)) 
           | ((0x38U & (vlSelf->img_in[0U][1U] >> 0x12U)) 
              | (7U & (vlSelf->img_in[0U][0U] >> 0x17U))));
    vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][2U] >> 0xeU)) 
           | ((0x38U & (vlSelf->img_in[0U][1U] >> 0x13U)) 
              | (7U & (vlSelf->img_in[0U][0U] >> 0x18U))));
    vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][2U] >> 0xfU)) 
           | ((0x38U & (vlSelf->img_in[0U][1U] >> 0x14U)) 
              | (7U & (vlSelf->img_in[0U][0U] >> 0x19U))));
    vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][2U] >> 0x10U)) 
           | ((0x38U & (vlSelf->img_in[0U][1U] >> 0x15U)) 
              | (7U & (vlSelf->img_in[0U][0U] >> 0x1aU))));
    vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][2U] >> 0x11U)) 
           | ((0x38U & (vlSelf->img_in[0U][1U] >> 0x16U)) 
              | (7U & (vlSelf->img_in[0U][0U] >> 0x1bU))));
    vlSelf->__PVT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][2U] >> 0x14U)) 
           | ((0x38U & (vlSelf->img_in[0U][1U] >> 0x19U)) 
              | (7U & ((vlSelf->img_in[0U][1U] << 2U) 
                       | (vlSelf->img_in[0U][0U] >> 0x1eU)))));
    vlSelf->__PVT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][2U] >> 0x15U)) 
           | ((0x38U & (vlSelf->img_in[0U][1U] >> 0x1aU)) 
              | (7U & ((vlSelf->img_in[0U][1U] << 1U) 
                       | (vlSelf->img_in[0U][0U] >> 0x1fU)))));
    vlSelf->__PVT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][2U] >> 0x16U)) 
           | ((0x38U & ((vlSelf->img_in[0U][2U] << 5U) 
                        | (0x18U & (vlSelf->img_in[0U][1U] 
                                    >> 0x1bU)))) | 
              (7U & vlSelf->img_in[0U][1U])));
    vlSelf->__PVT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][2U] >> 0x17U)) 
           | ((0x38U & ((vlSelf->img_in[0U][2U] << 4U) 
                        | (8U & (vlSelf->img_in[0U][1U] 
                                 >> 0x1cU)))) | (7U 
                                                 & (vlSelf->img_in
                                                    [0U][1U] 
                                                    >> 1U))));
    vlSelf->__PVT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][3U] << 8U) 
                      | (0xc0U & (vlSelf->img_in[0U][2U] 
                                  >> 0x18U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][2U] 
                                                      << 3U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][1U] 
                                                        >> 2U))));
    vlSelf->__PVT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][3U] << 7U) 
                      | (0x40U & (vlSelf->img_in[0U][2U] 
                                  >> 0x19U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][2U] 
                                                      << 2U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][1U] 
                                                        >> 3U))));
    vlSelf->__PVT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][3U] << 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][2U] << 1U)) 
              | (7U & (vlSelf->img_in[0U][1U] >> 4U))));
    vlSelf->__PVT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][3U] << 5U)) 
           | ((0x38U & vlSelf->img_in[0U][2U]) | (7U 
                                                  & (vlSelf->img_in
                                                     [0U][1U] 
                                                     >> 5U))));
    vlSelf->__PVT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][3U] << 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][2U] >> 1U)) 
              | (7U & (vlSelf->img_in[0U][1U] >> 6U))));
    vlSelf->__PVT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][3U] << 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][2U] >> 2U)) 
              | (7U & (vlSelf->img_in[0U][1U] >> 7U))));
    vlSelf->__PVT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][3U] << 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][2U] >> 3U)) 
              | (7U & (vlSelf->img_in[0U][1U] >> 8U))));
    vlSelf->__PVT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][3U] << 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][2U] >> 4U)) 
              | (7U & (vlSelf->img_in[0U][1U] >> 9U))));
    vlSelf->__PVT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch 
        = ((0x1c0U & vlSelf->img_in[0U][3U]) | ((0x38U 
                                                 & (vlSelf->img_in
                                                    [0U][2U] 
                                                    >> 5U)) 
                                                | (7U 
                                                   & (vlSelf->img_in
                                                      [0U][1U] 
                                                      >> 0xaU))));
    vlSelf->__PVT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][3U] >> 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][2U] >> 6U)) 
              | (7U & (vlSelf->img_in[0U][1U] >> 0xbU))));
    vlSelf->__PVT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][3U] >> 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][2U] >> 7U)) 
              | (7U & (vlSelf->img_in[0U][1U] >> 0xcU))));
    vlSelf->__PVT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][3U] >> 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][2U] >> 8U)) 
              | (7U & (vlSelf->img_in[0U][1U] >> 0xdU))));
    vlSelf->__PVT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][3U] >> 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][2U] >> 9U)) 
              | (7U & (vlSelf->img_in[0U][1U] >> 0xeU))));
    vlSelf->__PVT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][3U] >> 5U)) 
           | ((0x38U & (vlSelf->img_in[0U][2U] >> 0xaU)) 
              | (7U & (vlSelf->img_in[0U][1U] >> 0xfU))));
    vlSelf->__PVT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][3U] >> 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][2U] >> 0xbU)) 
              | (7U & (vlSelf->img_in[0U][1U] >> 0x10U))));
    vlSelf->__PVT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][3U] >> 7U)) 
           | ((0x38U & (vlSelf->img_in[0U][2U] >> 0xcU)) 
              | (7U & (vlSelf->img_in[0U][1U] >> 0x11U))));
    vlSelf->__PVT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][3U] >> 8U)) 
           | ((0x38U & (vlSelf->img_in[0U][2U] >> 0xdU)) 
              | (7U & (vlSelf->img_in[0U][1U] >> 0x12U))));
    vlSelf->__PVT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][3U] >> 9U)) 
           | ((0x38U & (vlSelf->img_in[0U][2U] >> 0xeU)) 
              | (7U & (vlSelf->img_in[0U][1U] >> 0x13U))));
    vlSelf->__PVT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][3U] >> 0xaU)) 
           | ((0x38U & (vlSelf->img_in[0U][2U] >> 0xfU)) 
              | (7U & (vlSelf->img_in[0U][1U] >> 0x14U))));
    vlSelf->__PVT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][3U] >> 0xbU)) 
           | ((0x38U & (vlSelf->img_in[0U][2U] >> 0x10U)) 
              | (7U & (vlSelf->img_in[0U][1U] >> 0x15U))));
    vlSelf->__PVT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][3U] >> 0xcU)) 
           | ((0x38U & (vlSelf->img_in[0U][2U] >> 0x11U)) 
              | (7U & (vlSelf->img_in[0U][1U] >> 0x16U))));
    vlSelf->__PVT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][3U] >> 0xdU)) 
           | ((0x38U & (vlSelf->img_in[0U][2U] >> 0x12U)) 
              | (7U & (vlSelf->img_in[0U][1U] >> 0x17U))));
    vlSelf->__PVT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][3U] >> 0xeU)) 
           | ((0x38U & (vlSelf->img_in[0U][2U] >> 0x13U)) 
              | (7U & (vlSelf->img_in[0U][1U] >> 0x18U))));
    vlSelf->__PVT__out_row_gen__BRA__1__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][3U] >> 0xfU)) 
           | ((0x38U & (vlSelf->img_in[0U][2U] >> 0x14U)) 
              | (7U & (vlSelf->img_in[0U][1U] >> 0x19U))));
    vlSelf->__PVT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][3U] >> 0x12U)) 
           | ((0x38U & (vlSelf->img_in[0U][2U] >> 0x17U)) 
              | (7U & (vlSelf->img_in[0U][1U] >> 0x1cU))));
    vlSelf->__PVT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][3U] >> 0x13U)) 
           | ((0x38U & (vlSelf->img_in[0U][2U] >> 0x18U)) 
              | (vlSelf->img_in[0U][1U] >> 0x1dU)));
    vlSelf->__PVT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][3U] >> 0x14U)) 
           | ((0x38U & (vlSelf->img_in[0U][2U] >> 0x19U)) 
              | (7U & ((vlSelf->img_in[0U][2U] << 2U) 
                       | (vlSelf->img_in[0U][1U] >> 0x1eU)))));
    vlSelf->__PVT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][3U] >> 0x15U)) 
           | ((0x38U & (vlSelf->img_in[0U][2U] >> 0x1aU)) 
              | (7U & ((vlSelf->img_in[0U][2U] << 1U) 
                       | (vlSelf->img_in[0U][1U] >> 0x1fU)))));
    vlSelf->__PVT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][3U] >> 0x16U)) 
           | ((0x38U & ((vlSelf->img_in[0U][3U] << 5U) 
                        | (0x18U & (vlSelf->img_in[0U][2U] 
                                    >> 0x1bU)))) | 
              (7U & vlSelf->img_in[0U][2U])));
    vlSelf->__PVT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][3U] >> 0x17U)) 
           | ((0x38U & ((vlSelf->img_in[0U][3U] << 4U) 
                        | (8U & (vlSelf->img_in[0U][2U] 
                                 >> 0x1cU)))) | (7U 
                                                 & (vlSelf->img_in
                                                    [0U][2U] 
                                                    >> 1U))));
    vlSelf->__PVT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][4U] << 8U) 
                      | (0xc0U & (vlSelf->img_in[0U][3U] 
                                  >> 0x18U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][3U] 
                                                      << 3U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][2U] 
                                                        >> 2U))));
    vlSelf->__PVT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][4U] << 7U) 
                      | (0x40U & (vlSelf->img_in[0U][3U] 
                                  >> 0x19U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][3U] 
                                                      << 2U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][2U] 
                                                        >> 3U))));
    vlSelf->__PVT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][4U] << 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][3U] << 1U)) 
              | (7U & (vlSelf->img_in[0U][2U] >> 4U))));
    vlSelf->__PVT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][4U] << 5U)) 
           | ((0x38U & vlSelf->img_in[0U][3U]) | (7U 
                                                  & (vlSelf->img_in
                                                     [0U][2U] 
                                                     >> 5U))));
    vlSelf->__PVT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][4U] << 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][3U] >> 1U)) 
              | (7U & (vlSelf->img_in[0U][2U] >> 6U))));
    vlSelf->__PVT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][4U] << 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][3U] >> 2U)) 
              | (7U & (vlSelf->img_in[0U][2U] >> 7U))));
    vlSelf->__PVT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][4U] << 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][3U] >> 3U)) 
              | (7U & (vlSelf->img_in[0U][2U] >> 8U))));
    vlSelf->__PVT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][4U] << 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][3U] >> 4U)) 
              | (7U & (vlSelf->img_in[0U][2U] >> 9U))));
    vlSelf->__PVT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch 
        = ((0x1c0U & vlSelf->img_in[0U][4U]) | ((0x38U 
                                                 & (vlSelf->img_in
                                                    [0U][3U] 
                                                    >> 5U)) 
                                                | (7U 
                                                   & (vlSelf->img_in
                                                      [0U][2U] 
                                                      >> 0xaU))));
    vlSelf->__PVT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][4U] >> 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][3U] >> 6U)) 
              | (7U & (vlSelf->img_in[0U][2U] >> 0xbU))));
    vlSelf->__PVT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][4U] >> 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][3U] >> 7U)) 
              | (7U & (vlSelf->img_in[0U][2U] >> 0xcU))));
    vlSelf->__PVT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][4U] >> 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][3U] >> 8U)) 
              | (7U & (vlSelf->img_in[0U][2U] >> 0xdU))));
    vlSelf->__PVT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][4U] >> 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][3U] >> 9U)) 
              | (7U & (vlSelf->img_in[0U][2U] >> 0xeU))));
    vlSelf->__PVT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][4U] >> 5U)) 
           | ((0x38U & (vlSelf->img_in[0U][3U] >> 0xaU)) 
              | (7U & (vlSelf->img_in[0U][2U] >> 0xfU))));
    vlSelf->__PVT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][4U] >> 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][3U] >> 0xbU)) 
              | (7U & (vlSelf->img_in[0U][2U] >> 0x10U))));
    vlSelf->__PVT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][4U] >> 7U)) 
           | ((0x38U & (vlSelf->img_in[0U][3U] >> 0xcU)) 
              | (7U & (vlSelf->img_in[0U][2U] >> 0x11U))));
    vlSelf->__PVT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][4U] >> 8U)) 
           | ((0x38U & (vlSelf->img_in[0U][3U] >> 0xdU)) 
              | (7U & (vlSelf->img_in[0U][2U] >> 0x12U))));
    vlSelf->__PVT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][4U] >> 9U)) 
           | ((0x38U & (vlSelf->img_in[0U][3U] >> 0xeU)) 
              | (7U & (vlSelf->img_in[0U][2U] >> 0x13U))));
    vlSelf->__PVT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][4U] >> 0xaU)) 
           | ((0x38U & (vlSelf->img_in[0U][3U] >> 0xfU)) 
              | (7U & (vlSelf->img_in[0U][2U] >> 0x14U))));
    vlSelf->__PVT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][4U] >> 0xbU)) 
           | ((0x38U & (vlSelf->img_in[0U][3U] >> 0x10U)) 
              | (7U & (vlSelf->img_in[0U][2U] >> 0x15U))));
    vlSelf->__PVT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][4U] >> 0xcU)) 
           | ((0x38U & (vlSelf->img_in[0U][3U] >> 0x11U)) 
              | (7U & (vlSelf->img_in[0U][2U] >> 0x16U))));
    vlSelf->__PVT__out_row_gen__BRA__2__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][4U] >> 0xdU)) 
           | ((0x38U & (vlSelf->img_in[0U][3U] >> 0x12U)) 
              | (7U & (vlSelf->img_in[0U][2U] >> 0x17U))));
    vlSelf->__PVT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][4U] >> 0x10U)) 
           | ((0x38U & (vlSelf->img_in[0U][3U] >> 0x15U)) 
              | (7U & (vlSelf->img_in[0U][2U] >> 0x1aU))));
    vlSelf->__PVT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][4U] >> 0x11U)) 
           | ((0x38U & (vlSelf->img_in[0U][3U] >> 0x16U)) 
              | (7U & (vlSelf->img_in[0U][2U] >> 0x1bU))));
    vlSelf->__PVT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][4U] >> 0x12U)) 
           | ((0x38U & (vlSelf->img_in[0U][3U] >> 0x17U)) 
              | (7U & (vlSelf->img_in[0U][2U] >> 0x1cU))));
    vlSelf->__PVT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][4U] >> 0x13U)) 
           | ((0x38U & (vlSelf->img_in[0U][3U] >> 0x18U)) 
              | (vlSelf->img_in[0U][2U] >> 0x1dU)));
    vlSelf->__PVT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][4U] >> 0x14U)) 
           | ((0x38U & (vlSelf->img_in[0U][3U] >> 0x19U)) 
              | (7U & ((vlSelf->img_in[0U][3U] << 2U) 
                       | (vlSelf->img_in[0U][2U] >> 0x1eU)))));
    vlSelf->__PVT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][4U] >> 0x15U)) 
           | ((0x38U & (vlSelf->img_in[0U][3U] >> 0x1aU)) 
              | (7U & ((vlSelf->img_in[0U][3U] << 1U) 
                       | (vlSelf->img_in[0U][2U] >> 0x1fU)))));
    vlSelf->__PVT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][4U] >> 0x16U)) 
           | ((0x38U & ((vlSelf->img_in[0U][4U] << 5U) 
                        | (0x18U & (vlSelf->img_in[0U][3U] 
                                    >> 0x1bU)))) | 
              (7U & vlSelf->img_in[0U][3U])));
    vlSelf->__PVT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][4U] >> 0x17U)) 
           | ((0x38U & ((vlSelf->img_in[0U][4U] << 4U) 
                        | (8U & (vlSelf->img_in[0U][3U] 
                                 >> 0x1cU)))) | (7U 
                                                 & (vlSelf->img_in
                                                    [0U][3U] 
                                                    >> 1U))));
    vlSelf->__PVT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][5U] << 8U) 
                      | (0xc0U & (vlSelf->img_in[0U][4U] 
                                  >> 0x18U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][4U] 
                                                      << 3U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][3U] 
                                                        >> 2U))));
    vlSelf->__PVT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][5U] << 7U) 
                      | (0x40U & (vlSelf->img_in[0U][4U] 
                                  >> 0x19U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][4U] 
                                                      << 2U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][3U] 
                                                        >> 3U))));
    vlSelf->__PVT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][5U] << 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][4U] << 1U)) 
              | (7U & (vlSelf->img_in[0U][3U] >> 4U))));
    vlSelf->__PVT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][5U] << 5U)) 
           | ((0x38U & vlSelf->img_in[0U][4U]) | (7U 
                                                  & (vlSelf->img_in
                                                     [0U][3U] 
                                                     >> 5U))));
    vlSelf->__PVT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][5U] << 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][4U] >> 1U)) 
              | (7U & (vlSelf->img_in[0U][3U] >> 6U))));
    vlSelf->__PVT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][5U] << 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][4U] >> 2U)) 
              | (7U & (vlSelf->img_in[0U][3U] >> 7U))));
    vlSelf->__PVT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][5U] << 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][4U] >> 3U)) 
              | (7U & (vlSelf->img_in[0U][3U] >> 8U))));
    vlSelf->__PVT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][5U] << 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][4U] >> 4U)) 
              | (7U & (vlSelf->img_in[0U][3U] >> 9U))));
    vlSelf->__PVT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch 
        = ((0x1c0U & vlSelf->img_in[0U][5U]) | ((0x38U 
                                                 & (vlSelf->img_in
                                                    [0U][4U] 
                                                    >> 5U)) 
                                                | (7U 
                                                   & (vlSelf->img_in
                                                      [0U][3U] 
                                                      >> 0xaU))));
    vlSelf->__PVT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][5U] >> 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][4U] >> 6U)) 
              | (7U & (vlSelf->img_in[0U][3U] >> 0xbU))));
    vlSelf->__PVT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][5U] >> 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][4U] >> 7U)) 
              | (7U & (vlSelf->img_in[0U][3U] >> 0xcU))));
    vlSelf->__PVT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][5U] >> 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][4U] >> 8U)) 
              | (7U & (vlSelf->img_in[0U][3U] >> 0xdU))));
    vlSelf->__PVT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][5U] >> 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][4U] >> 9U)) 
              | (7U & (vlSelf->img_in[0U][3U] >> 0xeU))));
    vlSelf->__PVT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][5U] >> 5U)) 
           | ((0x38U & (vlSelf->img_in[0U][4U] >> 0xaU)) 
              | (7U & (vlSelf->img_in[0U][3U] >> 0xfU))));
    vlSelf->__PVT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][5U] >> 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][4U] >> 0xbU)) 
              | (7U & (vlSelf->img_in[0U][3U] >> 0x10U))));
    vlSelf->__PVT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][5U] >> 7U)) 
           | ((0x38U & (vlSelf->img_in[0U][4U] >> 0xcU)) 
              | (7U & (vlSelf->img_in[0U][3U] >> 0x11U))));
    vlSelf->__PVT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][5U] >> 8U)) 
           | ((0x38U & (vlSelf->img_in[0U][4U] >> 0xdU)) 
              | (7U & (vlSelf->img_in[0U][3U] >> 0x12U))));
    vlSelf->__PVT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][5U] >> 9U)) 
           | ((0x38U & (vlSelf->img_in[0U][4U] >> 0xeU)) 
              | (7U & (vlSelf->img_in[0U][3U] >> 0x13U))));
    vlSelf->__PVT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][5U] >> 0xaU)) 
           | ((0x38U & (vlSelf->img_in[0U][4U] >> 0xfU)) 
              | (7U & (vlSelf->img_in[0U][3U] >> 0x14U))));
    vlSelf->__PVT__out_row_gen__BRA__3__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][5U] >> 0xbU)) 
           | ((0x38U & (vlSelf->img_in[0U][4U] >> 0x10U)) 
              | (7U & (vlSelf->img_in[0U][3U] >> 0x15U))));
    vlSelf->__PVT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][5U] >> 0xeU)) 
           | ((0x38U & (vlSelf->img_in[0U][4U] >> 0x13U)) 
              | (7U & (vlSelf->img_in[0U][3U] >> 0x18U))));
    vlSelf->__PVT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][5U] >> 0xfU)) 
           | ((0x38U & (vlSelf->img_in[0U][4U] >> 0x14U)) 
              | (7U & (vlSelf->img_in[0U][3U] >> 0x19U))));
    vlSelf->__PVT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][5U] >> 0x10U)) 
           | ((0x38U & (vlSelf->img_in[0U][4U] >> 0x15U)) 
              | (7U & (vlSelf->img_in[0U][3U] >> 0x1aU))));
    vlSelf->__PVT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][5U] >> 0x11U)) 
           | ((0x38U & (vlSelf->img_in[0U][4U] >> 0x16U)) 
              | (7U & (vlSelf->img_in[0U][3U] >> 0x1bU))));
    vlSelf->__PVT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][5U] >> 0x12U)) 
           | ((0x38U & (vlSelf->img_in[0U][4U] >> 0x17U)) 
              | (7U & (vlSelf->img_in[0U][3U] >> 0x1cU))));
    vlSelf->__PVT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][5U] >> 0x13U)) 
           | ((0x38U & (vlSelf->img_in[0U][4U] >> 0x18U)) 
              | (vlSelf->img_in[0U][3U] >> 0x1dU)));
    vlSelf->__PVT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][5U] >> 0x14U)) 
           | ((0x38U & (vlSelf->img_in[0U][4U] >> 0x19U)) 
              | (7U & ((vlSelf->img_in[0U][4U] << 2U) 
                       | (vlSelf->img_in[0U][3U] >> 0x1eU)))));
    vlSelf->__PVT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][5U] >> 0x15U)) 
           | ((0x38U & (vlSelf->img_in[0U][4U] >> 0x1aU)) 
              | (7U & ((vlSelf->img_in[0U][4U] << 1U) 
                       | (vlSelf->img_in[0U][3U] >> 0x1fU)))));
    vlSelf->__PVT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][5U] >> 0x16U)) 
           | ((0x38U & ((vlSelf->img_in[0U][5U] << 5U) 
                        | (0x18U & (vlSelf->img_in[0U][4U] 
                                    >> 0x1bU)))) | 
              (7U & vlSelf->img_in[0U][4U])));
    vlSelf->__PVT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][5U] >> 0x17U)) 
           | ((0x38U & ((vlSelf->img_in[0U][5U] << 4U) 
                        | (8U & (vlSelf->img_in[0U][4U] 
                                 >> 0x1cU)))) | (7U 
                                                 & (vlSelf->img_in
                                                    [0U][4U] 
                                                    >> 1U))));
    vlSelf->__PVT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][6U] << 8U) 
                      | (0xc0U & (vlSelf->img_in[0U][5U] 
                                  >> 0x18U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][5U] 
                                                      << 3U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][4U] 
                                                        >> 2U))));
    vlSelf->__PVT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][6U] << 7U) 
                      | (0x40U & (vlSelf->img_in[0U][5U] 
                                  >> 0x19U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][5U] 
                                                      << 2U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][4U] 
                                                        >> 3U))));
    vlSelf->__PVT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][6U] << 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][5U] << 1U)) 
              | (7U & (vlSelf->img_in[0U][4U] >> 4U))));
    vlSelf->__PVT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][6U] << 5U)) 
           | ((0x38U & vlSelf->img_in[0U][5U]) | (7U 
                                                  & (vlSelf->img_in
                                                     [0U][4U] 
                                                     >> 5U))));
    vlSelf->__PVT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][6U] << 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][5U] >> 1U)) 
              | (7U & (vlSelf->img_in[0U][4U] >> 6U))));
    vlSelf->__PVT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][6U] << 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][5U] >> 2U)) 
              | (7U & (vlSelf->img_in[0U][4U] >> 7U))));
    vlSelf->__PVT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][6U] << 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][5U] >> 3U)) 
              | (7U & (vlSelf->img_in[0U][4U] >> 8U))));
    vlSelf->__PVT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][6U] << 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][5U] >> 4U)) 
              | (7U & (vlSelf->img_in[0U][4U] >> 9U))));
    vlSelf->__PVT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch 
        = ((0x1c0U & vlSelf->img_in[0U][6U]) | ((0x38U 
                                                 & (vlSelf->img_in
                                                    [0U][5U] 
                                                    >> 5U)) 
                                                | (7U 
                                                   & (vlSelf->img_in
                                                      [0U][4U] 
                                                      >> 0xaU))));
    vlSelf->__PVT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][6U] >> 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][5U] >> 6U)) 
              | (7U & (vlSelf->img_in[0U][4U] >> 0xbU))));
    vlSelf->__PVT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][6U] >> 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][5U] >> 7U)) 
              | (7U & (vlSelf->img_in[0U][4U] >> 0xcU))));
    vlSelf->__PVT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][6U] >> 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][5U] >> 8U)) 
              | (7U & (vlSelf->img_in[0U][4U] >> 0xdU))));
    vlSelf->__PVT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][6U] >> 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][5U] >> 9U)) 
              | (7U & (vlSelf->img_in[0U][4U] >> 0xeU))));
    vlSelf->__PVT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][6U] >> 5U)) 
           | ((0x38U & (vlSelf->img_in[0U][5U] >> 0xaU)) 
              | (7U & (vlSelf->img_in[0U][4U] >> 0xfU))));
    vlSelf->__PVT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][6U] >> 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][5U] >> 0xbU)) 
              | (7U & (vlSelf->img_in[0U][4U] >> 0x10U))));
    vlSelf->__PVT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][6U] >> 7U)) 
           | ((0x38U & (vlSelf->img_in[0U][5U] >> 0xcU)) 
              | (7U & (vlSelf->img_in[0U][4U] >> 0x11U))));
    vlSelf->__PVT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][6U] >> 8U)) 
           | ((0x38U & (vlSelf->img_in[0U][5U] >> 0xdU)) 
              | (7U & (vlSelf->img_in[0U][4U] >> 0x12U))));
    vlSelf->__PVT__out_row_gen__BRA__4__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][6U] >> 9U)) 
           | ((0x38U & (vlSelf->img_in[0U][5U] >> 0xeU)) 
              | (7U & (vlSelf->img_in[0U][4U] >> 0x13U))));
    vlSelf->__PVT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][6U] >> 0xcU)) 
           | ((0x38U & (vlSelf->img_in[0U][5U] >> 0x11U)) 
              | (7U & (vlSelf->img_in[0U][4U] >> 0x16U))));
    vlSelf->__PVT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][6U] >> 0xdU)) 
           | ((0x38U & (vlSelf->img_in[0U][5U] >> 0x12U)) 
              | (7U & (vlSelf->img_in[0U][4U] >> 0x17U))));
    vlSelf->__PVT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][6U] >> 0xeU)) 
           | ((0x38U & (vlSelf->img_in[0U][5U] >> 0x13U)) 
              | (7U & (vlSelf->img_in[0U][4U] >> 0x18U))));
    vlSelf->__PVT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][6U] >> 0xfU)) 
           | ((0x38U & (vlSelf->img_in[0U][5U] >> 0x14U)) 
              | (7U & (vlSelf->img_in[0U][4U] >> 0x19U))));
    vlSelf->__PVT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][6U] >> 0x10U)) 
           | ((0x38U & (vlSelf->img_in[0U][5U] >> 0x15U)) 
              | (7U & (vlSelf->img_in[0U][4U] >> 0x1aU))));
    vlSelf->__PVT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][6U] >> 0x11U)) 
           | ((0x38U & (vlSelf->img_in[0U][5U] >> 0x16U)) 
              | (7U & (vlSelf->img_in[0U][4U] >> 0x1bU))));
    vlSelf->__PVT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][6U] >> 0x12U)) 
           | ((0x38U & (vlSelf->img_in[0U][5U] >> 0x17U)) 
              | (7U & (vlSelf->img_in[0U][4U] >> 0x1cU))));
    vlSelf->__PVT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][6U] >> 0x13U)) 
           | ((0x38U & (vlSelf->img_in[0U][5U] >> 0x18U)) 
              | (vlSelf->img_in[0U][4U] >> 0x1dU)));
    vlSelf->__PVT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][6U] >> 0x14U)) 
           | ((0x38U & (vlSelf->img_in[0U][5U] >> 0x19U)) 
              | (7U & ((vlSelf->img_in[0U][5U] << 2U) 
                       | (vlSelf->img_in[0U][4U] >> 0x1eU)))));
    vlSelf->__PVT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][6U] >> 0x15U)) 
           | ((0x38U & (vlSelf->img_in[0U][5U] >> 0x1aU)) 
              | (7U & ((vlSelf->img_in[0U][5U] << 1U) 
                       | (vlSelf->img_in[0U][4U] >> 0x1fU)))));
    vlSelf->__PVT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][6U] >> 0x16U)) 
           | ((0x38U & ((vlSelf->img_in[0U][6U] << 5U) 
                        | (0x18U & (vlSelf->img_in[0U][5U] 
                                    >> 0x1bU)))) | 
              (7U & vlSelf->img_in[0U][5U])));
    vlSelf->__PVT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][6U] >> 0x17U)) 
           | ((0x38U & ((vlSelf->img_in[0U][6U] << 4U) 
                        | (8U & (vlSelf->img_in[0U][5U] 
                                 >> 0x1cU)))) | (7U 
                                                 & (vlSelf->img_in
                                                    [0U][5U] 
                                                    >> 1U))));
    vlSelf->__PVT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][7U] << 8U) 
                      | (0xc0U & (vlSelf->img_in[0U][6U] 
                                  >> 0x18U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][6U] 
                                                      << 3U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][5U] 
                                                        >> 2U))));
    vlSelf->__PVT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][7U] << 7U) 
                      | (0x40U & (vlSelf->img_in[0U][6U] 
                                  >> 0x19U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][6U] 
                                                      << 2U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][5U] 
                                                        >> 3U))));
    vlSelf->__PVT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][7U] << 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][6U] << 1U)) 
              | (7U & (vlSelf->img_in[0U][5U] >> 4U))));
    vlSelf->__PVT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][7U] << 5U)) 
           | ((0x38U & vlSelf->img_in[0U][6U]) | (7U 
                                                  & (vlSelf->img_in
                                                     [0U][5U] 
                                                     >> 5U))));
    vlSelf->__PVT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][7U] << 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][6U] >> 1U)) 
              | (7U & (vlSelf->img_in[0U][5U] >> 6U))));
    vlSelf->__PVT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][7U] << 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][6U] >> 2U)) 
              | (7U & (vlSelf->img_in[0U][5U] >> 7U))));
    vlSelf->__PVT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][7U] << 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][6U] >> 3U)) 
              | (7U & (vlSelf->img_in[0U][5U] >> 8U))));
    vlSelf->__PVT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][7U] << 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][6U] >> 4U)) 
              | (7U & (vlSelf->img_in[0U][5U] >> 9U))));
    vlSelf->__PVT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch 
        = ((0x1c0U & vlSelf->img_in[0U][7U]) | ((0x38U 
                                                 & (vlSelf->img_in
                                                    [0U][6U] 
                                                    >> 5U)) 
                                                | (7U 
                                                   & (vlSelf->img_in
                                                      [0U][5U] 
                                                      >> 0xaU))));
    vlSelf->__PVT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][7U] >> 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][6U] >> 6U)) 
              | (7U & (vlSelf->img_in[0U][5U] >> 0xbU))));
    vlSelf->__PVT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][7U] >> 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][6U] >> 7U)) 
              | (7U & (vlSelf->img_in[0U][5U] >> 0xcU))));
    vlSelf->__PVT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][7U] >> 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][6U] >> 8U)) 
              | (7U & (vlSelf->img_in[0U][5U] >> 0xdU))));
    vlSelf->__PVT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][7U] >> 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][6U] >> 9U)) 
              | (7U & (vlSelf->img_in[0U][5U] >> 0xeU))));
    vlSelf->__PVT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][7U] >> 5U)) 
           | ((0x38U & (vlSelf->img_in[0U][6U] >> 0xaU)) 
              | (7U & (vlSelf->img_in[0U][5U] >> 0xfU))));
    vlSelf->__PVT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][7U] >> 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][6U] >> 0xbU)) 
              | (7U & (vlSelf->img_in[0U][5U] >> 0x10U))));
    vlSelf->__PVT__out_row_gen__BRA__5__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][7U] >> 7U)) 
           | ((0x38U & (vlSelf->img_in[0U][6U] >> 0xcU)) 
              | (7U & (vlSelf->img_in[0U][5U] >> 0x11U))));
    vlSelf->__PVT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][7U] >> 0xaU)) 
           | ((0x38U & (vlSelf->img_in[0U][6U] >> 0xfU)) 
              | (7U & (vlSelf->img_in[0U][5U] >> 0x14U))));
    vlSelf->__PVT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][7U] >> 0xbU)) 
           | ((0x38U & (vlSelf->img_in[0U][6U] >> 0x10U)) 
              | (7U & (vlSelf->img_in[0U][5U] >> 0x15U))));
    vlSelf->__PVT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][7U] >> 0xcU)) 
           | ((0x38U & (vlSelf->img_in[0U][6U] >> 0x11U)) 
              | (7U & (vlSelf->img_in[0U][5U] >> 0x16U))));
    vlSelf->__PVT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][7U] >> 0xdU)) 
           | ((0x38U & (vlSelf->img_in[0U][6U] >> 0x12U)) 
              | (7U & (vlSelf->img_in[0U][5U] >> 0x17U))));
    vlSelf->__PVT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][7U] >> 0xeU)) 
           | ((0x38U & (vlSelf->img_in[0U][6U] >> 0x13U)) 
              | (7U & (vlSelf->img_in[0U][5U] >> 0x18U))));
    vlSelf->__PVT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][7U] >> 0xfU)) 
           | ((0x38U & (vlSelf->img_in[0U][6U] >> 0x14U)) 
              | (7U & (vlSelf->img_in[0U][5U] >> 0x19U))));
    vlSelf->__PVT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][7U] >> 0x10U)) 
           | ((0x38U & (vlSelf->img_in[0U][6U] >> 0x15U)) 
              | (7U & (vlSelf->img_in[0U][5U] >> 0x1aU))));
    vlSelf->__PVT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][7U] >> 0x11U)) 
           | ((0x38U & (vlSelf->img_in[0U][6U] >> 0x16U)) 
              | (7U & (vlSelf->img_in[0U][5U] >> 0x1bU))));
    vlSelf->__PVT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][7U] >> 0x12U)) 
           | ((0x38U & (vlSelf->img_in[0U][6U] >> 0x17U)) 
              | (7U & (vlSelf->img_in[0U][5U] >> 0x1cU))));
    vlSelf->__PVT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][7U] >> 0x13U)) 
           | ((0x38U & (vlSelf->img_in[0U][6U] >> 0x18U)) 
              | (vlSelf->img_in[0U][5U] >> 0x1dU)));
    vlSelf->__PVT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][7U] >> 0x14U)) 
           | ((0x38U & (vlSelf->img_in[0U][6U] >> 0x19U)) 
              | (7U & ((vlSelf->img_in[0U][6U] << 2U) 
                       | (vlSelf->img_in[0U][5U] >> 0x1eU)))));
    vlSelf->__PVT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][7U] >> 0x15U)) 
           | ((0x38U & (vlSelf->img_in[0U][6U] >> 0x1aU)) 
              | (7U & ((vlSelf->img_in[0U][6U] << 1U) 
                       | (vlSelf->img_in[0U][5U] >> 0x1fU)))));
    vlSelf->__PVT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][7U] >> 0x16U)) 
           | ((0x38U & ((vlSelf->img_in[0U][7U] << 5U) 
                        | (0x18U & (vlSelf->img_in[0U][6U] 
                                    >> 0x1bU)))) | 
              (7U & vlSelf->img_in[0U][6U])));
    vlSelf->__PVT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][7U] >> 0x17U)) 
           | ((0x38U & ((vlSelf->img_in[0U][7U] << 4U) 
                        | (8U & (vlSelf->img_in[0U][6U] 
                                 >> 0x1cU)))) | (7U 
                                                 & (vlSelf->img_in
                                                    [0U][6U] 
                                                    >> 1U))));
    vlSelf->__PVT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][8U] << 8U) 
                      | (0xc0U & (vlSelf->img_in[0U][7U] 
                                  >> 0x18U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][7U] 
                                                      << 3U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][6U] 
                                                        >> 2U))));
    vlSelf->__PVT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][8U] << 7U) 
                      | (0x40U & (vlSelf->img_in[0U][7U] 
                                  >> 0x19U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][7U] 
                                                      << 2U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][6U] 
                                                        >> 3U))));
    vlSelf->__PVT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][8U] << 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][7U] << 1U)) 
              | (7U & (vlSelf->img_in[0U][6U] >> 4U))));
    vlSelf->__PVT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][8U] << 5U)) 
           | ((0x38U & vlSelf->img_in[0U][7U]) | (7U 
                                                  & (vlSelf->img_in
                                                     [0U][6U] 
                                                     >> 5U))));
    vlSelf->__PVT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][8U] << 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][7U] >> 1U)) 
              | (7U & (vlSelf->img_in[0U][6U] >> 6U))));
    vlSelf->__PVT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][8U] << 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][7U] >> 2U)) 
              | (7U & (vlSelf->img_in[0U][6U] >> 7U))));
    vlSelf->__PVT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][8U] << 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][7U] >> 3U)) 
              | (7U & (vlSelf->img_in[0U][6U] >> 8U))));
    vlSelf->__PVT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][8U] << 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][7U] >> 4U)) 
              | (7U & (vlSelf->img_in[0U][6U] >> 9U))));
    vlSelf->__PVT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch 
        = ((0x1c0U & vlSelf->img_in[0U][8U]) | ((0x38U 
                                                 & (vlSelf->img_in
                                                    [0U][7U] 
                                                    >> 5U)) 
                                                | (7U 
                                                   & (vlSelf->img_in
                                                      [0U][6U] 
                                                      >> 0xaU))));
    vlSelf->__PVT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][8U] >> 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][7U] >> 6U)) 
              | (7U & (vlSelf->img_in[0U][6U] >> 0xbU))));
    vlSelf->__PVT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][8U] >> 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][7U] >> 7U)) 
              | (7U & (vlSelf->img_in[0U][6U] >> 0xcU))));
    vlSelf->__PVT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][8U] >> 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][7U] >> 8U)) 
              | (7U & (vlSelf->img_in[0U][6U] >> 0xdU))));
    vlSelf->__PVT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][8U] >> 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][7U] >> 9U)) 
              | (7U & (vlSelf->img_in[0U][6U] >> 0xeU))));
    vlSelf->__PVT__out_row_gen__BRA__6__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][8U] >> 5U)) 
           | ((0x38U & (vlSelf->img_in[0U][7U] >> 0xaU)) 
              | (7U & (vlSelf->img_in[0U][6U] >> 0xfU))));
    vlSelf->__PVT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][8U] >> 8U)) 
           | ((0x38U & (vlSelf->img_in[0U][7U] >> 0xdU)) 
              | (7U & (vlSelf->img_in[0U][6U] >> 0x12U))));
    vlSelf->__PVT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][8U] >> 9U)) 
           | ((0x38U & (vlSelf->img_in[0U][7U] >> 0xeU)) 
              | (7U & (vlSelf->img_in[0U][6U] >> 0x13U))));
    vlSelf->__PVT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][8U] >> 0xaU)) 
           | ((0x38U & (vlSelf->img_in[0U][7U] >> 0xfU)) 
              | (7U & (vlSelf->img_in[0U][6U] >> 0x14U))));
    vlSelf->__PVT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][8U] >> 0xbU)) 
           | ((0x38U & (vlSelf->img_in[0U][7U] >> 0x10U)) 
              | (7U & (vlSelf->img_in[0U][6U] >> 0x15U))));
    vlSelf->__PVT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][8U] >> 0xcU)) 
           | ((0x38U & (vlSelf->img_in[0U][7U] >> 0x11U)) 
              | (7U & (vlSelf->img_in[0U][6U] >> 0x16U))));
    vlSelf->__PVT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][8U] >> 0xdU)) 
           | ((0x38U & (vlSelf->img_in[0U][7U] >> 0x12U)) 
              | (7U & (vlSelf->img_in[0U][6U] >> 0x17U))));
    vlSelf->__PVT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][8U] >> 0xeU)) 
           | ((0x38U & (vlSelf->img_in[0U][7U] >> 0x13U)) 
              | (7U & (vlSelf->img_in[0U][6U] >> 0x18U))));
    vlSelf->__PVT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][8U] >> 0xfU)) 
           | ((0x38U & (vlSelf->img_in[0U][7U] >> 0x14U)) 
              | (7U & (vlSelf->img_in[0U][6U] >> 0x19U))));
    vlSelf->__PVT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][8U] >> 0x10U)) 
           | ((0x38U & (vlSelf->img_in[0U][7U] >> 0x15U)) 
              | (7U & (vlSelf->img_in[0U][6U] >> 0x1aU))));
    vlSelf->__PVT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][8U] >> 0x11U)) 
           | ((0x38U & (vlSelf->img_in[0U][7U] >> 0x16U)) 
              | (7U & (vlSelf->img_in[0U][6U] >> 0x1bU))));
    vlSelf->__PVT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][8U] >> 0x12U)) 
           | ((0x38U & (vlSelf->img_in[0U][7U] >> 0x17U)) 
              | (7U & (vlSelf->img_in[0U][6U] >> 0x1cU))));
    vlSelf->__PVT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][8U] >> 0x13U)) 
           | ((0x38U & (vlSelf->img_in[0U][7U] >> 0x18U)) 
              | (vlSelf->img_in[0U][6U] >> 0x1dU)));
    vlSelf->__PVT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][8U] >> 0x14U)) 
           | ((0x38U & (vlSelf->img_in[0U][7U] >> 0x19U)) 
              | (7U & ((vlSelf->img_in[0U][7U] << 2U) 
                       | (vlSelf->img_in[0U][6U] >> 0x1eU)))));
    vlSelf->__PVT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][8U] >> 0x15U)) 
           | ((0x38U & (vlSelf->img_in[0U][7U] >> 0x1aU)) 
              | (7U & ((vlSelf->img_in[0U][7U] << 1U) 
                       | (vlSelf->img_in[0U][6U] >> 0x1fU)))));
    vlSelf->__PVT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][8U] >> 0x16U)) 
           | ((0x38U & ((vlSelf->img_in[0U][8U] << 5U) 
                        | (0x18U & (vlSelf->img_in[0U][7U] 
                                    >> 0x1bU)))) | 
              (7U & vlSelf->img_in[0U][7U])));
    vlSelf->__PVT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][8U] >> 0x17U)) 
           | ((0x38U & ((vlSelf->img_in[0U][8U] << 4U) 
                        | (8U & (vlSelf->img_in[0U][7U] 
                                 >> 0x1cU)))) | (7U 
                                                 & (vlSelf->img_in
                                                    [0U][7U] 
                                                    >> 1U))));
    vlSelf->__PVT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][9U] << 8U) 
                      | (0xc0U & (vlSelf->img_in[0U][8U] 
                                  >> 0x18U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][8U] 
                                                      << 3U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][7U] 
                                                        >> 2U))));
    vlSelf->__PVT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][9U] << 7U) 
                      | (0x40U & (vlSelf->img_in[0U][8U] 
                                  >> 0x19U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][8U] 
                                                      << 2U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][7U] 
                                                        >> 3U))));
    vlSelf->__PVT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][9U] << 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][8U] << 1U)) 
              | (7U & (vlSelf->img_in[0U][7U] >> 4U))));
    vlSelf->__PVT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][9U] << 5U)) 
           | ((0x38U & vlSelf->img_in[0U][8U]) | (7U 
                                                  & (vlSelf->img_in
                                                     [0U][7U] 
                                                     >> 5U))));
    vlSelf->__PVT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][9U] << 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][8U] >> 1U)) 
              | (7U & (vlSelf->img_in[0U][7U] >> 6U))));
    vlSelf->__PVT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][9U] << 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][8U] >> 2U)) 
              | (7U & (vlSelf->img_in[0U][7U] >> 7U))));
    vlSelf->__PVT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][9U] << 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][8U] >> 3U)) 
              | (7U & (vlSelf->img_in[0U][7U] >> 8U))));
    vlSelf->__PVT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][9U] << 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][8U] >> 4U)) 
              | (7U & (vlSelf->img_in[0U][7U] >> 9U))));
    vlSelf->__PVT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch 
        = ((0x1c0U & vlSelf->img_in[0U][9U]) | ((0x38U 
                                                 & (vlSelf->img_in
                                                    [0U][8U] 
                                                    >> 5U)) 
                                                | (7U 
                                                   & (vlSelf->img_in
                                                      [0U][7U] 
                                                      >> 0xaU))));
    vlSelf->__PVT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][9U] >> 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][8U] >> 6U)) 
              | (7U & (vlSelf->img_in[0U][7U] >> 0xbU))));
    vlSelf->__PVT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][9U] >> 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][8U] >> 7U)) 
              | (7U & (vlSelf->img_in[0U][7U] >> 0xcU))));
    vlSelf->__PVT__out_row_gen__BRA__7__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][9U] >> 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][8U] >> 8U)) 
              | (7U & (vlSelf->img_in[0U][7U] >> 0xdU))));
    vlSelf->__PVT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][9U] >> 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][8U] >> 0xbU)) 
              | (7U & (vlSelf->img_in[0U][7U] >> 0x10U))));
    vlSelf->__PVT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][9U] >> 7U)) 
           | ((0x38U & (vlSelf->img_in[0U][8U] >> 0xcU)) 
              | (7U & (vlSelf->img_in[0U][7U] >> 0x11U))));
    vlSelf->__PVT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][9U] >> 8U)) 
           | ((0x38U & (vlSelf->img_in[0U][8U] >> 0xdU)) 
              | (7U & (vlSelf->img_in[0U][7U] >> 0x12U))));
    vlSelf->__PVT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][9U] >> 9U)) 
           | ((0x38U & (vlSelf->img_in[0U][8U] >> 0xeU)) 
              | (7U & (vlSelf->img_in[0U][7U] >> 0x13U))));
    vlSelf->__PVT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][9U] >> 0xaU)) 
           | ((0x38U & (vlSelf->img_in[0U][8U] >> 0xfU)) 
              | (7U & (vlSelf->img_in[0U][7U] >> 0x14U))));
    vlSelf->__PVT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][9U] >> 0xbU)) 
           | ((0x38U & (vlSelf->img_in[0U][8U] >> 0x10U)) 
              | (7U & (vlSelf->img_in[0U][7U] >> 0x15U))));
    vlSelf->__PVT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][9U] >> 0xcU)) 
           | ((0x38U & (vlSelf->img_in[0U][8U] >> 0x11U)) 
              | (7U & (vlSelf->img_in[0U][7U] >> 0x16U))));
    vlSelf->__PVT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][9U] >> 0xdU)) 
           | ((0x38U & (vlSelf->img_in[0U][8U] >> 0x12U)) 
              | (7U & (vlSelf->img_in[0U][7U] >> 0x17U))));
    vlSelf->__PVT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][9U] >> 0xeU)) 
           | ((0x38U & (vlSelf->img_in[0U][8U] >> 0x13U)) 
              | (7U & (vlSelf->img_in[0U][7U] >> 0x18U))));
    vlSelf->__PVT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][9U] >> 0xfU)) 
           | ((0x38U & (vlSelf->img_in[0U][8U] >> 0x14U)) 
              | (7U & (vlSelf->img_in[0U][7U] >> 0x19U))));
    vlSelf->__PVT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][9U] >> 0x10U)) 
           | ((0x38U & (vlSelf->img_in[0U][8U] >> 0x15U)) 
              | (7U & (vlSelf->img_in[0U][7U] >> 0x1aU))));
    vlSelf->__PVT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][9U] >> 0x11U)) 
           | ((0x38U & (vlSelf->img_in[0U][8U] >> 0x16U)) 
              | (7U & (vlSelf->img_in[0U][7U] >> 0x1bU))));
    vlSelf->__PVT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][9U] >> 0x12U)) 
           | ((0x38U & (vlSelf->img_in[0U][8U] >> 0x17U)) 
              | (7U & (vlSelf->img_in[0U][7U] >> 0x1cU))));
    vlSelf->__PVT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][9U] >> 0x13U)) 
           | ((0x38U & (vlSelf->img_in[0U][8U] >> 0x18U)) 
              | (vlSelf->img_in[0U][7U] >> 0x1dU)));
    vlSelf->__PVT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][9U] >> 0x14U)) 
           | ((0x38U & (vlSelf->img_in[0U][8U] >> 0x19U)) 
              | (7U & ((vlSelf->img_in[0U][8U] << 2U) 
                       | (vlSelf->img_in[0U][7U] >> 0x1eU)))));
    vlSelf->__PVT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][9U] >> 0x15U)) 
           | ((0x38U & (vlSelf->img_in[0U][8U] >> 0x1aU)) 
              | (7U & ((vlSelf->img_in[0U][8U] << 1U) 
                       | (vlSelf->img_in[0U][7U] >> 0x1fU)))));
    vlSelf->__PVT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][9U] >> 0x16U)) 
           | ((0x38U & ((vlSelf->img_in[0U][9U] << 5U) 
                        | (0x18U & (vlSelf->img_in[0U][8U] 
                                    >> 0x1bU)))) | 
              (7U & vlSelf->img_in[0U][8U])));
    vlSelf->__PVT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][9U] >> 0x17U)) 
           | ((0x38U & ((vlSelf->img_in[0U][9U] << 4U) 
                        | (8U & (vlSelf->img_in[0U][8U] 
                                 >> 0x1cU)))) | (7U 
                                                 & (vlSelf->img_in
                                                    [0U][8U] 
                                                    >> 1U))));
    vlSelf->__PVT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][0xaU] << 8U) 
                      | (0xc0U & (vlSelf->img_in[0U][9U] 
                                  >> 0x18U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][9U] 
                                                      << 3U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][8U] 
                                                        >> 2U))));
    vlSelf->__PVT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][0xaU] << 7U) 
                      | (0x40U & (vlSelf->img_in[0U][9U] 
                                  >> 0x19U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][9U] 
                                                      << 2U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][8U] 
                                                        >> 3U))));
    vlSelf->__PVT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xaU] << 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][9U] << 1U)) 
              | (7U & (vlSelf->img_in[0U][8U] >> 4U))));
    vlSelf->__PVT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xaU] << 5U)) 
           | ((0x38U & vlSelf->img_in[0U][9U]) | (7U 
                                                  & (vlSelf->img_in
                                                     [0U][8U] 
                                                     >> 5U))));
    vlSelf->__PVT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xaU] << 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][9U] >> 1U)) 
              | (7U & (vlSelf->img_in[0U][8U] >> 6U))));
    vlSelf->__PVT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xaU] << 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][9U] >> 2U)) 
              | (7U & (vlSelf->img_in[0U][8U] >> 7U))));
    vlSelf->__PVT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xaU] << 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][9U] >> 3U)) 
              | (7U & (vlSelf->img_in[0U][8U] >> 8U))));
    vlSelf->__PVT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xaU] << 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][9U] >> 4U)) 
              | (7U & (vlSelf->img_in[0U][8U] >> 9U))));
    vlSelf->__PVT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch 
        = ((0x1c0U & vlSelf->img_in[0U][0xaU]) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][9U] 
                                                      >> 5U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][8U] 
                                                        >> 0xaU))));
    vlSelf->__PVT__out_row_gen__BRA__8__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xaU] >> 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][9U] >> 6U)) 
              | (7U & (vlSelf->img_in[0U][8U] >> 0xbU))));
    vlSelf->__PVT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xaU] >> 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][9U] >> 9U)) 
              | (7U & (vlSelf->img_in[0U][8U] >> 0xeU))));
    vlSelf->__PVT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xaU] >> 5U)) 
           | ((0x38U & (vlSelf->img_in[0U][9U] >> 0xaU)) 
              | (7U & (vlSelf->img_in[0U][8U] >> 0xfU))));
    vlSelf->__PVT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xaU] >> 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][9U] >> 0xbU)) 
              | (7U & (vlSelf->img_in[0U][8U] >> 0x10U))));
    vlSelf->__PVT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xaU] >> 7U)) 
           | ((0x38U & (vlSelf->img_in[0U][9U] >> 0xcU)) 
              | (7U & (vlSelf->img_in[0U][8U] >> 0x11U))));
    vlSelf->__PVT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xaU] >> 8U)) 
           | ((0x38U & (vlSelf->img_in[0U][9U] >> 0xdU)) 
              | (7U & (vlSelf->img_in[0U][8U] >> 0x12U))));
    vlSelf->__PVT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xaU] >> 9U)) 
           | ((0x38U & (vlSelf->img_in[0U][9U] >> 0xeU)) 
              | (7U & (vlSelf->img_in[0U][8U] >> 0x13U))));
    vlSelf->__PVT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xaU] >> 0xaU)) 
           | ((0x38U & (vlSelf->img_in[0U][9U] >> 0xfU)) 
              | (7U & (vlSelf->img_in[0U][8U] >> 0x14U))));
    vlSelf->__PVT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xaU] >> 0xbU)) 
           | ((0x38U & (vlSelf->img_in[0U][9U] >> 0x10U)) 
              | (7U & (vlSelf->img_in[0U][8U] >> 0x15U))));
    vlSelf->__PVT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xaU] >> 0xcU)) 
           | ((0x38U & (vlSelf->img_in[0U][9U] >> 0x11U)) 
              | (7U & (vlSelf->img_in[0U][8U] >> 0x16U))));
    vlSelf->__PVT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xaU] >> 0xdU)) 
           | ((0x38U & (vlSelf->img_in[0U][9U] >> 0x12U)) 
              | (7U & (vlSelf->img_in[0U][8U] >> 0x17U))));
    vlSelf->__PVT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xaU] >> 0xeU)) 
           | ((0x38U & (vlSelf->img_in[0U][9U] >> 0x13U)) 
              | (7U & (vlSelf->img_in[0U][8U] >> 0x18U))));
    vlSelf->__PVT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xaU] >> 0xfU)) 
           | ((0x38U & (vlSelf->img_in[0U][9U] >> 0x14U)) 
              | (7U & (vlSelf->img_in[0U][8U] >> 0x19U))));
    vlSelf->__PVT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xaU] >> 0x10U)) 
           | ((0x38U & (vlSelf->img_in[0U][9U] >> 0x15U)) 
              | (7U & (vlSelf->img_in[0U][8U] >> 0x1aU))));
    vlSelf->__PVT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xaU] >> 0x11U)) 
           | ((0x38U & (vlSelf->img_in[0U][9U] >> 0x16U)) 
              | (7U & (vlSelf->img_in[0U][8U] >> 0x1bU))));
    vlSelf->__PVT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xaU] >> 0x12U)) 
           | ((0x38U & (vlSelf->img_in[0U][9U] >> 0x17U)) 
              | (7U & (vlSelf->img_in[0U][8U] >> 0x1cU))));
    vlSelf->__PVT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xaU] >> 0x13U)) 
           | ((0x38U & (vlSelf->img_in[0U][9U] >> 0x18U)) 
              | (vlSelf->img_in[0U][8U] >> 0x1dU)));
    vlSelf->__PVT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xaU] >> 0x14U)) 
           | ((0x38U & (vlSelf->img_in[0U][9U] >> 0x19U)) 
              | (7U & ((vlSelf->img_in[0U][9U] << 2U) 
                       | (vlSelf->img_in[0U][8U] >> 0x1eU)))));
    vlSelf->__PVT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xaU] >> 0x15U)) 
           | ((0x38U & (vlSelf->img_in[0U][9U] >> 0x1aU)) 
              | (7U & ((vlSelf->img_in[0U][9U] << 1U) 
                       | (vlSelf->img_in[0U][8U] >> 0x1fU)))));
    vlSelf->__PVT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xaU] >> 0x16U)) 
           | ((0x38U & ((vlSelf->img_in[0U][0xaU] << 5U) 
                        | (0x18U & (vlSelf->img_in[0U][9U] 
                                    >> 0x1bU)))) | 
              (7U & vlSelf->img_in[0U][9U])));
    vlSelf->__PVT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xaU] >> 0x17U)) 
           | ((0x38U & ((vlSelf->img_in[0U][0xaU] << 4U) 
                        | (8U & (vlSelf->img_in[0U][9U] 
                                 >> 0x1cU)))) | (7U 
                                                 & (vlSelf->img_in
                                                    [0U][9U] 
                                                    >> 1U))));
    vlSelf->__PVT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][0xbU] << 8U) 
                      | (0xc0U & (vlSelf->img_in[0U][0xaU] 
                                  >> 0x18U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][0xaU] 
                                                      << 3U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][9U] 
                                                        >> 2U))));
    vlSelf->__PVT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][0xbU] << 7U) 
                      | (0x40U & (vlSelf->img_in[0U][0xaU] 
                                  >> 0x19U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][0xaU] 
                                                      << 2U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][9U] 
                                                        >> 3U))));
    vlSelf->__PVT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xbU] << 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xaU] << 1U)) 
              | (7U & (vlSelf->img_in[0U][9U] >> 4U))));
    vlSelf->__PVT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xbU] << 5U)) 
           | ((0x38U & vlSelf->img_in[0U][0xaU]) | 
              (7U & (vlSelf->img_in[0U][9U] >> 5U))));
    vlSelf->__PVT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xbU] << 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xaU] >> 1U)) 
              | (7U & (vlSelf->img_in[0U][9U] >> 6U))));
    vlSelf->__PVT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xbU] << 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xaU] >> 2U)) 
              | (7U & (vlSelf->img_in[0U][9U] >> 7U))));
    vlSelf->__PVT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xbU] << 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xaU] >> 3U)) 
              | (7U & (vlSelf->img_in[0U][9U] >> 8U))));
    vlSelf->__PVT__out_row_gen__BRA__9__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xbU] << 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xaU] >> 4U)) 
              | (7U & (vlSelf->img_in[0U][9U] >> 9U))));
    vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xbU] >> 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xaU] >> 7U)) 
              | (7U & (vlSelf->img_in[0U][9U] >> 0xcU))));
    vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xbU] >> 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xaU] >> 8U)) 
              | (7U & (vlSelf->img_in[0U][9U] >> 0xdU))));
    vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xbU] >> 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xaU] >> 9U)) 
              | (7U & (vlSelf->img_in[0U][9U] >> 0xeU))));
    vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xbU] >> 5U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xaU] >> 0xaU)) 
              | (7U & (vlSelf->img_in[0U][9U] >> 0xfU))));
    vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xbU] >> 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xaU] >> 0xbU)) 
              | (7U & (vlSelf->img_in[0U][9U] >> 0x10U))));
    vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xbU] >> 7U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xaU] >> 0xcU)) 
              | (7U & (vlSelf->img_in[0U][9U] >> 0x11U))));
    vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xbU] >> 8U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xaU] >> 0xdU)) 
              | (7U & (vlSelf->img_in[0U][9U] >> 0x12U))));
    vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xbU] >> 9U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xaU] >> 0xeU)) 
              | (7U & (vlSelf->img_in[0U][9U] >> 0x13U))));
    vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xbU] >> 0xaU)) 
           | ((0x38U & (vlSelf->img_in[0U][0xaU] >> 0xfU)) 
              | (7U & (vlSelf->img_in[0U][9U] >> 0x14U))));
    vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xbU] >> 0xbU)) 
           | ((0x38U & (vlSelf->img_in[0U][0xaU] >> 0x10U)) 
              | (7U & (vlSelf->img_in[0U][9U] >> 0x15U))));
    vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xbU] >> 0xcU)) 
           | ((0x38U & (vlSelf->img_in[0U][0xaU] >> 0x11U)) 
              | (7U & (vlSelf->img_in[0U][9U] >> 0x16U))));
    vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xbU] >> 0xdU)) 
           | ((0x38U & (vlSelf->img_in[0U][0xaU] >> 0x12U)) 
              | (7U & (vlSelf->img_in[0U][9U] >> 0x17U))));
    vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xbU] >> 0xeU)) 
           | ((0x38U & (vlSelf->img_in[0U][0xaU] >> 0x13U)) 
              | (7U & (vlSelf->img_in[0U][9U] >> 0x18U))));
    vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xbU] >> 0xfU)) 
           | ((0x38U & (vlSelf->img_in[0U][0xaU] >> 0x14U)) 
              | (7U & (vlSelf->img_in[0U][9U] >> 0x19U))));
    vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xbU] >> 0x10U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xaU] >> 0x15U)) 
              | (7U & (vlSelf->img_in[0U][9U] >> 0x1aU))));
    vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xbU] >> 0x11U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xaU] >> 0x16U)) 
              | (7U & (vlSelf->img_in[0U][9U] >> 0x1bU))));
    vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xbU] >> 0x12U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xaU] >> 0x17U)) 
              | (7U & (vlSelf->img_in[0U][9U] >> 0x1cU))));
    vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xbU] >> 0x13U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xaU] >> 0x18U)) 
              | (vlSelf->img_in[0U][9U] >> 0x1dU)));
    vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xbU] >> 0x14U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xaU] >> 0x19U)) 
              | (7U & ((vlSelf->img_in[0U][0xaU] << 2U) 
                       | (vlSelf->img_in[0U][9U] >> 0x1eU)))));
    vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xbU] >> 0x15U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xaU] >> 0x1aU)) 
              | (7U & ((vlSelf->img_in[0U][0xaU] << 1U) 
                       | (vlSelf->img_in[0U][9U] >> 0x1fU)))));
    vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xbU] >> 0x16U)) 
           | ((0x38U & ((vlSelf->img_in[0U][0xbU] << 5U) 
                        | (0x18U & (vlSelf->img_in[0U][0xaU] 
                                    >> 0x1bU)))) | 
              (7U & vlSelf->img_in[0U][0xaU])));
    vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xbU] >> 0x17U)) 
           | ((0x38U & ((vlSelf->img_in[0U][0xbU] << 4U) 
                        | (8U & (vlSelf->img_in[0U][0xaU] 
                                 >> 0x1cU)))) | (7U 
                                                 & (vlSelf->img_in
                                                    [0U][0xaU] 
                                                    >> 1U))));
    vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][0xcU] << 8U) 
                      | (0xc0U & (vlSelf->img_in[0U][0xbU] 
                                  >> 0x18U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][0xbU] 
                                                      << 3U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][0xaU] 
                                                        >> 2U))));
    vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][0xcU] << 7U) 
                      | (0x40U & (vlSelf->img_in[0U][0xbU] 
                                  >> 0x19U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][0xbU] 
                                                      << 2U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][0xaU] 
                                                        >> 3U))));
    vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xcU] << 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xbU] << 1U)) 
              | (7U & (vlSelf->img_in[0U][0xaU] >> 4U))));
    vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xcU] << 5U)) 
           | ((0x38U & vlSelf->img_in[0U][0xbU]) | 
              (7U & (vlSelf->img_in[0U][0xaU] >> 5U))));
    vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xcU] << 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xbU] >> 1U)) 
              | (7U & (vlSelf->img_in[0U][0xaU] >> 6U))));
    vlSelf->__PVT__out_row_gen__BRA__10__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xcU] << 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xbU] >> 2U)) 
              | (7U & (vlSelf->img_in[0U][0xaU] >> 7U))));
    vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch 
        = ((0x1c0U & vlSelf->img_in[0U][0xcU]) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][0xbU] 
                                                      >> 5U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][0xaU] 
                                                        >> 0xaU))));
    vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xcU] >> 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xbU] >> 6U)) 
              | (7U & (vlSelf->img_in[0U][0xaU] >> 0xbU))));
    vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xcU] >> 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xbU] >> 7U)) 
              | (7U & (vlSelf->img_in[0U][0xaU] >> 0xcU))));
    vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xcU] >> 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xbU] >> 8U)) 
              | (7U & (vlSelf->img_in[0U][0xaU] >> 0xdU))));
    vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xcU] >> 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xbU] >> 9U)) 
              | (7U & (vlSelf->img_in[0U][0xaU] >> 0xeU))));
    vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xcU] >> 5U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xbU] >> 0xaU)) 
              | (7U & (vlSelf->img_in[0U][0xaU] >> 0xfU))));
    vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xcU] >> 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xbU] >> 0xbU)) 
              | (7U & (vlSelf->img_in[0U][0xaU] >> 0x10U))));
    vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xcU] >> 7U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xbU] >> 0xcU)) 
              | (7U & (vlSelf->img_in[0U][0xaU] >> 0x11U))));
    vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xcU] >> 8U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xbU] >> 0xdU)) 
              | (7U & (vlSelf->img_in[0U][0xaU] >> 0x12U))));
    vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xcU] >> 9U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xbU] >> 0xeU)) 
              | (7U & (vlSelf->img_in[0U][0xaU] >> 0x13U))));
    vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xcU] >> 0xaU)) 
           | ((0x38U & (vlSelf->img_in[0U][0xbU] >> 0xfU)) 
              | (7U & (vlSelf->img_in[0U][0xaU] >> 0x14U))));
    vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xcU] >> 0xbU)) 
           | ((0x38U & (vlSelf->img_in[0U][0xbU] >> 0x10U)) 
              | (7U & (vlSelf->img_in[0U][0xaU] >> 0x15U))));
    vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xcU] >> 0xcU)) 
           | ((0x38U & (vlSelf->img_in[0U][0xbU] >> 0x11U)) 
              | (7U & (vlSelf->img_in[0U][0xaU] >> 0x16U))));
    vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xcU] >> 0xdU)) 
           | ((0x38U & (vlSelf->img_in[0U][0xbU] >> 0x12U)) 
              | (7U & (vlSelf->img_in[0U][0xaU] >> 0x17U))));
    vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xcU] >> 0xeU)) 
           | ((0x38U & (vlSelf->img_in[0U][0xbU] >> 0x13U)) 
              | (7U & (vlSelf->img_in[0U][0xaU] >> 0x18U))));
    vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xcU] >> 0xfU)) 
           | ((0x38U & (vlSelf->img_in[0U][0xbU] >> 0x14U)) 
              | (7U & (vlSelf->img_in[0U][0xaU] >> 0x19U))));
    vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xcU] >> 0x10U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xbU] >> 0x15U)) 
              | (7U & (vlSelf->img_in[0U][0xaU] >> 0x1aU))));
    vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xcU] >> 0x11U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xbU] >> 0x16U)) 
              | (7U & (vlSelf->img_in[0U][0xaU] >> 0x1bU))));
    vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xcU] >> 0x12U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xbU] >> 0x17U)) 
              | (7U & (vlSelf->img_in[0U][0xaU] >> 0x1cU))));
    vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xcU] >> 0x13U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xbU] >> 0x18U)) 
              | (vlSelf->img_in[0U][0xaU] >> 0x1dU)));
    vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xcU] >> 0x14U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xbU] >> 0x19U)) 
              | (7U & ((vlSelf->img_in[0U][0xbU] << 2U) 
                       | (vlSelf->img_in[0U][0xaU] 
                          >> 0x1eU)))));
    vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xcU] >> 0x15U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xbU] >> 0x1aU)) 
              | (7U & ((vlSelf->img_in[0U][0xbU] << 1U) 
                       | (vlSelf->img_in[0U][0xaU] 
                          >> 0x1fU)))));
    vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xcU] >> 0x16U)) 
           | ((0x38U & ((vlSelf->img_in[0U][0xcU] << 5U) 
                        | (0x18U & (vlSelf->img_in[0U][0xbU] 
                                    >> 0x1bU)))) | 
              (7U & vlSelf->img_in[0U][0xbU])));
    vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xcU] >> 0x17U)) 
           | ((0x38U & ((vlSelf->img_in[0U][0xcU] << 4U) 
                        | (8U & (vlSelf->img_in[0U][0xbU] 
                                 >> 0x1cU)))) | (7U 
                                                 & (vlSelf->img_in
                                                    [0U][0xbU] 
                                                    >> 1U))));
    vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][0xdU] << 8U) 
                      | (0xc0U & (vlSelf->img_in[0U][0xcU] 
                                  >> 0x18U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][0xcU] 
                                                      << 3U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][0xbU] 
                                                        >> 2U))));
    vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][0xdU] << 7U) 
                      | (0x40U & (vlSelf->img_in[0U][0xcU] 
                                  >> 0x19U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][0xcU] 
                                                      << 2U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][0xbU] 
                                                        >> 3U))));
    vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xdU] << 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xcU] << 1U)) 
              | (7U & (vlSelf->img_in[0U][0xbU] >> 4U))));
    vlSelf->__PVT__out_row_gen__BRA__11__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xdU] << 5U)) 
           | ((0x38U & vlSelf->img_in[0U][0xcU]) | 
              (7U & (vlSelf->img_in[0U][0xbU] >> 5U))));
    vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xdU] << 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xcU] >> 3U)) 
              | (7U & (vlSelf->img_in[0U][0xbU] >> 8U))));
    vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xdU] << 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xcU] >> 4U)) 
              | (7U & (vlSelf->img_in[0U][0xbU] >> 9U))));
    vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch 
        = ((0x1c0U & vlSelf->img_in[0U][0xdU]) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][0xcU] 
                                                      >> 5U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][0xbU] 
                                                        >> 0xaU))));
    vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xdU] >> 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xcU] >> 6U)) 
              | (7U & (vlSelf->img_in[0U][0xbU] >> 0xbU))));
    vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xdU] >> 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xcU] >> 7U)) 
              | (7U & (vlSelf->img_in[0U][0xbU] >> 0xcU))));
    vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xdU] >> 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xcU] >> 8U)) 
              | (7U & (vlSelf->img_in[0U][0xbU] >> 0xdU))));
    vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xdU] >> 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xcU] >> 9U)) 
              | (7U & (vlSelf->img_in[0U][0xbU] >> 0xeU))));
    vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xdU] >> 5U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xcU] >> 0xaU)) 
              | (7U & (vlSelf->img_in[0U][0xbU] >> 0xfU))));
    vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xdU] >> 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xcU] >> 0xbU)) 
              | (7U & (vlSelf->img_in[0U][0xbU] >> 0x10U))));
    vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xdU] >> 7U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xcU] >> 0xcU)) 
              | (7U & (vlSelf->img_in[0U][0xbU] >> 0x11U))));
    vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xdU] >> 8U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xcU] >> 0xdU)) 
              | (7U & (vlSelf->img_in[0U][0xbU] >> 0x12U))));
    vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xdU] >> 9U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xcU] >> 0xeU)) 
              | (7U & (vlSelf->img_in[0U][0xbU] >> 0x13U))));
    vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xdU] >> 0xaU)) 
           | ((0x38U & (vlSelf->img_in[0U][0xcU] >> 0xfU)) 
              | (7U & (vlSelf->img_in[0U][0xbU] >> 0x14U))));
    vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xdU] >> 0xbU)) 
           | ((0x38U & (vlSelf->img_in[0U][0xcU] >> 0x10U)) 
              | (7U & (vlSelf->img_in[0U][0xbU] >> 0x15U))));
    vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xdU] >> 0xcU)) 
           | ((0x38U & (vlSelf->img_in[0U][0xcU] >> 0x11U)) 
              | (7U & (vlSelf->img_in[0U][0xbU] >> 0x16U))));
    vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xdU] >> 0xdU)) 
           | ((0x38U & (vlSelf->img_in[0U][0xcU] >> 0x12U)) 
              | (7U & (vlSelf->img_in[0U][0xbU] >> 0x17U))));
    vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xdU] >> 0xeU)) 
           | ((0x38U & (vlSelf->img_in[0U][0xcU] >> 0x13U)) 
              | (7U & (vlSelf->img_in[0U][0xbU] >> 0x18U))));
    vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xdU] >> 0xfU)) 
           | ((0x38U & (vlSelf->img_in[0U][0xcU] >> 0x14U)) 
              | (7U & (vlSelf->img_in[0U][0xbU] >> 0x19U))));
    vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xdU] >> 0x10U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xcU] >> 0x15U)) 
              | (7U & (vlSelf->img_in[0U][0xbU] >> 0x1aU))));
    vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xdU] >> 0x11U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xcU] >> 0x16U)) 
              | (7U & (vlSelf->img_in[0U][0xbU] >> 0x1bU))));
    vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xdU] >> 0x12U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xcU] >> 0x17U)) 
              | (7U & (vlSelf->img_in[0U][0xbU] >> 0x1cU))));
    vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xdU] >> 0x13U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xcU] >> 0x18U)) 
              | (vlSelf->img_in[0U][0xbU] >> 0x1dU)));
    vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xdU] >> 0x14U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xcU] >> 0x19U)) 
              | (7U & ((vlSelf->img_in[0U][0xcU] << 2U) 
                       | (vlSelf->img_in[0U][0xbU] 
                          >> 0x1eU)))));
    vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xdU] >> 0x15U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xcU] >> 0x1aU)) 
              | (7U & ((vlSelf->img_in[0U][0xcU] << 1U) 
                       | (vlSelf->img_in[0U][0xbU] 
                          >> 0x1fU)))));
    vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xdU] >> 0x16U)) 
           | ((0x38U & ((vlSelf->img_in[0U][0xdU] << 5U) 
                        | (0x18U & (vlSelf->img_in[0U][0xcU] 
                                    >> 0x1bU)))) | 
              (7U & vlSelf->img_in[0U][0xcU])));
    vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xdU] >> 0x17U)) 
           | ((0x38U & ((vlSelf->img_in[0U][0xdU] << 4U) 
                        | (8U & (vlSelf->img_in[0U][0xcU] 
                                 >> 0x1cU)))) | (7U 
                                                 & (vlSelf->img_in
                                                    [0U][0xcU] 
                                                    >> 1U))));
    vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][0xeU] << 8U) 
                      | (0xc0U & (vlSelf->img_in[0U][0xdU] 
                                  >> 0x18U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][0xdU] 
                                                      << 3U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][0xcU] 
                                                        >> 2U))));
    vlSelf->__PVT__out_row_gen__BRA__12__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][0xeU] << 7U) 
                      | (0x40U & (vlSelf->img_in[0U][0xdU] 
                                  >> 0x19U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][0xdU] 
                                                      << 2U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][0xcU] 
                                                        >> 3U))));
    vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xeU] << 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xdU] >> 1U)) 
              | (7U & (vlSelf->img_in[0U][0xcU] >> 6U))));
    vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xeU] << 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xdU] >> 2U)) 
              | (7U & (vlSelf->img_in[0U][0xcU] >> 7U))));
    vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xeU] << 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xdU] >> 3U)) 
              | (7U & (vlSelf->img_in[0U][0xcU] >> 8U))));
    vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xeU] << 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xdU] >> 4U)) 
              | (7U & (vlSelf->img_in[0U][0xcU] >> 9U))));
    vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch 
        = ((0x1c0U & vlSelf->img_in[0U][0xeU]) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][0xdU] 
                                                      >> 5U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][0xcU] 
                                                        >> 0xaU))));
    vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xeU] >> 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xdU] >> 6U)) 
              | (7U & (vlSelf->img_in[0U][0xcU] >> 0xbU))));
    vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xeU] >> 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xdU] >> 7U)) 
              | (7U & (vlSelf->img_in[0U][0xcU] >> 0xcU))));
    vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xeU] >> 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xdU] >> 8U)) 
              | (7U & (vlSelf->img_in[0U][0xcU] >> 0xdU))));
    vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xeU] >> 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xdU] >> 9U)) 
              | (7U & (vlSelf->img_in[0U][0xcU] >> 0xeU))));
    vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xeU] >> 5U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xdU] >> 0xaU)) 
              | (7U & (vlSelf->img_in[0U][0xcU] >> 0xfU))));
    vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xeU] >> 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xdU] >> 0xbU)) 
              | (7U & (vlSelf->img_in[0U][0xcU] >> 0x10U))));
    vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xeU] >> 7U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xdU] >> 0xcU)) 
              | (7U & (vlSelf->img_in[0U][0xcU] >> 0x11U))));
    vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xeU] >> 8U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xdU] >> 0xdU)) 
              | (7U & (vlSelf->img_in[0U][0xcU] >> 0x12U))));
    vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xeU] >> 9U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xdU] >> 0xeU)) 
              | (7U & (vlSelf->img_in[0U][0xcU] >> 0x13U))));
    vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xeU] >> 0xaU)) 
           | ((0x38U & (vlSelf->img_in[0U][0xdU] >> 0xfU)) 
              | (7U & (vlSelf->img_in[0U][0xcU] >> 0x14U))));
    vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xeU] >> 0xbU)) 
           | ((0x38U & (vlSelf->img_in[0U][0xdU] >> 0x10U)) 
              | (7U & (vlSelf->img_in[0U][0xcU] >> 0x15U))));
    vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xeU] >> 0xcU)) 
           | ((0x38U & (vlSelf->img_in[0U][0xdU] >> 0x11U)) 
              | (7U & (vlSelf->img_in[0U][0xcU] >> 0x16U))));
    vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xeU] >> 0xdU)) 
           | ((0x38U & (vlSelf->img_in[0U][0xdU] >> 0x12U)) 
              | (7U & (vlSelf->img_in[0U][0xcU] >> 0x17U))));
    vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xeU] >> 0xeU)) 
           | ((0x38U & (vlSelf->img_in[0U][0xdU] >> 0x13U)) 
              | (7U & (vlSelf->img_in[0U][0xcU] >> 0x18U))));
    vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xeU] >> 0xfU)) 
           | ((0x38U & (vlSelf->img_in[0U][0xdU] >> 0x14U)) 
              | (7U & (vlSelf->img_in[0U][0xcU] >> 0x19U))));
    vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xeU] >> 0x10U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xdU] >> 0x15U)) 
              | (7U & (vlSelf->img_in[0U][0xcU] >> 0x1aU))));
    vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xeU] >> 0x11U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xdU] >> 0x16U)) 
              | (7U & (vlSelf->img_in[0U][0xcU] >> 0x1bU))));
    vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xeU] >> 0x12U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xdU] >> 0x17U)) 
              | (7U & (vlSelf->img_in[0U][0xcU] >> 0x1cU))));
    vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xeU] >> 0x13U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xdU] >> 0x18U)) 
              | (vlSelf->img_in[0U][0xcU] >> 0x1dU)));
    vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xeU] >> 0x14U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xdU] >> 0x19U)) 
              | (7U & ((vlSelf->img_in[0U][0xdU] << 2U) 
                       | (vlSelf->img_in[0U][0xcU] 
                          >> 0x1eU)))));
    vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xeU] >> 0x15U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xdU] >> 0x1aU)) 
              | (7U & ((vlSelf->img_in[0U][0xdU] << 1U) 
                       | (vlSelf->img_in[0U][0xcU] 
                          >> 0x1fU)))));
    vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xeU] >> 0x16U)) 
           | ((0x38U & ((vlSelf->img_in[0U][0xeU] << 5U) 
                        | (0x18U & (vlSelf->img_in[0U][0xdU] 
                                    >> 0x1bU)))) | 
              (7U & vlSelf->img_in[0U][0xdU])));
    vlSelf->__PVT__out_row_gen__BRA__13__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xeU] >> 0x17U)) 
           | ((0x38U & ((vlSelf->img_in[0U][0xeU] << 4U) 
                        | (8U & (vlSelf->img_in[0U][0xdU] 
                                 >> 0x1cU)))) | (7U 
                                                 & (vlSelf->img_in
                                                    [0U][0xdU] 
                                                    >> 1U))));
    vlSelf->__PVT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xfU] << 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xeU] << 1U)) 
              | (7U & (vlSelf->img_in[0U][0xdU] >> 4U))));
    vlSelf->__PVT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xfU] << 5U)) 
           | ((0x38U & vlSelf->img_in[0U][0xeU]) | 
              (7U & (vlSelf->img_in[0U][0xdU] >> 5U))));
    vlSelf->__PVT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xfU] << 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xeU] >> 1U)) 
              | (7U & (vlSelf->img_in[0U][0xdU] >> 6U))));
    vlSelf->__PVT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xfU] << 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xeU] >> 2U)) 
              | (7U & (vlSelf->img_in[0U][0xdU] >> 7U))));
    vlSelf->__PVT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xfU] << 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xeU] >> 3U)) 
              | (7U & (vlSelf->img_in[0U][0xdU] >> 8U))));
    vlSelf->__PVT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xfU] << 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xeU] >> 4U)) 
              | (7U & (vlSelf->img_in[0U][0xdU] >> 9U))));
    vlSelf->__PVT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch 
        = ((0x1c0U & vlSelf->img_in[0U][0xfU]) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][0xeU] 
                                                      >> 5U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][0xdU] 
                                                        >> 0xaU))));
    vlSelf->__PVT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xfU] >> 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xeU] >> 6U)) 
              | (7U & (vlSelf->img_in[0U][0xdU] >> 0xbU))));
    vlSelf->__PVT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xfU] >> 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xeU] >> 7U)) 
              | (7U & (vlSelf->img_in[0U][0xdU] >> 0xcU))));
    vlSelf->__PVT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xfU] >> 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xeU] >> 8U)) 
              | (7U & (vlSelf->img_in[0U][0xdU] >> 0xdU))));
    vlSelf->__PVT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xfU] >> 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xeU] >> 9U)) 
              | (7U & (vlSelf->img_in[0U][0xdU] >> 0xeU))));
    vlSelf->__PVT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xfU] >> 5U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xeU] >> 0xaU)) 
              | (7U & (vlSelf->img_in[0U][0xdU] >> 0xfU))));
    vlSelf->__PVT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xfU] >> 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xeU] >> 0xbU)) 
              | (7U & (vlSelf->img_in[0U][0xdU] >> 0x10U))));
    vlSelf->__PVT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xfU] >> 7U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xeU] >> 0xcU)) 
              | (7U & (vlSelf->img_in[0U][0xdU] >> 0x11U))));
    vlSelf->__PVT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xfU] >> 8U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xeU] >> 0xdU)) 
              | (7U & (vlSelf->img_in[0U][0xdU] >> 0x12U))));
    vlSelf->__PVT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xfU] >> 9U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xeU] >> 0xeU)) 
              | (7U & (vlSelf->img_in[0U][0xdU] >> 0x13U))));
    vlSelf->__PVT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xfU] >> 0xaU)) 
           | ((0x38U & (vlSelf->img_in[0U][0xeU] >> 0xfU)) 
              | (7U & (vlSelf->img_in[0U][0xdU] >> 0x14U))));
    vlSelf->__PVT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xfU] >> 0xbU)) 
           | ((0x38U & (vlSelf->img_in[0U][0xeU] >> 0x10U)) 
              | (7U & (vlSelf->img_in[0U][0xdU] >> 0x15U))));
    vlSelf->__PVT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xfU] >> 0xcU)) 
           | ((0x38U & (vlSelf->img_in[0U][0xeU] >> 0x11U)) 
              | (7U & (vlSelf->img_in[0U][0xdU] >> 0x16U))));
    vlSelf->__PVT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xfU] >> 0xdU)) 
           | ((0x38U & (vlSelf->img_in[0U][0xeU] >> 0x12U)) 
              | (7U & (vlSelf->img_in[0U][0xdU] >> 0x17U))));
    vlSelf->__PVT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xfU] >> 0xeU)) 
           | ((0x38U & (vlSelf->img_in[0U][0xeU] >> 0x13U)) 
              | (7U & (vlSelf->img_in[0U][0xdU] >> 0x18U))));
    vlSelf->__PVT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xfU] >> 0xfU)) 
           | ((0x38U & (vlSelf->img_in[0U][0xeU] >> 0x14U)) 
              | (7U & (vlSelf->img_in[0U][0xdU] >> 0x19U))));
    vlSelf->__PVT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xfU] >> 0x10U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xeU] >> 0x15U)) 
              | (7U & (vlSelf->img_in[0U][0xdU] >> 0x1aU))));
    vlSelf->__PVT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xfU] >> 0x11U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xeU] >> 0x16U)) 
              | (7U & (vlSelf->img_in[0U][0xdU] >> 0x1bU))));
    vlSelf->__PVT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xfU] >> 0x12U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xeU] >> 0x17U)) 
              | (7U & (vlSelf->img_in[0U][0xdU] >> 0x1cU))));
    vlSelf->__PVT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xfU] >> 0x13U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xeU] >> 0x18U)) 
              | (vlSelf->img_in[0U][0xdU] >> 0x1dU)));
    vlSelf->__PVT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xfU] >> 0x14U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xeU] >> 0x19U)) 
              | (7U & ((vlSelf->img_in[0U][0xeU] << 2U) 
                       | (vlSelf->img_in[0U][0xdU] 
                          >> 0x1eU)))));
    vlSelf->__PVT__out_row_gen__BRA__14__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0xfU] >> 0x15U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xeU] >> 0x1aU)) 
              | (7U & ((vlSelf->img_in[0U][0xeU] << 1U) 
                       | (vlSelf->img_in[0U][0xdU] 
                          >> 0x1fU)))));
    vlSelf->__PVT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][0x10U] << 8U) 
                      | (0xc0U & (vlSelf->img_in[0U][0xfU] 
                                  >> 0x18U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][0xfU] 
                                                      << 3U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][0xeU] 
                                                        >> 2U))));
    vlSelf->__PVT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][0x10U] << 7U) 
                      | (0x40U & (vlSelf->img_in[0U][0xfU] 
                                  >> 0x19U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][0xfU] 
                                                      << 2U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][0xeU] 
                                                        >> 3U))));
    vlSelf->__PVT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x10U] << 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xfU] << 1U)) 
              | (7U & (vlSelf->img_in[0U][0xeU] >> 4U))));
    vlSelf->__PVT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x10U] << 5U)) 
           | ((0x38U & vlSelf->img_in[0U][0xfU]) | 
              (7U & (vlSelf->img_in[0U][0xeU] >> 5U))));
    vlSelf->__PVT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x10U] << 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xfU] >> 1U)) 
              | (7U & (vlSelf->img_in[0U][0xeU] >> 6U))));
    vlSelf->__PVT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x10U] << 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xfU] >> 2U)) 
              | (7U & (vlSelf->img_in[0U][0xeU] >> 7U))));
    vlSelf->__PVT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x10U] << 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xfU] >> 3U)) 
              | (7U & (vlSelf->img_in[0U][0xeU] >> 8U))));
    vlSelf->__PVT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x10U] << 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xfU] >> 4U)) 
              | (7U & (vlSelf->img_in[0U][0xeU] >> 9U))));
    vlSelf->__PVT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch 
        = ((0x1c0U & vlSelf->img_in[0U][0x10U]) | (
                                                   (0x38U 
                                                    & (vlSelf->img_in
                                                       [0U][0xfU] 
                                                       >> 5U)) 
                                                   | (7U 
                                                      & (vlSelf->img_in
                                                         [0U][0xeU] 
                                                         >> 0xaU))));
    vlSelf->__PVT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x10U] >> 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xfU] >> 6U)) 
              | (7U & (vlSelf->img_in[0U][0xeU] >> 0xbU))));
    vlSelf->__PVT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x10U] >> 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xfU] >> 7U)) 
              | (7U & (vlSelf->img_in[0U][0xeU] >> 0xcU))));
    vlSelf->__PVT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x10U] >> 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xfU] >> 8U)) 
              | (7U & (vlSelf->img_in[0U][0xeU] >> 0xdU))));
    vlSelf->__PVT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x10U] >> 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xfU] >> 9U)) 
              | (7U & (vlSelf->img_in[0U][0xeU] >> 0xeU))));
    vlSelf->__PVT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x10U] >> 5U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xfU] >> 0xaU)) 
              | (7U & (vlSelf->img_in[0U][0xeU] >> 0xfU))));
    vlSelf->__PVT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x10U] >> 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xfU] >> 0xbU)) 
              | (7U & (vlSelf->img_in[0U][0xeU] >> 0x10U))));
    vlSelf->__PVT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x10U] >> 7U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xfU] >> 0xcU)) 
              | (7U & (vlSelf->img_in[0U][0xeU] >> 0x11U))));
    vlSelf->__PVT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x10U] >> 8U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xfU] >> 0xdU)) 
              | (7U & (vlSelf->img_in[0U][0xeU] >> 0x12U))));
    vlSelf->__PVT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x10U] >> 9U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xfU] >> 0xeU)) 
              | (7U & (vlSelf->img_in[0U][0xeU] >> 0x13U))));
    vlSelf->__PVT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x10U] >> 0xaU)) 
           | ((0x38U & (vlSelf->img_in[0U][0xfU] >> 0xfU)) 
              | (7U & (vlSelf->img_in[0U][0xeU] >> 0x14U))));
    vlSelf->__PVT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x10U] >> 0xbU)) 
           | ((0x38U & (vlSelf->img_in[0U][0xfU] >> 0x10U)) 
              | (7U & (vlSelf->img_in[0U][0xeU] >> 0x15U))));
    vlSelf->__PVT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x10U] >> 0xcU)) 
           | ((0x38U & (vlSelf->img_in[0U][0xfU] >> 0x11U)) 
              | (7U & (vlSelf->img_in[0U][0xeU] >> 0x16U))));
    vlSelf->__PVT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x10U] >> 0xdU)) 
           | ((0x38U & (vlSelf->img_in[0U][0xfU] >> 0x12U)) 
              | (7U & (vlSelf->img_in[0U][0xeU] >> 0x17U))));
    vlSelf->__PVT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x10U] >> 0xeU)) 
           | ((0x38U & (vlSelf->img_in[0U][0xfU] >> 0x13U)) 
              | (7U & (vlSelf->img_in[0U][0xeU] >> 0x18U))));
    vlSelf->__PVT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x10U] >> 0xfU)) 
           | ((0x38U & (vlSelf->img_in[0U][0xfU] >> 0x14U)) 
              | (7U & (vlSelf->img_in[0U][0xeU] >> 0x19U))));
    vlSelf->__PVT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x10U] >> 0x10U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xfU] >> 0x15U)) 
              | (7U & (vlSelf->img_in[0U][0xeU] >> 0x1aU))));
    vlSelf->__PVT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x10U] >> 0x11U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xfU] >> 0x16U)) 
              | (7U & (vlSelf->img_in[0U][0xeU] >> 0x1bU))));
    vlSelf->__PVT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x10U] >> 0x12U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xfU] >> 0x17U)) 
              | (7U & (vlSelf->img_in[0U][0xeU] >> 0x1cU))));
    vlSelf->__PVT__out_row_gen__BRA__15__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x10U] >> 0x13U)) 
           | ((0x38U & (vlSelf->img_in[0U][0xfU] >> 0x18U)) 
              | (vlSelf->img_in[0U][0xeU] >> 0x1dU)));
    vlSelf->__PVT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x10U] >> 0x16U)) 
           | ((0x38U & ((vlSelf->img_in[0U][0x10U] 
                         << 5U) | (0x18U & (vlSelf->img_in
                                            [0U][0xfU] 
                                            >> 0x1bU)))) 
              | (7U & vlSelf->img_in[0U][0xfU])));
    vlSelf->__PVT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x10U] >> 0x17U)) 
           | ((0x38U & ((vlSelf->img_in[0U][0x10U] 
                         << 4U) | (8U & (vlSelf->img_in
                                         [0U][0xfU] 
                                         >> 0x1cU)))) 
              | (7U & (vlSelf->img_in[0U][0xfU] >> 1U))));
    vlSelf->__PVT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][0x11U] << 8U) 
                      | (0xc0U & (vlSelf->img_in[0U][0x10U] 
                                  >> 0x18U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][0x10U] 
                                                      << 3U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][0xfU] 
                                                        >> 2U))));
    vlSelf->__PVT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][0x11U] << 7U) 
                      | (0x40U & (vlSelf->img_in[0U][0x10U] 
                                  >> 0x19U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][0x10U] 
                                                      << 2U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][0xfU] 
                                                        >> 3U))));
    vlSelf->__PVT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x11U] << 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x10U] << 1U)) 
              | (7U & (vlSelf->img_in[0U][0xfU] >> 4U))));
    vlSelf->__PVT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x11U] << 5U)) 
           | ((0x38U & vlSelf->img_in[0U][0x10U]) | 
              (7U & (vlSelf->img_in[0U][0xfU] >> 5U))));
    vlSelf->__PVT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x11U] << 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x10U] >> 1U)) 
              | (7U & (vlSelf->img_in[0U][0xfU] >> 6U))));
    vlSelf->__PVT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x11U] << 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x10U] >> 2U)) 
              | (7U & (vlSelf->img_in[0U][0xfU] >> 7U))));
    vlSelf->__PVT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x11U] << 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x10U] >> 3U)) 
              | (7U & (vlSelf->img_in[0U][0xfU] >> 8U))));
    vlSelf->__PVT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x11U] << 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x10U] >> 4U)) 
              | (7U & (vlSelf->img_in[0U][0xfU] >> 9U))));
    vlSelf->__PVT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch 
        = ((0x1c0U & vlSelf->img_in[0U][0x11U]) | (
                                                   (0x38U 
                                                    & (vlSelf->img_in
                                                       [0U][0x10U] 
                                                       >> 5U)) 
                                                   | (7U 
                                                      & (vlSelf->img_in
                                                         [0U][0xfU] 
                                                         >> 0xaU))));
    vlSelf->__PVT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x11U] >> 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x10U] >> 6U)) 
              | (7U & (vlSelf->img_in[0U][0xfU] >> 0xbU))));
    vlSelf->__PVT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x11U] >> 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x10U] >> 7U)) 
              | (7U & (vlSelf->img_in[0U][0xfU] >> 0xcU))));
    vlSelf->__PVT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x11U] >> 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x10U] >> 8U)) 
              | (7U & (vlSelf->img_in[0U][0xfU] >> 0xdU))));
    vlSelf->__PVT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x11U] >> 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x10U] >> 9U)) 
              | (7U & (vlSelf->img_in[0U][0xfU] >> 0xeU))));
    vlSelf->__PVT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x11U] >> 5U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x10U] >> 0xaU)) 
              | (7U & (vlSelf->img_in[0U][0xfU] >> 0xfU))));
    vlSelf->__PVT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x11U] >> 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x10U] >> 0xbU)) 
              | (7U & (vlSelf->img_in[0U][0xfU] >> 0x10U))));
    vlSelf->__PVT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x11U] >> 7U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x10U] >> 0xcU)) 
              | (7U & (vlSelf->img_in[0U][0xfU] >> 0x11U))));
    vlSelf->__PVT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x11U] >> 8U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x10U] >> 0xdU)) 
              | (7U & (vlSelf->img_in[0U][0xfU] >> 0x12U))));
    vlSelf->__PVT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x11U] >> 9U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x10U] >> 0xeU)) 
              | (7U & (vlSelf->img_in[0U][0xfU] >> 0x13U))));
    vlSelf->__PVT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x11U] >> 0xaU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x10U] >> 0xfU)) 
              | (7U & (vlSelf->img_in[0U][0xfU] >> 0x14U))));
    vlSelf->__PVT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x11U] >> 0xbU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x10U] >> 0x10U)) 
              | (7U & (vlSelf->img_in[0U][0xfU] >> 0x15U))));
    vlSelf->__PVT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x11U] >> 0xcU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x10U] >> 0x11U)) 
              | (7U & (vlSelf->img_in[0U][0xfU] >> 0x16U))));
    vlSelf->__PVT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x11U] >> 0xdU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x10U] >> 0x12U)) 
              | (7U & (vlSelf->img_in[0U][0xfU] >> 0x17U))));
    vlSelf->__PVT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x11U] >> 0xeU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x10U] >> 0x13U)) 
              | (7U & (vlSelf->img_in[0U][0xfU] >> 0x18U))));
    vlSelf->__PVT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x11U] >> 0xfU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x10U] >> 0x14U)) 
              | (7U & (vlSelf->img_in[0U][0xfU] >> 0x19U))));
    vlSelf->__PVT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x11U] >> 0x10U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x10U] >> 0x15U)) 
              | (7U & (vlSelf->img_in[0U][0xfU] >> 0x1aU))));
    vlSelf->__PVT__out_row_gen__BRA__16__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x11U] >> 0x11U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x10U] >> 0x16U)) 
              | (7U & (vlSelf->img_in[0U][0xfU] >> 0x1bU))));
    vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x11U] >> 0x14U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x10U] >> 0x19U)) 
              | (7U & ((vlSelf->img_in[0U][0x10U] << 2U) 
                       | (vlSelf->img_in[0U][0xfU] 
                          >> 0x1eU)))));
    vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x11U] >> 0x15U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x10U] >> 0x1aU)) 
              | (7U & ((vlSelf->img_in[0U][0x10U] << 1U) 
                       | (vlSelf->img_in[0U][0xfU] 
                          >> 0x1fU)))));
    vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x11U] >> 0x16U)) 
           | ((0x38U & ((vlSelf->img_in[0U][0x11U] 
                         << 5U) | (0x18U & (vlSelf->img_in
                                            [0U][0x10U] 
                                            >> 0x1bU)))) 
              | (7U & vlSelf->img_in[0U][0x10U])));
    vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x11U] >> 0x17U)) 
           | ((0x38U & ((vlSelf->img_in[0U][0x11U] 
                         << 4U) | (8U & (vlSelf->img_in
                                         [0U][0x10U] 
                                         >> 0x1cU)))) 
              | (7U & (vlSelf->img_in[0U][0x10U] >> 1U))));
    vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][0x12U] << 8U) 
                      | (0xc0U & (vlSelf->img_in[0U][0x11U] 
                                  >> 0x18U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][0x11U] 
                                                      << 3U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][0x10U] 
                                                        >> 2U))));
    vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][0x12U] << 7U) 
                      | (0x40U & (vlSelf->img_in[0U][0x11U] 
                                  >> 0x19U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][0x11U] 
                                                      << 2U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][0x10U] 
                                                        >> 3U))));
    vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x12U] << 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x11U] << 1U)) 
              | (7U & (vlSelf->img_in[0U][0x10U] >> 4U))));
    vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x12U] << 5U)) 
           | ((0x38U & vlSelf->img_in[0U][0x11U]) | 
              (7U & (vlSelf->img_in[0U][0x10U] >> 5U))));
    vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x12U] << 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x11U] >> 1U)) 
              | (7U & (vlSelf->img_in[0U][0x10U] >> 6U))));
    vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x12U] << 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x11U] >> 2U)) 
              | (7U & (vlSelf->img_in[0U][0x10U] >> 7U))));
    vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x12U] << 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x11U] >> 3U)) 
              | (7U & (vlSelf->img_in[0U][0x10U] >> 8U))));
    vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x12U] << 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x11U] >> 4U)) 
              | (7U & (vlSelf->img_in[0U][0x10U] >> 9U))));
    vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch 
        = ((0x1c0U & vlSelf->img_in[0U][0x12U]) | (
                                                   (0x38U 
                                                    & (vlSelf->img_in
                                                       [0U][0x11U] 
                                                       >> 5U)) 
                                                   | (7U 
                                                      & (vlSelf->img_in
                                                         [0U][0x10U] 
                                                         >> 0xaU))));
    vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x12U] >> 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x11U] >> 6U)) 
              | (7U & (vlSelf->img_in[0U][0x10U] >> 0xbU))));
    vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x12U] >> 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x11U] >> 7U)) 
              | (7U & (vlSelf->img_in[0U][0x10U] >> 0xcU))));
    vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x12U] >> 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x11U] >> 8U)) 
              | (7U & (vlSelf->img_in[0U][0x10U] >> 0xdU))));
    vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x12U] >> 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x11U] >> 9U)) 
              | (7U & (vlSelf->img_in[0U][0x10U] >> 0xeU))));
    vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x12U] >> 5U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x11U] >> 0xaU)) 
              | (7U & (vlSelf->img_in[0U][0x10U] >> 0xfU))));
    vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x12U] >> 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x11U] >> 0xbU)) 
              | (7U & (vlSelf->img_in[0U][0x10U] >> 0x10U))));
    vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x12U] >> 7U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x11U] >> 0xcU)) 
              | (7U & (vlSelf->img_in[0U][0x10U] >> 0x11U))));
    vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x12U] >> 8U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x11U] >> 0xdU)) 
              | (7U & (vlSelf->img_in[0U][0x10U] >> 0x12U))));
    vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x12U] >> 9U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x11U] >> 0xeU)) 
              | (7U & (vlSelf->img_in[0U][0x10U] >> 0x13U))));
    vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x12U] >> 0xaU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x11U] >> 0xfU)) 
              | (7U & (vlSelf->img_in[0U][0x10U] >> 0x14U))));
    vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x12U] >> 0xbU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x11U] >> 0x10U)) 
              | (7U & (vlSelf->img_in[0U][0x10U] >> 0x15U))));
    vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x12U] >> 0xcU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x11U] >> 0x11U)) 
              | (7U & (vlSelf->img_in[0U][0x10U] >> 0x16U))));
    vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x12U] >> 0xdU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x11U] >> 0x12U)) 
              | (7U & (vlSelf->img_in[0U][0x10U] >> 0x17U))));
    vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x12U] >> 0xeU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x11U] >> 0x13U)) 
              | (7U & (vlSelf->img_in[0U][0x10U] >> 0x18U))));
    vlSelf->__PVT__out_row_gen__BRA__17__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x12U] >> 0xfU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x11U] >> 0x14U)) 
              | (7U & (vlSelf->img_in[0U][0x10U] >> 0x19U))));
    vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x12U] >> 0x12U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x11U] >> 0x17U)) 
              | (7U & (vlSelf->img_in[0U][0x10U] >> 0x1cU))));
    vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x12U] >> 0x13U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x11U] >> 0x18U)) 
              | (vlSelf->img_in[0U][0x10U] >> 0x1dU)));
    vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x12U] >> 0x14U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x11U] >> 0x19U)) 
              | (7U & ((vlSelf->img_in[0U][0x11U] << 2U) 
                       | (vlSelf->img_in[0U][0x10U] 
                          >> 0x1eU)))));
    vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x12U] >> 0x15U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x11U] >> 0x1aU)) 
              | (7U & ((vlSelf->img_in[0U][0x11U] << 1U) 
                       | (vlSelf->img_in[0U][0x10U] 
                          >> 0x1fU)))));
    vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x12U] >> 0x16U)) 
           | ((0x38U & ((vlSelf->img_in[0U][0x12U] 
                         << 5U) | (0x18U & (vlSelf->img_in
                                            [0U][0x11U] 
                                            >> 0x1bU)))) 
              | (7U & vlSelf->img_in[0U][0x11U])));
    vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x12U] >> 0x17U)) 
           | ((0x38U & ((vlSelf->img_in[0U][0x12U] 
                         << 4U) | (8U & (vlSelf->img_in
                                         [0U][0x11U] 
                                         >> 0x1cU)))) 
              | (7U & (vlSelf->img_in[0U][0x11U] >> 1U))));
    vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][0x13U] << 8U) 
                      | (0xc0U & (vlSelf->img_in[0U][0x12U] 
                                  >> 0x18U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][0x12U] 
                                                      << 3U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][0x11U] 
                                                        >> 2U))));
    vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][0x13U] << 7U) 
                      | (0x40U & (vlSelf->img_in[0U][0x12U] 
                                  >> 0x19U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][0x12U] 
                                                      << 2U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][0x11U] 
                                                        >> 3U))));
    vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x13U] << 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x12U] << 1U)) 
              | (7U & (vlSelf->img_in[0U][0x11U] >> 4U))));
    vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x13U] << 5U)) 
           | ((0x38U & vlSelf->img_in[0U][0x12U]) | 
              (7U & (vlSelf->img_in[0U][0x11U] >> 5U))));
    vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x13U] << 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x12U] >> 1U)) 
              | (7U & (vlSelf->img_in[0U][0x11U] >> 6U))));
    vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x13U] << 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x12U] >> 2U)) 
              | (7U & (vlSelf->img_in[0U][0x11U] >> 7U))));
    vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x13U] << 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x12U] >> 3U)) 
              | (7U & (vlSelf->img_in[0U][0x11U] >> 8U))));
    vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x13U] << 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x12U] >> 4U)) 
              | (7U & (vlSelf->img_in[0U][0x11U] >> 9U))));
    vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch 
        = ((0x1c0U & vlSelf->img_in[0U][0x13U]) | (
                                                   (0x38U 
                                                    & (vlSelf->img_in
                                                       [0U][0x12U] 
                                                       >> 5U)) 
                                                   | (7U 
                                                      & (vlSelf->img_in
                                                         [0U][0x11U] 
                                                         >> 0xaU))));
    vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x13U] >> 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x12U] >> 6U)) 
              | (7U & (vlSelf->img_in[0U][0x11U] >> 0xbU))));
    vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x13U] >> 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x12U] >> 7U)) 
              | (7U & (vlSelf->img_in[0U][0x11U] >> 0xcU))));
    vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x13U] >> 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x12U] >> 8U)) 
              | (7U & (vlSelf->img_in[0U][0x11U] >> 0xdU))));
    vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x13U] >> 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x12U] >> 9U)) 
              | (7U & (vlSelf->img_in[0U][0x11U] >> 0xeU))));
    vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x13U] >> 5U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x12U] >> 0xaU)) 
              | (7U & (vlSelf->img_in[0U][0x11U] >> 0xfU))));
    vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x13U] >> 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x12U] >> 0xbU)) 
              | (7U & (vlSelf->img_in[0U][0x11U] >> 0x10U))));
    vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x13U] >> 7U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x12U] >> 0xcU)) 
              | (7U & (vlSelf->img_in[0U][0x11U] >> 0x11U))));
    vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x13U] >> 8U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x12U] >> 0xdU)) 
              | (7U & (vlSelf->img_in[0U][0x11U] >> 0x12U))));
    vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x13U] >> 9U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x12U] >> 0xeU)) 
              | (7U & (vlSelf->img_in[0U][0x11U] >> 0x13U))));
    vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x13U] >> 0xaU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x12U] >> 0xfU)) 
              | (7U & (vlSelf->img_in[0U][0x11U] >> 0x14U))));
    vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x13U] >> 0xbU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x12U] >> 0x10U)) 
              | (7U & (vlSelf->img_in[0U][0x11U] >> 0x15U))));
    vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x13U] >> 0xcU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x12U] >> 0x11U)) 
              | (7U & (vlSelf->img_in[0U][0x11U] >> 0x16U))));
    vlSelf->__PVT__out_row_gen__BRA__18__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x13U] >> 0xdU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x12U] >> 0x12U)) 
              | (7U & (vlSelf->img_in[0U][0x11U] >> 0x17U))));
    vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x13U] >> 0x10U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x12U] >> 0x15U)) 
              | (7U & (vlSelf->img_in[0U][0x11U] >> 0x1aU))));
    vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x13U] >> 0x11U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x12U] >> 0x16U)) 
              | (7U & (vlSelf->img_in[0U][0x11U] >> 0x1bU))));
    vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x13U] >> 0x12U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x12U] >> 0x17U)) 
              | (7U & (vlSelf->img_in[0U][0x11U] >> 0x1cU))));
    vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x13U] >> 0x13U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x12U] >> 0x18U)) 
              | (vlSelf->img_in[0U][0x11U] >> 0x1dU)));
    vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x13U] >> 0x14U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x12U] >> 0x19U)) 
              | (7U & ((vlSelf->img_in[0U][0x12U] << 2U) 
                       | (vlSelf->img_in[0U][0x11U] 
                          >> 0x1eU)))));
    vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x13U] >> 0x15U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x12U] >> 0x1aU)) 
              | (7U & ((vlSelf->img_in[0U][0x12U] << 1U) 
                       | (vlSelf->img_in[0U][0x11U] 
                          >> 0x1fU)))));
    vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x13U] >> 0x16U)) 
           | ((0x38U & ((vlSelf->img_in[0U][0x13U] 
                         << 5U) | (0x18U & (vlSelf->img_in
                                            [0U][0x12U] 
                                            >> 0x1bU)))) 
              | (7U & vlSelf->img_in[0U][0x12U])));
    vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x13U] >> 0x17U)) 
           | ((0x38U & ((vlSelf->img_in[0U][0x13U] 
                         << 4U) | (8U & (vlSelf->img_in
                                         [0U][0x12U] 
                                         >> 0x1cU)))) 
              | (7U & (vlSelf->img_in[0U][0x12U] >> 1U))));
    vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][0x14U] << 8U) 
                      | (0xc0U & (vlSelf->img_in[0U][0x13U] 
                                  >> 0x18U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][0x13U] 
                                                      << 3U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][0x12U] 
                                                        >> 2U))));
    vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][0x14U] << 7U) 
                      | (0x40U & (vlSelf->img_in[0U][0x13U] 
                                  >> 0x19U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][0x13U] 
                                                      << 2U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][0x12U] 
                                                        >> 3U))));
    vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x14U] << 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x13U] << 1U)) 
              | (7U & (vlSelf->img_in[0U][0x12U] >> 4U))));
    vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x14U] << 5U)) 
           | ((0x38U & vlSelf->img_in[0U][0x13U]) | 
              (7U & (vlSelf->img_in[0U][0x12U] >> 5U))));
    vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x14U] << 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x13U] >> 1U)) 
              | (7U & (vlSelf->img_in[0U][0x12U] >> 6U))));
    vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x14U] << 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x13U] >> 2U)) 
              | (7U & (vlSelf->img_in[0U][0x12U] >> 7U))));
    vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x14U] << 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x13U] >> 3U)) 
              | (7U & (vlSelf->img_in[0U][0x12U] >> 8U))));
    vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x14U] << 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x13U] >> 4U)) 
              | (7U & (vlSelf->img_in[0U][0x12U] >> 9U))));
    vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch 
        = ((0x1c0U & vlSelf->img_in[0U][0x14U]) | (
                                                   (0x38U 
                                                    & (vlSelf->img_in
                                                       [0U][0x13U] 
                                                       >> 5U)) 
                                                   | (7U 
                                                      & (vlSelf->img_in
                                                         [0U][0x12U] 
                                                         >> 0xaU))));
    vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x14U] >> 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x13U] >> 6U)) 
              | (7U & (vlSelf->img_in[0U][0x12U] >> 0xbU))));
    vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x14U] >> 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x13U] >> 7U)) 
              | (7U & (vlSelf->img_in[0U][0x12U] >> 0xcU))));
    vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x14U] >> 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x13U] >> 8U)) 
              | (7U & (vlSelf->img_in[0U][0x12U] >> 0xdU))));
    vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x14U] >> 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x13U] >> 9U)) 
              | (7U & (vlSelf->img_in[0U][0x12U] >> 0xeU))));
    vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x14U] >> 5U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x13U] >> 0xaU)) 
              | (7U & (vlSelf->img_in[0U][0x12U] >> 0xfU))));
    vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x14U] >> 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x13U] >> 0xbU)) 
              | (7U & (vlSelf->img_in[0U][0x12U] >> 0x10U))));
    vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x14U] >> 7U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x13U] >> 0xcU)) 
              | (7U & (vlSelf->img_in[0U][0x12U] >> 0x11U))));
    vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x14U] >> 8U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x13U] >> 0xdU)) 
              | (7U & (vlSelf->img_in[0U][0x12U] >> 0x12U))));
    vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x14U] >> 9U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x13U] >> 0xeU)) 
              | (7U & (vlSelf->img_in[0U][0x12U] >> 0x13U))));
    vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x14U] >> 0xaU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x13U] >> 0xfU)) 
              | (7U & (vlSelf->img_in[0U][0x12U] >> 0x14U))));
    vlSelf->__PVT__out_row_gen__BRA__19__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x14U] >> 0xbU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x13U] >> 0x10U)) 
              | (7U & (vlSelf->img_in[0U][0x12U] >> 0x15U))));
    vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x14U] >> 0xeU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x13U] >> 0x13U)) 
              | (7U & (vlSelf->img_in[0U][0x12U] >> 0x18U))));
    vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x14U] >> 0xfU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x13U] >> 0x14U)) 
              | (7U & (vlSelf->img_in[0U][0x12U] >> 0x19U))));
    vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x14U] >> 0x10U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x13U] >> 0x15U)) 
              | (7U & (vlSelf->img_in[0U][0x12U] >> 0x1aU))));
    vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x14U] >> 0x11U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x13U] >> 0x16U)) 
              | (7U & (vlSelf->img_in[0U][0x12U] >> 0x1bU))));
    vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x14U] >> 0x12U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x13U] >> 0x17U)) 
              | (7U & (vlSelf->img_in[0U][0x12U] >> 0x1cU))));
    vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x14U] >> 0x13U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x13U] >> 0x18U)) 
              | (vlSelf->img_in[0U][0x12U] >> 0x1dU)));
    vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x14U] >> 0x14U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x13U] >> 0x19U)) 
              | (7U & ((vlSelf->img_in[0U][0x13U] << 2U) 
                       | (vlSelf->img_in[0U][0x12U] 
                          >> 0x1eU)))));
    vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x14U] >> 0x15U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x13U] >> 0x1aU)) 
              | (7U & ((vlSelf->img_in[0U][0x13U] << 1U) 
                       | (vlSelf->img_in[0U][0x12U] 
                          >> 0x1fU)))));
    vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x14U] >> 0x16U)) 
           | ((0x38U & ((vlSelf->img_in[0U][0x14U] 
                         << 5U) | (0x18U & (vlSelf->img_in
                                            [0U][0x13U] 
                                            >> 0x1bU)))) 
              | (7U & vlSelf->img_in[0U][0x13U])));
    vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x14U] >> 0x17U)) 
           | ((0x38U & ((vlSelf->img_in[0U][0x14U] 
                         << 4U) | (8U & (vlSelf->img_in
                                         [0U][0x13U] 
                                         >> 0x1cU)))) 
              | (7U & (vlSelf->img_in[0U][0x13U] >> 1U))));
    vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][0x15U] << 8U) 
                      | (0xc0U & (vlSelf->img_in[0U][0x14U] 
                                  >> 0x18U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][0x14U] 
                                                      << 3U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][0x13U] 
                                                        >> 2U))));
    vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][0x15U] << 7U) 
                      | (0x40U & (vlSelf->img_in[0U][0x14U] 
                                  >> 0x19U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][0x14U] 
                                                      << 2U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][0x13U] 
                                                        >> 3U))));
    vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x15U] << 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x14U] << 1U)) 
              | (7U & (vlSelf->img_in[0U][0x13U] >> 4U))));
    vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x15U] << 5U)) 
           | ((0x38U & vlSelf->img_in[0U][0x14U]) | 
              (7U & (vlSelf->img_in[0U][0x13U] >> 5U))));
    vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x15U] << 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x14U] >> 1U)) 
              | (7U & (vlSelf->img_in[0U][0x13U] >> 6U))));
    vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x15U] << 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x14U] >> 2U)) 
              | (7U & (vlSelf->img_in[0U][0x13U] >> 7U))));
    vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x15U] << 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x14U] >> 3U)) 
              | (7U & (vlSelf->img_in[0U][0x13U] >> 8U))));
    vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x15U] << 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x14U] >> 4U)) 
              | (7U & (vlSelf->img_in[0U][0x13U] >> 9U))));
    vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch 
        = ((0x1c0U & vlSelf->img_in[0U][0x15U]) | (
                                                   (0x38U 
                                                    & (vlSelf->img_in
                                                       [0U][0x14U] 
                                                       >> 5U)) 
                                                   | (7U 
                                                      & (vlSelf->img_in
                                                         [0U][0x13U] 
                                                         >> 0xaU))));
    vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x15U] >> 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x14U] >> 6U)) 
              | (7U & (vlSelf->img_in[0U][0x13U] >> 0xbU))));
    vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x15U] >> 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x14U] >> 7U)) 
              | (7U & (vlSelf->img_in[0U][0x13U] >> 0xcU))));
    vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x15U] >> 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x14U] >> 8U)) 
              | (7U & (vlSelf->img_in[0U][0x13U] >> 0xdU))));
    vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x15U] >> 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x14U] >> 9U)) 
              | (7U & (vlSelf->img_in[0U][0x13U] >> 0xeU))));
    vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x15U] >> 5U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x14U] >> 0xaU)) 
              | (7U & (vlSelf->img_in[0U][0x13U] >> 0xfU))));
    vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x15U] >> 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x14U] >> 0xbU)) 
              | (7U & (vlSelf->img_in[0U][0x13U] >> 0x10U))));
    vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x15U] >> 7U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x14U] >> 0xcU)) 
              | (7U & (vlSelf->img_in[0U][0x13U] >> 0x11U))));
    vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x15U] >> 8U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x14U] >> 0xdU)) 
              | (7U & (vlSelf->img_in[0U][0x13U] >> 0x12U))));
    vlSelf->__PVT__out_row_gen__BRA__20__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x15U] >> 9U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x14U] >> 0xeU)) 
              | (7U & (vlSelf->img_in[0U][0x13U] >> 0x13U))));
    vlSelf->__PVT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x15U] >> 0xcU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x14U] >> 0x11U)) 
              | (7U & (vlSelf->img_in[0U][0x13U] >> 0x16U))));
    vlSelf->__PVT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x15U] >> 0xdU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x14U] >> 0x12U)) 
              | (7U & (vlSelf->img_in[0U][0x13U] >> 0x17U))));
    vlSelf->__PVT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x15U] >> 0xeU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x14U] >> 0x13U)) 
              | (7U & (vlSelf->img_in[0U][0x13U] >> 0x18U))));
    vlSelf->__PVT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x15U] >> 0xfU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x14U] >> 0x14U)) 
              | (7U & (vlSelf->img_in[0U][0x13U] >> 0x19U))));
    vlSelf->__PVT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x15U] >> 0x10U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x14U] >> 0x15U)) 
              | (7U & (vlSelf->img_in[0U][0x13U] >> 0x1aU))));
    vlSelf->__PVT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x15U] >> 0x11U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x14U] >> 0x16U)) 
              | (7U & (vlSelf->img_in[0U][0x13U] >> 0x1bU))));
    vlSelf->__PVT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x15U] >> 0x12U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x14U] >> 0x17U)) 
              | (7U & (vlSelf->img_in[0U][0x13U] >> 0x1cU))));
    vlSelf->__PVT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x15U] >> 0x13U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x14U] >> 0x18U)) 
              | (vlSelf->img_in[0U][0x13U] >> 0x1dU)));
    vlSelf->__PVT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x15U] >> 0x14U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x14U] >> 0x19U)) 
              | (7U & ((vlSelf->img_in[0U][0x14U] << 2U) 
                       | (vlSelf->img_in[0U][0x13U] 
                          >> 0x1eU)))));
    vlSelf->__PVT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x15U] >> 0x15U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x14U] >> 0x1aU)) 
              | (7U & ((vlSelf->img_in[0U][0x14U] << 1U) 
                       | (vlSelf->img_in[0U][0x13U] 
                          >> 0x1fU)))));
    vlSelf->__PVT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x15U] >> 0x16U)) 
           | ((0x38U & ((vlSelf->img_in[0U][0x15U] 
                         << 5U) | (0x18U & (vlSelf->img_in
                                            [0U][0x14U] 
                                            >> 0x1bU)))) 
              | (7U & vlSelf->img_in[0U][0x14U])));
    vlSelf->__PVT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x15U] >> 0x17U)) 
           | ((0x38U & ((vlSelf->img_in[0U][0x15U] 
                         << 4U) | (8U & (vlSelf->img_in
                                         [0U][0x14U] 
                                         >> 0x1cU)))) 
              | (7U & (vlSelf->img_in[0U][0x14U] >> 1U))));
    vlSelf->__PVT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][0x16U] << 8U) 
                      | (0xc0U & (vlSelf->img_in[0U][0x15U] 
                                  >> 0x18U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][0x15U] 
                                                      << 3U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][0x14U] 
                                                        >> 2U))));
    vlSelf->__PVT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][0x16U] << 7U) 
                      | (0x40U & (vlSelf->img_in[0U][0x15U] 
                                  >> 0x19U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][0x15U] 
                                                      << 2U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][0x14U] 
                                                        >> 3U))));
    vlSelf->__PVT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x16U] << 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x15U] << 1U)) 
              | (7U & (vlSelf->img_in[0U][0x14U] >> 4U))));
    vlSelf->__PVT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x16U] << 5U)) 
           | ((0x38U & vlSelf->img_in[0U][0x15U]) | 
              (7U & (vlSelf->img_in[0U][0x14U] >> 5U))));
    vlSelf->__PVT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x16U] << 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x15U] >> 1U)) 
              | (7U & (vlSelf->img_in[0U][0x14U] >> 6U))));
    vlSelf->__PVT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x16U] << 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x15U] >> 2U)) 
              | (7U & (vlSelf->img_in[0U][0x14U] >> 7U))));
    vlSelf->__PVT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x16U] << 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x15U] >> 3U)) 
              | (7U & (vlSelf->img_in[0U][0x14U] >> 8U))));
    vlSelf->__PVT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x16U] << 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x15U] >> 4U)) 
              | (7U & (vlSelf->img_in[0U][0x14U] >> 9U))));
    vlSelf->__PVT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch 
        = ((0x1c0U & vlSelf->img_in[0U][0x16U]) | (
                                                   (0x38U 
                                                    & (vlSelf->img_in
                                                       [0U][0x15U] 
                                                       >> 5U)) 
                                                   | (7U 
                                                      & (vlSelf->img_in
                                                         [0U][0x14U] 
                                                         >> 0xaU))));
    vlSelf->__PVT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x16U] >> 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x15U] >> 6U)) 
              | (7U & (vlSelf->img_in[0U][0x14U] >> 0xbU))));
    vlSelf->__PVT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x16U] >> 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x15U] >> 7U)) 
              | (7U & (vlSelf->img_in[0U][0x14U] >> 0xcU))));
    vlSelf->__PVT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x16U] >> 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x15U] >> 8U)) 
              | (7U & (vlSelf->img_in[0U][0x14U] >> 0xdU))));
    vlSelf->__PVT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x16U] >> 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x15U] >> 9U)) 
              | (7U & (vlSelf->img_in[0U][0x14U] >> 0xeU))));
    vlSelf->__PVT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x16U] >> 5U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x15U] >> 0xaU)) 
              | (7U & (vlSelf->img_in[0U][0x14U] >> 0xfU))));
    vlSelf->__PVT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x16U] >> 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x15U] >> 0xbU)) 
              | (7U & (vlSelf->img_in[0U][0x14U] >> 0x10U))));
    vlSelf->__PVT__out_row_gen__BRA__21__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x16U] >> 7U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x15U] >> 0xcU)) 
              | (7U & (vlSelf->img_in[0U][0x14U] >> 0x11U))));
    vlSelf->__PVT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x16U] >> 0xaU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x15U] >> 0xfU)) 
              | (7U & (vlSelf->img_in[0U][0x14U] >> 0x14U))));
    vlSelf->__PVT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x16U] >> 0xbU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x15U] >> 0x10U)) 
              | (7U & (vlSelf->img_in[0U][0x14U] >> 0x15U))));
    vlSelf->__PVT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x16U] >> 0xcU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x15U] >> 0x11U)) 
              | (7U & (vlSelf->img_in[0U][0x14U] >> 0x16U))));
    vlSelf->__PVT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x16U] >> 0xdU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x15U] >> 0x12U)) 
              | (7U & (vlSelf->img_in[0U][0x14U] >> 0x17U))));
    vlSelf->__PVT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x16U] >> 0xeU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x15U] >> 0x13U)) 
              | (7U & (vlSelf->img_in[0U][0x14U] >> 0x18U))));
    vlSelf->__PVT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x16U] >> 0xfU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x15U] >> 0x14U)) 
              | (7U & (vlSelf->img_in[0U][0x14U] >> 0x19U))));
    vlSelf->__PVT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x16U] >> 0x10U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x15U] >> 0x15U)) 
              | (7U & (vlSelf->img_in[0U][0x14U] >> 0x1aU))));
    vlSelf->__PVT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x16U] >> 0x11U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x15U] >> 0x16U)) 
              | (7U & (vlSelf->img_in[0U][0x14U] >> 0x1bU))));
    vlSelf->__PVT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x16U] >> 0x12U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x15U] >> 0x17U)) 
              | (7U & (vlSelf->img_in[0U][0x14U] >> 0x1cU))));
    vlSelf->__PVT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x16U] >> 0x13U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x15U] >> 0x18U)) 
              | (vlSelf->img_in[0U][0x14U] >> 0x1dU)));
    vlSelf->__PVT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x16U] >> 0x14U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x15U] >> 0x19U)) 
              | (7U & ((vlSelf->img_in[0U][0x15U] << 2U) 
                       | (vlSelf->img_in[0U][0x14U] 
                          >> 0x1eU)))));
    vlSelf->__PVT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x16U] >> 0x15U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x15U] >> 0x1aU)) 
              | (7U & ((vlSelf->img_in[0U][0x15U] << 1U) 
                       | (vlSelf->img_in[0U][0x14U] 
                          >> 0x1fU)))));
    vlSelf->__PVT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x16U] >> 0x16U)) 
           | ((0x38U & ((vlSelf->img_in[0U][0x16U] 
                         << 5U) | (0x18U & (vlSelf->img_in
                                            [0U][0x15U] 
                                            >> 0x1bU)))) 
              | (7U & vlSelf->img_in[0U][0x15U])));
    vlSelf->__PVT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x16U] >> 0x17U)) 
           | ((0x38U & ((vlSelf->img_in[0U][0x16U] 
                         << 4U) | (8U & (vlSelf->img_in
                                         [0U][0x15U] 
                                         >> 0x1cU)))) 
              | (7U & (vlSelf->img_in[0U][0x15U] >> 1U))));
    vlSelf->__PVT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][0x17U] << 8U) 
                      | (0xc0U & (vlSelf->img_in[0U][0x16U] 
                                  >> 0x18U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][0x16U] 
                                                      << 3U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][0x15U] 
                                                        >> 2U))));
    vlSelf->__PVT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][0x17U] << 7U) 
                      | (0x40U & (vlSelf->img_in[0U][0x16U] 
                                  >> 0x19U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][0x16U] 
                                                      << 2U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][0x15U] 
                                                        >> 3U))));
    vlSelf->__PVT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x17U] << 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x16U] << 1U)) 
              | (7U & (vlSelf->img_in[0U][0x15U] >> 4U))));
    vlSelf->__PVT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x17U] << 5U)) 
           | ((0x38U & vlSelf->img_in[0U][0x16U]) | 
              (7U & (vlSelf->img_in[0U][0x15U] >> 5U))));
    vlSelf->__PVT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x17U] << 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x16U] >> 1U)) 
              | (7U & (vlSelf->img_in[0U][0x15U] >> 6U))));
    vlSelf->__PVT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x17U] << 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x16U] >> 2U)) 
              | (7U & (vlSelf->img_in[0U][0x15U] >> 7U))));
    vlSelf->__PVT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x17U] << 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x16U] >> 3U)) 
              | (7U & (vlSelf->img_in[0U][0x15U] >> 8U))));
    vlSelf->__PVT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x17U] << 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x16U] >> 4U)) 
              | (7U & (vlSelf->img_in[0U][0x15U] >> 9U))));
    vlSelf->__PVT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch 
        = ((0x1c0U & vlSelf->img_in[0U][0x17U]) | (
                                                   (0x38U 
                                                    & (vlSelf->img_in
                                                       [0U][0x16U] 
                                                       >> 5U)) 
                                                   | (7U 
                                                      & (vlSelf->img_in
                                                         [0U][0x15U] 
                                                         >> 0xaU))));
    vlSelf->__PVT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x17U] >> 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x16U] >> 6U)) 
              | (7U & (vlSelf->img_in[0U][0x15U] >> 0xbU))));
    vlSelf->__PVT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x17U] >> 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x16U] >> 7U)) 
              | (7U & (vlSelf->img_in[0U][0x15U] >> 0xcU))));
    vlSelf->__PVT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x17U] >> 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x16U] >> 8U)) 
              | (7U & (vlSelf->img_in[0U][0x15U] >> 0xdU))));
    vlSelf->__PVT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x17U] >> 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x16U] >> 9U)) 
              | (7U & (vlSelf->img_in[0U][0x15U] >> 0xeU))));
    vlSelf->__PVT__out_row_gen__BRA__22__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x17U] >> 5U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x16U] >> 0xaU)) 
              | (7U & (vlSelf->img_in[0U][0x15U] >> 0xfU))));
    vlSelf->__PVT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x17U] >> 8U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x16U] >> 0xdU)) 
              | (7U & (vlSelf->img_in[0U][0x15U] >> 0x12U))));
    vlSelf->__PVT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x17U] >> 9U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x16U] >> 0xeU)) 
              | (7U & (vlSelf->img_in[0U][0x15U] >> 0x13U))));
    vlSelf->__PVT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x17U] >> 0xaU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x16U] >> 0xfU)) 
              | (7U & (vlSelf->img_in[0U][0x15U] >> 0x14U))));
    vlSelf->__PVT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x17U] >> 0xbU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x16U] >> 0x10U)) 
              | (7U & (vlSelf->img_in[0U][0x15U] >> 0x15U))));
    vlSelf->__PVT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x17U] >> 0xcU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x16U] >> 0x11U)) 
              | (7U & (vlSelf->img_in[0U][0x15U] >> 0x16U))));
    vlSelf->__PVT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x17U] >> 0xdU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x16U] >> 0x12U)) 
              | (7U & (vlSelf->img_in[0U][0x15U] >> 0x17U))));
    vlSelf->__PVT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x17U] >> 0xeU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x16U] >> 0x13U)) 
              | (7U & (vlSelf->img_in[0U][0x15U] >> 0x18U))));
    vlSelf->__PVT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x17U] >> 0xfU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x16U] >> 0x14U)) 
              | (7U & (vlSelf->img_in[0U][0x15U] >> 0x19U))));
    vlSelf->__PVT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x17U] >> 0x10U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x16U] >> 0x15U)) 
              | (7U & (vlSelf->img_in[0U][0x15U] >> 0x1aU))));
    vlSelf->__PVT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x17U] >> 0x11U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x16U] >> 0x16U)) 
              | (7U & (vlSelf->img_in[0U][0x15U] >> 0x1bU))));
    vlSelf->__PVT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x17U] >> 0x12U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x16U] >> 0x17U)) 
              | (7U & (vlSelf->img_in[0U][0x15U] >> 0x1cU))));
    vlSelf->__PVT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x17U] >> 0x13U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x16U] >> 0x18U)) 
              | (vlSelf->img_in[0U][0x15U] >> 0x1dU)));
    vlSelf->__PVT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x17U] >> 0x14U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x16U] >> 0x19U)) 
              | (7U & ((vlSelf->img_in[0U][0x16U] << 2U) 
                       | (vlSelf->img_in[0U][0x15U] 
                          >> 0x1eU)))));
    vlSelf->__PVT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x17U] >> 0x15U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x16U] >> 0x1aU)) 
              | (7U & ((vlSelf->img_in[0U][0x16U] << 1U) 
                       | (vlSelf->img_in[0U][0x15U] 
                          >> 0x1fU)))));
    vlSelf->__PVT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x17U] >> 0x16U)) 
           | ((0x38U & ((vlSelf->img_in[0U][0x17U] 
                         << 5U) | (0x18U & (vlSelf->img_in
                                            [0U][0x16U] 
                                            >> 0x1bU)))) 
              | (7U & vlSelf->img_in[0U][0x16U])));
    vlSelf->__PVT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x17U] >> 0x17U)) 
           | ((0x38U & ((vlSelf->img_in[0U][0x17U] 
                         << 4U) | (8U & (vlSelf->img_in
                                         [0U][0x16U] 
                                         >> 0x1cU)))) 
              | (7U & (vlSelf->img_in[0U][0x16U] >> 1U))));
    vlSelf->__PVT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][0x18U] << 8U) 
                      | (0xc0U & (vlSelf->img_in[0U][0x17U] 
                                  >> 0x18U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][0x17U] 
                                                      << 3U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][0x16U] 
                                                        >> 2U))));
    vlSelf->__PVT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][0x18U] << 7U) 
                      | (0x40U & (vlSelf->img_in[0U][0x17U] 
                                  >> 0x19U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][0x17U] 
                                                      << 2U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][0x16U] 
                                                        >> 3U))));
    vlSelf->__PVT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x18U] << 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x17U] << 1U)) 
              | (7U & (vlSelf->img_in[0U][0x16U] >> 4U))));
    vlSelf->__PVT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x18U] << 5U)) 
           | ((0x38U & vlSelf->img_in[0U][0x17U]) | 
              (7U & (vlSelf->img_in[0U][0x16U] >> 5U))));
    vlSelf->__PVT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x18U] << 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x17U] >> 1U)) 
              | (7U & (vlSelf->img_in[0U][0x16U] >> 6U))));
    vlSelf->__PVT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x18U] << 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x17U] >> 2U)) 
              | (7U & (vlSelf->img_in[0U][0x16U] >> 7U))));
    vlSelf->__PVT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x18U] << 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x17U] >> 3U)) 
              | (7U & (vlSelf->img_in[0U][0x16U] >> 8U))));
    vlSelf->__PVT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x18U] << 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x17U] >> 4U)) 
              | (7U & (vlSelf->img_in[0U][0x16U] >> 9U))));
    vlSelf->__PVT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch 
        = ((0x1c0U & vlSelf->img_in[0U][0x18U]) | (
                                                   (0x38U 
                                                    & (vlSelf->img_in
                                                       [0U][0x17U] 
                                                       >> 5U)) 
                                                   | (7U 
                                                      & (vlSelf->img_in
                                                         [0U][0x16U] 
                                                         >> 0xaU))));
    vlSelf->__PVT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x18U] >> 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x17U] >> 6U)) 
              | (7U & (vlSelf->img_in[0U][0x16U] >> 0xbU))));
    vlSelf->__PVT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x18U] >> 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x17U] >> 7U)) 
              | (7U & (vlSelf->img_in[0U][0x16U] >> 0xcU))));
    vlSelf->__PVT__out_row_gen__BRA__23__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x18U] >> 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x17U] >> 8U)) 
              | (7U & (vlSelf->img_in[0U][0x16U] >> 0xdU))));
    vlSelf->__PVT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x18U] >> 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x17U] >> 0xbU)) 
              | (7U & (vlSelf->img_in[0U][0x16U] >> 0x10U))));
    vlSelf->__PVT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x18U] >> 7U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x17U] >> 0xcU)) 
              | (7U & (vlSelf->img_in[0U][0x16U] >> 0x11U))));
    vlSelf->__PVT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x18U] >> 8U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x17U] >> 0xdU)) 
              | (7U & (vlSelf->img_in[0U][0x16U] >> 0x12U))));
    vlSelf->__PVT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x18U] >> 9U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x17U] >> 0xeU)) 
              | (7U & (vlSelf->img_in[0U][0x16U] >> 0x13U))));
    vlSelf->__PVT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x18U] >> 0xaU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x17U] >> 0xfU)) 
              | (7U & (vlSelf->img_in[0U][0x16U] >> 0x14U))));
    vlSelf->__PVT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x18U] >> 0xbU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x17U] >> 0x10U)) 
              | (7U & (vlSelf->img_in[0U][0x16U] >> 0x15U))));
    vlSelf->__PVT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x18U] >> 0xcU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x17U] >> 0x11U)) 
              | (7U & (vlSelf->img_in[0U][0x16U] >> 0x16U))));
    vlSelf->__PVT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x18U] >> 0xdU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x17U] >> 0x12U)) 
              | (7U & (vlSelf->img_in[0U][0x16U] >> 0x17U))));
    vlSelf->__PVT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x18U] >> 0xeU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x17U] >> 0x13U)) 
              | (7U & (vlSelf->img_in[0U][0x16U] >> 0x18U))));
    vlSelf->__PVT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x18U] >> 0xfU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x17U] >> 0x14U)) 
              | (7U & (vlSelf->img_in[0U][0x16U] >> 0x19U))));
    vlSelf->__PVT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x18U] >> 0x10U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x17U] >> 0x15U)) 
              | (7U & (vlSelf->img_in[0U][0x16U] >> 0x1aU))));
    vlSelf->__PVT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x18U] >> 0x11U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x17U] >> 0x16U)) 
              | (7U & (vlSelf->img_in[0U][0x16U] >> 0x1bU))));
    vlSelf->__PVT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x18U] >> 0x12U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x17U] >> 0x17U)) 
              | (7U & (vlSelf->img_in[0U][0x16U] >> 0x1cU))));
    vlSelf->__PVT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x18U] >> 0x13U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x17U] >> 0x18U)) 
              | (vlSelf->img_in[0U][0x16U] >> 0x1dU)));
    vlSelf->__PVT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x18U] >> 0x14U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x17U] >> 0x19U)) 
              | (7U & ((vlSelf->img_in[0U][0x17U] << 2U) 
                       | (vlSelf->img_in[0U][0x16U] 
                          >> 0x1eU)))));
    vlSelf->__PVT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x18U] >> 0x15U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x17U] >> 0x1aU)) 
              | (7U & ((vlSelf->img_in[0U][0x17U] << 1U) 
                       | (vlSelf->img_in[0U][0x16U] 
                          >> 0x1fU)))));
    vlSelf->__PVT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x18U] >> 0x16U)) 
           | ((0x38U & ((vlSelf->img_in[0U][0x18U] 
                         << 5U) | (0x18U & (vlSelf->img_in
                                            [0U][0x17U] 
                                            >> 0x1bU)))) 
              | (7U & vlSelf->img_in[0U][0x17U])));
    vlSelf->__PVT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x18U] >> 0x17U)) 
           | ((0x38U & ((vlSelf->img_in[0U][0x18U] 
                         << 4U) | (8U & (vlSelf->img_in
                                         [0U][0x17U] 
                                         >> 0x1cU)))) 
              | (7U & (vlSelf->img_in[0U][0x17U] >> 1U))));
    vlSelf->__PVT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][0x19U] << 8U) 
                      | (0xc0U & (vlSelf->img_in[0U][0x18U] 
                                  >> 0x18U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][0x18U] 
                                                      << 3U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][0x17U] 
                                                        >> 2U))));
    vlSelf->__PVT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][0x19U] << 7U) 
                      | (0x40U & (vlSelf->img_in[0U][0x18U] 
                                  >> 0x19U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][0x18U] 
                                                      << 2U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][0x17U] 
                                                        >> 3U))));
    vlSelf->__PVT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x19U] << 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x18U] << 1U)) 
              | (7U & (vlSelf->img_in[0U][0x17U] >> 4U))));
    vlSelf->__PVT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x19U] << 5U)) 
           | ((0x38U & vlSelf->img_in[0U][0x18U]) | 
              (7U & (vlSelf->img_in[0U][0x17U] >> 5U))));
    vlSelf->__PVT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x19U] << 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x18U] >> 1U)) 
              | (7U & (vlSelf->img_in[0U][0x17U] >> 6U))));
    vlSelf->__PVT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x19U] << 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x18U] >> 2U)) 
              | (7U & (vlSelf->img_in[0U][0x17U] >> 7U))));
    vlSelf->__PVT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x19U] << 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x18U] >> 3U)) 
              | (7U & (vlSelf->img_in[0U][0x17U] >> 8U))));
    vlSelf->__PVT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x19U] << 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x18U] >> 4U)) 
              | (7U & (vlSelf->img_in[0U][0x17U] >> 9U))));
    vlSelf->__PVT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch 
        = ((0x1c0U & vlSelf->img_in[0U][0x19U]) | (
                                                   (0x38U 
                                                    & (vlSelf->img_in
                                                       [0U][0x18U] 
                                                       >> 5U)) 
                                                   | (7U 
                                                      & (vlSelf->img_in
                                                         [0U][0x17U] 
                                                         >> 0xaU))));
    vlSelf->__PVT__out_row_gen__BRA__24__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x19U] >> 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x18U] >> 6U)) 
              | (7U & (vlSelf->img_in[0U][0x17U] >> 0xbU))));
    vlSelf->__PVT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x19U] >> 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x18U] >> 9U)) 
              | (7U & (vlSelf->img_in[0U][0x17U] >> 0xeU))));
    vlSelf->__PVT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x19U] >> 5U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x18U] >> 0xaU)) 
              | (7U & (vlSelf->img_in[0U][0x17U] >> 0xfU))));
    vlSelf->__PVT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x19U] >> 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x18U] >> 0xbU)) 
              | (7U & (vlSelf->img_in[0U][0x17U] >> 0x10U))));
    vlSelf->__PVT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x19U] >> 7U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x18U] >> 0xcU)) 
              | (7U & (vlSelf->img_in[0U][0x17U] >> 0x11U))));
    vlSelf->__PVT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x19U] >> 8U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x18U] >> 0xdU)) 
              | (7U & (vlSelf->img_in[0U][0x17U] >> 0x12U))));
    vlSelf->__PVT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x19U] >> 9U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x18U] >> 0xeU)) 
              | (7U & (vlSelf->img_in[0U][0x17U] >> 0x13U))));
    vlSelf->__PVT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x19U] >> 0xaU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x18U] >> 0xfU)) 
              | (7U & (vlSelf->img_in[0U][0x17U] >> 0x14U))));
    vlSelf->__PVT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x19U] >> 0xbU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x18U] >> 0x10U)) 
              | (7U & (vlSelf->img_in[0U][0x17U] >> 0x15U))));
    vlSelf->__PVT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x19U] >> 0xcU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x18U] >> 0x11U)) 
              | (7U & (vlSelf->img_in[0U][0x17U] >> 0x16U))));
    vlSelf->__PVT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x19U] >> 0xdU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x18U] >> 0x12U)) 
              | (7U & (vlSelf->img_in[0U][0x17U] >> 0x17U))));
    vlSelf->__PVT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x19U] >> 0xeU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x18U] >> 0x13U)) 
              | (7U & (vlSelf->img_in[0U][0x17U] >> 0x18U))));
    vlSelf->__PVT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x19U] >> 0xfU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x18U] >> 0x14U)) 
              | (7U & (vlSelf->img_in[0U][0x17U] >> 0x19U))));
    vlSelf->__PVT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x19U] >> 0x10U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x18U] >> 0x15U)) 
              | (7U & (vlSelf->img_in[0U][0x17U] >> 0x1aU))));
    vlSelf->__PVT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x19U] >> 0x11U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x18U] >> 0x16U)) 
              | (7U & (vlSelf->img_in[0U][0x17U] >> 0x1bU))));
    vlSelf->__PVT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x19U] >> 0x12U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x18U] >> 0x17U)) 
              | (7U & (vlSelf->img_in[0U][0x17U] >> 0x1cU))));
    vlSelf->__PVT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x19U] >> 0x13U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x18U] >> 0x18U)) 
              | (vlSelf->img_in[0U][0x17U] >> 0x1dU)));
    vlSelf->__PVT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x19U] >> 0x14U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x18U] >> 0x19U)) 
              | (7U & ((vlSelf->img_in[0U][0x18U] << 2U) 
                       | (vlSelf->img_in[0U][0x17U] 
                          >> 0x1eU)))));
    vlSelf->__PVT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x19U] >> 0x15U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x18U] >> 0x1aU)) 
              | (7U & ((vlSelf->img_in[0U][0x18U] << 1U) 
                       | (vlSelf->img_in[0U][0x17U] 
                          >> 0x1fU)))));
    vlSelf->__PVT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x19U] >> 0x16U)) 
           | ((0x38U & ((vlSelf->img_in[0U][0x19U] 
                         << 5U) | (0x18U & (vlSelf->img_in
                                            [0U][0x18U] 
                                            >> 0x1bU)))) 
              | (7U & vlSelf->img_in[0U][0x18U])));
    vlSelf->__PVT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x19U] >> 0x17U)) 
           | ((0x38U & ((vlSelf->img_in[0U][0x19U] 
                         << 4U) | (8U & (vlSelf->img_in
                                         [0U][0x18U] 
                                         >> 0x1cU)))) 
              | (7U & (vlSelf->img_in[0U][0x18U] >> 1U))));
    vlSelf->__PVT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][0x1aU] << 8U) 
                      | (0xc0U & (vlSelf->img_in[0U][0x19U] 
                                  >> 0x18U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][0x19U] 
                                                      << 3U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][0x18U] 
                                                        >> 2U))));
    vlSelf->__PVT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][0x1aU] << 7U) 
                      | (0x40U & (vlSelf->img_in[0U][0x19U] 
                                  >> 0x19U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][0x19U] 
                                                      << 2U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][0x18U] 
                                                        >> 3U))));
    vlSelf->__PVT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1aU] << 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x19U] << 1U)) 
              | (7U & (vlSelf->img_in[0U][0x18U] >> 4U))));
    vlSelf->__PVT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1aU] << 5U)) 
           | ((0x38U & vlSelf->img_in[0U][0x19U]) | 
              (7U & (vlSelf->img_in[0U][0x18U] >> 5U))));
    vlSelf->__PVT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1aU] << 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x19U] >> 1U)) 
              | (7U & (vlSelf->img_in[0U][0x18U] >> 6U))));
    vlSelf->__PVT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1aU] << 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x19U] >> 2U)) 
              | (7U & (vlSelf->img_in[0U][0x18U] >> 7U))));
    vlSelf->__PVT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1aU] << 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x19U] >> 3U)) 
              | (7U & (vlSelf->img_in[0U][0x18U] >> 8U))));
    vlSelf->__PVT__out_row_gen__BRA__25__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1aU] << 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x19U] >> 4U)) 
              | (7U & (vlSelf->img_in[0U][0x18U] >> 9U))));
    vlSelf->__PVT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1aU] >> 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x19U] >> 7U)) 
              | (7U & (vlSelf->img_in[0U][0x18U] >> 0xcU))));
    vlSelf->__PVT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1aU] >> 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x19U] >> 8U)) 
              | (7U & (vlSelf->img_in[0U][0x18U] >> 0xdU))));
    vlSelf->__PVT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1aU] >> 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x19U] >> 9U)) 
              | (7U & (vlSelf->img_in[0U][0x18U] >> 0xeU))));
    vlSelf->__PVT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1aU] >> 5U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x19U] >> 0xaU)) 
              | (7U & (vlSelf->img_in[0U][0x18U] >> 0xfU))));
    vlSelf->__PVT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1aU] >> 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x19U] >> 0xbU)) 
              | (7U & (vlSelf->img_in[0U][0x18U] >> 0x10U))));
    vlSelf->__PVT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1aU] >> 7U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x19U] >> 0xcU)) 
              | (7U & (vlSelf->img_in[0U][0x18U] >> 0x11U))));
    vlSelf->__PVT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1aU] >> 8U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x19U] >> 0xdU)) 
              | (7U & (vlSelf->img_in[0U][0x18U] >> 0x12U))));
    vlSelf->__PVT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1aU] >> 9U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x19U] >> 0xeU)) 
              | (7U & (vlSelf->img_in[0U][0x18U] >> 0x13U))));
    vlSelf->__PVT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1aU] >> 0xaU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x19U] >> 0xfU)) 
              | (7U & (vlSelf->img_in[0U][0x18U] >> 0x14U))));
    vlSelf->__PVT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1aU] >> 0xbU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x19U] >> 0x10U)) 
              | (7U & (vlSelf->img_in[0U][0x18U] >> 0x15U))));
    vlSelf->__PVT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1aU] >> 0xcU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x19U] >> 0x11U)) 
              | (7U & (vlSelf->img_in[0U][0x18U] >> 0x16U))));
    vlSelf->__PVT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1aU] >> 0xdU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x19U] >> 0x12U)) 
              | (7U & (vlSelf->img_in[0U][0x18U] >> 0x17U))));
    vlSelf->__PVT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1aU] >> 0xeU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x19U] >> 0x13U)) 
              | (7U & (vlSelf->img_in[0U][0x18U] >> 0x18U))));
    vlSelf->__PVT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1aU] >> 0xfU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x19U] >> 0x14U)) 
              | (7U & (vlSelf->img_in[0U][0x18U] >> 0x19U))));
    vlSelf->__PVT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1aU] >> 0x10U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x19U] >> 0x15U)) 
              | (7U & (vlSelf->img_in[0U][0x18U] >> 0x1aU))));
    vlSelf->__PVT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1aU] >> 0x11U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x19U] >> 0x16U)) 
              | (7U & (vlSelf->img_in[0U][0x18U] >> 0x1bU))));
    vlSelf->__PVT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1aU] >> 0x12U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x19U] >> 0x17U)) 
              | (7U & (vlSelf->img_in[0U][0x18U] >> 0x1cU))));
    vlSelf->__PVT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1aU] >> 0x13U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x19U] >> 0x18U)) 
              | (vlSelf->img_in[0U][0x18U] >> 0x1dU)));
    vlSelf->__PVT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1aU] >> 0x14U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x19U] >> 0x19U)) 
              | (7U & ((vlSelf->img_in[0U][0x19U] << 2U) 
                       | (vlSelf->img_in[0U][0x18U] 
                          >> 0x1eU)))));
    vlSelf->__PVT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1aU] >> 0x15U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x19U] >> 0x1aU)) 
              | (7U & ((vlSelf->img_in[0U][0x19U] << 1U) 
                       | (vlSelf->img_in[0U][0x18U] 
                          >> 0x1fU)))));
    vlSelf->__PVT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1aU] >> 0x16U)) 
           | ((0x38U & ((vlSelf->img_in[0U][0x1aU] 
                         << 5U) | (0x18U & (vlSelf->img_in
                                            [0U][0x19U] 
                                            >> 0x1bU)))) 
              | (7U & vlSelf->img_in[0U][0x19U])));
    vlSelf->__PVT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1aU] >> 0x17U)) 
           | ((0x38U & ((vlSelf->img_in[0U][0x1aU] 
                         << 4U) | (8U & (vlSelf->img_in
                                         [0U][0x19U] 
                                         >> 0x1cU)))) 
              | (7U & (vlSelf->img_in[0U][0x19U] >> 1U))));
    vlSelf->__PVT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][0x1bU] << 8U) 
                      | (0xc0U & (vlSelf->img_in[0U][0x1aU] 
                                  >> 0x18U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][0x1aU] 
                                                      << 3U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][0x19U] 
                                                        >> 2U))));
    vlSelf->__PVT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][0x1bU] << 7U) 
                      | (0x40U & (vlSelf->img_in[0U][0x1aU] 
                                  >> 0x19U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][0x1aU] 
                                                      << 2U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][0x19U] 
                                                        >> 3U))));
    vlSelf->__PVT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1bU] << 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x1aU] << 1U)) 
              | (7U & (vlSelf->img_in[0U][0x19U] >> 4U))));
    vlSelf->__PVT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1bU] << 5U)) 
           | ((0x38U & vlSelf->img_in[0U][0x1aU]) | 
              (7U & (vlSelf->img_in[0U][0x19U] >> 5U))));
    vlSelf->__PVT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1bU] << 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x1aU] >> 1U)) 
              | (7U & (vlSelf->img_in[0U][0x19U] >> 6U))));
    vlSelf->__PVT__out_row_gen__BRA__26__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1bU] << 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x1aU] >> 2U)) 
              | (7U & (vlSelf->img_in[0U][0x19U] >> 7U))));
    vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch 
        = ((0x1c0U & vlSelf->img_in[0U][0x1bU]) | (
                                                   (0x38U 
                                                    & (vlSelf->img_in
                                                       [0U][0x1aU] 
                                                       >> 5U)) 
                                                   | (7U 
                                                      & (vlSelf->img_in
                                                         [0U][0x19U] 
                                                         >> 0xaU))));
    vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1bU] >> 1U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x1aU] >> 6U)) 
              | (7U & (vlSelf->img_in[0U][0x19U] >> 0xbU))));
    vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1bU] >> 2U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x1aU] >> 7U)) 
              | (7U & (vlSelf->img_in[0U][0x19U] >> 0xcU))));
    vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1bU] >> 3U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x1aU] >> 8U)) 
              | (7U & (vlSelf->img_in[0U][0x19U] >> 0xdU))));
    vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1bU] >> 4U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x1aU] >> 9U)) 
              | (7U & (vlSelf->img_in[0U][0x19U] >> 0xeU))));
    vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1bU] >> 5U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x1aU] >> 0xaU)) 
              | (7U & (vlSelf->img_in[0U][0x19U] >> 0xfU))));
    vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1bU] >> 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x1aU] >> 0xbU)) 
              | (7U & (vlSelf->img_in[0U][0x19U] >> 0x10U))));
    vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1bU] >> 7U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x1aU] >> 0xcU)) 
              | (7U & (vlSelf->img_in[0U][0x19U] >> 0x11U))));
    vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1bU] >> 8U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x1aU] >> 0xdU)) 
              | (7U & (vlSelf->img_in[0U][0x19U] >> 0x12U))));
    vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1bU] >> 9U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x1aU] >> 0xeU)) 
              | (7U & (vlSelf->img_in[0U][0x19U] >> 0x13U))));
    vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1bU] >> 0xaU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x1aU] >> 0xfU)) 
              | (7U & (vlSelf->img_in[0U][0x19U] >> 0x14U))));
    vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1bU] >> 0xbU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x1aU] >> 0x10U)) 
              | (7U & (vlSelf->img_in[0U][0x19U] >> 0x15U))));
    vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1bU] >> 0xcU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x1aU] >> 0x11U)) 
              | (7U & (vlSelf->img_in[0U][0x19U] >> 0x16U))));
    vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__13__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1bU] >> 0xdU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x1aU] >> 0x12U)) 
              | (7U & (vlSelf->img_in[0U][0x19U] >> 0x17U))));
    vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__14__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1bU] >> 0xeU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x1aU] >> 0x13U)) 
              | (7U & (vlSelf->img_in[0U][0x19U] >> 0x18U))));
    vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__15__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1bU] >> 0xfU)) 
           | ((0x38U & (vlSelf->img_in[0U][0x1aU] >> 0x14U)) 
              | (7U & (vlSelf->img_in[0U][0x19U] >> 0x19U))));
    vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__16__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1bU] >> 0x10U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x1aU] >> 0x15U)) 
              | (7U & (vlSelf->img_in[0U][0x19U] >> 0x1aU))));
    vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__17__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1bU] >> 0x11U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x1aU] >> 0x16U)) 
              | (7U & (vlSelf->img_in[0U][0x19U] >> 0x1bU))));
    vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__18__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1bU] >> 0x12U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x1aU] >> 0x17U)) 
              | (7U & (vlSelf->img_in[0U][0x19U] >> 0x1cU))));
    vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__19__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1bU] >> 0x13U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x1aU] >> 0x18U)) 
              | (vlSelf->img_in[0U][0x19U] >> 0x1dU)));
    vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__20__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1bU] >> 0x14U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x1aU] >> 0x19U)) 
              | (7U & ((vlSelf->img_in[0U][0x1aU] << 2U) 
                       | (vlSelf->img_in[0U][0x19U] 
                          >> 0x1eU)))));
    vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__21__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1bU] >> 0x15U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x1aU] >> 0x1aU)) 
              | (7U & ((vlSelf->img_in[0U][0x1aU] << 1U) 
                       | (vlSelf->img_in[0U][0x19U] 
                          >> 0x1fU)))));
    vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__22__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1bU] >> 0x16U)) 
           | ((0x38U & ((vlSelf->img_in[0U][0x1bU] 
                         << 5U) | (0x18U & (vlSelf->img_in
                                            [0U][0x1aU] 
                                            >> 0x1bU)))) 
              | (7U & vlSelf->img_in[0U][0x1aU])));
    vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__23__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1bU] >> 0x17U)) 
           | ((0x38U & ((vlSelf->img_in[0U][0x1bU] 
                         << 4U) | (8U & (vlSelf->img_in
                                         [0U][0x1aU] 
                                         >> 0x1cU)))) 
              | (7U & (vlSelf->img_in[0U][0x1aU] >> 1U))));
    vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__24__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][0x1cU] << 8U) 
                      | (0xc0U & (vlSelf->img_in[0U][0x1bU] 
                                  >> 0x18U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][0x1bU] 
                                                      << 3U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][0x1aU] 
                                                        >> 2U))));
    vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__25__KET____DOT__patch 
        = ((0x1c0U & ((vlSelf->img_in[0U][0x1cU] << 7U) 
                      | (0x40U & (vlSelf->img_in[0U][0x1bU] 
                                  >> 0x19U)))) | ((0x38U 
                                                   & (vlSelf->img_in
                                                      [0U][0x1bU] 
                                                      << 2U)) 
                                                  | (7U 
                                                     & (vlSelf->img_in
                                                        [0U][0x1aU] 
                                                        >> 3U))));
    vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__26__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1cU] << 6U)) 
           | ((0x38U & (vlSelf->img_in[0U][0x1bU] << 1U)) 
              | (7U & (vlSelf->img_in[0U][0x1aU] >> 4U))));
    vlSelf->__PVT__out_row_gen__BRA__27__KET____DOT__out_col_gen__BRA__27__KET____DOT__patch 
        = ((0x1c0U & (vlSelf->img_in[0U][0x1cU] << 5U)) 
           | ((0x38U & vlSelf->img_in[0U][0x1bU]) | 
              (7U & (vlSelf->img_in[0U][0x1aU] >> 5U))));
    vlSelf->__PVT__popcount[0U][0U] = 0U;
    vlSelf->__PVT__popcount[0U][0U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [0U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [9U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][0U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [0U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][0U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [0U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][0U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [0U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][0U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [0U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][0U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [0U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][0U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [0U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][0U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [0U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__0__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][1U] = 0U;
    vlSelf->__PVT__popcount[0U][1U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [1U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [9U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][1U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [1U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][1U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [1U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][1U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [1U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][1U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [1U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][1U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [1U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][1U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [1U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][1U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [1U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__1__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][2U] = 0U;
    vlSelf->__PVT__popcount[0U][2U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [2U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [9U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][2U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [2U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][2U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [2U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][2U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [2U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][2U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [2U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][2U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [2U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][2U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [2U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][2U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [2U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__2__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][3U] = 0U;
    vlSelf->__PVT__popcount[0U][3U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [3U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [9U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][3U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [3U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][3U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [3U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][3U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [3U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][3U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [3U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][3U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [3U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][3U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [3U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][3U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [3U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__3__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][4U] = 0U;
    vlSelf->__PVT__popcount[0U][4U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [4U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [9U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][4U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [4U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][4U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [4U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][4U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [4U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][4U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [4U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][4U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [4U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][4U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [4U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][4U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [4U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__4__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][5U] = 0U;
    vlSelf->__PVT__popcount[0U][5U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [5U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [9U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][5U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [5U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][5U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [5U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][5U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [5U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][5U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [5U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][5U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [5U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][5U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [5U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][5U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [5U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__5__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][6U] = 0U;
    vlSelf->__PVT__popcount[0U][6U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [6U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [9U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][6U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [6U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][6U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [6U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][6U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [6U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][6U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [6U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][6U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [6U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][6U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [6U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][6U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [6U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__6__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][7U] = 0U;
    vlSelf->__PVT__popcount[0U][7U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [7U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [9U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][7U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [7U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][7U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [7U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][7U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [7U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][7U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [7U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][7U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [7U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][7U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [7U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][7U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [7U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__7__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][8U] = 0U;
    vlSelf->__PVT__popcount[0U][8U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [8U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [9U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][8U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [8U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][8U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [8U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][8U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [8U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][8U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [8U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][8U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [8U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][8U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [8U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][8U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [8U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__8__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][9U] = 0U;
    vlSelf->__PVT__popcount[0U][9U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [9U] 
                                                + (
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [9U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][9U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [9U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][9U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [9U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][9U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [9U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][9U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [9U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][9U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [9U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][9U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [9U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][9U] = (0xffU & (vlSelf->__PVT__popcount
                                                [0U]
                                                [9U] 
                                                + (
                                                   ((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__9__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][0xaU] = 0U;
    vlSelf->__PVT__popcount[0U][0xaU] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0U]
                                                  [0xaU] 
                                                  + 
                                                  (((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [9U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][0xaU] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0U]
                                                  [0xaU] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][0xaU] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0U]
                                                  [0xaU] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][0xaU] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0U]
                                                  [0xaU] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][0xaU] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0U]
                                                  [0xaU] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][0xaU] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0U]
                                                  [0xaU] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][0xaU] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0U]
                                                  [0xaU] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][0xaU] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0U]
                                                  [0xaU] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__10__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][0xbU] = 0U;
    vlSelf->__PVT__popcount[0U][0xbU] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0U]
                                                  [0xbU] 
                                                  + 
                                                  (((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [9U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][0xbU] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0U]
                                                  [0xbU] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][0xbU] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0U]
                                                  [0xbU] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][0xbU] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0U]
                                                  [0xbU] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][0xbU] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0U]
                                                  [0xbU] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][0xbU] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0U]
                                                  [0xbU] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][0xbU] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0U]
                                                  [0xbU] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][0xbU] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0U]
                                                  [0xbU] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__11__KET____DOT__patch) 
                                                        >> 7U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 7U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][0xcU] = 0U;
    vlSelf->__PVT__popcount[0U][0xcU] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0U]
                                                  [0xcU] 
                                                  + 
                                                  (((1U 
                                                     & (IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch)) 
                                                    == 
                                                    (1U 
                                                     & vlSymsp->TOP.dut__DOT__weights
                                                     [9U]))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][0xcU] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0U]
                                                  [0xcU] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                        >> 1U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][0xcU] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0U]
                                                  [0xcU] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                        >> 2U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 2U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][0xcU] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0U]
                                                  [0xcU] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                        >> 3U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 3U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][0xcU] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0U]
                                                  [0xcU] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                        >> 4U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 4U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][0xcU] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0U]
                                                  [0xcU] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                        >> 5U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 5U)))
                                                    ? 1U
                                                    : 0xffU)));
    vlSelf->__PVT__popcount[0U][0xcU] = (0xffU & (vlSelf->__PVT__popcount
                                                  [0U]
                                                  [0xcU] 
                                                  + 
                                                  (((1U 
                                                     & ((IData)(vlSelf->__PVT__out_row_gen__BRA__0__KET____DOT__out_col_gen__BRA__12__KET____DOT__patch) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & (vlSymsp->TOP.dut__DOT__weights
                                                        [9U] 
                                                        >> 6U)))
                                                    ? 1U
                                                    : 0xffU)));
}
