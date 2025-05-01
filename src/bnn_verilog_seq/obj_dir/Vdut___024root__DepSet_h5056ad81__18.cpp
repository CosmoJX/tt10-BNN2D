// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "Vdut__pch.h"
#include "Vdut___024root.h"

extern const VlWide<29>/*927:0*/ Vdut__ConstPool__CONST_hddcbba25_0;
extern const VlWide<25>/*799:0*/ Vdut__ConstPool__CONST_h5d7a0c65_0;

VL_INLINE_OPT void Vdut___024root___nba_sequent__TOP__18(Vdut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root___nba_sequent__TOP__18\n"); );
    // Body
    if (vlSelf->dut__DOT__conv_pool1__DOT__core_data_in_ready) {
        if ((1U & (~ (IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_data_out_ready)))) {
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1532 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2feU] + (((1U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1532 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1534 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x2ffU] + (((1U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1534 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1536 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x300U] + (((1U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1536 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1538 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x301U] + (((1U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1538 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1540 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x302U] + (((1U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1540 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1542 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x303U] + (((1U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1542 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1544 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x304U] + (((1U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1544 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1546 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x305U] + (((1U 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1546 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1548 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x306U] + (((1U 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1548 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1550 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x307U] + (((1U 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1550 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1552 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x308U] + (((1U 
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
                                         [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x19U]
                                          : Vdut__ConstPool__CONST_hddcbba25_0[0x19U]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU])) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1552 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1554 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x309U] + ((((
                                                   (0U 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU])) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                     [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                      : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1554 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1556 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x30aU] + (((1U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                      [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                       : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                          [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                           : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU])) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1556 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1558 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x30bU] + (((1U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                       [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                        : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU])) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                  [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                   : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1558 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1560 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x30cU] + (((1U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU])) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                                      & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                                      : 
                                                     Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                       [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1cU]
                                        : Vdut__ConstPool__CONST_hddcbba25_0[0x1cU])) 
                                == ((8U >= (0xfU & 
                                            ((IData)(8U) 
                                             + VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))) 
                                    && (1U & ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core_weight) 
                                              >> (0xfU 
                                                  & ((IData)(8U) 
                                                     + 
                                                     VL_MULS_III(32, (IData)(9U), vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)))))))
                                ? 1U : 0xffU)));
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1560 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1562 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x30dU] + (((1U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                  [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                   : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                                        & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1cU]
                                                        : 
                                                       Vdut__ConstPool__CONST_hddcbba25_0[0x1cU])) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1cU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1cU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1562 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1564 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x30eU] + (((1U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                       [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1cU]
                                        : Vdut__ConstPool__CONST_hddcbba25_0[0x1cU])) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1cU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1cU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1cU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1cU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1564 = 1U;
            vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1566 
                = (0xffU & (((((((((vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                    [0x30fU] + (((1U 
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
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                                : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                                & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1aU]
                                               : Vdut__ConstPool__CONST_hddcbba25_0[0x1aU]) 
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
                                             [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                              : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                            [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                             : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                           [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1bU]
                                            : Vdut__ConstPool__CONST_hddcbba25_0[0x1bU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1cU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1cU]) 
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
                                                         & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1cU]
                                                         : 
                                                        Vdut__ConstPool__CONST_hddcbba25_0[0x1cU]) 
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
                                        [(1U & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)][0x1cU]
                                         : Vdut__ConstPool__CONST_hddcbba25_0[0x1cU]) 
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
            vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1566 = 1U;
        }
        if (vlSelf->dut__DOT__conv_pool1__DOT__core_data_out_ready) {
            vlSelf->__Vdly__dut__DOT__conv_pool1__DOT__core_data_out_ready = 0U;
        } else {
            vlSelf->__Vdly__dut__DOT__conv_pool1__DOT__core__DOT__cur_ic 
                = ((IData)(1U) + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic);
            if ((1U == vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic)) {
                vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__unnamedblk1__DOT__i = 0U;
                while (VL_GTS_III(32, 0x310U, vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__unnamedblk1__DOT__i)) {
                    vlSelf->dut__DOT__conv_pool1__DOT__core__DOT____Vlvbound_hec98a65a__0 
                        = (1U & (~ (((0x30fU >= (0x3ffU 
                                                 & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__unnamedblk1__DOT__i))
                                      ? vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount
                                     [(0x3ffU & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__unnamedblk1__DOT__i)]
                                      : 0U) >> 7U)));
                    if (VL_LIKELY((0x30fU >= (0x3ffU 
                                              & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__unnamedblk1__DOT__i)))) {
                        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[(0x1fU 
                                                                         & (vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__unnamedblk1__DOT__i 
                                                                            >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__unnamedblk1__DOT__i))) 
                                & vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[
                                (0x1fU & (vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__unnamedblk1__DOT__i 
                                          >> 5U))]) 
                               | ((IData)(vlSelf->dut__DOT__conv_pool1__DOT__core__DOT____Vlvbound_hec98a65a__0) 
                                  << (0x1fU & vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__unnamedblk1__DOT__i)));
                    }
                    vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__unnamedblk1__DOT__i 
                        = ((IData)(1U) + vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__unnamedblk1__DOT__i);
                }
                vlSelf->__Vdly__dut__DOT__conv_pool1__DOT__core_data_out_ready = 1U;
            }
        }
    } else {
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1533 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1535 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1537 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1539 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1541 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1543 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1545 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1547 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1549 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1551 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1553 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1555 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1557 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1559 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1561 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1563 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1565 = 1U;
        vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1567 = 1U;
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0U] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[0U];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[1U] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[1U];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[2U] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[2U];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[3U] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[3U];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[4U] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[4U];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[5U] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[5U];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[6U] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[6U];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[7U] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[7U];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[8U] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[8U];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[9U] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[9U];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xaU] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[0xaU];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xbU] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[0xbU];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xcU] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[0xcU];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xdU] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[0xdU];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xeU] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[0xeU];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0xfU] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[0xfU];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x10U] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[0x10U];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x11U] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[0x11U];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x12U] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[0x12U];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x13U] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[0x13U];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x14U] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[0x14U];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x15U] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[0x15U];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x16U] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[0x16U];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x17U] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[0x17U];
        vlSelf->dut__DOT__conv_pool1__DOT__core_img_out[0x18U] 
            = Vdut__ConstPool__CONST_h5d7a0c65_0[0x18U];
        vlSelf->__Vdly__dut__DOT__conv_pool1__DOT__core_data_out_ready = 0U;
        vlSelf->__Vdly__dut__DOT__conv_pool1__DOT__core__DOT__cur_ic = 0U;
    }
    if (vlSelf->dut__DOT__fc_data_ready) {
        if ((1U & (~ (IData)(vlSelf->data_out_ready)))) {
            if (VL_LTS_III(16, (IData)(vlSelf->dut__DOT__compare__DOT__max), 
                           ((9U >= (0xfU & vlSelf->dut__DOT__compare__DOT__cur_ic))
                             ? vlSelf->dut__DOT__fc_out
                            [(0xfU & vlSelf->dut__DOT__compare__DOT__cur_ic)]
                             : 0U))) {
                vlSelf->dut__DOT__compare__DOT__max 
                    = ((9U >= (0xfU & vlSelf->dut__DOT__compare__DOT__cur_ic))
                        ? vlSelf->dut__DOT__fc_out[
                       (0xfU & vlSelf->dut__DOT__compare__DOT__cur_ic)]
                        : 0U);
                vlSelf->__Vdly__dut__DOT__compare__DOT__max_ind 
                    = (0xfU & vlSelf->dut__DOT__compare__DOT__cur_ic);
            }
            vlSelf->__Vdly__dut__DOT__compare__DOT__cur_ic 
                = ((IData)(1U) + vlSelf->dut__DOT__compare__DOT__cur_ic);
            if ((0xaU == vlSelf->dut__DOT__compare__DOT__cur_ic)) {
                vlSelf->data_out_ready = 1U;
                vlSelf->dut__DOT__result = vlSelf->dut__DOT__compare__DOT__max_ind;
            }
        }
    } else {
        vlSelf->dut__DOT__compare__DOT__max = vlSelf->dut__DOT__fc_out
            [0U];
        vlSelf->__Vdly__dut__DOT__compare__DOT__max_ind = 0U;
        vlSelf->__Vdly__dut__DOT__compare__DOT__cur_ic = 0U;
        vlSelf->data_out_ready = 0U;
        vlSelf->dut__DOT__result = 0U;
    }
    if (vlSelf->dut__DOT__conv_pool2__DOT__core_data_in_ready) {
        if (vlSelf->dut__DOT__conv_pool2__DOT__core_data_out_ready) {
            vlSelf->__Vdly__dut__DOT__conv_pool2__DOT__core_data_out_ready = 0U;
        } else {
            vlSelf->__Vdly__dut__DOT__conv_pool2__DOT__core__DOT__cur_ic 
                = ((IData)(1U) + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic);
            if ((0x10U == vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic)) {
                vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__unnamedblk1__DOT__i = 0U;
                while (VL_GTS_III(32, 0x90U, vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__unnamedblk1__DOT__i)) {
                    vlSelf->dut__DOT__conv_pool2__DOT__core__DOT____Vlvbound_hf69b86ac__0 
                        = (1U & (~ (((0x8fU >= (0xffU 
                                                & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__unnamedblk1__DOT__i))
                                      ? vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount
                                     [(0xffU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__unnamedblk1__DOT__i)]
                                      : 0U) >> 7U)));
                    if (VL_LIKELY((0x8fU >= (0xffU 
                                             & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__unnamedblk1__DOT__i)))) {
                        vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[(7U 
                                                                         & (vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__unnamedblk1__DOT__i 
                                                                            >> 5U))] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__unnamedblk1__DOT__i))) 
                                & vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[
                                (7U & (vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__unnamedblk1__DOT__i 
                                       >> 5U))]) | 
                               ((IData)(vlSelf->dut__DOT__conv_pool2__DOT__core__DOT____Vlvbound_hf69b86ac__0) 
                                << (0x1fU & vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__unnamedblk1__DOT__i)));
                    }
                    vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__unnamedblk1__DOT__i 
                        = ((IData)(1U) + vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__unnamedblk1__DOT__i);
                }
                vlSelf->__Vdly__dut__DOT__conv_pool2__DOT__core_data_out_ready = 1U;
            }
        }
    } else {
        vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[0U] = 0U;
        vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[1U] = 0U;
        vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[2U] = 0U;
        vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[3U] = 0U;
        vlSelf->dut__DOT__conv_pool2__DOT__core_img_out[4U] = 0U;
        vlSelf->__Vdly__dut__DOT__conv_pool2__DOT__core_data_out_ready = 0U;
        vlSelf->__Vdly__dut__DOT__conv_pool2__DOT__core__DOT__cur_ic = 0U;
    }
    vlSelf->dut__DOT__fc__DOT__cur_oc = vlSelf->__Vdly__dut__DOT__fc__DOT__cur_oc;
    vlSelf->dut__DOT__fc__DOT__cur_ic = vlSelf->__Vdly__dut__DOT__fc__DOT__cur_ic;
    vlSelf->dut__DOT__fc__DOT__temp_out = vlSelf->__Vdly__dut__DOT__fc__DOT__temp_out;
    vlSelf->dut__DOT__fc_data_ready = vlSelf->__Vdly__dut__DOT__fc_data_ready;
    vlSelf->dut__DOT__compare__DOT__max_ind = vlSelf->__Vdly__dut__DOT__compare__DOT__max_ind;
    vlSelf->dut__DOT__compare__DOT__cur_ic = vlSelf->__Vdly__dut__DOT__compare__DOT__cur_ic;
    if (vlSelf->__Vdlyvset__dut__DOT__fc_out__v0) {
        vlSelf->dut__DOT__fc_out[vlSelf->__Vdlyvdim0__dut__DOT__fc_out__v0] 
            = vlSelf->__Vdlyvval__dut__DOT__fc_out__v0;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__fc_out__v1) {
        vlSelf->dut__DOT__fc_out[0U] = 0U;
        vlSelf->dut__DOT__fc_out[1U] = 0U;
        vlSelf->dut__DOT__fc_out[2U] = 0U;
        vlSelf->dut__DOT__fc_out[3U] = 0U;
        vlSelf->dut__DOT__fc_out[4U] = 0U;
        vlSelf->dut__DOT__fc_out[5U] = 0U;
        vlSelf->dut__DOT__fc_out[6U] = 0U;
        vlSelf->dut__DOT__fc_out[7U] = 0U;
        vlSelf->dut__DOT__fc_out[8U] = 0U;
        vlSelf->dut__DOT__fc_out[9U] = 0U;
    }
    vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic 
        = vlSelf->__Vdly__dut__DOT__conv_pool2__DOT__core__DOT__cur_ic;
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v0) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v0;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v1) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v2) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[1U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v2;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v3) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v4) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[2U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v4;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v5) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[2U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v6) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[3U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v6;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v7) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v8) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[4U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v8;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v9) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[4U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v10) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[5U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v10;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v11) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[5U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v12) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[6U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v12;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v13) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[6U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v14) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[7U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v14;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v15) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v16) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[8U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v16;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v17) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[8U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v18) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[9U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v18;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v19) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[9U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v20) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0xaU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v20;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v21) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0xaU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v22) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0xbU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v22;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v23) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0xbU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v24) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0xcU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v24;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v25) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0xcU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v26) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0xdU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v26;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v27) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0xdU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v28) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0xeU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v28;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v29) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0xeU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v30) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0xfU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v30;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v31) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0xfU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v32) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x10U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v32;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v33) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x10U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v34) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x11U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v34;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v35) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x11U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v36) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x12U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v36;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v37) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x12U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v38) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x13U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v38;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v39) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x13U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v40) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x14U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v40;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v41) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x14U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v42) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x15U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v42;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v43) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x15U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v44) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x16U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v44;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v45) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x16U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v46) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x17U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v46;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v47) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x17U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v48) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x18U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v48;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v49) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x18U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v50) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x19U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v50;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v51) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x19U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v52) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x1aU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v52;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v53) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x1aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v54) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x1bU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v54;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v55) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x1bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v56) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x1cU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v56;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v57) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x1cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v58) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x1dU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v58;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v59) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x1dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v60) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x1eU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v60;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v61) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x1eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v62) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x1fU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v62;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v63) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x1fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v64) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x20U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v64;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v65) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x20U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v66) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x21U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v66;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v67) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x21U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v68) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x22U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v68;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v69) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x22U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v70) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x23U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v70;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v71) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x23U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v72) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x24U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v72;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v73) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x24U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v74) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x25U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v74;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v75) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x25U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v76) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x26U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v76;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v77) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x26U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v78) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x27U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v78;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v79) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x27U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v80) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x28U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v80;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v81) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x28U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v82) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x29U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v82;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v83) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x29U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v84) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x2aU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v84;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v85) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x2aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v86) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x2bU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v86;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v87) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x2bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v88) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x2cU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v88;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v89) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x2cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v90) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x2dU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v90;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v91) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x2dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v92) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x2eU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v92;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v93) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x2eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v94) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x2fU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v94;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v95) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x2fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v96) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x30U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v96;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v97) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x30U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v98) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x31U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v98;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v99) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x31U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v100) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x32U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v100;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v101) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x32U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v102) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x33U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v102;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v103) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x33U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v104) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x34U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v104;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v105) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x34U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v106) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x35U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v106;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v107) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x35U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v108) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x36U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v108;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v109) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x36U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v110) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x37U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v110;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v111) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x37U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v112) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x38U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v112;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v113) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x38U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v114) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x39U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v114;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v115) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x39U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v116) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x3aU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v116;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v117) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x3aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v118) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x3bU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v118;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v119) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x3bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v120) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x3cU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v120;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v121) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x3cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v122) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x3dU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v122;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v123) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x3dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v124) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x3eU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v124;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v125) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x3eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v126) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x3fU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v126;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v127) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x3fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v128) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x40U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v128;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v129) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x40U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v130) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x41U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v130;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v131) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x41U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v132) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x42U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v132;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v133) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x42U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v134) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x43U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v134;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v135) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x43U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v136) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x44U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v136;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v137) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x44U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v138) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x45U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v138;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v139) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x45U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v140) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x46U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v140;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v141) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x46U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v142) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x47U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v142;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v143) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x47U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v144) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x48U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v144;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v145) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x48U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v146) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x49U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v146;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v147) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x49U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v148) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x4aU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v148;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v149) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x4aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v150) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x4bU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v150;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v151) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x4bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v152) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x4cU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v152;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v153) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x4cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v154) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x4dU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v154;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v155) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x4dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v156) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x4eU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v156;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v157) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x4eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v158) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x4fU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v158;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v159) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x4fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v160) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x50U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v160;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v161) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x50U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v162) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x51U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v162;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v163) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x51U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v164) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x52U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v164;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v165) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x52U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v166) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x53U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v166;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v167) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x53U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v168) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x54U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v168;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v169) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x54U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v170) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x55U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v170;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v171) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x55U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v172) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x56U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v172;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v173) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x56U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v174) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x57U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v174;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v175) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x57U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v176) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x58U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v176;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v177) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x58U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v178) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x59U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v178;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v179) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x59U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v180) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x5aU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v180;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v181) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x5aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v182) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x5bU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v182;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v183) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x5bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v184) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x5cU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v184;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v185) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x5cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v186) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x5dU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v186;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v187) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x5dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v188) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x5eU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v188;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v189) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x5eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v190) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x5fU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v190;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v191) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x5fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v192) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x60U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v192;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v193) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x60U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v194) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x61U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v194;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v195) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x61U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v196) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x62U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v196;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v197) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x62U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v198) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x63U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v198;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v199) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x63U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v200) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x64U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v200;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v201) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x64U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v202) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x65U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v202;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v203) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x65U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v204) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x66U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v204;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v205) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x66U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v206) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x67U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v206;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v207) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x67U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v208) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x68U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v208;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v209) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x68U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v210) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x69U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v210;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v211) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x69U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v212) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x6aU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v212;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v213) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x6aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v214) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x6bU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v214;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v215) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x6bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v216) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x6cU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v216;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v217) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x6cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v218) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x6dU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v218;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v219) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x6dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v220) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x6eU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v220;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v221) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x6eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v222) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x6fU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v222;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v223) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x6fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v224) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x70U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v224;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v225) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x70U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v226) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x71U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v226;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v227) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x71U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v228) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x72U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v228;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v229) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x72U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v230) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x73U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v230;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v231) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x73U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v232) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x74U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v232;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v233) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x74U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v234) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x75U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v234;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v235) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x75U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v236) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x76U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v236;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v237) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x76U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v238) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x77U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v238;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v239) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x77U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v240) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x78U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v240;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v241) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x78U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v242) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x79U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v242;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v243) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x79U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v244) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x7aU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v244;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v245) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x7aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v246) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x7bU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v246;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v247) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x7bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v248) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x7cU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v248;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v249) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x7cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v250) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x7dU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v250;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v251) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x7dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v252) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x7eU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v252;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v253) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x7eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v254) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x7fU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v254;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v255) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x7fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v256) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x80U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v256;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v257) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x80U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v258) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x81U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v258;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v259) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x81U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v260) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x82U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v260;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v261) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x82U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v262) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x83U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v262;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v263) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x83U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v264) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x84U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v264;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v265) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x84U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v266) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x85U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v266;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v267) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x85U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v268) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x86U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v268;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v269) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x86U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v270) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x87U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v270;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v271) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x87U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v272) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x88U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v272;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v273) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x88U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v274) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x89U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v274;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v275) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x89U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v276) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x8aU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v276;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v277) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x8aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v278) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x8bU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v278;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v279) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x8bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v280) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x8cU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v280;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v281) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x8cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v282) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x8dU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v282;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v283) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x8dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v284) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x8eU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v284;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v285) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x8eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v286) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x8fU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v286;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool2__DOT__core__DOT__popcount__v287) {
        vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount[0x8fU] = 0U;
    }
    vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic 
        = vlSelf->__Vdly__dut__DOT__conv_pool1__DOT__core__DOT__cur_ic;
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v0) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v0;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v2) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[1U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v2;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v3) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v4) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[2U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v4;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v5) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[2U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v6) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[3U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v6;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v7) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v8) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[4U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v8;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v9) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[4U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v10) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[5U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v10;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v11) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[5U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v12) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[6U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v12;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v13) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[6U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v14) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[7U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v14;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v15) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v16) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[8U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v16;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v17) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[8U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v18) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[9U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v18;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v19) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[9U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v20) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xaU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v20;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v21) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xaU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v22) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xbU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v22;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v23) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xbU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v24) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xcU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v24;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v25) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xcU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v26) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xdU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v26;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v27) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xdU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v28) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xeU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v28;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v29) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xeU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v30) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xfU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v30;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v31) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xfU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v32) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x10U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v32;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v33) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x10U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v34) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x11U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v34;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v35) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x11U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v36) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x12U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v36;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v37) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x12U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v38) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x13U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v38;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v39) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x13U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v40) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x14U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v40;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v41) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x14U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v42) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x15U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v42;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v43) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x15U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v44) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x16U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v44;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v45) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x16U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v46) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x17U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v46;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v47) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x17U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v48) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x18U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v48;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v49) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x18U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v50) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x19U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v50;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v51) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x19U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v52) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1aU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v52;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v53) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v54) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1bU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v54;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v55) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v56) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1cU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v56;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v57) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v58) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1dU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v58;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v59) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v60) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1eU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v60;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v61) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v62) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1fU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v62;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v63) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v64) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x20U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v64;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v65) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x20U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v66) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x21U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v66;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v67) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x21U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v68) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x22U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v68;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v69) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x22U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v70) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x23U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v70;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v71) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x23U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v72) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x24U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v72;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v73) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x24U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v74) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x25U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v74;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v75) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x25U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v76) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x26U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v76;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v77) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x26U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v78) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x27U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v78;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v79) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x27U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v80) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x28U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v80;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v81) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x28U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v82) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x29U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v82;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v83) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x29U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v84) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2aU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v84;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v85) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v86) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2bU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v86;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v87) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v88) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2cU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v88;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v89) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v90) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2dU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v90;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v91) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v92) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2eU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v92;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v93) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v94) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2fU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v94;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v95) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v96) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x30U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v96;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v97) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x30U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v98) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x31U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v98;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v99) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x31U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v100) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x32U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v100;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v101) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x32U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v102) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x33U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v102;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v103) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x33U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v104) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x34U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v104;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v105) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x34U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v106) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x35U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v106;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v107) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x35U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v108) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x36U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v108;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v109) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x36U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v110) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x37U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v110;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v111) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x37U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v112) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x38U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v112;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v113) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x38U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v114) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x39U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v114;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v115) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x39U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v116) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x3aU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v116;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v117) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x3aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v118) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x3bU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v118;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v119) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x3bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v120) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x3cU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v120;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v121) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x3cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v122) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x3dU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v122;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v123) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x3dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v124) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x3eU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v124;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v125) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x3eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v126) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x3fU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v126;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v127) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x3fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v128) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x40U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v128;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v129) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x40U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v130) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x41U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v130;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v131) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x41U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v132) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x42U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v132;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v133) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x42U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v134) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x43U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v134;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v135) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x43U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v136) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x44U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v136;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v137) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x44U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v138) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x45U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v138;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v139) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x45U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v140) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x46U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v140;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v141) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x46U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v142) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x47U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v142;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v143) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x47U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v144) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x48U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v144;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v145) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x48U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v146) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x49U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v146;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v147) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x49U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v148) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x4aU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v148;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v149) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x4aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v150) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x4bU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v150;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v151) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x4bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v152) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x4cU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v152;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v153) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x4cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v154) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x4dU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v154;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v155) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x4dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v156) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x4eU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v156;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v157) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x4eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v158) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x4fU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v158;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v159) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x4fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v160) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x50U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v160;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v161) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x50U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v162) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x51U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v162;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v163) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x51U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v164) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x52U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v164;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v165) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x52U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v166) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x53U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v166;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v167) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x53U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v168) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x54U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v168;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v169) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x54U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v170) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x55U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v170;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v171) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x55U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v172) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x56U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v172;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v173) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x56U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v174) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x57U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v174;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v175) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x57U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v176) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x58U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v176;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v177) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x58U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v178) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x59U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v178;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v179) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x59U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v180) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x5aU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v180;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v181) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x5aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v182) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x5bU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v182;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v183) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x5bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v184) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x5cU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v184;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v185) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x5cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v186) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x5dU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v186;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v187) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x5dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v188) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x5eU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v188;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v189) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x5eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v190) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x5fU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v190;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v191) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x5fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v192) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x60U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v192;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v193) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x60U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v194) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x61U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v194;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v195) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x61U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v196) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x62U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v196;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v197) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x62U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v198) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x63U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v198;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v199) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x63U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v200) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x64U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v200;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v201) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x64U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v202) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x65U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v202;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v203) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x65U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v204) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x66U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v204;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v205) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x66U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v206) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x67U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v206;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v207) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x67U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v208) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x68U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v208;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v209) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x68U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v210) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x69U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v210;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v211) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x69U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v212) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x6aU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v212;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v213) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x6aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v214) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x6bU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v214;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v215) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x6bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v216) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x6cU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v216;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v217) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x6cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v218) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x6dU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v218;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v219) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x6dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v220) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x6eU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v220;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v221) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x6eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v222) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x6fU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v222;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v223) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x6fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v224) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x70U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v224;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v225) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x70U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v226) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x71U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v226;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v227) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x71U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v228) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x72U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v228;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v229) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x72U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v230) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x73U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v230;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v231) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x73U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v232) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x74U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v232;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v233) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x74U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v234) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x75U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v234;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v235) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x75U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v236) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x76U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v236;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v237) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x76U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v238) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x77U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v238;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v239) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x77U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v240) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x78U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v240;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v241) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x78U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v242) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x79U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v242;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v243) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x79U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v244) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x7aU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v244;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v245) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x7aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v246) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x7bU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v246;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v247) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x7bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v248) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x7cU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v248;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v249) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x7cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v250) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x7dU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v250;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v251) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x7dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v252) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x7eU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v252;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v253) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x7eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v254) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x7fU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v254;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v255) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x7fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v256) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x80U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v256;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v257) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x80U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v258) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x81U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v258;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v259) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x81U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v260) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x82U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v260;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v261) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x82U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v262) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x83U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v262;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v263) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x83U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v264) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x84U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v264;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v265) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x84U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v266) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x85U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v266;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v267) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x85U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v268) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x86U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v268;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v269) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x86U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v270) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x87U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v270;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v271) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x87U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v272) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x88U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v272;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v273) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x88U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v274) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x89U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v274;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v275) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x89U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v276) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x8aU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v276;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v277) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x8aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v278) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x8bU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v278;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v279) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x8bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v280) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x8cU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v280;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v281) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x8cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v282) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x8dU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v282;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v283) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x8dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v284) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x8eU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v284;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v285) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x8eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v286) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x8fU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v286;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v287) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x8fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v288) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x90U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v288;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v289) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x90U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v290) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x91U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v290;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v291) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x91U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v292) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x92U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v292;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v293) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x92U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v294) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x93U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v294;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v295) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x93U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v296) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x94U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v296;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v297) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x94U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v298) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x95U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v298;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v299) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x95U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v300) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x96U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v300;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v301) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x96U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v302) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x97U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v302;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v303) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x97U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v304) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x98U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v304;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v305) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x98U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v306) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x99U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v306;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v307) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x99U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v308) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x9aU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v308;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v309) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x9aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v310) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x9bU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v310;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v311) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x9bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v312) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x9cU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v312;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v313) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x9cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v314) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x9dU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v314;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v315) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x9dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v316) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x9eU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v316;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v317) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x9eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v318) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x9fU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v318;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v319) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x9fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v320) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xa0U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v320;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v321) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xa0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v322) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xa1U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v322;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v323) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xa1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v324) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xa2U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v324;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v325) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xa2U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v326) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xa3U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v326;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v327) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xa3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v328) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xa4U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v328;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v329) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xa4U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v330) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xa5U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v330;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v331) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xa5U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v332) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xa6U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v332;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v333) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xa6U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v334) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xa7U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v334;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v335) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xa7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v336) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xa8U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v336;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v337) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xa8U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v338) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xa9U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v338;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v339) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xa9U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v340) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xaaU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v340;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v341) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xaaU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v342) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xabU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v342;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v343) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xabU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v344) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xacU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v344;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v345) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xacU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v346) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xadU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v346;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v347) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xadU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v348) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xaeU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v348;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v349) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xaeU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v350) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xafU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v350;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v351) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xafU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v352) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xb0U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v352;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v353) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xb0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v354) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xb1U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v354;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v355) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xb1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v356) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xb2U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v356;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v357) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xb2U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v358) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xb3U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v358;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v359) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xb3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v360) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xb4U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v360;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v361) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xb4U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v362) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xb5U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v362;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v363) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xb5U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v364) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xb6U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v364;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v365) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xb6U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v366) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xb7U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v366;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v367) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xb7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v368) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xb8U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v368;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v369) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xb8U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v370) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xb9U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v370;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v371) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xb9U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v372) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xbaU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v372;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v373) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xbaU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v374) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xbbU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v374;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v375) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xbbU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v376) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xbcU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v376;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v377) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xbcU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v378) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xbdU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v378;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v379) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xbdU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v380) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xbeU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v380;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v381) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xbeU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v382) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xbfU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v382;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v383) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xbfU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v384) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xc0U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v384;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v385) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xc0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v386) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xc1U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v386;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v387) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xc1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v388) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xc2U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v388;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v389) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xc2U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v390) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xc3U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v390;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v391) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xc3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v392) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xc4U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v392;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v393) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xc4U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v394) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xc5U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v394;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v395) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xc5U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v396) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xc6U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v396;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v397) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xc6U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v398) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xc7U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v398;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v399) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xc7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v400) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xc8U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v400;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v401) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xc8U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v402) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xc9U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v402;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v403) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xc9U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v404) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xcaU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v404;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v405) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xcaU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v406) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xcbU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v406;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v407) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xcbU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v408) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xccU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v408;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v409) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xccU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v410) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xcdU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v410;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v411) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xcdU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v412) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xceU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v412;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v413) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xceU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v414) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xcfU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v414;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v415) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xcfU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v416) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xd0U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v416;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v417) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xd0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v418) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xd1U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v418;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v419) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xd1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v420) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xd2U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v420;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v421) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xd2U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v422) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xd3U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v422;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v423) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xd3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v424) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xd4U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v424;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v425) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xd4U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v426) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xd5U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v426;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v427) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xd5U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v428) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xd6U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v428;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v429) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xd6U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v430) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xd7U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v430;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v431) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xd7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v432) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xd8U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v432;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v433) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xd8U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v434) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xd9U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v434;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v435) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xd9U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v436) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xdaU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v436;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v437) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xdaU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v438) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xdbU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v438;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v439) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xdbU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v440) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xdcU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v440;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v441) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xdcU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v442) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xddU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v442;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v443) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xddU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v444) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xdeU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v444;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v445) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xdeU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v446) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xdfU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v446;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v447) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xdfU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v448) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xe0U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v448;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v449) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xe0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v450) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xe1U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v450;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v451) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xe1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v452) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xe2U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v452;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v453) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xe2U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v454) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xe3U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v454;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v455) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xe3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v456) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xe4U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v456;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v457) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xe4U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v458) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xe5U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v458;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v459) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xe5U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v460) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xe6U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v460;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v461) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xe6U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v462) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xe7U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v462;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v463) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xe7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v464) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xe8U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v464;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v465) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xe8U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v466) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xe9U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v466;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v467) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xe9U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v468) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xeaU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v468;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v469) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xeaU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v470) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xebU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v470;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v471) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xebU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v472) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xecU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v472;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v473) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xecU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v474) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xedU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v474;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v475) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xedU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v476) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xeeU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v476;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v477) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xeeU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v478) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xefU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v478;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v479) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xefU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v480) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xf0U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v480;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v481) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xf0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v482) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xf1U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v482;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v483) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xf1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v484) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xf2U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v484;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v485) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xf2U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v486) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xf3U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v486;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v487) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xf3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v488) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xf4U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v488;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v489) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xf4U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v490) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xf5U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v490;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v491) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xf5U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v492) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xf6U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v492;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v493) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xf6U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v494) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xf7U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v494;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v495) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xf7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v496) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xf8U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v496;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v497) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xf8U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v498) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xf9U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v498;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v499) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xf9U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v500) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xfaU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v500;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v501) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xfaU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v502) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xfbU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v502;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v503) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xfbU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v504) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xfcU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v504;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v505) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xfcU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v506) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xfdU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v506;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v507) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xfdU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v508) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xfeU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v508;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v509) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xfeU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v510) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xffU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v510;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v511) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0xffU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v512) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x100U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v512;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v513) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x100U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v514) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x101U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v514;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v515) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x101U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v516) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x102U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v516;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v517) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x102U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v518) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x103U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v518;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v519) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x103U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v520) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x104U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v520;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v521) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x104U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v522) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x105U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v522;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v523) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x105U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v524) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x106U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v524;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v525) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x106U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v526) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x107U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v526;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v527) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x107U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v528) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x108U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v528;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v529) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x108U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v530) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x109U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v530;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v531) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x109U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v532) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x10aU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v532;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v533) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x10aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v534) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x10bU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v534;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v535) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x10bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v536) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x10cU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v536;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v537) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x10cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v538) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x10dU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v538;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v539) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x10dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v540) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x10eU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v540;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v541) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x10eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v542) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x10fU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v542;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v543) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x10fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v544) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x110U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v544;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v545) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x110U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v546) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x111U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v546;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v547) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x111U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v548) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x112U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v548;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v549) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x112U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v550) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x113U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v550;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v551) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x113U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v552) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x114U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v552;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v553) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x114U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v554) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x115U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v554;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v555) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x115U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v556) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x116U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v556;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v557) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x116U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v558) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x117U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v558;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v559) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x117U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v560) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x118U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v560;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v561) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x118U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v562) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x119U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v562;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v563) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x119U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v564) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x11aU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v564;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v565) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x11aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v566) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x11bU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v566;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v567) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x11bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v568) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x11cU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v568;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v569) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x11cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v570) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x11dU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v570;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v571) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x11dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v572) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x11eU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v572;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v573) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x11eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v574) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x11fU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v574;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v575) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x11fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v576) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x120U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v576;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v577) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x120U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v578) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x121U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v578;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v579) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x121U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v580) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x122U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v580;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v581) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x122U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v582) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x123U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v582;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v583) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x123U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v584) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x124U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v584;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v585) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x124U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v586) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x125U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v586;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v587) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x125U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v588) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x126U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v588;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v589) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x126U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v590) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x127U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v590;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v591) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x127U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v592) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x128U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v592;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v593) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x128U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v594) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x129U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v594;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v595) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x129U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v596) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x12aU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v596;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v597) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x12aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v598) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x12bU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v598;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v599) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x12bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v600) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x12cU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v600;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v601) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x12cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v602) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x12dU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v602;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v603) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x12dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v604) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x12eU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v604;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v605) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x12eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v606) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x12fU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v606;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v607) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x12fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v608) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x130U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v608;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v609) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x130U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v610) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x131U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v610;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v611) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x131U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v612) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x132U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v612;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v613) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x132U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v614) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x133U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v614;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v615) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x133U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v616) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x134U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v616;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v617) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x134U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v618) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x135U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v618;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v619) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x135U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v620) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x136U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v620;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v621) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x136U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v622) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x137U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v622;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v623) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x137U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v624) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x138U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v624;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v625) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x138U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v626) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x139U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v626;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v627) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x139U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v628) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x13aU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v628;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v629) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x13aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v630) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x13bU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v630;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v631) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x13bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v632) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x13cU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v632;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v633) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x13cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v634) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x13dU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v634;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v635) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x13dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v636) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x13eU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v636;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v637) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x13eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v638) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x13fU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v638;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v639) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x13fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v640) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x140U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v640;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v641) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x140U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v642) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x141U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v642;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v643) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x141U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v644) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x142U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v644;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v645) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x142U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v646) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x143U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v646;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v647) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x143U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v648) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x144U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v648;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v649) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x144U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v650) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x145U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v650;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v651) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x145U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v652) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x146U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v652;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v653) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x146U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v654) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x147U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v654;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v655) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x147U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v656) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x148U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v656;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v657) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x148U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v658) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x149U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v658;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v659) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x149U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v660) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x14aU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v660;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v661) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x14aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v662) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x14bU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v662;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v663) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x14bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v664) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x14cU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v664;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v665) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x14cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v666) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x14dU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v666;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v667) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x14dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v668) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x14eU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v668;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v669) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x14eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v670) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x14fU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v670;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v671) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x14fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v672) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x150U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v672;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v673) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x150U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v674) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x151U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v674;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v675) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x151U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v676) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x152U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v676;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v677) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x152U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v678) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x153U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v678;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v679) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x153U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v680) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x154U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v680;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v681) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x154U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v682) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x155U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v682;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v683) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x155U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v684) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x156U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v684;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v685) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x156U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v686) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x157U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v686;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v687) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x157U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v688) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x158U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v688;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v689) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x158U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v690) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x159U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v690;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v691) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x159U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v692) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x15aU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v692;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v693) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x15aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v694) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x15bU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v694;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v695) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x15bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v696) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x15cU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v696;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v697) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x15cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v698) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x15dU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v698;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v699) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x15dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v700) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x15eU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v700;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v701) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x15eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v702) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x15fU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v702;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v703) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x15fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v704) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x160U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v704;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v705) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x160U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v706) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x161U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v706;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v707) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x161U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v708) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x162U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v708;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v709) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x162U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v710) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x163U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v710;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v711) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x163U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v712) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x164U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v712;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v713) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x164U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v714) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x165U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v714;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v715) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x165U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v716) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x166U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v716;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v717) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x166U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v718) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x167U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v718;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v719) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x167U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v720) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x168U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v720;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v721) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x168U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v722) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x169U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v722;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v723) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x169U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v724) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x16aU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v724;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v725) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x16aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v726) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x16bU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v726;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v727) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x16bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v728) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x16cU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v728;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v729) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x16cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v730) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x16dU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v730;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v731) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x16dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v732) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x16eU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v732;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v733) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x16eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v734) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x16fU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v734;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v735) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x16fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v736) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x170U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v736;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v737) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x170U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v738) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x171U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v738;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v739) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x171U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v740) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x172U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v740;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v741) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x172U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v742) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x173U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v742;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v743) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x173U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v744) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x174U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v744;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v745) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x174U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v746) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x175U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v746;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v747) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x175U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v748) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x176U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v748;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v749) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x176U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v750) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x177U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v750;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v751) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x177U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v752) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x178U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v752;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v753) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x178U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v754) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x179U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v754;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v755) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x179U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v756) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x17aU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v756;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v757) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x17aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v758) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x17bU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v758;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v759) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x17bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v760) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x17cU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v760;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v761) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x17cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v762) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x17dU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v762;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v763) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x17dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v764) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x17eU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v764;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v765) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x17eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v766) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x17fU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v766;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v767) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x17fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v768) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x180U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v768;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v769) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x180U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v770) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x181U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v770;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v771) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x181U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v772) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x182U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v772;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v773) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x182U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v774) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x183U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v774;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v775) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x183U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v776) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x184U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v776;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v777) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x184U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v778) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x185U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v778;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v779) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x185U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v780) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x186U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v780;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v781) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x186U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v782) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x187U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v782;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v783) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x187U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v784) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x188U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v784;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v785) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x188U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v786) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x189U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v786;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v787) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x189U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v788) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x18aU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v788;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v789) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x18aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v790) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x18bU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v790;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v791) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x18bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v792) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x18cU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v792;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v793) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x18cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v794) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x18dU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v794;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v795) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x18dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v796) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x18eU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v796;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v797) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x18eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v798) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x18fU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v798;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v799) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x18fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v800) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x190U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v800;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v801) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x190U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v802) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x191U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v802;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v803) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x191U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v804) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x192U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v804;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v805) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x192U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v806) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x193U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v806;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v807) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x193U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v808) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x194U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v808;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v809) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x194U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v810) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x195U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v810;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v811) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x195U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v812) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x196U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v812;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v813) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x196U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v814) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x197U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v814;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v815) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x197U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v816) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x198U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v816;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v817) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x198U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v818) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x199U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v818;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v819) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x199U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v820) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x19aU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v820;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v821) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x19aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v822) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x19bU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v822;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v823) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x19bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v824) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x19cU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v824;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v825) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x19cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v826) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x19dU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v826;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v827) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x19dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v828) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x19eU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v828;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v829) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x19eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v830) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x19fU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v830;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v831) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x19fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v832) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1a0U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v832;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v833) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1a0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v834) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1a1U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v834;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v835) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1a1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v836) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1a2U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v836;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v837) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1a2U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v838) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1a3U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v838;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v839) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1a3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v840) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1a4U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v840;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v841) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1a4U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v842) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1a5U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v842;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v843) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1a5U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v844) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1a6U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v844;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v845) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1a6U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v846) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1a7U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v846;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v847) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1a7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v848) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1a8U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v848;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v849) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1a8U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v850) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1a9U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v850;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v851) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1a9U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v852) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1aaU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v852;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v853) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1aaU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v854) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1abU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v854;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v855) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1abU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v856) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1acU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v856;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v857) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1acU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v858) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1adU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v858;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v859) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1adU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v860) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1aeU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v860;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v861) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1aeU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v862) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1afU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v862;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v863) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1afU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v864) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1b0U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v864;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v865) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1b0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v866) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1b1U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v866;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v867) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1b1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v868) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1b2U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v868;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v869) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1b2U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v870) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1b3U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v870;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v871) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1b3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v872) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1b4U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v872;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v873) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1b4U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v874) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1b5U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v874;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v875) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1b5U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v876) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1b6U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v876;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v877) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1b6U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v878) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1b7U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v878;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v879) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1b7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v880) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1b8U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v880;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v881) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1b8U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v882) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1b9U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v882;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v883) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1b9U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v884) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1baU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v884;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v885) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1baU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v886) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1bbU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v886;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v887) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1bbU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v888) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1bcU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v888;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v889) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1bcU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v890) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1bdU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v890;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v891) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1bdU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v892) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1beU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v892;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v893) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1beU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v894) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1bfU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v894;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v895) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1bfU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v896) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1c0U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v896;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v897) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1c0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v898) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1c1U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v898;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v899) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1c1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v900) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1c2U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v900;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v901) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1c2U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v902) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1c3U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v902;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v903) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1c3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v904) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1c4U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v904;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v905) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1c4U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v906) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1c5U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v906;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v907) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1c5U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v908) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1c6U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v908;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v909) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1c6U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v910) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1c7U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v910;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v911) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1c7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v912) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1c8U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v912;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v913) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1c8U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v914) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1c9U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v914;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v915) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1c9U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v916) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1caU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v916;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v917) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1caU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v918) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1cbU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v918;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v919) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1cbU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v920) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1ccU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v920;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v921) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1ccU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v922) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1cdU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v922;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v923) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1cdU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v924) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1ceU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v924;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v925) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1ceU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v926) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1cfU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v926;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v927) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1cfU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v928) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1d0U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v928;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v929) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1d0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v930) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1d1U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v930;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v931) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1d1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v932) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1d2U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v932;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v933) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1d2U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v934) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1d3U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v934;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v935) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1d3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v936) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1d4U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v936;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v937) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1d4U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v938) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1d5U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v938;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v939) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1d5U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v940) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1d6U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v940;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v941) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1d6U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v942) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1d7U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v942;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v943) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1d7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v944) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1d8U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v944;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v945) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1d8U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v946) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1d9U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v946;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v947) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1d9U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v948) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1daU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v948;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v949) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1daU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v950) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1dbU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v950;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v951) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1dbU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v952) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1dcU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v952;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v953) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1dcU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v954) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1ddU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v954;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v955) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1ddU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v956) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1deU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v956;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v957) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1deU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v958) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1dfU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v958;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v959) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1dfU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v960) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1e0U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v960;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v961) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1e0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v962) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1e1U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v962;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v963) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1e1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v964) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1e2U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v964;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v965) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1e2U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v966) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1e3U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v966;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v967) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1e3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v968) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1e4U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v968;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v969) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1e4U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v970) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1e5U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v970;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v971) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1e5U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v972) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1e6U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v972;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v973) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1e6U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v974) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1e7U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v974;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v975) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1e7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v976) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1e8U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v976;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v977) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1e8U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v978) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1e9U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v978;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v979) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1e9U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v980) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1eaU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v980;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v981) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1eaU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v982) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1ebU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v982;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v983) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1ebU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v984) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1ecU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v984;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v985) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1ecU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v986) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1edU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v986;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v987) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1edU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v988) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1eeU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v988;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v989) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1eeU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v990) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1efU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v990;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v991) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1efU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v992) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1f0U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v992;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v993) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1f0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v994) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1f1U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v994;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v995) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1f1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v996) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1f2U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v996;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v997) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1f2U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v998) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1f3U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v998;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v999) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1f3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1000) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1f4U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1000;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1001) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1f4U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1002) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1f5U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1002;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1003) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1f5U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1004) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1f6U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1004;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1005) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1f6U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1006) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1f7U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1006;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1007) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1f7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1008) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1f8U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1008;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1009) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1f8U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1010) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1f9U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1010;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1011) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1f9U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1012) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1faU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1012;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1013) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1faU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1014) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1fbU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1014;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1015) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1fbU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1016) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1fcU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1016;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1017) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1fcU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1018) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1fdU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1018;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1019) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1fdU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1020) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1feU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1020;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1021) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1feU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1022) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1ffU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1022;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1023) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x1ffU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1024) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x200U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1024;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1025) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x200U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1026) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x201U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1026;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1027) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x201U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1028) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x202U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1028;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1029) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x202U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1030) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x203U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1030;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1031) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x203U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1032) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x204U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1032;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1033) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x204U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1034) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x205U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1034;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1035) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x205U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1036) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x206U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1036;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1037) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x206U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1038) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x207U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1038;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1039) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x207U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1040) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x208U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1040;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1041) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x208U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1042) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x209U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1042;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1043) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x209U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1044) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x20aU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1044;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1045) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x20aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1046) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x20bU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1046;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1047) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x20bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1048) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x20cU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1048;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1049) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x20cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1050) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x20dU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1050;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1051) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x20dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1052) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x20eU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1052;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1053) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x20eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1054) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x20fU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1054;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1055) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x20fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1056) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x210U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1056;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1057) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x210U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1058) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x211U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1058;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1059) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x211U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1060) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x212U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1060;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1061) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x212U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1062) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x213U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1062;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1063) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x213U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1064) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x214U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1064;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1065) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x214U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1066) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x215U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1066;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1067) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x215U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1068) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x216U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1068;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1069) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x216U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1070) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x217U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1070;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1071) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x217U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1072) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x218U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1072;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1073) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x218U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1074) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x219U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1074;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1075) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x219U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1076) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x21aU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1076;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1077) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x21aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1078) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x21bU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1078;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1079) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x21bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1080) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x21cU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1080;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1081) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x21cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1082) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x21dU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1082;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1083) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x21dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1084) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x21eU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1084;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1085) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x21eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1086) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x21fU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1086;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1087) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x21fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1088) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x220U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1088;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1089) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x220U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1090) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x221U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1090;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1091) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x221U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1092) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x222U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1092;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1093) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x222U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1094) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x223U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1094;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1095) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x223U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1096) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x224U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1096;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1097) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x224U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1098) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x225U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1098;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1099) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x225U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1100) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x226U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1100;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1101) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x226U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1102) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x227U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1102;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1103) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x227U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1104) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x228U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1104;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1105) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x228U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1106) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x229U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1106;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1107) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x229U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1108) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x22aU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1108;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1109) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x22aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1110) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x22bU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1110;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1111) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x22bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1112) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x22cU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1112;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1113) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x22cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1114) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x22dU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1114;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1115) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x22dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1116) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x22eU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1116;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1117) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x22eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1118) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x22fU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1118;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1119) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x22fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1120) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x230U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1120;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1121) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x230U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1122) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x231U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1122;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1123) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x231U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1124) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x232U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1124;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1125) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x232U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1126) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x233U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1126;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1127) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x233U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1128) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x234U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1128;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1129) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x234U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1130) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x235U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1130;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1131) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x235U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1132) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x236U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1132;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1133) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x236U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1134) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x237U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1134;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1135) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x237U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1136) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x238U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1136;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1137) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x238U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1138) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x239U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1138;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1139) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x239U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1140) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x23aU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1140;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1141) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x23aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1142) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x23bU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1142;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1143) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x23bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1144) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x23cU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1144;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1145) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x23cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1146) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x23dU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1146;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1147) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x23dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1148) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x23eU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1148;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1149) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x23eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1150) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x23fU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1150;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1151) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x23fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1152) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x240U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1152;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1153) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x240U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1154) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x241U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1154;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1155) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x241U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1156) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x242U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1156;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1157) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x242U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1158) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x243U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1158;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1159) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x243U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1160) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x244U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1160;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1161) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x244U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1162) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x245U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1162;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1163) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x245U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1164) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x246U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1164;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1165) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x246U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1166) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x247U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1166;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1167) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x247U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1168) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x248U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1168;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1169) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x248U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1170) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x249U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1170;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1171) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x249U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1172) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x24aU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1172;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1173) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x24aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1174) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x24bU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1174;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1175) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x24bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1176) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x24cU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1176;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1177) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x24cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1178) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x24dU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1178;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1179) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x24dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1180) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x24eU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1180;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1181) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x24eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1182) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x24fU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1182;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1183) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x24fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1184) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x250U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1184;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1185) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x250U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1186) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x251U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1186;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1187) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x251U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1188) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x252U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1188;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1189) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x252U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1190) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x253U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1190;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1191) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x253U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1192) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x254U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1192;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1193) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x254U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1194) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x255U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1194;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1195) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x255U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1196) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x256U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1196;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1197) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x256U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1198) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x257U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1198;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1199) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x257U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1200) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x258U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1200;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1201) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x258U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1202) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x259U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1202;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1203) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x259U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1204) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x25aU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1204;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1205) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x25aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1206) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x25bU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1206;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1207) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x25bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1208) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x25cU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1208;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1209) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x25cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1210) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x25dU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1210;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1211) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x25dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1212) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x25eU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1212;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1213) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x25eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1214) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x25fU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1214;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1215) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x25fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1216) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x260U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1216;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1217) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x260U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1218) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x261U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1218;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1219) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x261U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1220) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x262U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1220;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1221) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x262U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1222) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x263U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1222;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1223) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x263U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1224) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x264U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1224;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1225) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x264U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1226) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x265U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1226;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1227) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x265U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1228) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x266U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1228;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1229) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x266U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1230) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x267U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1230;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1231) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x267U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1232) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x268U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1232;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1233) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x268U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1234) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x269U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1234;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1235) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x269U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1236) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x26aU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1236;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1237) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x26aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1238) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x26bU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1238;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1239) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x26bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1240) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x26cU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1240;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1241) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x26cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1242) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x26dU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1242;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1243) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x26dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1244) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x26eU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1244;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1245) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x26eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1246) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x26fU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1246;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1247) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x26fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1248) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x270U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1248;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1249) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x270U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1250) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x271U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1250;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1251) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x271U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1252) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x272U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1252;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1253) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x272U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1254) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x273U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1254;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1255) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x273U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1256) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x274U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1256;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1257) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x274U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1258) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x275U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1258;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1259) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x275U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1260) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x276U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1260;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1261) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x276U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1262) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x277U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1262;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1263) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x277U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1264) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x278U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1264;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1265) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x278U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1266) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x279U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1266;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1267) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x279U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1268) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x27aU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1268;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1269) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x27aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1270) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x27bU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1270;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1271) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x27bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1272) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x27cU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1272;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1273) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x27cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1274) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x27dU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1274;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1275) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x27dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1276) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x27eU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1276;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1277) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x27eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1278) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x27fU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1278;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1279) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x27fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1280) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x280U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1280;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1281) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x280U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1282) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x281U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1282;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1283) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x281U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1284) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x282U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1284;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1285) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x282U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1286) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x283U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1286;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1287) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x283U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1288) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x284U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1288;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1289) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x284U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1290) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x285U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1290;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1291) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x285U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1292) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x286U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1292;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1293) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x286U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1294) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x287U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1294;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1295) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x287U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1296) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x288U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1296;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1297) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x288U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1298) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x289U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1298;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1299) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x289U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1300) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x28aU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1300;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1301) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x28aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1302) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x28bU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1302;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1303) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x28bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1304) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x28cU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1304;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1305) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x28cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1306) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x28dU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1306;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1307) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x28dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1308) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x28eU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1308;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1309) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x28eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1310) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x28fU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1310;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1311) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x28fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1312) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x290U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1312;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1313) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x290U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1314) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x291U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1314;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1315) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x291U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1316) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x292U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1316;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1317) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x292U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1318) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x293U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1318;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1319) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x293U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1320) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x294U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1320;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1321) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x294U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1322) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x295U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1322;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1323) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x295U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1324) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x296U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1324;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1325) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x296U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1326) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x297U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1326;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1327) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x297U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1328) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x298U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1328;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1329) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x298U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1330) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x299U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1330;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1331) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x299U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1332) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x29aU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1332;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1333) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x29aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1334) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x29bU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1334;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1335) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x29bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1336) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x29cU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1336;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1337) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x29cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1338) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x29dU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1338;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1339) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x29dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1340) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x29eU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1340;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1341) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x29eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1342) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x29fU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1342;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1343) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x29fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1344) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2a0U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1344;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1345) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2a0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1346) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2a1U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1346;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1347) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2a1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1348) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2a2U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1348;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1349) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2a2U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1350) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2a3U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1350;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1351) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2a3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1352) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2a4U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1352;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1353) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2a4U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1354) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2a5U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1354;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1355) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2a5U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1356) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2a6U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1356;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1357) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2a6U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1358) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2a7U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1358;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1359) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2a7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1360) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2a8U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1360;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1361) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2a8U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1362) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2a9U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1362;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1363) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2a9U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1364) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2aaU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1364;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1365) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2aaU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1366) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2abU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1366;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1367) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2abU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1368) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2acU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1368;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1369) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2acU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1370) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2adU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1370;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1371) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2adU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1372) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2aeU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1372;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1373) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2aeU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1374) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2afU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1374;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1375) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2afU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1376) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2b0U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1376;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1377) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2b0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1378) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2b1U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1378;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1379) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2b1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1380) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2b2U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1380;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1381) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2b2U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1382) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2b3U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1382;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1383) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2b3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1384) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2b4U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1384;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1385) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2b4U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1386) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2b5U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1386;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1387) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2b5U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1388) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2b6U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1388;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1389) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2b6U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1390) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2b7U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1390;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1391) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2b7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1392) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2b8U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1392;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1393) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2b8U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1394) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2b9U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1394;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1395) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2b9U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1396) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2baU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1396;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1397) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2baU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1398) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2bbU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1398;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1399) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2bbU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1400) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2bcU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1400;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1401) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2bcU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1402) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2bdU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1402;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1403) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2bdU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1404) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2beU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1404;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1405) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2beU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1406) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2bfU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1406;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1407) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2bfU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1408) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2c0U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1408;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1409) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2c0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1410) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2c1U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1410;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1411) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2c1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1412) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2c2U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1412;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1413) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2c2U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1414) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2c3U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1414;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1415) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2c3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1416) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2c4U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1416;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1417) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2c4U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1418) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2c5U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1418;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1419) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2c5U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1420) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2c6U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1420;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1421) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2c6U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1422) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2c7U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1422;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1423) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2c7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1424) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2c8U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1424;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1425) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2c8U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1426) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2c9U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1426;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1427) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2c9U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1428) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2caU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1428;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1429) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2caU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1430) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2cbU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1430;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1431) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2cbU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1432) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2ccU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1432;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1433) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2ccU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1434) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2cdU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1434;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1435) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2cdU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1436) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2ceU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1436;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1437) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2ceU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1438) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2cfU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1438;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1439) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2cfU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1440) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2d0U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1440;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1441) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2d0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1442) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2d1U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1442;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1443) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2d1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1444) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2d2U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1444;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1445) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2d2U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1446) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2d3U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1446;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1447) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2d3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1448) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2d4U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1448;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1449) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2d4U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1450) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2d5U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1450;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1451) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2d5U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1452) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2d6U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1452;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1453) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2d6U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1454) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2d7U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1454;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1455) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2d7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1456) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2d8U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1456;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1457) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2d8U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1458) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2d9U] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1458;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1459) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2d9U] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1460) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2daU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1460;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1461) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2daU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1462) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2dbU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1462;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1463) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2dbU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1464) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2dcU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1464;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1465) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2dcU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1466) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2ddU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1466;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1467) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2ddU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1468) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2deU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1468;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1469) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2deU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1470) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2dfU] 
            = vlSelf->__Vdlyvval__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1470;
    }
    if (vlSelf->__Vdlyvset__dut__DOT__conv_pool1__DOT__core__DOT__popcount__v1471) {
        vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount[0x2dfU] = 0U;
    }
}
