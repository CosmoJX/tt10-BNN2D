// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "Vdut__pch.h"
#include "Vdut___024root.h"

extern const VlWide<29>/*927:0*/ Vdut__ConstPool__CONST_hddcbba25_0;

VL_INLINE_OPT void Vdut___024root___nba_sequent__TOP__2(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->dut__DOT__conv_pool2__DOT__core_data_in_ready) {
        if ((1U & (~ (IData)(vlSelf->dut__DOT__conv_pool2__DOT__core_data_out_ready)))) {
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v206 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x67U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
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
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
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
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
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
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v206 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v208 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x68U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
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
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
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
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
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
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v208 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v210 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x69U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
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
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
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
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
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
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v210 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v212 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x6aU] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
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
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
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
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
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
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v212 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v214 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x6bU] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
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
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
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
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
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
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v214 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v216 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x6cU] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
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
                                        [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U]) 
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
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v216 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v218 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x6dU] + (((vlSelf->dut__DOT__pool1_img_out
                                                 [(0xfU 
                                                   & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][3U] 
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
                                        [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U]) 
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
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v218 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v220 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x6eU] + (((1U 
                                                 & vlSelf->dut__DOT__pool1_img_out
                                                 [(0xfU 
                                                   & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U]) 
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
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v220 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v222 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x6fU] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                 [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v222 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v224 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x70U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                 [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v224 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v226 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x71U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                 [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U]) 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v226 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v228 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x72U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                 [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U]) 
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
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v228 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v230 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x73U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v230 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v232 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x74U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v232 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v234 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x75U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v234 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v236 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x76U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v236 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v238 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x77U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v238 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v240 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x78U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v240 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v242 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x79U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v242 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v244 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x7aU] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v244 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v246 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x7bU] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                    [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v246 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v248 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x7cU] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                     [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                    [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U]) 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v248 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v250 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x7dU] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                      [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                     [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U]) 
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
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v250 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v252 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x7eU] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                      [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U]) 
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
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v252 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v254 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x7fU] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v254 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v256 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x80U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v256 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v258 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x81U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v258 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v260 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x82U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v260 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v262 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x83U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v262 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v264 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x84U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v264 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v266 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x85U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v266 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v268 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x86U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v268 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v270 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x87U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v270 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v272 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x88U] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                        [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U]) 
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
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v272 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v274 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x89U] + (((vlSelf->dut__DOT__pool1_img_out
                                                 [(0xfU 
                                                   & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][4U] 
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
                                        [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U]) 
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
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v274 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v276 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x8aU] + (((1U 
                                                 & vlSelf->dut__DOT__pool1_img_out
                                                 [(0xfU 
                                                   & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U]) 
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
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v276 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v278 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x8bU] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                 [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v278 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v280 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x8cU] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                 [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][6U]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v280 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v282 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x8dU] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                 [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][6U]) 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][6U] 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v282 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v284 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x8eU] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                 [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][6U]) 
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
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][6U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][6U] 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v284 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v286 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                    [0x8fU] + (((1U 
                                                 & (vlSelf->dut__DOT__pool1_img_out
                                                    [
                                                    (0xfU 
                                                     & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                               & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                              & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                           [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                          [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][5U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][6U] 
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
                                                        & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][6U] 
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
                                       [(0xfU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)][6U] 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v286 = 1U;
        }
    } else {
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v207 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v209 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v211 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v213 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v215 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v217 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v219 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v221 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v223 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v225 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v227 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v229 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v231 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v233 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v235 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v237 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v239 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v241 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v243 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v245 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v247 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v249 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v251 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v253 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v255 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v257 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v259 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v261 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v263 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v265 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v267 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v269 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v271 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v273 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v275 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v277 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v279 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v281 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v283 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v285 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v287 = 1U;
    }
    if (vlSelf->dut__DOT__conv_pool1__DOT__core_data_in_ready) {
        if ((1U & (~ (IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_data_out_ready)))) {
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v0 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0U] + (((1U & 
                                              ((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0U])) 
                                             == ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                             ? 1U : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                              >> 1U)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                             >> 2U)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                            >> 0x1eU)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((((0U >= (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                       ? vlSelf->dut__DOT__conv1_img_in
                                      [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                       : Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                     >> 0x1fU) == (
                                                   (8U 
                                                    >= 
                                                    (0xfU 
                                                     & ((IData)(4U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                          >> 
                                                          (0xfU 
                                                           & ((IData)(4U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & ((0U >= (1U 
                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                           ? vlSelf->dut__DOT__conv1_img_in
                                          [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                           : Vdut__ConstPool__CONST_hddcbba25_0[1U])) 
                                   == ((8U >= (0xfU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                       >> 0x1cU)) == 
                                ((8U >= (0xfU & ((IData)(6U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                                       >> 0x1dU)) 
                                                   == 
                                                   ((8U 
                                                     >= 
                                                     (0xfU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                           >> 
                                                           (0xfU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                       >> 0x1eU)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v0 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v2 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [1U] + (((1U & 
                                              (((0U 
                                                 >= 
                                                 (1U 
                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                 ? 
                                                vlSelf->dut__DOT__conv1_img_in
                                                [(1U 
                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                                 : 
                                                Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                               >> 1U)) 
                                             == ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                             ? 1U : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                              >> 2U)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                             >> 3U)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((((0U >= (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                        ? vlSelf->dut__DOT__conv1_img_in
                                       [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                        : Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                      >> 0x1fU) == 
                                     ((8U >= (0xfU 
                                              & ((IData)(3U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                      && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & ((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[1U])) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                          >> 1U)) == 
                                   ((8U >= (0xfU & 
                                            ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                    && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                              >> (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                       >> 0x1dU)) == 
                                ((8U >= (0xfU & ((IData)(6U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                                       >> 0x1eU)) 
                                                   == 
                                                   ((8U 
                                                     >= 
                                                     (0xfU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                           >> 
                                                           (0xfU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((((0U >= (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                   ? vlSelf->dut__DOT__conv1_img_in
                                  [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                   : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                 >> 0x1fU) == ((8U 
                                                >= 
                                                (0xfU 
                                                 & ((IData)(8U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                               && (1U 
                                                   & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                      >> 
                                                      (0xfU 
                                                       & ((IData)(8U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v2 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v4 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [2U] + (((1U & 
                                              (((0U 
                                                 >= 
                                                 (1U 
                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                 ? 
                                                vlSelf->dut__DOT__conv1_img_in
                                                [(1U 
                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                                 : 
                                                Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                               >> 2U)) 
                                             == ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                             ? 1U : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                              >> 3U)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                             >> 4U)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & ((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[1U])) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                           >> 1U)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                          >> 2U)) == 
                                   ((8U >= (0xfU & 
                                            ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                    && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                              >> (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                       >> 0x1eU)) == 
                                ((8U >= (0xfU & ((IData)(6U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                                    >> 0x1fU) 
                                                   == 
                                                   ((8U 
                                                     >= 
                                                     (0xfU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                           >> 
                                                           (0xfU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & ((0U >= (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                        ? vlSelf->dut__DOT__conv1_img_in
                                       [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U]
                                        : Vdut__ConstPool__CONST_hddcbba25_0[2U])) 
                                == ((8U >= (0xfU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                    && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                              >> (0xfU 
                                                  & ((IData)(8U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v4 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v6 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [3U] + (((1U & 
                                              (((0U 
                                                 >= 
                                                 (1U 
                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                 ? 
                                                vlSelf->dut__DOT__conv1_img_in
                                                [(1U 
                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                                 : 
                                                Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                               >> 3U)) 
                                             == ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                             ? 1U : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                              >> 4U)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                             >> 5U)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                            >> 1U)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                           >> 2U)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                          >> 3U)) == 
                                   ((8U >= (0xfU & 
                                            ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                    && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                              >> (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((((0U >= (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                   ? vlSelf->dut__DOT__conv1_img_in
                                  [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                   : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                 >> 0x1fU) == ((8U 
                                                >= 
                                                (0xfU 
                                                 & ((IData)(6U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                               && (1U 
                                                   & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                      >> 
                                                      (0xfU 
                                                       & ((IData)(6U) 
                                                          + 
                                                          VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & ((0U 
                                                        >= 
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                        ? 
                                                       vlSelf->dut__DOT__conv1_img_in
                                                       [
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U]
                                                        : 
                                                       Vdut__ConstPool__CONST_hddcbba25_0[2U])) 
                                                   == 
                                                   ((8U 
                                                     >= 
                                                     (0xfU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                           >> 
                                                           (0xfU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[2U]) 
                                       >> 1U)) == (
                                                   (8U 
                                                    >= 
                                                    (0xfU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                          >> 
                                                          (0xfU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v6 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v8 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [4U] + (((1U & 
                                              (((0U 
                                                 >= 
                                                 (1U 
                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                 ? 
                                                vlSelf->dut__DOT__conv1_img_in
                                                [(1U 
                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                                 : 
                                                Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                               >> 4U)) 
                                             == ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                             ? 1U : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                              >> 5U)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                             >> 6U)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                            >> 2U)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                           >> 3U)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                          >> 4U)) == 
                                   ((8U >= (0xfU & 
                                            ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                    && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                              >> (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & ((0U >= (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                        ? vlSelf->dut__DOT__conv1_img_in
                                       [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U]
                                        : Vdut__ConstPool__CONST_hddcbba25_0[2U])) 
                                == ((8U >= (0xfU & 
                                            ((IData)(6U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                    && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                              >> (0xfU 
                                                  & ((IData)(6U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[2U]) 
                                                       >> 1U)) 
                                                   == 
                                                   ((8U 
                                                     >= 
                                                     (0xfU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                           >> 
                                                           (0xfU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[2U]) 
                                       >> 2U)) == (
                                                   (8U 
                                                    >= 
                                                    (0xfU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                          >> 
                                                          (0xfU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v8 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v10 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [5U] + (((1U & 
                                              (((0U 
                                                 >= 
                                                 (1U 
                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                 ? 
                                                vlSelf->dut__DOT__conv1_img_in
                                                [(1U 
                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                                 : 
                                                Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                               >> 5U)) 
                                             == ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                             ? 1U : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                              >> 6U)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                             >> 7U)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                            >> 3U)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                           >> 4U)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                          >> 5U)) == 
                                   ((8U >= (0xfU & 
                                            ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                    && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                              >> (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[2U]) 
                                       >> 1U)) == (
                                                   (8U 
                                                    >= 
                                                    (0xfU 
                                                     & ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                          >> 
                                                          (0xfU 
                                                           & ((IData)(6U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[2U]) 
                                                       >> 2U)) 
                                                   == 
                                                   ((8U 
                                                     >= 
                                                     (0xfU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                           >> 
                                                           (0xfU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[2U]) 
                                       >> 3U)) == (
                                                   (8U 
                                                    >= 
                                                    (0xfU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                          >> 
                                                          (0xfU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v10 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v12 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [6U] + (((1U & 
                                              (((0U 
                                                 >= 
                                                 (1U 
                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                 ? 
                                                vlSelf->dut__DOT__conv1_img_in
                                                [(1U 
                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                                 : 
                                                Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                               >> 6U)) 
                                             == ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                             ? 1U : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                              >> 7U)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                             >> 8U)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                            >> 4U)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                           >> 5U)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                          >> 6U)) == 
                                   ((8U >= (0xfU & 
                                            ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                    && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                              >> (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[2U]) 
                                       >> 2U)) == (
                                                   (8U 
                                                    >= 
                                                    (0xfU 
                                                     & ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                          >> 
                                                          (0xfU 
                                                           & ((IData)(6U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[2U]) 
                                                       >> 3U)) 
                                                   == 
                                                   ((8U 
                                                     >= 
                                                     (0xfU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                           >> 
                                                           (0xfU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[2U]) 
                                       >> 4U)) == (
                                                   (8U 
                                                    >= 
                                                    (0xfU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                          >> 
                                                          (0xfU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v12 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v14 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [7U] + (((1U & 
                                              (((0U 
                                                 >= 
                                                 (1U 
                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                 ? 
                                                vlSelf->dut__DOT__conv1_img_in
                                                [(1U 
                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                                 : 
                                                Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                               >> 7U)) 
                                             == ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                             ? 1U : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                              >> 8U)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                             >> 9U)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                            >> 5U)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                           >> 6U)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                          >> 7U)) == 
                                   ((8U >= (0xfU & 
                                            ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                    && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                              >> (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[2U]) 
                                       >> 3U)) == (
                                                   (8U 
                                                    >= 
                                                    (0xfU 
                                                     & ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                          >> 
                                                          (0xfU 
                                                           & ((IData)(6U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[2U]) 
                                                       >> 4U)) 
                                                   == 
                                                   ((8U 
                                                     >= 
                                                     (0xfU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                           >> 
                                                           (0xfU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[2U]) 
                                       >> 5U)) == (
                                                   (8U 
                                                    >= 
                                                    (0xfU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                          >> 
                                                          (0xfU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v14 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v16 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [8U] + (((1U & 
                                              (((0U 
                                                 >= 
                                                 (1U 
                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                 ? 
                                                vlSelf->dut__DOT__conv1_img_in
                                                [(1U 
                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                                 : 
                                                Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                               >> 8U)) 
                                             == ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                             ? 1U : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                              >> 9U)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                             >> 0xaU)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                            >> 6U)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                           >> 7U)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                          >> 8U)) == 
                                   ((8U >= (0xfU & 
                                            ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                    && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                              >> (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[2U]) 
                                       >> 4U)) == (
                                                   (8U 
                                                    >= 
                                                    (0xfU 
                                                     & ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                          >> 
                                                          (0xfU 
                                                           & ((IData)(6U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[2U]) 
                                                       >> 5U)) 
                                                   == 
                                                   ((8U 
                                                     >= 
                                                     (0xfU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                           >> 
                                                           (0xfU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[2U]) 
                                       >> 6U)) == (
                                                   (8U 
                                                    >= 
                                                    (0xfU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                          >> 
                                                          (0xfU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v16 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v18 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [9U] + (((1U & 
                                              (((0U 
                                                 >= 
                                                 (1U 
                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                 ? 
                                                vlSelf->dut__DOT__conv1_img_in
                                                [(1U 
                                                  & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                                 : 
                                                Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                               >> 9U)) 
                                             == ((8U 
                                                  >= 
                                                  (0xfU 
                                                   & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                 && (1U 
                                                     & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                        >> 
                                                        (0xfU 
                                                         & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                             ? 1U : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                              >> 0xaU)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                             >> 0xbU)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                            >> 7U)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                           >> 8U)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                          >> 9U)) == 
                                   ((8U >= (0xfU & 
                                            ((IData)(5U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                    && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                              >> (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[2U]) 
                                       >> 5U)) == (
                                                   (8U 
                                                    >= 
                                                    (0xfU 
                                                     & ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                          >> 
                                                          (0xfU 
                                                           & ((IData)(6U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[2U]) 
                                                       >> 6U)) 
                                                   == 
                                                   ((8U 
                                                     >= 
                                                     (0xfU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                           >> 
                                                           (0xfU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[2U]) 
                                       >> 7U)) == (
                                                   (8U 
                                                    >= 
                                                    (0xfU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                          >> 
                                                          (0xfU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v18 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v20 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xaU] + (((1U 
                                                & (((0U 
                                                     >= 
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                     ? 
                                                    vlSelf->dut__DOT__conv1_img_in
                                                    [
                                                    (1U 
                                                     & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                                     : 
                                                    Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                                   >> 0xaU)) 
                                               == (
                                                   (8U 
                                                    >= 
                                                    (0xfU 
                                                     & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                          >> 
                                                          (0xfU 
                                                           & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                               ? 1U
                                               : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                              >> 0xbU)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                             >> 0xcU)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                            >> 8U)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                           >> 9U)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                          >> 0xaU)) 
                                   == ((8U >= (0xfU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[2U]) 
                                       >> 6U)) == (
                                                   (8U 
                                                    >= 
                                                    (0xfU 
                                                     & ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                          >> 
                                                          (0xfU 
                                                           & ((IData)(6U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[2U]) 
                                                       >> 7U)) 
                                                   == 
                                                   ((8U 
                                                     >= 
                                                     (0xfU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                           >> 
                                                           (0xfU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[2U]) 
                                       >> 8U)) == (
                                                   (8U 
                                                    >= 
                                                    (0xfU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                          >> 
                                                          (0xfU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v20 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v22 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xbU] + (((1U 
                                                & (((0U 
                                                     >= 
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                     ? 
                                                    vlSelf->dut__DOT__conv1_img_in
                                                    [
                                                    (1U 
                                                     & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                                     : 
                                                    Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                                   >> 0xbU)) 
                                               == (
                                                   (8U 
                                                    >= 
                                                    (0xfU 
                                                     & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                          >> 
                                                          (0xfU 
                                                           & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                               ? 1U
                                               : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                              >> 0xcU)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                             >> 0xdU)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                            >> 9U)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                           >> 0xaU)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                          >> 0xbU)) 
                                   == ((8U >= (0xfU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[2U]) 
                                       >> 7U)) == (
                                                   (8U 
                                                    >= 
                                                    (0xfU 
                                                     & ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                          >> 
                                                          (0xfU 
                                                           & ((IData)(6U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[2U]) 
                                                       >> 8U)) 
                                                   == 
                                                   ((8U 
                                                     >= 
                                                     (0xfU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                           >> 
                                                           (0xfU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[2U]) 
                                       >> 9U)) == (
                                                   (8U 
                                                    >= 
                                                    (0xfU 
                                                     & ((IData)(8U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                          >> 
                                                          (0xfU 
                                                           & ((IData)(8U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v22 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v24 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xcU] + (((1U 
                                                & (((0U 
                                                     >= 
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                     ? 
                                                    vlSelf->dut__DOT__conv1_img_in
                                                    [
                                                    (1U 
                                                     & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                                     : 
                                                    Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                                   >> 0xcU)) 
                                               == (
                                                   (8U 
                                                    >= 
                                                    (0xfU 
                                                     & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                          >> 
                                                          (0xfU 
                                                           & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                               ? 1U
                                               : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                              >> 0xdU)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                             >> 0xeU)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                            >> 0xaU)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                           >> 0xbU)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                          >> 0xcU)) 
                                   == ((8U >= (0xfU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[2U]) 
                                       >> 8U)) == (
                                                   (8U 
                                                    >= 
                                                    (0xfU 
                                                     & ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                          >> 
                                                          (0xfU 
                                                           & ((IData)(6U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[2U]) 
                                                       >> 9U)) 
                                                   == 
                                                   ((8U 
                                                     >= 
                                                     (0xfU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                           >> 
                                                           (0xfU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[2U]) 
                                       >> 0xaU)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v24 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v26 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xdU] + (((1U 
                                                & (((0U 
                                                     >= 
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                     ? 
                                                    vlSelf->dut__DOT__conv1_img_in
                                                    [
                                                    (1U 
                                                     & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                                     : 
                                                    Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                                   >> 0xdU)) 
                                               == (
                                                   (8U 
                                                    >= 
                                                    (0xfU 
                                                     & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                          >> 
                                                          (0xfU 
                                                           & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                               ? 1U
                                               : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                              >> 0xeU)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                             >> 0xfU)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                            >> 0xbU)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                           >> 0xcU)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                          >> 0xdU)) 
                                   == ((8U >= (0xfU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[2U]) 
                                       >> 9U)) == (
                                                   (8U 
                                                    >= 
                                                    (0xfU 
                                                     & ((IData)(6U) 
                                                        + 
                                                        VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                          >> 
                                                          (0xfU 
                                                           & ((IData)(6U) 
                                                              + 
                                                              VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[2U]) 
                                                       >> 0xaU)) 
                                                   == 
                                                   ((8U 
                                                     >= 
                                                     (0xfU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                           >> 
                                                           (0xfU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[2U]) 
                                       >> 0xbU)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v26 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v28 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xeU] + (((1U 
                                                & (((0U 
                                                     >= 
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                     ? 
                                                    vlSelf->dut__DOT__conv1_img_in
                                                    [
                                                    (1U 
                                                     & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                                     : 
                                                    Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                                   >> 0xeU)) 
                                               == (
                                                   (8U 
                                                    >= 
                                                    (0xfU 
                                                     & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                          >> 
                                                          (0xfU 
                                                           & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                               ? 1U
                                               : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                              >> 0xfU)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                             >> 0x10U)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                            >> 0xcU)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                           >> 0xdU)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                          >> 0xeU)) 
                                   == ((8U >= (0xfU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[2U]) 
                                       >> 0xaU)) == 
                                ((8U >= (0xfU & ((IData)(6U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[2U]) 
                                                       >> 0xbU)) 
                                                   == 
                                                   ((8U 
                                                     >= 
                                                     (0xfU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                           >> 
                                                           (0xfU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[2U]) 
                                       >> 0xcU)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v28 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v30 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0xfU] + (((1U 
                                                & (((0U 
                                                     >= 
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                     ? 
                                                    vlSelf->dut__DOT__conv1_img_in
                                                    [
                                                    (1U 
                                                     & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                                     : 
                                                    Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                                   >> 0xfU)) 
                                               == (
                                                   (8U 
                                                    >= 
                                                    (0xfU 
                                                     & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))) 
                                                   && (1U 
                                                       & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                          >> 
                                                          (0xfU 
                                                           & VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))))))
                                               ? 1U
                                               : 0xffU)) 
                                   + (((1U & (((0U 
                                                >= 
                                                (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                ? vlSelf->dut__DOT__conv1_img_in
                                               [(1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                              >> 0x10U)) 
                                       == ((8U >= (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                           && (1U & 
                                               ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & (((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0U]) 
                                             >> 0x11U)) 
                                      == ((8U >= (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                          && (1U & 
                                              ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                               >> (0xfU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                            >> 0xdU)) 
                                     == ((8U >= (0xfU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                         && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                   >> 
                                                   (0xfU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                     ? 1U : 0xffU)) 
                                + (((1U & (((0U >= 
                                             (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                             ? vlSelf->dut__DOT__conv1_img_in
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                           >> 0xeU)) 
                                    == ((8U >= (0xfU 
                                                & ((IData)(4U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                    ? 1U : 0xffU)) 
                               + (((1U & (((0U >= (1U 
                                                   & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                            ? vlSelf->dut__DOT__conv1_img_in
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][1U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[1U]) 
                                          >> 0xfU)) 
                                   == ((8U >= (0xfU 
                                               & ((IData)(5U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(5U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[2U]) 
                                       >> 0xbU)) == 
                                ((8U >= (0xfU & ((IData)(6U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(6U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)) + ((
                                                   (1U 
                                                    & (((0U 
                                                         >= 
                                                         (1U 
                                                          & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                         ? 
                                                        vlSelf->dut__DOT__conv1_img_in
                                                        [
                                                        (1U 
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[2U]) 
                                                       >> 0xcU)) 
                                                   == 
                                                   ((8U 
                                                     >= 
                                                     (0xfU 
                                                      & ((IData)(7U) 
                                                         + 
                                                         VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                    && (1U 
                                                        & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                           >> 
                                                           (0xfU 
                                                            & ((IData)(7U) 
                                                               + 
                                                               VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                                   ? 1U
                                                   : 0xffU)) 
                            + (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][2U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[2U]) 
                                       >> 0xdU)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v30 = 1U;
        }
    } else {
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v3 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v5 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v7 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v9 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v11 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v13 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v15 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v17 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v19 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v21 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v23 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v25 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v27 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v29 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v31 = 1U;
    }
}
