// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "Vdut__pch.h"
#include "Vdut___024root.h"

extern const VlWide<29>/*927:0*/ Vdut__ConstPool__CONST_hddcbba25_0;

VL_INLINE_OPT void Vdut___024root___nba_sequent__TOP__17(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___nba_sequent__TOP__17\n"); );
    // Body
    if (vlSelf->dut__DOT__conv_pool1__DOT__core_data_in_ready) {
        if ((1U & (~ (IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_data_out_ready)))) {
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1432 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2ccU] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x17U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x17U]) 
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
                                         [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x17U]
                                          : Vdut__ConstPool__CONST_hddcbba25_0[0x17U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x18U])) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1432 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1434 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2cdU] + ((((
                                                   (0U 
                                                    >= 
                                                    (1U 
                                                     & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                    ? 
                                                   vlSelf->dut__DOT__conv1_img_in
                                                   [
                                                   (1U 
                                                    & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x17U]
                                                    : 
                                                   Vdut__ConstPool__CONST_hddcbba25_0[0x17U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x18U])) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                     [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                      : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1434 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1436 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2ceU] + (((1U 
                                                  & ((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[0x18U])) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                      [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                       : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                          [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                           : Vdut__ConstPool__CONST_hddcbba25_0[0x19U])) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1436 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1438 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2cfU] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                       [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                        : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x19U])) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                  [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                   : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1438 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1440 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2d0U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
                                                     >> 2U)) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x19U])) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                       [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                        : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU])) 
                                == ((8U >= (0xfU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                    && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                              >> (0xfU 
                                                  & ((IData)(8U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1440 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1442 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2d1U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
                                                     >> 3U)) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                  [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                   : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                                        : 
                                                       Vdut__ConstPool__CONST_hddcbba25_0[0x1aU])) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1442 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1444 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2d2U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                       [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                        : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU])) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1444 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1446 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2d3U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1446 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1448 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2d4U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1448 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1450 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2d5U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1450 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1452 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2d6U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1452 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1454 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2d7U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1454 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1456 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2d8U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1456 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1458 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2d9U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1458 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1460 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2daU] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1460 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1462 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2dbU] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1462 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1464 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2dcU] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1464 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1466 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2ddU] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1466 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1468 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2deU] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1468 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1470 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2dfU] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1470 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1472 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2e0U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1472 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1474 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2e1U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1474 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1476 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2e2U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1476 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1478 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2e3U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1478 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1480 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2e4U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1480 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1482 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2e5U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1482 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1484 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2e6U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1484 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1486 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2e7U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1486 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1488 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2e8U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1488 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1490 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2e9U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1490 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1492 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2eaU] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                         [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                          : Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x19U])) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1492 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1494 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2ebU] + ((((
                                                   (0U 
                                                    >= 
                                                    (1U 
                                                     & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                    ? 
                                                   vlSelf->dut__DOT__conv1_img_in
                                                   [
                                                   (1U 
                                                    & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x18U]
                                                    : 
                                                   Vdut__ConstPool__CONST_hddcbba25_0[0x18U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x19U])) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                     [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                      : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1494 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1496 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2ecU] + (((1U 
                                                  & ((0U 
                                                      >= 
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                      ? 
                                                     vlSelf->dut__DOT__conv1_img_in
                                                     [
                                                     (1U 
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[0x19U])) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                      [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                       : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                          [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                           : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU])) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1496 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1498 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2edU] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                       [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                        : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU])) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                  [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                   : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1498 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1500 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2eeU] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
                                                     >> 2U)) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU])) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                       [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                        : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU])) 
                                == ((8U >= (0xfU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                    && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                              >> (0xfU 
                                                  & ((IData)(8U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1500 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1502 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2efU] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
                                                     >> 3U)) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                  [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                   : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                                        : 
                                                       Vdut__ConstPool__CONST_hddcbba25_0[0x1bU])) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1502 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1504 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2f0U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                       [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                        : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU])) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1504 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1506 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2f1U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1506 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1508 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2f2U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1508 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1510 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2f3U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1510 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1512 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2f4U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1512 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1514 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2f5U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1514 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1516 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2f6U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1516 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1518 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2f7U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1518 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1520 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2f8U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1520 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1522 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2f9U] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1522 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1524 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2faU] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1524 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1526 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2fbU] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1526 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1528 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2fcU] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1528 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1530 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2fdU] + (((1U 
                                                  & (((0U 
                                                       >= 
                                                       (1U 
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic))
                                                       ? 
                                                      vlSelf->dut__DOT__conv1_img_in
                                                      [
                                                      (1U 
                                                       & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                       : 
                                                      Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1530 = 1U;
        }
    } else {
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1433 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1435 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1437 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1439 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1441 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1443 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1445 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1447 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1449 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1451 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1453 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1455 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1457 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1459 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1461 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1463 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1465 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1467 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1469 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1471 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1473 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1475 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1477 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1479 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1481 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1483 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1485 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1487 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1489 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1491 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1493 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1495 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1497 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1499 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1501 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1503 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1505 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1507 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1509 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1511 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1513 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1515 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1517 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1519 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1521 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1523 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1525 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1527 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1529 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1531 = 1U;
    }
}
