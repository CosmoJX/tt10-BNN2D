// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "Vdut__pch.h"
#include "Vdut___024root.h"

extern const VlWide<29>/*927:0*/ Vdut__ConstPool__CONST_hddcbba25_0;

VL_INLINE_OPT void Vdut___024root___nba_sequent__TOP__10(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___nba_sequent__TOP__10\n"); );
    // Body
    if (vlSelf->dut__DOT__conv_pool1__DOT__core_data_in_ready) {
        if ((1U & (~ (IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_data_out_ready)))) {
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v732 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x16eU] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                                     >> 8U)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v732 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v734 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x16fU] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                                     >> 9U)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v734 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v736 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x170U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                                     >> 0xaU)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v736 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v738 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x171U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                                     >> 0xbU)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v738 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v740 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x172U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                                     >> 0xcU)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v740 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v742 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x173U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                                     >> 0xdU)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v742 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v744 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x174U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                                     >> 0xeU)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v744 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v746 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x175U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                                     >> 0xfU)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v746 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v748 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x176U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                                     >> 0x10U)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                              >> 0x11U)) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                             >> 0x12U)) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                            >> 0xeU)) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                           >> 0xfU)) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                          >> 0x10U)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                       >> 0xcU)) == 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                                       >> 0xdU)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                       >> 0xeU)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v748 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v750 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x177U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                                     >> 0x11U)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                              >> 0x12U)) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                             >> 0x13U)) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                            >> 0xfU)) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                           >> 0x10U)) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                          >> 0x11U)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                       >> 0xdU)) == 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                                       >> 0xeU)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                       >> 0xfU)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v750 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v752 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x178U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                                     >> 0x12U)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                              >> 0x13U)) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                             >> 0x14U)) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                            >> 0x10U)) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                           >> 0x11U)) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                          >> 0x12U)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                       >> 0xeU)) == 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                                       >> 0xfU)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                       >> 0x10U)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v752 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v754 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x179U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                                     >> 0x13U)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                              >> 0x14U)) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                             >> 0x15U)) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                            >> 0x11U)) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                           >> 0x12U)) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                          >> 0x13U)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                       >> 0xfU)) == 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                                       >> 0x10U)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                       >> 0x11U)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v754 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v756 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x17aU] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                                     >> 0x14U)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                              >> 0x15U)) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                             >> 0x16U)) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                            >> 0x12U)) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                           >> 0x13U)) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                          >> 0x14U)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                       >> 0x10U)) == 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                                       >> 0x11U)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                       >> 0x12U)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v756 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v758 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x17bU] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                                     >> 0x15U)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                              >> 0x16U)) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                             >> 0x17U)) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                            >> 0x13U)) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                           >> 0x14U)) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                          >> 0x15U)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                       >> 0x11U)) == 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                                       >> 0x12U)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                       >> 0x13U)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v758 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v760 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x17cU] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                                     >> 0x16U)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                              >> 0x17U)) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                             >> 0x18U)) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                            >> 0x14U)) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                           >> 0x15U)) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                          >> 0x16U)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                       >> 0x12U)) == 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                                       >> 0x13U)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                       >> 0x14U)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v760 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v762 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x17dU] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                                     >> 0x17U)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                              >> 0x18U)) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                             >> 0x19U)) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                            >> 0x15U)) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                           >> 0x16U)) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                          >> 0x17U)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                       >> 0x13U)) == 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                                       >> 0x14U)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                       >> 0x15U)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v762 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v764 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x17eU] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                                     >> 0x18U)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                              >> 0x19U)) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                             >> 0x1aU)) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                            >> 0x16U)) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                           >> 0x17U)) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                          >> 0x18U)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                       >> 0x14U)) == 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                                       >> 0x15U)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                       >> 0x16U)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v764 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v766 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x17fU] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                                     >> 0x19U)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                              >> 0x1aU)) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                             >> 0x1bU)) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                            >> 0x17U)) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                           >> 0x18U)) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                          >> 0x19U)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                       >> 0x15U)) == 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                                       >> 0x16U)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                       >> 0x17U)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v766 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v768 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x180U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                                     >> 0x1aU)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                              >> 0x1bU)) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                             >> 0x1cU)) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                            >> 0x18U)) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                           >> 0x19U)) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                          >> 0x1aU)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                       >> 0x16U)) == 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                                       >> 0x17U)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                       >> 0x18U)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v768 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v770 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x181U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                                     >> 0x1bU)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                              >> 0x1cU)) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                             >> 0x1dU)) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                            >> 0x19U)) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                           >> 0x1aU)) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                          >> 0x1bU)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                       >> 0x17U)) == 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                                       >> 0x18U)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                       >> 0x19U)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v770 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v772 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x182U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                                     >> 0x1cU)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                              >> 0x1dU)) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                             >> 0x1eU)) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                            >> 0x1aU)) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                           >> 0x1bU)) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                          >> 0x1cU)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                       >> 0x18U)) == 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                                       >> 0x19U)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                       >> 0x1aU)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v772 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v774 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x183U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                                     >> 0x1dU)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                              >> 0x1eU)) 
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
                                  + (((((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                       >> 0x1fU) == 
                                      ((8U >= (0xfU 
                                               & ((IData)(2U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                       && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                      ? 1U : 0xffU)) 
                                 + (((1U & (((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                            >> 0x1bU)) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                           >> 0x1cU)) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                          >> 0x1dU)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                       >> 0x19U)) == 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                                       >> 0x1aU)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                       >> 0x1bU)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v774 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v776 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x184U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                                     >> 0x1eU)) 
                                                 == 
                                                 ((8U 
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
                                   + (((((0U >= (1U 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                          ? vlSelf->dut__DOT__conv1_img_in
                                         [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                          : Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                        >> 0x1fU) == 
                                       ((8U >= (0xfU 
                                                & ((IData)(1U) 
                                                   + 
                                                   VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                        && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                       ? 1U : 0xffU)) 
                                  + (((1U & ((0U >= 
                                              (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                              ? vlSelf->dut__DOT__conv1_img_in
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xdU])) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                            >> 0x1cU)) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                           >> 0x1dU)) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                          >> 0x1eU)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                       >> 0x1aU)) == 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                                       >> 0x1bU)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                       >> 0x1cU)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v776 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v778 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x185U] + ((((
                                                   (0U 
                                                    >= 
                                                    (1U 
                                                     & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                    ? 
                                                   vlSelf->dut__DOT__conv1_img_in
                                                   [
                                                   (1U 
                                                    & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xcU]
                                                    : 
                                                   Vdut__ConstPool__CONST_hddcbba25_0[0xcU]) 
                                                  >> 0x1fU) 
                                                 == 
                                                 ((8U 
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
                                   + (((1U & ((0U >= 
                                               (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                               ? vlSelf->dut__DOT__conv1_img_in
                                              [(1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xdU])) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                             >> 1U)) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                            >> 0x1dU)) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                           >> 0x1eU)) 
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
                               + (((((0U >= (1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                      ? vlSelf->dut__DOT__conv1_img_in
                                     [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                      : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                    >> 0x1fU) == ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & ((IData)(5U) 
                                                       + 
                                                       VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                                  && (1U 
                                                      & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                                         >> 
                                                         (0xfU 
                                                          & ((IData)(5U) 
                                                             + 
                                                             VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                   ? 1U : 0xffU)) + 
                              (((1U & (((0U >= (1U 
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                         ? vlSelf->dut__DOT__conv1_img_in
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                       >> 0x1bU)) == 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                                       >> 0x1cU)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                       >> 0x1dU)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v778 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v780 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x186U] + (((1U 
                                                  & ((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[0xdU])) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                      [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                       : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                          [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                           : Vdut__ConstPool__CONST_hddcbba25_0[0xeU])) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v780 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v782 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x187U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                                     >> 1U)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                       [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                        : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xeU])) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                  [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                   : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v782 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v784 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x188U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                                     >> 4U)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                       [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                        : Vdut__ConstPool__CONST_hddcbba25_0[0xfU])) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v784 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v786 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x189U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                                     >> 5U)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v786 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v788 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x18aU] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                                     >> 6U)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v788 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v790 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x18bU] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                                     >> 7U)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v790 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v792 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x18cU] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                                     >> 8U)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v792 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v794 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x18dU] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                                     >> 9U)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v794 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v796 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x18eU] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                                     >> 0xaU)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v796 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v798 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x18fU] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                                     >> 0xbU)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v798 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v800 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x190U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                                     >> 0xcU)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v800 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v802 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x191U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                                     >> 0xdU)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v802 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v804 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x192U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                                     >> 0xeU)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v804 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v806 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x193U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                                     >> 0xfU)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v806 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v808 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x194U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                                     >> 0x10U)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                              >> 0x11U)) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                             >> 0x12U)) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                            >> 0xeU)) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                           >> 0xfU)) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                          >> 0x10U)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
                                       >> 0xcU)) == 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
                                                       >> 0xdU)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
                                       >> 0xeU)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v808 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v810 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x195U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                                     >> 0x11U)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                              >> 0x12U)) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                             >> 0x13U)) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                            >> 0xfU)) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                           >> 0x10U)) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                          >> 0x11U)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
                                       >> 0xdU)) == 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
                                                       >> 0xeU)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
                                       >> 0xfU)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v810 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v812 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x196U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                                     >> 0x12U)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                              >> 0x13U)) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                             >> 0x14U)) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                            >> 0x10U)) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                           >> 0x11U)) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                          >> 0x12U)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
                                       >> 0xeU)) == 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
                                                       >> 0xfU)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
                                       >> 0x10U)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v812 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v814 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x197U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                                     >> 0x13U)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                              >> 0x14U)) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                             >> 0x15U)) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                            >> 0x11U)) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                           >> 0x12U)) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                          >> 0x13U)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
                                       >> 0xfU)) == 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
                                                       >> 0x10U)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
                                       >> 0x11U)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v814 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v816 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x198U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                                     >> 0x14U)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                              >> 0x15U)) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                             >> 0x16U)) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                            >> 0x12U)) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                           >> 0x13U)) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                          >> 0x14U)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
                                       >> 0x10U)) == 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
                                                       >> 0x11U)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
                                       >> 0x12U)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v816 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v818 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x199U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                                     >> 0x15U)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                              >> 0x16U)) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                             >> 0x17U)) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                            >> 0x13U)) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                           >> 0x14U)) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                          >> 0x15U)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
                                       >> 0x11U)) == 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
                                                       >> 0x12U)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
                                       >> 0x13U)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v818 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v820 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x19aU] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                                     >> 0x16U)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                              >> 0x17U)) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                             >> 0x18U)) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                            >> 0x14U)) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                           >> 0x15U)) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                          >> 0x16U)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
                                       >> 0x12U)) == 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
                                                       >> 0x13U)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
                                       >> 0x14U)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v820 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v822 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x19bU] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                                     >> 0x17U)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                              >> 0x18U)) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                             >> 0x19U)) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                            >> 0x15U)) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                           >> 0x16U)) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                          >> 0x17U)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
                                       >> 0x13U)) == 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
                                                       >> 0x14U)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
                                       >> 0x15U)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v822 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v824 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x19cU] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                                     >> 0x18U)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                              >> 0x19U)) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                             >> 0x1aU)) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                            >> 0x16U)) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                           >> 0x17U)) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                          >> 0x18U)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
                                       >> 0x14U)) == 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
                                                       >> 0x15U)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
                                       >> 0x16U)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v824 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v826 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x19dU] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                                     >> 0x19U)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                              >> 0x1aU)) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                             >> 0x1bU)) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                            >> 0x17U)) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                           >> 0x18U)) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                          >> 0x19U)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
                                       >> 0x15U)) == 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
                                                       >> 0x16U)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
                                       >> 0x17U)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v826 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v828 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x19eU] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                                     >> 0x1aU)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                              >> 0x1bU)) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                             >> 0x1cU)) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                            >> 0x18U)) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                           >> 0x19U)) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                          >> 0x1aU)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
                                       >> 0x16U)) == 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
                                                       >> 0x17U)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
                                       >> 0x18U)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v828 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v830 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x19fU] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                                     >> 0x1bU)) 
                                                 == 
                                                 ((8U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                              >> 0x1cU)) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xdU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0xdU]) 
                                             >> 0x1dU)) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                            >> 0x19U)) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                           >> 0x1aU)) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xeU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0xeU]) 
                                          >> 0x1bU)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
                                       >> 0x17U)) == 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
                                                       >> 0x18U)) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0xfU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0xfU]) 
                                       >> 0x19U)) == 
                                ((8U >= (0xfU & ((IData)(8U) 
                                                 + 
                                                 VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                 && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                           >> (0xfU 
                                               & ((IData)(8U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v830 = 1U;
        }
    } else {
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v733 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v735 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v737 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v739 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v741 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v743 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v745 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v747 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v749 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v751 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v753 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v755 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v757 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v759 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v761 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v763 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v765 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v767 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v769 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v771 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v773 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v775 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v777 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v779 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v781 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v783 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v785 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v787 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v789 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v791 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v793 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v795 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v797 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v799 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v801 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v803 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v805 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v807 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v809 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v811 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v813 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v815 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v817 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v819 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v821 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v823 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v825 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v827 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v829 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v831 = 1U;
    }
}
