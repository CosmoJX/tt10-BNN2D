// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "Vdut__pch.h"
#include "Vdut___024root.h"

VL_INLINE_OPT void Vdut___024root___nba_sequent__TOP__1(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->dut__DOT__conv_pool2__DOT__core_data_in_ready) {
        if ((1U & (~ (IData)(vlSelf->dut__DOT__conv_pool2__DOT__core_data_out_ready)))) {
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v86 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x2bU] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][1U] 
                                                    >> 0x11U)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][1U] 
                                              >> 0x12U)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][1U] 
                                             >> 0x13U)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((vlSelf->dut__DOT__pool1_img_out
                                      [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][1U] 
                                      >> 0x1fU) == 
                                     ((0x8fU >= (0xffU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                      && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(3U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & vlSelf->dut__DOT__pool1_img_out
                                     [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U]) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                          >> 1U)) == 
                                   ((0x8fU >= (0xffU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                    && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                              (7U & 
                                               (((IData)(5U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                       >> 0xdU)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(6U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                                       >> 0xeU)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                       >> 0xfU)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(8U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v86 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v88 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x2cU] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][1U] 
                                                    >> 0x12U)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][1U] 
                                              >> 0x13U)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][1U] 
                                             >> 0x14U)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & vlSelf->dut__DOT__pool1_img_out
                                      [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U]) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                           >> 1U)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                          >> 2U)) == 
                                   ((0x8fU >= (0xffU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                    && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                              (7U & 
                                               (((IData)(5U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                       >> 0xeU)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(6U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                                       >> 0xfU)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                       >> 0x10U)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(8U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v88 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v90 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x2dU] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][1U] 
                                                    >> 0x13U)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][1U] 
                                              >> 0x14U)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][1U] 
                                             >> 0x15U)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                            >> 1U)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                           >> 2U)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                          >> 3U)) == 
                                   ((0x8fU >= (0xffU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                    && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                              (7U & 
                                               (((IData)(5U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                       >> 0xfU)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(6U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                                       >> 0x10U)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                       >> 0x11U)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(8U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v90 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v92 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x2eU] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][1U] 
                                                    >> 0x14U)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][1U] 
                                              >> 0x15U)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][1U] 
                                             >> 0x16U)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                            >> 2U)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                           >> 3U)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                          >> 4U)) == 
                                   ((0x8fU >= (0xffU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                    && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                              (7U & 
                                               (((IData)(5U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                       >> 0x10U)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(6U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                                       >> 0x11U)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                       >> 0x12U)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(8U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v92 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v94 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x2fU] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][1U] 
                                                    >> 0x15U)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][1U] 
                                              >> 0x16U)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][1U] 
                                             >> 0x17U)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                            >> 3U)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                           >> 4U)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                          >> 5U)) == 
                                   ((0x8fU >= (0xffU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                    && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                              (7U & 
                                               (((IData)(5U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                       >> 0x11U)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(6U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                                       >> 0x12U)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                       >> 0x13U)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(8U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v94 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v96 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x30U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][1U] 
                                                    >> 0x18U)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][1U] 
                                              >> 0x19U)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][1U] 
                                             >> 0x1aU)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                            >> 6U)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                           >> 7U)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                          >> 8U)) == 
                                   ((0x8fU >= (0xffU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                    && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                              (7U & 
                                               (((IData)(5U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                       >> 0x14U)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(6U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                                       >> 0x15U)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                       >> 0x16U)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(8U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v96 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v98 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x31U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][1U] 
                                                    >> 0x19U)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][1U] 
                                              >> 0x1aU)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][1U] 
                                             >> 0x1bU)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                            >> 7U)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                           >> 8U)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                          >> 9U)) == 
                                   ((0x8fU >= (0xffU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                    && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                              (7U & 
                                               (((IData)(5U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                       >> 0x15U)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(6U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                       >> 0x17U)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(8U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v98 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v100 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x32U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][1U] 
                                                    >> 0x1aU)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][1U] 
                                              >> 0x1bU)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][1U] 
                                             >> 0x1cU)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                            >> 8U)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                           >> 9U)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                          >> 0xaU)) 
                                   == ((0x8fU >= (0xffU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                       && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                 (7U 
                                                  & (((IData)(5U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                       >> 0x16U)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(6U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                                       >> 0x17U)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                       >> 0x18U)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(8U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v100 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v102 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x33U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][1U] 
                                                    >> 0x1bU)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][1U] 
                                              >> 0x1cU)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][1U] 
                                             >> 0x1dU)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                            >> 9U)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                           >> 0xaU)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                          >> 0xbU)) 
                                   == ((0x8fU >= (0xffU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                       && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                 (7U 
                                                  & (((IData)(5U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                       >> 0x17U)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(6U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                                       >> 0x18U)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                       >> 0x19U)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(8U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v102 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v104 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x34U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][1U] 
                                                    >> 0x1cU)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][1U] 
                                              >> 0x1dU)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][1U] 
                                             >> 0x1eU)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                            >> 0xaU)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                           >> 0xbU)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                          >> 0xcU)) 
                                   == ((0x8fU >= (0xffU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                       && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                 (7U 
                                                  & (((IData)(5U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                       >> 0x18U)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(6U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                                       >> 0x19U)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                       >> 0x1aU)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(8U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v104 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v106 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x35U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][1U] 
                                                    >> 0x1dU)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][1U] 
                                              >> 0x1eU)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][1U] 
                                       >> 0x1fU) == 
                                      ((0x8fU >= (0xffU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                       && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                 (7U 
                                                  & (((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                            >> 0xbU)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                           >> 0xcU)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                          >> 0xdU)) 
                                   == ((0x8fU >= (0xffU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                       && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                 (7U 
                                                  & (((IData)(5U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                       >> 0x19U)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(6U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                                       >> 0x1aU)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                       >> 0x1bU)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(8U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v106 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v108 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x36U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][1U] 
                                                    >> 0x1eU)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((vlSelf->dut__DOT__pool1_img_out
                                        [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][1U] 
                                        >> 0x1fU) == 
                                       ((0x8fU >= (0xffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U]) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                            >> 0xcU)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                           >> 0xdU)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                          >> 0xeU)) 
                                   == ((0x8fU >= (0xffU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                       && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                 (7U 
                                                  & (((IData)(5U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                       >> 0x1aU)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(6U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                                       >> 0x1bU)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                       >> 0x1cU)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(8U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v108 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v110 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x37U] + (((vlSelf->dut__DOT__pool1_img_out
                                                 [(0xfU 
                                                   & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][1U] 
                                                 >> 0x1fU) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & vlSelf->dut__DOT__pool1_img_out
                                        [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U]) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                             >> 1U)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                            >> 0xdU)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                           >> 0xeU)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                          >> 0xfU)) 
                                   == ((0x8fU >= (0xffU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                       && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                 (7U 
                                                  & (((IData)(5U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                       >> 0x1bU)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(6U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                                       >> 0x1cU)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                       >> 0x1dU)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(8U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v110 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v112 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x38U] + (((1U 
                                                 & vlSelf->dut__DOT__pool1_img_out
                                                 [(0xfU 
                                                   & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U]) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                              >> 1U)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                             >> 2U)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                            >> 0xeU)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                           >> 0xfU)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                          >> 0x10U)) 
                                   == ((0x8fU >= (0xffU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                       && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                 (7U 
                                                  & (((IData)(5U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                       >> 0x1cU)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(6U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                                       >> 0x1dU)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                       >> 0x1eU)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(8U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v112 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v114 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x39U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                                    >> 1U)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                              >> 2U)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                             >> 3U)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                            >> 0xfU)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                           >> 0x10U)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                          >> 0x11U)) 
                                   == ((0x8fU >= (0xffU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                       && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                 (7U 
                                                  & (((IData)(5U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                       >> 0x1dU)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(6U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                                       >> 0x1eU)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((vlSelf->dut__DOT__pool1_img_out
                                 [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                 >> 0x1fU) == ((0x8fU 
                                                >= 
                                                (0xffU 
                                                 & ((IData)(8U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                               && (1U 
                                                   & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                      (7U 
                                                       & (((IData)(8U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(8U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v114 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v116 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x3aU] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                                    >> 2U)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                              >> 3U)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                             >> 4U)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                            >> 0x10U)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                           >> 0x11U)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                          >> 0x12U)) 
                                   == ((0x8fU >= (0xffU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                       && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                 (7U 
                                                  & (((IData)(5U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                       >> 0x1eU)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(6U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                                    >> 0x1fU) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & vlSelf->dut__DOT__pool1_img_out
                                 [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U]) 
                                == ((0x8fU >= (0xffU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                    && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                              (7U & 
                                               (((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(8U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v116 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v118 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x3bU] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                                    >> 3U)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                              >> 4U)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                             >> 5U)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                            >> 0x11U)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                           >> 0x12U)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                          >> 0x13U)) 
                                   == ((0x8fU >= (0xffU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                       && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                 (7U 
                                                  & (((IData)(5U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((vlSelf->dut__DOT__pool1_img_out
                                 [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                 >> 0x1fU) == ((0x8fU 
                                                >= 
                                                (0xffU 
                                                 & ((IData)(6U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                               && (1U 
                                                   & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                      (7U 
                                                       & (((IData)(6U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(6U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U]) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 1U)) == (
                                                   (0x8fU 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                          (7U 
                                                           & (((IData)(8U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v118 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v120 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x3cU] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                                    >> 6U)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                              >> 7U)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                             >> 8U)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                            >> 0x14U)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                           >> 0x15U)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                          >> 0x16U)) 
                                   == ((0x8fU >= (0xffU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                       && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                 (7U 
                                                  & (((IData)(5U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 2U)) == (
                                                   (0x8fU 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                          (7U 
                                                           & (((IData)(6U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(6U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                       >> 3U)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 4U)) == (
                                                   (0x8fU 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                          (7U 
                                                           & (((IData)(8U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v120 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v122 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x3dU] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                                    >> 7U)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                              >> 8U)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                             >> 9U)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                            >> 0x15U)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                           >> 0x16U)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                          >> 0x17U)) 
                                   == ((0x8fU >= (0xffU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                       && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                 (7U 
                                                  & (((IData)(5U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 3U)) == (
                                                   (0x8fU 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                          (7U 
                                                           & (((IData)(6U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(6U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                       >> 4U)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 5U)) == (
                                                   (0x8fU 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                          (7U 
                                                           & (((IData)(8U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v122 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v124 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x3eU] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                                    >> 8U)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                              >> 9U)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                             >> 0xaU)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                            >> 0x16U)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                           >> 0x17U)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                          >> 0x18U)) 
                                   == ((0x8fU >= (0xffU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                       && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                 (7U 
                                                  & (((IData)(5U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 4U)) == (
                                                   (0x8fU 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                          (7U 
                                                           & (((IData)(6U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(6U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                       >> 5U)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 6U)) == (
                                                   (0x8fU 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                          (7U 
                                                           & (((IData)(8U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v124 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v126 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x3fU] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                                    >> 9U)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                              >> 0xaU)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                             >> 0xbU)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                            >> 0x17U)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                           >> 0x18U)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                          >> 0x19U)) 
                                   == ((0x8fU >= (0xffU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                       && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                 (7U 
                                                  & (((IData)(5U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 5U)) == (
                                                   (0x8fU 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                          (7U 
                                                           & (((IData)(6U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(6U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                       >> 6U)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 7U)) == (
                                                   (0x8fU 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                          (7U 
                                                           & (((IData)(8U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v126 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v128 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x40U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                                    >> 0xaU)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                              >> 0xbU)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                             >> 0xcU)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                            >> 0x18U)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                           >> 0x19U)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                          >> 0x1aU)) 
                                   == ((0x8fU >= (0xffU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                       && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                 (7U 
                                                  & (((IData)(5U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 6U)) == (
                                                   (0x8fU 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                          (7U 
                                                           & (((IData)(6U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(6U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                       >> 7U)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 8U)) == (
                                                   (0x8fU 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                          (7U 
                                                           & (((IData)(8U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v128 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v130 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x41U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                                    >> 0xbU)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                              >> 0xcU)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                             >> 0xdU)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                            >> 0x19U)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                           >> 0x1aU)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                          >> 0x1bU)) 
                                   == ((0x8fU >= (0xffU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                       && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                 (7U 
                                                  & (((IData)(5U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 7U)) == (
                                                   (0x8fU 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                          (7U 
                                                           & (((IData)(6U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(6U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                       >> 8U)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 9U)) == (
                                                   (0x8fU 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                          (7U 
                                                           & (((IData)(8U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v130 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v132 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x42U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                                    >> 0xcU)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                              >> 0xdU)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                             >> 0xeU)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                            >> 0x1aU)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                           >> 0x1bU)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                          >> 0x1cU)) 
                                   == ((0x8fU >= (0xffU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                       && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                 (7U 
                                                  & (((IData)(5U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 8U)) == (
                                                   (0x8fU 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                          (7U 
                                                           & (((IData)(6U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(6U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                       >> 9U)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 0xaU)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(8U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v132 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v134 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x43U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                                    >> 0xdU)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                              >> 0xeU)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                             >> 0xfU)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                            >> 0x1bU)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                           >> 0x1cU)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                          >> 0x1dU)) 
                                   == ((0x8fU >= (0xffU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                       && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                 (7U 
                                                  & (((IData)(5U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 9U)) == (
                                                   (0x8fU 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                          (7U 
                                                           & (((IData)(6U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(6U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                       >> 0xaU)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 0xbU)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(8U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v134 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v136 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x44U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                                    >> 0xeU)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                              >> 0xfU)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                             >> 0x10U)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                            >> 0x1cU)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                           >> 0x1dU)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                          >> 0x1eU)) 
                                   == ((0x8fU >= (0xffU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                       && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                 (7U 
                                                  & (((IData)(5U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 0xaU)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(6U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                       >> 0xbU)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 0xcU)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(8U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v136 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v138 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x45U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                                    >> 0xfU)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                              >> 0x10U)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                             >> 0x11U)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                            >> 0x1dU)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                           >> 0x1eU)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((vlSelf->dut__DOT__pool1_img_out
                                    [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                    >> 0x1fU) == ((0x8fU 
                                                   >= 
                                                   (0xffU 
                                                    & ((IData)(5U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                  && (1U 
                                                      & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                         (7U 
                                                          & (((IData)(5U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(5U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 0xbU)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(6U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                       >> 0xcU)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 0xdU)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(8U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v138 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v140 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x46U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                                    >> 0x10U)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                              >> 0x11U)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                             >> 0x12U)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                            >> 0x1eU)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((vlSelf->dut__DOT__pool1_img_out
                                     [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                     >> 0x1fU) == (
                                                   (0x8fU 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(4U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                          (7U 
                                                           & (((IData)(4U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(4U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & vlSelf->dut__DOT__pool1_img_out
                                    [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U]) 
                                   == ((0x8fU >= (0xffU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                       && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                 (7U 
                                                  & (((IData)(5U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 0xcU)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(6U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                       >> 0xdU)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 0xeU)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(8U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v140 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v142 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x47U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                                    >> 0x11U)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                              >> 0x12U)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                             >> 0x13U)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((vlSelf->dut__DOT__pool1_img_out
                                      [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                      >> 0x1fU) == 
                                     ((0x8fU >= (0xffU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                      && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(3U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & vlSelf->dut__DOT__pool1_img_out
                                     [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U]) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                          >> 1U)) == 
                                   ((0x8fU >= (0xffU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                    && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                              (7U & 
                                               (((IData)(5U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 0xdU)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(6U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                       >> 0xeU)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 0xfU)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(8U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v142 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v144 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x48U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                                    >> 0x14U)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                              >> 0x15U)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                             >> 0x16U)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                            >> 2U)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                           >> 3U)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                          >> 4U)) == 
                                   ((0x8fU >= (0xffU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                    && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                              (7U & 
                                               (((IData)(5U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 0x10U)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(6U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                       >> 0x11U)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 0x12U)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(8U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v144 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v146 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x49U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                                    >> 0x15U)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                              >> 0x16U)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                             >> 0x17U)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                            >> 3U)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                           >> 4U)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                          >> 5U)) == 
                                   ((0x8fU >= (0xffU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                    && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                              (7U & 
                                               (((IData)(5U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 0x11U)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(6U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                       >> 0x12U)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 0x13U)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(8U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v146 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v148 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x4aU] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                                    >> 0x16U)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                              >> 0x17U)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                             >> 0x18U)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                            >> 4U)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                           >> 5U)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                          >> 6U)) == 
                                   ((0x8fU >= (0xffU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                    && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                              (7U & 
                                               (((IData)(5U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 0x12U)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(6U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                       >> 0x13U)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 0x14U)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(8U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v148 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v150 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x4bU] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                                    >> 0x17U)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                              >> 0x18U)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                             >> 0x19U)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                            >> 5U)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                           >> 6U)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                          >> 7U)) == 
                                   ((0x8fU >= (0xffU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                    && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                              (7U & 
                                               (((IData)(5U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 0x13U)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(6U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                       >> 0x14U)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 0x15U)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(8U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v150 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v152 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x4cU] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                                    >> 0x18U)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                              >> 0x19U)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                             >> 0x1aU)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                            >> 6U)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                           >> 7U)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                          >> 8U)) == 
                                   ((0x8fU >= (0xffU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                    && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                              (7U & 
                                               (((IData)(5U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 0x14U)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(6U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                       >> 0x15U)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 0x16U)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(8U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v152 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v154 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x4dU] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                                    >> 0x19U)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                              >> 0x1aU)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                             >> 0x1bU)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                            >> 7U)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                           >> 8U)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                          >> 9U)) == 
                                   ((0x8fU >= (0xffU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                    && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                              (7U & 
                                               (((IData)(5U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 0x15U)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(6U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                       >> 0x16U)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 0x17U)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(8U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v154 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v156 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x4eU] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                                    >> 0x1aU)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                              >> 0x1bU)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                             >> 0x1cU)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                            >> 8U)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                           >> 9U)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                          >> 0xaU)) 
                                   == ((0x8fU >= (0xffU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                       && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                 (7U 
                                                  & (((IData)(5U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 0x16U)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(6U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                       >> 0x17U)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 0x18U)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(8U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v156 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v158 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x4fU] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                                    >> 0x1bU)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                              >> 0x1cU)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                             >> 0x1dU)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                            >> 9U)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                           >> 0xaU)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                          >> 0xbU)) 
                                   == ((0x8fU >= (0xffU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                       && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                 (7U 
                                                  & (((IData)(5U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 0x17U)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(6U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                       >> 0x18U)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 0x19U)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(8U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v158 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v160 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x50U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                                    >> 0x1cU)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                              >> 0x1dU)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                             >> 0x1eU)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                            >> 0xaU)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                           >> 0xbU)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                          >> 0xcU)) 
                                   == ((0x8fU >= (0xffU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                       && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                 (7U 
                                                  & (((IData)(5U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 0x18U)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(6U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                       >> 0x19U)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 0x1aU)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(8U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v160 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v162 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x51U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                                    >> 0x1dU)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                              >> 0x1eU)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                       >> 0x1fU) == 
                                      ((0x8fU >= (0xffU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                       && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                 (7U 
                                                  & (((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                            >> 0xbU)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                           >> 0xcU)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                          >> 0xdU)) 
                                   == ((0x8fU >= (0xffU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                       && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                 (7U 
                                                  & (((IData)(5U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 0x19U)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(6U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                       >> 0x1aU)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 0x1bU)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(8U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v162 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v164 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x52U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                                    >> 0x1eU)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((vlSelf->dut__DOT__pool1_img_out
                                        [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                        >> 0x1fU) == 
                                       ((0x8fU >= (0xffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(1U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U]) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                            >> 0xcU)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                           >> 0xdU)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                          >> 0xeU)) 
                                   == ((0x8fU >= (0xffU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                       && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                 (7U 
                                                  & (((IData)(5U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 0x1aU)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(6U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                       >> 0x1bU)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 0x1cU)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(8U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v164 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v166 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x53U] + (((vlSelf->dut__DOT__pool1_img_out
                                                 [(0xfU 
                                                   & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][2U] 
                                                 >> 0x1fU) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & vlSelf->dut__DOT__pool1_img_out
                                        [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U]) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                             >> 1U)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                            >> 0xdU)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                           >> 0xeU)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                          >> 0xfU)) 
                                   == ((0x8fU >= (0xffU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                       && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                 (7U 
                                                  & (((IData)(5U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 0x1bU)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(6U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                       >> 0x1cU)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 0x1dU)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(8U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v166 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v168 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x54U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                    >> 2U)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                              >> 3U)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                             >> 4U)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                            >> 0x10U)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                           >> 0x11U)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                          >> 0x12U)) 
                                   == ((0x8fU >= (0xffU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                       && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                 (7U 
                                                  & (((IData)(5U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                       >> 0x1eU)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(6U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                    >> 0x1fU) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & vlSelf->dut__DOT__pool1_img_out
                                 [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U]) 
                                == ((0x8fU >= (0xffU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                    && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                              (7U & 
                                               (((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(8U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v168 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v170 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x55U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                    >> 3U)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                              >> 4U)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                             >> 5U)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                            >> 0x11U)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                           >> 0x12U)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                          >> 0x13U)) 
                                   == ((0x8fU >= (0xffU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                       && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                 (7U 
                                                  & (((IData)(5U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((vlSelf->dut__DOT__pool1_img_out
                                 [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                 >> 0x1fU) == ((0x8fU 
                                                >= 
                                                (0xffU 
                                                 & ((IData)(6U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                               && (1U 
                                                   & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                      (7U 
                                                       & (((IData)(6U) 
                                                           + 
                                                           VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(6U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U]) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                       >> 1U)) == (
                                                   (0x8fU 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                          (7U 
                                                           & (((IData)(8U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v170 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v172 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x56U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                    >> 4U)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                              >> 5U)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                             >> 6U)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                            >> 0x12U)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                           >> 0x13U)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                          >> 0x14U)) 
                                   == ((0x8fU >= (0xffU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                       && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                 (7U 
                                                  & (((IData)(5U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & vlSelf->dut__DOT__pool1_img_out
                                 [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U]) 
                                == ((0x8fU >= (0xffU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                    && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                              (7U & 
                                               (((IData)(6U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(6U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                                       >> 1U)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                       >> 2U)) == (
                                                   (0x8fU 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                          (7U 
                                                           & (((IData)(8U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v172 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v174 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x57U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                    >> 5U)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                              >> 6U)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                             >> 7U)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                            >> 0x13U)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                           >> 0x14U)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                          >> 0x15U)) 
                                   == ((0x8fU >= (0xffU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                       && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                 (7U 
                                                  & (((IData)(5U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                       >> 1U)) == (
                                                   (0x8fU 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                          (7U 
                                                           & (((IData)(6U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(6U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                                       >> 2U)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                       >> 3U)) == (
                                                   (0x8fU 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                          (7U 
                                                           & (((IData)(8U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v174 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v176 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x58U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                    >> 6U)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                              >> 7U)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                             >> 8U)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                            >> 0x14U)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                           >> 0x15U)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                          >> 0x16U)) 
                                   == ((0x8fU >= (0xffU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                       && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                 (7U 
                                                  & (((IData)(5U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                       >> 2U)) == (
                                                   (0x8fU 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                          (7U 
                                                           & (((IData)(6U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(6U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                                       >> 3U)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                       >> 4U)) == (
                                                   (0x8fU 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                          (7U 
                                                           & (((IData)(8U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v176 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v178 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x59U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                    >> 7U)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                              >> 8U)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                             >> 9U)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                            >> 0x15U)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                           >> 0x16U)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                          >> 0x17U)) 
                                   == ((0x8fU >= (0xffU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                       && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                 (7U 
                                                  & (((IData)(5U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                       >> 3U)) == (
                                                   (0x8fU 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                          (7U 
                                                           & (((IData)(6U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(6U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                                       >> 4U)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                       >> 5U)) == (
                                                   (0x8fU 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                          (7U 
                                                           & (((IData)(8U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v178 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v180 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x5aU] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                    >> 8U)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                              >> 9U)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                             >> 0xaU)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                            >> 0x16U)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                           >> 0x17U)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                          >> 0x18U)) 
                                   == ((0x8fU >= (0xffU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                       && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                 (7U 
                                                  & (((IData)(5U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                       >> 4U)) == (
                                                   (0x8fU 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                          (7U 
                                                           & (((IData)(6U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(6U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                                       >> 5U)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                       >> 6U)) == (
                                                   (0x8fU 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                          (7U 
                                                           & (((IData)(8U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v180 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v182 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x5bU] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                    >> 9U)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                              >> 0xaU)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                             >> 0xbU)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                            >> 0x17U)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                           >> 0x18U)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                          >> 0x19U)) 
                                   == ((0x8fU >= (0xffU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                       && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                 (7U 
                                                  & (((IData)(5U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                       >> 5U)) == (
                                                   (0x8fU 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                          (7U 
                                                           & (((IData)(6U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(6U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                                       >> 6U)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                       >> 7U)) == (
                                                   (0x8fU 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                          (7U 
                                                           & (((IData)(8U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v182 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v184 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x5cU] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                    >> 0xaU)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                              >> 0xbU)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                             >> 0xcU)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                            >> 0x18U)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                           >> 0x19U)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                          >> 0x1aU)) 
                                   == ((0x8fU >= (0xffU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                       && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                 (7U 
                                                  & (((IData)(5U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                       >> 6U)) == (
                                                   (0x8fU 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                          (7U 
                                                           & (((IData)(6U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(6U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                                       >> 7U)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                       >> 8U)) == (
                                                   (0x8fU 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                          (7U 
                                                           & (((IData)(8U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v184 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v186 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x5dU] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                    >> 0xbU)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                              >> 0xcU)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                             >> 0xdU)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                            >> 0x19U)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                           >> 0x1aU)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                          >> 0x1bU)) 
                                   == ((0x8fU >= (0xffU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                       && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                 (7U 
                                                  & (((IData)(5U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                       >> 7U)) == (
                                                   (0x8fU 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                          (7U 
                                                           & (((IData)(6U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(6U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                                       >> 8U)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                       >> 9U)) == (
                                                   (0x8fU 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                          (7U 
                                                           & (((IData)(8U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v186 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v188 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x5eU] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                    >> 0xcU)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                              >> 0xdU)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                             >> 0xeU)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                            >> 0x1aU)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                           >> 0x1bU)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                          >> 0x1cU)) 
                                   == ((0x8fU >= (0xffU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                       && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                 (7U 
                                                  & (((IData)(5U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                       >> 8U)) == (
                                                   (0x8fU 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                          (7U 
                                                           & (((IData)(6U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(6U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                                       >> 9U)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                       >> 0xaU)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(8U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v188 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v190 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x5fU] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                    >> 0xdU)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                              >> 0xeU)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                             >> 0xfU)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                            >> 0x1bU)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                           >> 0x1cU)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                          >> 0x1dU)) 
                                   == ((0x8fU >= (0xffU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                       && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                 (7U 
                                                  & (((IData)(5U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                       >> 9U)) == (
                                                   (0x8fU 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                          (7U 
                                                           & (((IData)(6U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(6U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                                       >> 0xaU)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                       >> 0xbU)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(8U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v190 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v192 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x60U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                    >> 0x10U)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                              >> 0x11U)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                             >> 0x12U)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                            >> 0x1eU)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((vlSelf->dut__DOT__pool1_img_out
                                     [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                     >> 0x1fU) == (
                                                   (0x8fU 
                                                    >= 
                                                    (0xffU 
                                                     & ((IData)(4U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                          (7U 
                                                           & (((IData)(4U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(4U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & vlSelf->dut__DOT__pool1_img_out
                                    [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U]) 
                                   == ((0x8fU >= (0xffU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                       && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                 (7U 
                                                  & (((IData)(5U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                       >> 0xcU)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(6U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                                       >> 0xdU)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                       >> 0xeU)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(8U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v192 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v194 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x61U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                    >> 0x11U)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                              >> 0x12U)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                             >> 0x13U)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((vlSelf->dut__DOT__pool1_img_out
                                      [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                      >> 0x1fU) == 
                                     ((0x8fU >= (0xffU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                      && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(3U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & vlSelf->dut__DOT__pool1_img_out
                                     [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U]) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                          >> 1U)) == 
                                   ((0x8fU >= (0xffU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                    && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                              (7U & 
                                               (((IData)(5U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                       >> 0xdU)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(6U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                                       >> 0xeU)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                       >> 0xfU)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(8U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v194 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v196 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x62U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                    >> 0x12U)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                              >> 0x13U)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                             >> 0x14U)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & vlSelf->dut__DOT__pool1_img_out
                                      [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U]) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                           >> 1U)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                          >> 2U)) == 
                                   ((0x8fU >= (0xffU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                    && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                              (7U & 
                                               (((IData)(5U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                       >> 0xeU)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(6U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                                       >> 0xfU)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                       >> 0x10U)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(8U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v196 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v198 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x63U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                    >> 0x13U)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                              >> 0x14U)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                             >> 0x15U)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                            >> 1U)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                           >> 2U)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                          >> 3U)) == 
                                   ((0x8fU >= (0xffU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                    && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                              (7U & 
                                               (((IData)(5U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                       >> 0xfU)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(6U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                                       >> 0x10U)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                       >> 0x11U)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(8U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v198 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v200 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x64U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                    >> 0x14U)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                              >> 0x15U)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                             >> 0x16U)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                            >> 2U)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                           >> 3U)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                          >> 4U)) == 
                                   ((0x8fU >= (0xffU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                    && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                              (7U & 
                                               (((IData)(5U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                       >> 0x10U)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(6U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                                       >> 0x11U)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                       >> 0x12U)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(8U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v200 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v202 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x65U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                    >> 0x15U)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                              >> 0x16U)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                             >> 0x17U)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                            >> 3U)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                           >> 4U)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                          >> 5U)) == 
                                   ((0x8fU >= (0xffU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                    && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                              (7U & 
                                               (((IData)(5U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                       >> 0x11U)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(6U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                                       >> 0x12U)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                       >> 0x13U)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(8U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v202 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v204 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x66U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                                    >> 0x16U)) 
                                                == 
                                                ((0x8fU 
                                                  >= 
                                                  (0xffU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                        (7U 
                                                         & (VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic))))))
                                                ? 1U
                                                : 0xffU)) 
                                   + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                              [(0xfU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                              >> 0x17U)) 
                                       == ((0x8fU >= 
                                            (0xffU 
                                             & ((IData)(1U) 
                                                + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                             [(0xfU 
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
                                             >> 0x18U)) 
                                      == ((0x8fU >= 
                                           (0xffU & 
                                            ((IData)(2U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                               (7U 
                                                & (((IData)(2U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                            [(0xfU 
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                            >> 4U)) 
                                     == ((0x8fU >= 
                                          (0xffU & 
                                           ((IData)(3U) 
                                            + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                         && (1U & (
                                                   vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                   (7U 
                                                    & (((IData)(3U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                           >> 5U)) 
                                    == ((0x8fU >= (0xffU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                        && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                  (7U 
                                                   & (((IData)(4U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                          >> 6U)) == 
                                   ((0x8fU >= (0xffU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                    && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                              (7U & 
                                               (((IData)(5U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                       >> 0x12U)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(6U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (vlSelf->dut__DOT__pool1_img_out
                                                       [
                                                       (0xfU 
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                                       >> 0x13U)) 
                                                   == 
                                                   ((0x8fU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                                           (7U 
                                                            & (((IData)(7U) 
                                                                + 
                                                                VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (vlSelf->dut__DOT__pool1_img_out
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
                                       >> 0x14U)) == 
                                ((0x8fU >= (0xffU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))) 
                                 && (1U & (vlSelf->dut__DOT__conv_pool2__DOT__core_weight[
                                           (7U & (((IData)(8U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) 
                                                  >> 5U))] 
                                           >> (0x1fU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v204 = 1U;
        }
    } else {
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v87 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v89 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v91 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v93 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v95 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v97 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v99 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v101 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v103 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v105 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v107 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v109 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v111 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v113 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v115 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v117 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v119 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v121 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v123 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v125 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v127 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v129 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v131 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v133 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v135 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v137 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v139 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v141 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v143 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v145 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v147 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v149 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v151 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v153 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v155 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v157 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v159 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v161 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v163 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v165 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v167 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v169 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v171 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v173 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v175 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v177 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v179 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v181 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v183 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v185 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v187 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v189 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v191 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v193 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v195 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v197 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v199 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v201 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v203 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v205 = 1U;
    }
}
