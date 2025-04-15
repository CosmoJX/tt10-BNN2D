// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdut.h for the primary calling header

#include "Vdut__pch.h"
#include "Vdut_ConvCore__I1.h"
#include "Vdut__Syms.h"

VL_ATTR_COLD void Vdut_ConvCore__I1___stl_sequent__TOP__dut__DOT__conv__DOT__conv_core_gen__BRA__19__KET____DOT__core__6(Vdut_ConvCore__I1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdut_ConvCore__I1___stl_sequent__TOP__dut__DOT__conv__DOT__conv_core_gen__BRA__19__KET____DOT__core__6\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_422;
    VlWide<3>/*95:0*/ __Vtemp_430;
    VlWide<3>/*95:0*/ __Vtemp_438;
    VlWide<3>/*95:0*/ __Vtemp_446;
    VlWide<4>/*127:0*/ __Vtemp_462;
    VlWide<4>/*127:0*/ __Vtemp_470;
    VlWide<4>/*127:0*/ __Vtemp_478;
    VlWide<5>/*159:0*/ __Vtemp_494;
    VlWide<5>/*159:0*/ __Vtemp_502;
    VlWide<5>/*159:0*/ __Vtemp_510;
    VlWide<6>/*191:0*/ __Vtemp_526;
    VlWide<6>/*191:0*/ __Vtemp_534;
    VlWide<6>/*191:0*/ __Vtemp_542;
    VlWide<7>/*223:0*/ __Vtemp_558;
    VlWide<7>/*223:0*/ __Vtemp_566;
    VlWide<7>/*223:0*/ __Vtemp_574;
    VlWide<8>/*255:0*/ __Vtemp_590;
    VlWide<8>/*255:0*/ __Vtemp_598;
    VlWide<8>/*255:0*/ __Vtemp_606;
    VlWide<9>/*287:0*/ __Vtemp_622;
    VlWide<9>/*287:0*/ __Vtemp_630;
    VlWide<9>/*287:0*/ __Vtemp_638;
    VlWide<10>/*319:0*/ __Vtemp_654;
    VlWide<10>/*319:0*/ __Vtemp_662;
    VlWide<10>/*319:0*/ __Vtemp_670;
    VlWide<11>/*351:0*/ __Vtemp_686;
    VlWide<11>/*351:0*/ __Vtemp_694;
    VlWide<11>/*351:0*/ __Vtemp_702;
    VlWide<12>/*383:0*/ __Vtemp_718;
    VlWide<12>/*383:0*/ __Vtemp_726;
    VlWide<12>/*383:0*/ __Vtemp_734;
    VlWide<13>/*415:0*/ __Vtemp_750;
    VlWide<13>/*415:0*/ __Vtemp_758;
    VlWide<13>/*415:0*/ __Vtemp_766;
    VlWide<14>/*447:0*/ __Vtemp_782;
    VlWide<14>/*447:0*/ __Vtemp_790;
    VlWide<14>/*447:0*/ __Vtemp_798;
    VlWide<15>/*479:0*/ __Vtemp_814;
    VlWide<15>/*479:0*/ __Vtemp_822;
    VlWide<15>/*479:0*/ __Vtemp_830;
    VlWide<16>/*511:0*/ __Vtemp_846;
    VlWide<16>/*511:0*/ __Vtemp_854;
    VlWide<16>/*511:0*/ __Vtemp_862;
    VlWide<17>/*543:0*/ __Vtemp_878;
    VlWide<17>/*543:0*/ __Vtemp_886;
    VlWide<17>/*543:0*/ __Vtemp_894;
    VlWide<18>/*575:0*/ __Vtemp_910;
    VlWide<18>/*575:0*/ __Vtemp_918;
    VlWide<18>/*575:0*/ __Vtemp_926;
    VlWide<19>/*607:0*/ __Vtemp_942;
    VlWide<19>/*607:0*/ __Vtemp_950;
    VlWide<19>/*607:0*/ __Vtemp_958;
    VlWide<20>/*639:0*/ __Vtemp_974;
    VlWide<20>/*639:0*/ __Vtemp_982;
    VlWide<20>/*639:0*/ __Vtemp_990;
    VlWide<21>/*671:0*/ __Vtemp_1006;
    VlWide<21>/*671:0*/ __Vtemp_1014;
    VlWide<21>/*671:0*/ __Vtemp_1022;
    VlWide<22>/*703:0*/ __Vtemp_1038;
    VlWide<22>/*703:0*/ __Vtemp_1046;
    VlWide<22>/*703:0*/ __Vtemp_1054;
    VlWide<23>/*735:0*/ __Vtemp_1070;
    VlWide<23>/*735:0*/ __Vtemp_1078;
    VlWide<23>/*735:0*/ __Vtemp_1086;
    VlWide<24>/*767:0*/ __Vtemp_1102;
    VlWide<24>/*767:0*/ __Vtemp_1110;
    VlWide<24>/*767:0*/ __Vtemp_1118;
    VlWide<25>/*799:0*/ __Vtemp_1134;
    // Body
    vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__23__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__23__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__23__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__24__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__24__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__24__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__24__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__24__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__24__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__24__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__24__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__24__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__25__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__25__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__25__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__25__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__25__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__25__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__25__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__25__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__25__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__26__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__26__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__26__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__26__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__26__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__26__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__26__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__26__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__26__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__27__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__27__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__27__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__27__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__27__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__27__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__27__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__27__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__27__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__0__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__0__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__0__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__0__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__0__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__0__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__0__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__0__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__0__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__0__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__0__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__0__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__0__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__0__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__0__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__0__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__0__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__0__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__0__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__0__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__0__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__0__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__0__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__1__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__1__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__1__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__1__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__1__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__1__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__1__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__1__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__1__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__1__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__1__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__1__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__1__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__1__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__1__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__1__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__1__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__1__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__1__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__1__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__1__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__1__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__1__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__2__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__2__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__2__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__2__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__2__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__2__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__2__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__2__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__2__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__2__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__2__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__2__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__2__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__2__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__2__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__2__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__2__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__2__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__2__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__2__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__2__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__2__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__2__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__3__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__3__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__3__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__3__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__3__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__3__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__3__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__3__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__3__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__3__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__3__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__3__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__3__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__3__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__3__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__3__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__3__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__3__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__3__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__3__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__3__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__3__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__3__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__4__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__4__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__4__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__4__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__4__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__4__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__4__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__4__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__4__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__4__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__4__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__4__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__4__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__4__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__4__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__4__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__4__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__4__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__4__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__4__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__4__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__4__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__4__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__5__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__5__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__5__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__5__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__5__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__5__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__5__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__5__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__5__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__5__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__5__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__5__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__5__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__5__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__5__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__5__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__5__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__5__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__5__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__5__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__5__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__5__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__5__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__6__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__6__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__6__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__6__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__6__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__6__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__6__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__6__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__6__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__6__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__6__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__6__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__6__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__6__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__6__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__6__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__6__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__6__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__6__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__6__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__6__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__6__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__6__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__7__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__7__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__7__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__7__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__7__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__7__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__7__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__7__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__7__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__7__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__7__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__7__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__7__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__7__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__7__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__7__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__7__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__7__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__7__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__7__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__7__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__7__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__7__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__8__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__8__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__8__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__8__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__8__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__8__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__8__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__8__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__8__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__8__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__8__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__8__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__8__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__8__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__8__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__8__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__8__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__8__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__8__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__8__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__8__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__8__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__8__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__9__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__9__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__9__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__9__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__9__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__9__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__9__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__9__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__9__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__9__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__9__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__9__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__9__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__9__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__9__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__9__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__9__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__9__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__9__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__9__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__9__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__9__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__9__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__10__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__10__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__10__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__10__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__10__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__10__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__10__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__10__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__10__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__10__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__10__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__10__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__10__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__10__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__10__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__10__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__10__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__10__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__10__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__10__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__10__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__10__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__10__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__11__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__11__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__11__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__11__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__11__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__11__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__11__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__11__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__11__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__11__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__11__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__11__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__11__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__11__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__11__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__11__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__11__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__11__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__11__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__11__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__11__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__11__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__11__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__12__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__12__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__12__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__12__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__12__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__12__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__12__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__12__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__12__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__12__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__12__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__12__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__12__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__12__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__12__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__12__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__12__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__12__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__12__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__12__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__12__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__12__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__12__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__13__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__13__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__13__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__13__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__13__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__13__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__13__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__13__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__13__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__13__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__13__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__13__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__13__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__13__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__13__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__13__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__13__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__13__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__13__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__13__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__13__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__13__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__13__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__14__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__14__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__14__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__14__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__14__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__14__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__14__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__14__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__14__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__14__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__14__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__14__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__14__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__14__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__14__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__14__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__14__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__14__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__14__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__14__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__14__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__14__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__14__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__15__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__15__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__15__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__15__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__15__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__15__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__15__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__15__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__15__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__15__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__15__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__15__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__15__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__15__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__15__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__15__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__15__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__15__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__15__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__15__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__15__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__15__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__15__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__16__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__16__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__16__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__16__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__16__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__16__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__16__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__16__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__16__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__16__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__16__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__16__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__16__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__16__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__16__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__16__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__16__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__16__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__16__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__16__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__16__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__16__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__16__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__17__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__17__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__17__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__17__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__17__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__17__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__17__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__17__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__17__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__17__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__17__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__17__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__17__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__17__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__17__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__17__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__17__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__17__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__17__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__17__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__17__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__17__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__17__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__18__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__18__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__18__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__18__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__18__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__18__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__18__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__18__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__18__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__18__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__18__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__18__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__18__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__18__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__18__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__18__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__18__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__18__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__18__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__18__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__18__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__18__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__18__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__19__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__19__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__19__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__19__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__19__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__19__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__19__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__19__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__19__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__19__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__19__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__19__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__19__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__19__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__19__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__19__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__19__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__19__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__19__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__19__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__19__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__19__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__19__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__20__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__20__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__20__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__20__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__20__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__20__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__20__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__20__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__20__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__20__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__20__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__20__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__20__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__20__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__20__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__20__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__20__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__20__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__20__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__20__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__20__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__20__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__20__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__21__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__21__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__21__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__21__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__21__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__21__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__21__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__21__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__21__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__21__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__21__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__21__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__21__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__21__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__21__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__21__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__21__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__21__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__21__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__21__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__21__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__21__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__21__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__22__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__22__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__22__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__22__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__22__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__22__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__22__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__22__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__22__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__22__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__22__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__22__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__22__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__22__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__22__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__22__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__22__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__22__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__22__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__22__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__22__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__22__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__22__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__23__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__23__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__23__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__23__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__23__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__23__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__23__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__23__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__23__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__23__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__23__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__23__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__23__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__23__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__23__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__23__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__23__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__23__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__23__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__23__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__23__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__23__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__23__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__24__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__24__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__24__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__24__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__24__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__24__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__24__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__24__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__24__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__25__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__25__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__25__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__25__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__25__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__25__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__25__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__25__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__25__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__26__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__26__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__26__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__26__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__26__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__26__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__26__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__26__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__26__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__27__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__27__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__27__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__27__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__27__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__27__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__27__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__27__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__27__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__0__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__0__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__0__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__0__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__0__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__0__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__0__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__0__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__0__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__0__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__0__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__0__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__0__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__0__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__0__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__0__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__0__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__0__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__0__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__0__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__0__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__0__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__0__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__1__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__1__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__1__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__1__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__1__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__1__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__1__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__1__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__1__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__1__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__1__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__1__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__1__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__1__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__1__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__1__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__1__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__1__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__1__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__1__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__1__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__1__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__1__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__2__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__2__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__2__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__2__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__2__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__2__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__2__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__2__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__2__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__2__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__2__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__2__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__2__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__2__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__2__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__2__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__2__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__2__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__2__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__2__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__2__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__2__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__2__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__3__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__3__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__3__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__3__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__3__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__3__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__3__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__3__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__3__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__3__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__3__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__3__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__3__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__3__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__3__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__3__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__3__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__3__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__3__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__3__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__3__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__3__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__3__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__4__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__4__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__4__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__4__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__4__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__4__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__4__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__4__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__4__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__4__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__4__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__4__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__4__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__4__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__4__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__4__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__4__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__4__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__4__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__4__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__4__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__4__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__4__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__5__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__5__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__5__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__5__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__5__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__5__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__5__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__5__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__5__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__5__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__5__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__5__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__5__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__5__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__5__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__5__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__5__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__5__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__5__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__5__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__5__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__5__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__5__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__6__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__6__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__6__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__6__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__6__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__6__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__6__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__6__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__6__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__6__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__6__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__6__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__6__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__6__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__6__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__6__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__6__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__6__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__6__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__6__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__6__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__6__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__6__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__7__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__7__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__7__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__7__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__7__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__7__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__7__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__7__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__7__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__7__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__7__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__7__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__7__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__7__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__7__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__7__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__7__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__7__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__7__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__7__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__7__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__7__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__7__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__8__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__8__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__8__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__8__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__8__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__8__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__8__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__8__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__8__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__8__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__8__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__8__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__8__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__8__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__8__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__8__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__8__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__8__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__8__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__8__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__8__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__8__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__8__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__9__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__9__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__9__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__9__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__9__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__9__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__9__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__9__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__9__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__9__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__9__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__9__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__9__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__9__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__9__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__9__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__9__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__9__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__9__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__9__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__9__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__9__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__9__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__10__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__10__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__10__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__10__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__10__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__10__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__10__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__10__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__10__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__10__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__10__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__10__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__10__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__10__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__10__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__10__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__10__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__10__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__10__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__10__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__10__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__10__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__10__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__11__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__11__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__11__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__11__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__11__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__11__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__11__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__11__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__11__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__11__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__11__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__11__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__11__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__11__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__11__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__11__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__11__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__11__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__11__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__11__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__11__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__11__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__11__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__12__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__12__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__12__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__12__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__12__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__12__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__12__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__12__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__12__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__12__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__12__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__12__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__12__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__12__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__12__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__12__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__12__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__12__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__12__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__12__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__12__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__12__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__12__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__13__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__13__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__13__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__13__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__13__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__13__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__13__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__13__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__13__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__13__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__13__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__13__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__13__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__13__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__13__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__13__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__13__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__13__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__13__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__13__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__13__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__13__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__13__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__14__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__14__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__14__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__14__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__14__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__14__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__14__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__14__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__14__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__14__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__14__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__14__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__14__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__14__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__14__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__14__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__14__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__14__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__14__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__14__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__14__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__14__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__14__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__15__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__15__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__15__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__15__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__15__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__15__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__15__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__15__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__15__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__15__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__15__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__15__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__15__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__15__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__15__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__15__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__15__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__15__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__15__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__15__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__15__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__15__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__15__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__16__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__16__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__16__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__16__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__16__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__16__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__16__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__16__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__16__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__16__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__16__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__16__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__16__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__16__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__16__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__16__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__16__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__16__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__16__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__16__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__16__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__16__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__16__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__17__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__17__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__17__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__17__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__17__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__17__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__17__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__17__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__17__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__17__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__17__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__17__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__17__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__17__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__17__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__17__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__17__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__17__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__17__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__17__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__17__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__17__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__17__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__18__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__18__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__18__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__18__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__18__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__18__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__18__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__18__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__18__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__18__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__18__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__18__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__18__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__18__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__18__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__18__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__18__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__18__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__18__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__18__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__18__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__18__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__18__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__19__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__19__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__19__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__19__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__19__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__19__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__19__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__19__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__19__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__19__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__19__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__19__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__19__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__19__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__19__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__19__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__19__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__19__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__19__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__19__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__19__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__19__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__19__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__20__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__20__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__20__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__20__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__20__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__20__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__20__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__20__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__20__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__20__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__20__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__20__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__20__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__20__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__20__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__20__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__20__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__20__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__20__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__20__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__20__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__20__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__20__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__21__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__21__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__21__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__21__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__21__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__21__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__21__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__21__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__21__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__21__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__21__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__21__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__21__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__21__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__21__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__21__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__21__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__21__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__21__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__21__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__21__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__21__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__21__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__22__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__22__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__22__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__22__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__22__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__22__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__22__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__22__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__22__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__22__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__22__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__22__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__22__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__22__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__22__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__22__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__22__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__22__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__22__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__22__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__22__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__22__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__22__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__23__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__23__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__23__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__23__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__23__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__23__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__23__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__23__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__23__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__23__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__23__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__23__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__23__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__23__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__23__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__23__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__23__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__23__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__23__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__23__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__23__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__23__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__23__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__24__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__24__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__24__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__24__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__24__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__24__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__24__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__24__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__24__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__24__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__24__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__25__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__25__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__25__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__25__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__25__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__25__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__25__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__25__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__25__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__25__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__25__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__26__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__26__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__26__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__26__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__26__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__26__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__26__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__26__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__26__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__26__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__26__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__27__KET____DOT__popcount 
        = (((1U & (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__27__KET____DOT__patch)) 
            == (1U & vlSymsp->TOP.dut__DOT__weights
                [0x13U])) ? 1U : 0xffU);
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__27__KET____DOT__patch) 
                               >> 1U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 1U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__27__KET____DOT__patch) 
                               >> 2U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 2U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__27__KET____DOT__patch) 
                               >> 3U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 3U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__27__KET____DOT__patch) 
                               >> 4U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 4U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__27__KET____DOT__patch) 
                               >> 5U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 5U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__27__KET____DOT__patch) 
                               >> 6U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 6U)))
                        ? 1U : 0xffU)));
    vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__27__KET____DOT__popcount 
        = (0xffU & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__27__KET____DOT__popcount) 
                    + (((1U & ((IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__27__KET____DOT__patch) 
                               >> 7U)) == (1U & (vlSymsp->TOP.dut__DOT__weights
                                                 [0x13U] 
                                                 >> 7U)))
                        ? 1U : 0xffU)));
    __Vtemp_422[0U] = (IData)((((QData)((IData)(VL_LTES_III(32, 0U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__popcount))))) 
                                << 0x3fU) | (((QData)((IData)(
                                                              VL_LTES_III(32, 0U, 
                                                                          VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__popcount))))) 
                                              << 0x3eU) 
                                             | (((QData)((IData)(
                                                                 VL_LTES_III(32, 0U, 
                                                                             VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__popcount))))) 
                                                 << 0x3dU) 
                                                | (((QData)((IData)(
                                                                    VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__popcount))))) 
                                                    << 0x3cU) 
                                                   | (((QData)((IData)(
                                                                       VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__popcount))))) 
                                                       << 0x3bU) 
                                                      | (((QData)((IData)(
                                                                          VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__popcount))))) 
                                                          << 0x3aU) 
                                                         | (((QData)((IData)(
                                                                             VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__popcount))))) 
                                                             << 0x39U) 
                                                            | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__popcount))))) 
                                                                << 0x38U) 
                                                               | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__27__KET____DOT__popcount))))) 
                                                                   << 0x37U) 
                                                                  | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__26__KET____DOT__popcount))))) 
                                                                      << 0x36U) 
                                                                     | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__25__KET____DOT__popcount))))) 
                                                                         << 0x35U) 
                                                                        | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__24__KET____DOT__popcount))))) 
                                                                            << 0x34U) 
                                                                           | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__23__KET____DOT__popcount))))) 
                                                                               << 0x33U) 
                                                                              | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__22__KET____DOT__popcount))))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__21__KET____DOT__popcount))))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__20__KET____DOT__popcount))))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__19__KET____DOT__popcount))))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__18__KET____DOT__popcount))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__17__KET____DOT__popcount))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__16__KET____DOT__popcount))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__popcount))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__popcount))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__popcount))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__popcount))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__popcount))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__popcount))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__popcount))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__popcount))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__popcount))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__popcount))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__popcount))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__popcount))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__popcount))) 
                                                                                << 0x1fU) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__popcount))) 
                                                                                << 0x1eU) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__popcount))) 
                                                                                << 0x1dU) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__popcount))) 
                                                                                << 0x1cU) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__27__KET____DOT__popcount))) 
                                                                                << 0x1bU) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__26__KET____DOT__popcount))) 
                                                                                << 0x1aU) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__25__KET____DOT__popcount))) 
                                                                                << 0x19U) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__24__KET____DOT__popcount))) 
                                                                                << 0x18U) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__23__KET____DOT__popcount))) 
                                                                                << 0x17U) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__22__KET____DOT__popcount))) 
                                                                                << 0x16U) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__21__KET____DOT__popcount))) 
                                                                                << 0x15U) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__20__KET____DOT__popcount))) 
                                                                                << 0x14U) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__19__KET____DOT__popcount))) 
                                                                                << 0x13U) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__18__KET____DOT__popcount))) 
                                                                                << 0x12U) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__17__KET____DOT__popcount))) 
                                                                                << 0x11U) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__16__KET____DOT__popcount))) 
                                                                                << 0x10U) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__popcount))) 
                                                                                << 0xfU) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__popcount))) 
                                                                                << 0xeU) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__popcount))) 
                                                                                << 0xdU) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__popcount))) 
                                                                                << 0xcU) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__popcount))) 
                                                                                << 0xbU) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__popcount))) 
                                                                                << 0xaU) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__popcount))) 
                                                                                << 9U) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__popcount))) 
                                                                                << 8U) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__popcount))) 
                                                                                << 7U) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__popcount))) 
                                                                                << 6U) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__popcount))) 
                                                                                << 5U) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__popcount))) 
                                                                                << 4U) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__popcount))) 
                                                                                << 3U) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__popcount))) 
                                                                                << 2U) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__popcount))) 
                                                                                << 1U) 
                                                                                | VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__popcount)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_422[1U] = (IData)(((((QData)((IData)(VL_LTES_III(32, 0U, 
                                                             VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__popcount))))) 
                                 << 0x3fU) | (((QData)((IData)(
                                                               VL_LTES_III(32, 0U, 
                                                                           VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__popcount))))) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(
                                                                  VL_LTES_III(32, 0U, 
                                                                              VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__popcount))))) 
                                                  << 0x3dU) 
                                                 | (((QData)((IData)(
                                                                     VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__popcount))))) 
                                                     << 0x3cU) 
                                                    | (((QData)((IData)(
                                                                        VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__popcount))))) 
                                                        << 0x3bU) 
                                                       | (((QData)((IData)(
                                                                           VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__popcount))))) 
                                                           << 0x3aU) 
                                                          | (((QData)((IData)(
                                                                              VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__popcount))))) 
                                                              << 0x39U) 
                                                             | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__popcount))))) 
                                                                 << 0x38U) 
                                                                | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__27__KET____DOT__popcount))))) 
                                                                    << 0x37U) 
                                                                   | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__26__KET____DOT__popcount))))) 
                                                                       << 0x36U) 
                                                                      | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__25__KET____DOT__popcount))))) 
                                                                          << 0x35U) 
                                                                         | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__24__KET____DOT__popcount))))) 
                                                                             << 0x34U) 
                                                                            | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__23__KET____DOT__popcount))))) 
                                                                                << 0x33U) 
                                                                               | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__22__KET____DOT__popcount))))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__21__KET____DOT__popcount))))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__20__KET____DOT__popcount))))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__19__KET____DOT__popcount))))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__18__KET____DOT__popcount))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__17__KET____DOT__popcount))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__16__KET____DOT__popcount))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__popcount))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__popcount))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__popcount))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__popcount))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__popcount))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__popcount))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__popcount))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__popcount))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__popcount))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__popcount))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__popcount))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__popcount))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__popcount))) 
                                                                                << 0x1fU) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__popcount))) 
                                                                                << 0x1eU) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__popcount))) 
                                                                                << 0x1dU) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__popcount))) 
                                                                                << 0x1cU) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__27__KET____DOT__popcount))) 
                                                                                << 0x1bU) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__26__KET____DOT__popcount))) 
                                                                                << 0x1aU) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__25__KET____DOT__popcount))) 
                                                                                << 0x19U) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__24__KET____DOT__popcount))) 
                                                                                << 0x18U) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__23__KET____DOT__popcount))) 
                                                                                << 0x17U) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__22__KET____DOT__popcount))) 
                                                                                << 0x16U) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__21__KET____DOT__popcount))) 
                                                                                << 0x15U) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__20__KET____DOT__popcount))) 
                                                                                << 0x14U) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__19__KET____DOT__popcount))) 
                                                                                << 0x13U) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__18__KET____DOT__popcount))) 
                                                                                << 0x12U) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__17__KET____DOT__popcount))) 
                                                                                << 0x11U) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__16__KET____DOT__popcount))) 
                                                                                << 0x10U) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__15__KET____DOT__popcount))) 
                                                                                << 0xfU) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__14__KET____DOT__popcount))) 
                                                                                << 0xeU) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__13__KET____DOT__popcount))) 
                                                                                << 0xdU) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__12__KET____DOT__popcount))) 
                                                                                << 0xcU) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__11__KET____DOT__popcount))) 
                                                                                << 0xbU) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__10__KET____DOT__popcount))) 
                                                                                << 0xaU) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__9__KET____DOT__popcount))) 
                                                                                << 9U) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__8__KET____DOT__popcount))) 
                                                                                << 8U) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__7__KET____DOT__popcount))) 
                                                                                << 7U) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__6__KET____DOT__popcount))) 
                                                                                << 6U) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__5__KET____DOT__popcount))) 
                                                                                << 5U) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__4__KET____DOT__popcount))) 
                                                                                << 4U) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__3__KET____DOT__popcount))) 
                                                                                << 3U) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__2__KET____DOT__popcount))) 
                                                                                << 2U) 
                                                                                | ((VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__popcount))) 
                                                                                << 1U) 
                                                                                | VL_LTES_III(32, 0U, 
                                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__popcount)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                               >> 0x20U));
    __Vtemp_430[2U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__2__KET____DOT__genblk1__BRA__16__KET____DOT__popcount))) 
                        << 8U) | ((VL_LTES_III(32, 0U, 
                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__2__KET____DOT__genblk1__BRA__15__KET____DOT__popcount))) 
                                   << 7U) | ((VL_LTES_III(32, 0U, 
                                                          VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__2__KET____DOT__genblk1__BRA__14__KET____DOT__popcount))) 
                                              << 6U) 
                                             | ((VL_LTES_III(32, 0U, 
                                                             VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__2__KET____DOT__genblk1__BRA__13__KET____DOT__popcount))) 
                                                 << 5U) 
                                                | ((VL_LTES_III(32, 0U, 
                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__2__KET____DOT__genblk1__BRA__12__KET____DOT__popcount))) 
                                                    << 4U) 
                                                   | ((VL_LTES_III(32, 0U, 
                                                                   VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__popcount))) 
                                                       << 3U) 
                                                      | ((VL_LTES_III(32, 0U, 
                                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__popcount))) 
                                                          << 2U) 
                                                         | ((VL_LTES_III(32, 0U, 
                                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__popcount))) 
                                                             << 1U) 
                                                            | VL_LTES_III(32, 0U, 
                                                                          VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__popcount)))))))))));
    __Vtemp_438[2U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__2__KET____DOT__genblk1__BRA__24__KET____DOT__popcount))) 
                        << 0x10U) | ((VL_LTES_III(32, 0U, 
                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__2__KET____DOT__genblk1__BRA__23__KET____DOT__popcount))) 
                                      << 0xfU) | ((
                                                   VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__2__KET____DOT__genblk1__BRA__22__KET____DOT__popcount))) 
                                                   << 0xeU) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__2__KET____DOT__genblk1__BRA__21__KET____DOT__popcount))) 
                                                      << 0xdU) 
                                                     | ((VL_LTES_III(32, 0U, 
                                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__2__KET____DOT__genblk1__BRA__20__KET____DOT__popcount))) 
                                                         << 0xcU) 
                                                        | ((VL_LTES_III(32, 0U, 
                                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__2__KET____DOT__genblk1__BRA__19__KET____DOT__popcount))) 
                                                            << 0xbU) 
                                                           | ((VL_LTES_III(32, 0U, 
                                                                           VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__2__KET____DOT__genblk1__BRA__18__KET____DOT__popcount))) 
                                                               << 0xaU) 
                                                              | ((VL_LTES_III(32, 0U, 
                                                                              VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__2__KET____DOT__genblk1__BRA__17__KET____DOT__popcount))) 
                                                                  << 9U) 
                                                                 | __Vtemp_430[2U]))))))));
    __Vtemp_446[2U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__popcount))) 
                        << 0x18U) | ((VL_LTES_III(32, 0U, 
                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__popcount))) 
                                      << 0x17U) | (
                                                   (VL_LTES_III(32, 0U, 
                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__popcount))) 
                                                    << 0x16U) 
                                                   | ((VL_LTES_III(32, 0U, 
                                                                   VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__popcount))) 
                                                       << 0x15U) 
                                                      | ((VL_LTES_III(32, 0U, 
                                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__popcount))) 
                                                          << 0x14U) 
                                                         | ((VL_LTES_III(32, 0U, 
                                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__2__KET____DOT__genblk1__BRA__27__KET____DOT__popcount))) 
                                                             << 0x13U) 
                                                            | ((VL_LTES_III(32, 0U, 
                                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__2__KET____DOT__genblk1__BRA__26__KET____DOT__popcount))) 
                                                                << 0x12U) 
                                                               | ((VL_LTES_III(32, 0U, 
                                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__2__KET____DOT__genblk1__BRA__25__KET____DOT__popcount))) 
                                                                   << 0x11U) 
                                                                  | __Vtemp_438[2U]))))))));
    __Vtemp_462[3U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__3__KET____DOT__genblk1__BRA__20__KET____DOT__popcount))) 
                        << 8U) | ((VL_LTES_III(32, 0U, 
                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__3__KET____DOT__genblk1__BRA__19__KET____DOT__popcount))) 
                                   << 7U) | ((VL_LTES_III(32, 0U, 
                                                          VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__3__KET____DOT__genblk1__BRA__18__KET____DOT__popcount))) 
                                              << 6U) 
                                             | ((VL_LTES_III(32, 0U, 
                                                             VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__3__KET____DOT__genblk1__BRA__17__KET____DOT__popcount))) 
                                                 << 5U) 
                                                | ((VL_LTES_III(32, 0U, 
                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__3__KET____DOT__genblk1__BRA__16__KET____DOT__popcount))) 
                                                    << 4U) 
                                                   | ((VL_LTES_III(32, 0U, 
                                                                   VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__3__KET____DOT__genblk1__BRA__15__KET____DOT__popcount))) 
                                                       << 3U) 
                                                      | ((VL_LTES_III(32, 0U, 
                                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__3__KET____DOT__genblk1__BRA__14__KET____DOT__popcount))) 
                                                          << 2U) 
                                                         | ((VL_LTES_III(32, 0U, 
                                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__3__KET____DOT__genblk1__BRA__13__KET____DOT__popcount))) 
                                                             << 1U) 
                                                            | VL_LTES_III(32, 0U, 
                                                                          VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__3__KET____DOT__genblk1__BRA__12__KET____DOT__popcount)))))))))));
    __Vtemp_470[3U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__popcount))) 
                        << 0x10U) | ((VL_LTES_III(32, 0U, 
                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__3__KET____DOT__genblk1__BRA__27__KET____DOT__popcount))) 
                                      << 0xfU) | ((
                                                   VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__3__KET____DOT__genblk1__BRA__26__KET____DOT__popcount))) 
                                                   << 0xeU) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__3__KET____DOT__genblk1__BRA__25__KET____DOT__popcount))) 
                                                      << 0xdU) 
                                                     | ((VL_LTES_III(32, 0U, 
                                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__3__KET____DOT__genblk1__BRA__24__KET____DOT__popcount))) 
                                                         << 0xcU) 
                                                        | ((VL_LTES_III(32, 0U, 
                                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__3__KET____DOT__genblk1__BRA__23__KET____DOT__popcount))) 
                                                            << 0xbU) 
                                                           | ((VL_LTES_III(32, 0U, 
                                                                           VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__3__KET____DOT__genblk1__BRA__22__KET____DOT__popcount))) 
                                                               << 0xaU) 
                                                              | ((VL_LTES_III(32, 0U, 
                                                                              VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__3__KET____DOT__genblk1__BRA__21__KET____DOT__popcount))) 
                                                                  << 9U) 
                                                                 | __Vtemp_462[3U]))))))));
    __Vtemp_478[3U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__4__KET____DOT__genblk1__BRA__8__KET____DOT__popcount))) 
                        << 0x18U) | ((VL_LTES_III(32, 0U, 
                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__4__KET____DOT__genblk1__BRA__7__KET____DOT__popcount))) 
                                      << 0x17U) | (
                                                   (VL_LTES_III(32, 0U, 
                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__4__KET____DOT__genblk1__BRA__6__KET____DOT__popcount))) 
                                                    << 0x16U) 
                                                   | ((VL_LTES_III(32, 0U, 
                                                                   VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__4__KET____DOT__genblk1__BRA__5__KET____DOT__popcount))) 
                                                       << 0x15U) 
                                                      | ((VL_LTES_III(32, 0U, 
                                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__4__KET____DOT__genblk1__BRA__4__KET____DOT__popcount))) 
                                                          << 0x14U) 
                                                         | ((VL_LTES_III(32, 0U, 
                                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__popcount))) 
                                                             << 0x13U) 
                                                            | ((VL_LTES_III(32, 0U, 
                                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__popcount))) 
                                                                << 0x12U) 
                                                               | ((VL_LTES_III(32, 0U, 
                                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__popcount))) 
                                                                   << 0x11U) 
                                                                  | __Vtemp_470[3U]))))))));
    __Vtemp_494[4U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__4__KET____DOT__genblk1__BRA__24__KET____DOT__popcount))) 
                        << 8U) | ((VL_LTES_III(32, 0U, 
                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__4__KET____DOT__genblk1__BRA__23__KET____DOT__popcount))) 
                                   << 7U) | ((VL_LTES_III(32, 0U, 
                                                          VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__4__KET____DOT__genblk1__BRA__22__KET____DOT__popcount))) 
                                              << 6U) 
                                             | ((VL_LTES_III(32, 0U, 
                                                             VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__4__KET____DOT__genblk1__BRA__21__KET____DOT__popcount))) 
                                                 << 5U) 
                                                | ((VL_LTES_III(32, 0U, 
                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__4__KET____DOT__genblk1__BRA__20__KET____DOT__popcount))) 
                                                    << 4U) 
                                                   | ((VL_LTES_III(32, 0U, 
                                                                   VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__4__KET____DOT__genblk1__BRA__19__KET____DOT__popcount))) 
                                                       << 3U) 
                                                      | ((VL_LTES_III(32, 0U, 
                                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__4__KET____DOT__genblk1__BRA__18__KET____DOT__popcount))) 
                                                          << 2U) 
                                                         | ((VL_LTES_III(32, 0U, 
                                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__4__KET____DOT__genblk1__BRA__17__KET____DOT__popcount))) 
                                                             << 1U) 
                                                            | VL_LTES_III(32, 0U, 
                                                                          VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__4__KET____DOT__genblk1__BRA__16__KET____DOT__popcount)))))))))));
    __Vtemp_502[4U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__5__KET____DOT__genblk1__BRA__4__KET____DOT__popcount))) 
                        << 0x10U) | ((VL_LTES_III(32, 0U, 
                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__5__KET____DOT__genblk1__BRA__3__KET____DOT__popcount))) 
                                      << 0xfU) | ((
                                                   VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__5__KET____DOT__genblk1__BRA__2__KET____DOT__popcount))) 
                                                   << 0xeU) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__popcount))) 
                                                      << 0xdU) 
                                                     | ((VL_LTES_III(32, 0U, 
                                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__popcount))) 
                                                         << 0xcU) 
                                                        | ((VL_LTES_III(32, 0U, 
                                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__4__KET____DOT__genblk1__BRA__27__KET____DOT__popcount))) 
                                                            << 0xbU) 
                                                           | ((VL_LTES_III(32, 0U, 
                                                                           VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__4__KET____DOT__genblk1__BRA__26__KET____DOT__popcount))) 
                                                               << 0xaU) 
                                                              | ((VL_LTES_III(32, 0U, 
                                                                              VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__4__KET____DOT__genblk1__BRA__25__KET____DOT__popcount))) 
                                                                  << 9U) 
                                                                 | __Vtemp_494[4U]))))))));
    __Vtemp_510[4U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__5__KET____DOT__genblk1__BRA__12__KET____DOT__popcount))) 
                        << 0x18U) | ((VL_LTES_III(32, 0U, 
                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__5__KET____DOT__genblk1__BRA__11__KET____DOT__popcount))) 
                                      << 0x17U) | (
                                                   (VL_LTES_III(32, 0U, 
                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__5__KET____DOT__genblk1__BRA__10__KET____DOT__popcount))) 
                                                    << 0x16U) 
                                                   | ((VL_LTES_III(32, 0U, 
                                                                   VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__5__KET____DOT__genblk1__BRA__9__KET____DOT__popcount))) 
                                                       << 0x15U) 
                                                      | ((VL_LTES_III(32, 0U, 
                                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__5__KET____DOT__genblk1__BRA__8__KET____DOT__popcount))) 
                                                          << 0x14U) 
                                                         | ((VL_LTES_III(32, 0U, 
                                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__5__KET____DOT__genblk1__BRA__7__KET____DOT__popcount))) 
                                                             << 0x13U) 
                                                            | ((VL_LTES_III(32, 0U, 
                                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__5__KET____DOT__genblk1__BRA__6__KET____DOT__popcount))) 
                                                                << 0x12U) 
                                                               | ((VL_LTES_III(32, 0U, 
                                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__5__KET____DOT__genblk1__BRA__5__KET____DOT__popcount))) 
                                                                   << 0x11U) 
                                                                  | __Vtemp_502[4U]))))))));
    __Vtemp_526[5U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__popcount))) 
                        << 8U) | ((VL_LTES_III(32, 0U, 
                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__5__KET____DOT__genblk1__BRA__27__KET____DOT__popcount))) 
                                   << 7U) | ((VL_LTES_III(32, 0U, 
                                                          VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__5__KET____DOT__genblk1__BRA__26__KET____DOT__popcount))) 
                                              << 6U) 
                                             | ((VL_LTES_III(32, 0U, 
                                                             VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__5__KET____DOT__genblk1__BRA__25__KET____DOT__popcount))) 
                                                 << 5U) 
                                                | ((VL_LTES_III(32, 0U, 
                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__5__KET____DOT__genblk1__BRA__24__KET____DOT__popcount))) 
                                                    << 4U) 
                                                   | ((VL_LTES_III(32, 0U, 
                                                                   VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__5__KET____DOT__genblk1__BRA__23__KET____DOT__popcount))) 
                                                       << 3U) 
                                                      | ((VL_LTES_III(32, 0U, 
                                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__5__KET____DOT__genblk1__BRA__22__KET____DOT__popcount))) 
                                                          << 2U) 
                                                         | ((VL_LTES_III(32, 0U, 
                                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__5__KET____DOT__genblk1__BRA__21__KET____DOT__popcount))) 
                                                             << 1U) 
                                                            | VL_LTES_III(32, 0U, 
                                                                          VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__5__KET____DOT__genblk1__BRA__20__KET____DOT__popcount)))))))))));
    __Vtemp_534[5U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__6__KET____DOT__genblk1__BRA__8__KET____DOT__popcount))) 
                        << 0x10U) | ((VL_LTES_III(32, 0U, 
                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__6__KET____DOT__genblk1__BRA__7__KET____DOT__popcount))) 
                                      << 0xfU) | ((
                                                   VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__6__KET____DOT__genblk1__BRA__6__KET____DOT__popcount))) 
                                                   << 0xeU) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__6__KET____DOT__genblk1__BRA__5__KET____DOT__popcount))) 
                                                      << 0xdU) 
                                                     | ((VL_LTES_III(32, 0U, 
                                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__6__KET____DOT__genblk1__BRA__4__KET____DOT__popcount))) 
                                                         << 0xcU) 
                                                        | ((VL_LTES_III(32, 0U, 
                                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__6__KET____DOT__genblk1__BRA__3__KET____DOT__popcount))) 
                                                            << 0xbU) 
                                                           | ((VL_LTES_III(32, 0U, 
                                                                           VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__6__KET____DOT__genblk1__BRA__2__KET____DOT__popcount))) 
                                                               << 0xaU) 
                                                              | ((VL_LTES_III(32, 0U, 
                                                                              VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__6__KET____DOT__genblk1__BRA__1__KET____DOT__popcount))) 
                                                                  << 9U) 
                                                                 | __Vtemp_526[5U]))))))));
    __Vtemp_542[5U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__6__KET____DOT__genblk1__BRA__16__KET____DOT__popcount))) 
                        << 0x18U) | ((VL_LTES_III(32, 0U, 
                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__6__KET____DOT__genblk1__BRA__15__KET____DOT__popcount))) 
                                      << 0x17U) | (
                                                   (VL_LTES_III(32, 0U, 
                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__6__KET____DOT__genblk1__BRA__14__KET____DOT__popcount))) 
                                                    << 0x16U) 
                                                   | ((VL_LTES_III(32, 0U, 
                                                                   VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__6__KET____DOT__genblk1__BRA__13__KET____DOT__popcount))) 
                                                       << 0x15U) 
                                                      | ((VL_LTES_III(32, 0U, 
                                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__6__KET____DOT__genblk1__BRA__12__KET____DOT__popcount))) 
                                                          << 0x14U) 
                                                         | ((VL_LTES_III(32, 0U, 
                                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__6__KET____DOT__genblk1__BRA__11__KET____DOT__popcount))) 
                                                             << 0x13U) 
                                                            | ((VL_LTES_III(32, 0U, 
                                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__6__KET____DOT__genblk1__BRA__10__KET____DOT__popcount))) 
                                                                << 0x12U) 
                                                               | ((VL_LTES_III(32, 0U, 
                                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__6__KET____DOT__genblk1__BRA__9__KET____DOT__popcount))) 
                                                                   << 0x11U) 
                                                                  | __Vtemp_534[5U]))))))));
    __Vtemp_558[6U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__7__KET____DOT__genblk1__BRA__4__KET____DOT__popcount))) 
                        << 8U) | ((VL_LTES_III(32, 0U, 
                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__7__KET____DOT__genblk1__BRA__3__KET____DOT__popcount))) 
                                   << 7U) | ((VL_LTES_III(32, 0U, 
                                                          VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__7__KET____DOT__genblk1__BRA__2__KET____DOT__popcount))) 
                                              << 6U) 
                                             | ((VL_LTES_III(32, 0U, 
                                                             VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__7__KET____DOT__genblk1__BRA__1__KET____DOT__popcount))) 
                                                 << 5U) 
                                                | ((VL_LTES_III(32, 0U, 
                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__7__KET____DOT__genblk1__BRA__0__KET____DOT__popcount))) 
                                                    << 4U) 
                                                   | ((VL_LTES_III(32, 0U, 
                                                                   VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__6__KET____DOT__genblk1__BRA__27__KET____DOT__popcount))) 
                                                       << 3U) 
                                                      | ((VL_LTES_III(32, 0U, 
                                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__6__KET____DOT__genblk1__BRA__26__KET____DOT__popcount))) 
                                                          << 2U) 
                                                         | ((VL_LTES_III(32, 0U, 
                                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__6__KET____DOT__genblk1__BRA__25__KET____DOT__popcount))) 
                                                             << 1U) 
                                                            | VL_LTES_III(32, 0U, 
                                                                          VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__6__KET____DOT__genblk1__BRA__24__KET____DOT__popcount)))))))))));
    __Vtemp_566[6U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__7__KET____DOT__genblk1__BRA__12__KET____DOT__popcount))) 
                        << 0x10U) | ((VL_LTES_III(32, 0U, 
                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__7__KET____DOT__genblk1__BRA__11__KET____DOT__popcount))) 
                                      << 0xfU) | ((
                                                   VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__7__KET____DOT__genblk1__BRA__10__KET____DOT__popcount))) 
                                                   << 0xeU) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__7__KET____DOT__genblk1__BRA__9__KET____DOT__popcount))) 
                                                      << 0xdU) 
                                                     | ((VL_LTES_III(32, 0U, 
                                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__7__KET____DOT__genblk1__BRA__8__KET____DOT__popcount))) 
                                                         << 0xcU) 
                                                        | ((VL_LTES_III(32, 0U, 
                                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__7__KET____DOT__genblk1__BRA__7__KET____DOT__popcount))) 
                                                            << 0xbU) 
                                                           | ((VL_LTES_III(32, 0U, 
                                                                           VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__7__KET____DOT__genblk1__BRA__6__KET____DOT__popcount))) 
                                                               << 0xaU) 
                                                              | ((VL_LTES_III(32, 0U, 
                                                                              VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__7__KET____DOT__genblk1__BRA__5__KET____DOT__popcount))) 
                                                                  << 9U) 
                                                                 | __Vtemp_558[6U]))))))));
    __Vtemp_574[6U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__7__KET____DOT__genblk1__BRA__20__KET____DOT__popcount))) 
                        << 0x18U) | ((VL_LTES_III(32, 0U, 
                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__7__KET____DOT__genblk1__BRA__19__KET____DOT__popcount))) 
                                      << 0x17U) | (
                                                   (VL_LTES_III(32, 0U, 
                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__7__KET____DOT__genblk1__BRA__18__KET____DOT__popcount))) 
                                                    << 0x16U) 
                                                   | ((VL_LTES_III(32, 0U, 
                                                                   VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__7__KET____DOT__genblk1__BRA__17__KET____DOT__popcount))) 
                                                       << 0x15U) 
                                                      | ((VL_LTES_III(32, 0U, 
                                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__7__KET____DOT__genblk1__BRA__16__KET____DOT__popcount))) 
                                                          << 0x14U) 
                                                         | ((VL_LTES_III(32, 0U, 
                                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__7__KET____DOT__genblk1__BRA__15__KET____DOT__popcount))) 
                                                             << 0x13U) 
                                                            | ((VL_LTES_III(32, 0U, 
                                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__7__KET____DOT__genblk1__BRA__14__KET____DOT__popcount))) 
                                                                << 0x12U) 
                                                               | ((VL_LTES_III(32, 0U, 
                                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__7__KET____DOT__genblk1__BRA__13__KET____DOT__popcount))) 
                                                                   << 0x11U) 
                                                                  | __Vtemp_566[6U]))))))));
    __Vtemp_590[7U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__8__KET____DOT__genblk1__BRA__8__KET____DOT__popcount))) 
                        << 8U) | ((VL_LTES_III(32, 0U, 
                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__8__KET____DOT__genblk1__BRA__7__KET____DOT__popcount))) 
                                   << 7U) | ((VL_LTES_III(32, 0U, 
                                                          VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__8__KET____DOT__genblk1__BRA__6__KET____DOT__popcount))) 
                                              << 6U) 
                                             | ((VL_LTES_III(32, 0U, 
                                                             VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__8__KET____DOT__genblk1__BRA__5__KET____DOT__popcount))) 
                                                 << 5U) 
                                                | ((VL_LTES_III(32, 0U, 
                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__8__KET____DOT__genblk1__BRA__4__KET____DOT__popcount))) 
                                                    << 4U) 
                                                   | ((VL_LTES_III(32, 0U, 
                                                                   VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__8__KET____DOT__genblk1__BRA__3__KET____DOT__popcount))) 
                                                       << 3U) 
                                                      | ((VL_LTES_III(32, 0U, 
                                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__8__KET____DOT__genblk1__BRA__2__KET____DOT__popcount))) 
                                                          << 2U) 
                                                         | ((VL_LTES_III(32, 0U, 
                                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__8__KET____DOT__genblk1__BRA__1__KET____DOT__popcount))) 
                                                             << 1U) 
                                                            | VL_LTES_III(32, 0U, 
                                                                          VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__8__KET____DOT__genblk1__BRA__0__KET____DOT__popcount)))))))))));
    __Vtemp_598[7U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__8__KET____DOT__genblk1__BRA__16__KET____DOT__popcount))) 
                        << 0x10U) | ((VL_LTES_III(32, 0U, 
                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__8__KET____DOT__genblk1__BRA__15__KET____DOT__popcount))) 
                                      << 0xfU) | ((
                                                   VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__8__KET____DOT__genblk1__BRA__14__KET____DOT__popcount))) 
                                                   << 0xeU) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__8__KET____DOT__genblk1__BRA__13__KET____DOT__popcount))) 
                                                      << 0xdU) 
                                                     | ((VL_LTES_III(32, 0U, 
                                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__8__KET____DOT__genblk1__BRA__12__KET____DOT__popcount))) 
                                                         << 0xcU) 
                                                        | ((VL_LTES_III(32, 0U, 
                                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__8__KET____DOT__genblk1__BRA__11__KET____DOT__popcount))) 
                                                            << 0xbU) 
                                                           | ((VL_LTES_III(32, 0U, 
                                                                           VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__8__KET____DOT__genblk1__BRA__10__KET____DOT__popcount))) 
                                                               << 0xaU) 
                                                              | ((VL_LTES_III(32, 0U, 
                                                                              VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__8__KET____DOT__genblk1__BRA__9__KET____DOT__popcount))) 
                                                                  << 9U) 
                                                                 | __Vtemp_590[7U]))))))));
    __Vtemp_606[7U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__8__KET____DOT__genblk1__BRA__24__KET____DOT__popcount))) 
                        << 0x18U) | ((VL_LTES_III(32, 0U, 
                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__8__KET____DOT__genblk1__BRA__23__KET____DOT__popcount))) 
                                      << 0x17U) | (
                                                   (VL_LTES_III(32, 0U, 
                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__8__KET____DOT__genblk1__BRA__22__KET____DOT__popcount))) 
                                                    << 0x16U) 
                                                   | ((VL_LTES_III(32, 0U, 
                                                                   VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__8__KET____DOT__genblk1__BRA__21__KET____DOT__popcount))) 
                                                       << 0x15U) 
                                                      | ((VL_LTES_III(32, 0U, 
                                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__8__KET____DOT__genblk1__BRA__20__KET____DOT__popcount))) 
                                                          << 0x14U) 
                                                         | ((VL_LTES_III(32, 0U, 
                                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__8__KET____DOT__genblk1__BRA__19__KET____DOT__popcount))) 
                                                             << 0x13U) 
                                                            | ((VL_LTES_III(32, 0U, 
                                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__8__KET____DOT__genblk1__BRA__18__KET____DOT__popcount))) 
                                                                << 0x12U) 
                                                               | ((VL_LTES_III(32, 0U, 
                                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__8__KET____DOT__genblk1__BRA__17__KET____DOT__popcount))) 
                                                                   << 0x11U) 
                                                                  | __Vtemp_598[7U]))))))));
    __Vtemp_622[8U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__9__KET____DOT__genblk1__BRA__12__KET____DOT__popcount))) 
                        << 8U) | ((VL_LTES_III(32, 0U, 
                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__9__KET____DOT__genblk1__BRA__11__KET____DOT__popcount))) 
                                   << 7U) | ((VL_LTES_III(32, 0U, 
                                                          VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__9__KET____DOT__genblk1__BRA__10__KET____DOT__popcount))) 
                                              << 6U) 
                                             | ((VL_LTES_III(32, 0U, 
                                                             VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__9__KET____DOT__genblk1__BRA__9__KET____DOT__popcount))) 
                                                 << 5U) 
                                                | ((VL_LTES_III(32, 0U, 
                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__9__KET____DOT__genblk1__BRA__8__KET____DOT__popcount))) 
                                                    << 4U) 
                                                   | ((VL_LTES_III(32, 0U, 
                                                                   VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__9__KET____DOT__genblk1__BRA__7__KET____DOT__popcount))) 
                                                       << 3U) 
                                                      | ((VL_LTES_III(32, 0U, 
                                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__9__KET____DOT__genblk1__BRA__6__KET____DOT__popcount))) 
                                                          << 2U) 
                                                         | ((VL_LTES_III(32, 0U, 
                                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__9__KET____DOT__genblk1__BRA__5__KET____DOT__popcount))) 
                                                             << 1U) 
                                                            | VL_LTES_III(32, 0U, 
                                                                          VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__9__KET____DOT__genblk1__BRA__4__KET____DOT__popcount)))))))))));
    __Vtemp_630[8U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__9__KET____DOT__genblk1__BRA__20__KET____DOT__popcount))) 
                        << 0x10U) | ((VL_LTES_III(32, 0U, 
                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__9__KET____DOT__genblk1__BRA__19__KET____DOT__popcount))) 
                                      << 0xfU) | ((
                                                   VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__9__KET____DOT__genblk1__BRA__18__KET____DOT__popcount))) 
                                                   << 0xeU) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__9__KET____DOT__genblk1__BRA__17__KET____DOT__popcount))) 
                                                      << 0xdU) 
                                                     | ((VL_LTES_III(32, 0U, 
                                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__9__KET____DOT__genblk1__BRA__16__KET____DOT__popcount))) 
                                                         << 0xcU) 
                                                        | ((VL_LTES_III(32, 0U, 
                                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__9__KET____DOT__genblk1__BRA__15__KET____DOT__popcount))) 
                                                            << 0xbU) 
                                                           | ((VL_LTES_III(32, 0U, 
                                                                           VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__9__KET____DOT__genblk1__BRA__14__KET____DOT__popcount))) 
                                                               << 0xaU) 
                                                              | ((VL_LTES_III(32, 0U, 
                                                                              VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__9__KET____DOT__genblk1__BRA__13__KET____DOT__popcount))) 
                                                                  << 9U) 
                                                                 | __Vtemp_622[8U]))))))));
    __Vtemp_638[8U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__10__KET____DOT__genblk1__BRA__0__KET____DOT__popcount))) 
                        << 0x18U) | ((VL_LTES_III(32, 0U, 
                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__9__KET____DOT__genblk1__BRA__27__KET____DOT__popcount))) 
                                      << 0x17U) | (
                                                   (VL_LTES_III(32, 0U, 
                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__9__KET____DOT__genblk1__BRA__26__KET____DOT__popcount))) 
                                                    << 0x16U) 
                                                   | ((VL_LTES_III(32, 0U, 
                                                                   VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__9__KET____DOT__genblk1__BRA__25__KET____DOT__popcount))) 
                                                       << 0x15U) 
                                                      | ((VL_LTES_III(32, 0U, 
                                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__9__KET____DOT__genblk1__BRA__24__KET____DOT__popcount))) 
                                                          << 0x14U) 
                                                         | ((VL_LTES_III(32, 0U, 
                                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__9__KET____DOT__genblk1__BRA__23__KET____DOT__popcount))) 
                                                             << 0x13U) 
                                                            | ((VL_LTES_III(32, 0U, 
                                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__9__KET____DOT__genblk1__BRA__22__KET____DOT__popcount))) 
                                                                << 0x12U) 
                                                               | ((VL_LTES_III(32, 0U, 
                                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__9__KET____DOT__genblk1__BRA__21__KET____DOT__popcount))) 
                                                                   << 0x11U) 
                                                                  | __Vtemp_630[8U]))))))));
    __Vtemp_654[9U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__10__KET____DOT__genblk1__BRA__16__KET____DOT__popcount))) 
                        << 8U) | ((VL_LTES_III(32, 0U, 
                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__10__KET____DOT__genblk1__BRA__15__KET____DOT__popcount))) 
                                   << 7U) | ((VL_LTES_III(32, 0U, 
                                                          VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__10__KET____DOT__genblk1__BRA__14__KET____DOT__popcount))) 
                                              << 6U) 
                                             | ((VL_LTES_III(32, 0U, 
                                                             VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__10__KET____DOT__genblk1__BRA__13__KET____DOT__popcount))) 
                                                 << 5U) 
                                                | ((VL_LTES_III(32, 0U, 
                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__10__KET____DOT__genblk1__BRA__12__KET____DOT__popcount))) 
                                                    << 4U) 
                                                   | ((VL_LTES_III(32, 0U, 
                                                                   VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__10__KET____DOT__genblk1__BRA__11__KET____DOT__popcount))) 
                                                       << 3U) 
                                                      | ((VL_LTES_III(32, 0U, 
                                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__10__KET____DOT__genblk1__BRA__10__KET____DOT__popcount))) 
                                                          << 2U) 
                                                         | ((VL_LTES_III(32, 0U, 
                                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__10__KET____DOT__genblk1__BRA__9__KET____DOT__popcount))) 
                                                             << 1U) 
                                                            | VL_LTES_III(32, 0U, 
                                                                          VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__10__KET____DOT__genblk1__BRA__8__KET____DOT__popcount)))))))))));
    __Vtemp_662[9U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__10__KET____DOT__genblk1__BRA__24__KET____DOT__popcount))) 
                        << 0x10U) | ((VL_LTES_III(32, 0U, 
                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__10__KET____DOT__genblk1__BRA__23__KET____DOT__popcount))) 
                                      << 0xfU) | ((
                                                   VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__10__KET____DOT__genblk1__BRA__22__KET____DOT__popcount))) 
                                                   << 0xeU) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__10__KET____DOT__genblk1__BRA__21__KET____DOT__popcount))) 
                                                      << 0xdU) 
                                                     | ((VL_LTES_III(32, 0U, 
                                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__10__KET____DOT__genblk1__BRA__20__KET____DOT__popcount))) 
                                                         << 0xcU) 
                                                        | ((VL_LTES_III(32, 0U, 
                                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__10__KET____DOT__genblk1__BRA__19__KET____DOT__popcount))) 
                                                            << 0xbU) 
                                                           | ((VL_LTES_III(32, 0U, 
                                                                           VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__10__KET____DOT__genblk1__BRA__18__KET____DOT__popcount))) 
                                                               << 0xaU) 
                                                              | ((VL_LTES_III(32, 0U, 
                                                                              VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__10__KET____DOT__genblk1__BRA__17__KET____DOT__popcount))) 
                                                                  << 9U) 
                                                                 | __Vtemp_654[9U]))))))));
    __Vtemp_670[9U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__11__KET____DOT__genblk1__BRA__4__KET____DOT__popcount))) 
                        << 0x18U) | ((VL_LTES_III(32, 0U, 
                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__11__KET____DOT__genblk1__BRA__3__KET____DOT__popcount))) 
                                      << 0x17U) | (
                                                   (VL_LTES_III(32, 0U, 
                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__11__KET____DOT__genblk1__BRA__2__KET____DOT__popcount))) 
                                                    << 0x16U) 
                                                   | ((VL_LTES_III(32, 0U, 
                                                                   VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__11__KET____DOT__genblk1__BRA__1__KET____DOT__popcount))) 
                                                       << 0x15U) 
                                                      | ((VL_LTES_III(32, 0U, 
                                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__11__KET____DOT__genblk1__BRA__0__KET____DOT__popcount))) 
                                                          << 0x14U) 
                                                         | ((VL_LTES_III(32, 0U, 
                                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__10__KET____DOT__genblk1__BRA__27__KET____DOT__popcount))) 
                                                             << 0x13U) 
                                                            | ((VL_LTES_III(32, 0U, 
                                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__10__KET____DOT__genblk1__BRA__26__KET____DOT__popcount))) 
                                                                << 0x12U) 
                                                               | ((VL_LTES_III(32, 0U, 
                                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__10__KET____DOT__genblk1__BRA__25__KET____DOT__popcount))) 
                                                                   << 0x11U) 
                                                                  | __Vtemp_662[9U]))))))));
    __Vtemp_686[0xaU] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__11__KET____DOT__genblk1__BRA__20__KET____DOT__popcount))) 
                          << 8U) | ((VL_LTES_III(32, 0U, 
                                                 VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__11__KET____DOT__genblk1__BRA__19__KET____DOT__popcount))) 
                                     << 7U) | ((VL_LTES_III(32, 0U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__11__KET____DOT__genblk1__BRA__18__KET____DOT__popcount))) 
                                                << 6U) 
                                               | ((VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__11__KET____DOT__genblk1__BRA__17__KET____DOT__popcount))) 
                                                   << 5U) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__11__KET____DOT__genblk1__BRA__16__KET____DOT__popcount))) 
                                                      << 4U) 
                                                     | ((VL_LTES_III(32, 0U, 
                                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__11__KET____DOT__genblk1__BRA__15__KET____DOT__popcount))) 
                                                         << 3U) 
                                                        | ((VL_LTES_III(32, 0U, 
                                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__11__KET____DOT__genblk1__BRA__14__KET____DOT__popcount))) 
                                                            << 2U) 
                                                           | ((VL_LTES_III(32, 0U, 
                                                                           VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__11__KET____DOT__genblk1__BRA__13__KET____DOT__popcount))) 
                                                               << 1U) 
                                                              | VL_LTES_III(32, 0U, 
                                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__11__KET____DOT__genblk1__BRA__12__KET____DOT__popcount)))))))))));
    __Vtemp_694[0xaU] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__12__KET____DOT__genblk1__BRA__0__KET____DOT__popcount))) 
                          << 0x10U) | ((VL_LTES_III(32, 0U, 
                                                    VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__11__KET____DOT__genblk1__BRA__27__KET____DOT__popcount))) 
                                        << 0xfU) | 
                                       ((VL_LTES_III(32, 0U, 
                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__11__KET____DOT__genblk1__BRA__26__KET____DOT__popcount))) 
                                         << 0xeU) | 
                                        ((VL_LTES_III(32, 0U, 
                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__11__KET____DOT__genblk1__BRA__25__KET____DOT__popcount))) 
                                          << 0xdU) 
                                         | ((VL_LTES_III(32, 0U, 
                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__11__KET____DOT__genblk1__BRA__24__KET____DOT__popcount))) 
                                             << 0xcU) 
                                            | ((VL_LTES_III(32, 0U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__11__KET____DOT__genblk1__BRA__23__KET____DOT__popcount))) 
                                                << 0xbU) 
                                               | ((VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__11__KET____DOT__genblk1__BRA__22__KET____DOT__popcount))) 
                                                   << 0xaU) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__11__KET____DOT__genblk1__BRA__21__KET____DOT__popcount))) 
                                                      << 9U) 
                                                     | __Vtemp_686[0xaU]))))))));
    __Vtemp_702[0xaU] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__12__KET____DOT__genblk1__BRA__8__KET____DOT__popcount))) 
                          << 0x18U) | ((VL_LTES_III(32, 0U, 
                                                    VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__12__KET____DOT__genblk1__BRA__7__KET____DOT__popcount))) 
                                        << 0x17U) | 
                                       ((VL_LTES_III(32, 0U, 
                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__12__KET____DOT__genblk1__BRA__6__KET____DOT__popcount))) 
                                         << 0x16U) 
                                        | ((VL_LTES_III(32, 0U, 
                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__12__KET____DOT__genblk1__BRA__5__KET____DOT__popcount))) 
                                            << 0x15U) 
                                           | ((VL_LTES_III(32, 0U, 
                                                           VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__12__KET____DOT__genblk1__BRA__4__KET____DOT__popcount))) 
                                               << 0x14U) 
                                              | ((VL_LTES_III(32, 0U, 
                                                              VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__12__KET____DOT__genblk1__BRA__3__KET____DOT__popcount))) 
                                                  << 0x13U) 
                                                 | ((VL_LTES_III(32, 0U, 
                                                                 VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__12__KET____DOT__genblk1__BRA__2__KET____DOT__popcount))) 
                                                     << 0x12U) 
                                                    | ((VL_LTES_III(32, 0U, 
                                                                    VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__12__KET____DOT__genblk1__BRA__1__KET____DOT__popcount))) 
                                                        << 0x11U) 
                                                       | __Vtemp_694[0xaU]))))))));
    __Vtemp_718[0xbU] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__12__KET____DOT__genblk1__BRA__24__KET____DOT__popcount))) 
                          << 8U) | ((VL_LTES_III(32, 0U, 
                                                 VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__12__KET____DOT__genblk1__BRA__23__KET____DOT__popcount))) 
                                     << 7U) | ((VL_LTES_III(32, 0U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__12__KET____DOT__genblk1__BRA__22__KET____DOT__popcount))) 
                                                << 6U) 
                                               | ((VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__12__KET____DOT__genblk1__BRA__21__KET____DOT__popcount))) 
                                                   << 5U) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__12__KET____DOT__genblk1__BRA__20__KET____DOT__popcount))) 
                                                      << 4U) 
                                                     | ((VL_LTES_III(32, 0U, 
                                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__12__KET____DOT__genblk1__BRA__19__KET____DOT__popcount))) 
                                                         << 3U) 
                                                        | ((VL_LTES_III(32, 0U, 
                                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__12__KET____DOT__genblk1__BRA__18__KET____DOT__popcount))) 
                                                            << 2U) 
                                                           | ((VL_LTES_III(32, 0U, 
                                                                           VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__12__KET____DOT__genblk1__BRA__17__KET____DOT__popcount))) 
                                                               << 1U) 
                                                              | VL_LTES_III(32, 0U, 
                                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__12__KET____DOT__genblk1__BRA__16__KET____DOT__popcount)))))))))));
    __Vtemp_726[0xbU] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__13__KET____DOT__genblk1__BRA__4__KET____DOT__popcount))) 
                          << 0x10U) | ((VL_LTES_III(32, 0U, 
                                                    VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__13__KET____DOT__genblk1__BRA__3__KET____DOT__popcount))) 
                                        << 0xfU) | 
                                       ((VL_LTES_III(32, 0U, 
                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__13__KET____DOT__genblk1__BRA__2__KET____DOT__popcount))) 
                                         << 0xeU) | 
                                        ((VL_LTES_III(32, 0U, 
                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__13__KET____DOT__genblk1__BRA__1__KET____DOT__popcount))) 
                                          << 0xdU) 
                                         | ((VL_LTES_III(32, 0U, 
                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__13__KET____DOT__genblk1__BRA__0__KET____DOT__popcount))) 
                                             << 0xcU) 
                                            | ((VL_LTES_III(32, 0U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__12__KET____DOT__genblk1__BRA__27__KET____DOT__popcount))) 
                                                << 0xbU) 
                                               | ((VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__12__KET____DOT__genblk1__BRA__26__KET____DOT__popcount))) 
                                                   << 0xaU) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__12__KET____DOT__genblk1__BRA__25__KET____DOT__popcount))) 
                                                      << 9U) 
                                                     | __Vtemp_718[0xbU]))))))));
    __Vtemp_734[0xbU] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__13__KET____DOT__genblk1__BRA__12__KET____DOT__popcount))) 
                          << 0x18U) | ((VL_LTES_III(32, 0U, 
                                                    VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__13__KET____DOT__genblk1__BRA__11__KET____DOT__popcount))) 
                                        << 0x17U) | 
                                       ((VL_LTES_III(32, 0U, 
                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__13__KET____DOT__genblk1__BRA__10__KET____DOT__popcount))) 
                                         << 0x16U) 
                                        | ((VL_LTES_III(32, 0U, 
                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__13__KET____DOT__genblk1__BRA__9__KET____DOT__popcount))) 
                                            << 0x15U) 
                                           | ((VL_LTES_III(32, 0U, 
                                                           VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__13__KET____DOT__genblk1__BRA__8__KET____DOT__popcount))) 
                                               << 0x14U) 
                                              | ((VL_LTES_III(32, 0U, 
                                                              VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__13__KET____DOT__genblk1__BRA__7__KET____DOT__popcount))) 
                                                  << 0x13U) 
                                                 | ((VL_LTES_III(32, 0U, 
                                                                 VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__13__KET____DOT__genblk1__BRA__6__KET____DOT__popcount))) 
                                                     << 0x12U) 
                                                    | ((VL_LTES_III(32, 0U, 
                                                                    VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__13__KET____DOT__genblk1__BRA__5__KET____DOT__popcount))) 
                                                        << 0x11U) 
                                                       | __Vtemp_726[0xbU]))))))));
    __Vtemp_750[0xcU] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__14__KET____DOT__genblk1__BRA__0__KET____DOT__popcount))) 
                          << 8U) | ((VL_LTES_III(32, 0U, 
                                                 VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__13__KET____DOT__genblk1__BRA__27__KET____DOT__popcount))) 
                                     << 7U) | ((VL_LTES_III(32, 0U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__13__KET____DOT__genblk1__BRA__26__KET____DOT__popcount))) 
                                                << 6U) 
                                               | ((VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__13__KET____DOT__genblk1__BRA__25__KET____DOT__popcount))) 
                                                   << 5U) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__13__KET____DOT__genblk1__BRA__24__KET____DOT__popcount))) 
                                                      << 4U) 
                                                     | ((VL_LTES_III(32, 0U, 
                                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__13__KET____DOT__genblk1__BRA__23__KET____DOT__popcount))) 
                                                         << 3U) 
                                                        | ((VL_LTES_III(32, 0U, 
                                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__13__KET____DOT__genblk1__BRA__22__KET____DOT__popcount))) 
                                                            << 2U) 
                                                           | ((VL_LTES_III(32, 0U, 
                                                                           VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__13__KET____DOT__genblk1__BRA__21__KET____DOT__popcount))) 
                                                               << 1U) 
                                                              | VL_LTES_III(32, 0U, 
                                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__13__KET____DOT__genblk1__BRA__20__KET____DOT__popcount)))))))))));
    __Vtemp_758[0xcU] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__14__KET____DOT__genblk1__BRA__8__KET____DOT__popcount))) 
                          << 0x10U) | ((VL_LTES_III(32, 0U, 
                                                    VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__14__KET____DOT__genblk1__BRA__7__KET____DOT__popcount))) 
                                        << 0xfU) | 
                                       ((VL_LTES_III(32, 0U, 
                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__14__KET____DOT__genblk1__BRA__6__KET____DOT__popcount))) 
                                         << 0xeU) | 
                                        ((VL_LTES_III(32, 0U, 
                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__14__KET____DOT__genblk1__BRA__5__KET____DOT__popcount))) 
                                          << 0xdU) 
                                         | ((VL_LTES_III(32, 0U, 
                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__14__KET____DOT__genblk1__BRA__4__KET____DOT__popcount))) 
                                             << 0xcU) 
                                            | ((VL_LTES_III(32, 0U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__14__KET____DOT__genblk1__BRA__3__KET____DOT__popcount))) 
                                                << 0xbU) 
                                               | ((VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__14__KET____DOT__genblk1__BRA__2__KET____DOT__popcount))) 
                                                   << 0xaU) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__14__KET____DOT__genblk1__BRA__1__KET____DOT__popcount))) 
                                                      << 9U) 
                                                     | __Vtemp_750[0xcU]))))))));
    __Vtemp_766[0xcU] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__14__KET____DOT__genblk1__BRA__16__KET____DOT__popcount))) 
                          << 0x18U) | ((VL_LTES_III(32, 0U, 
                                                    VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__14__KET____DOT__genblk1__BRA__15__KET____DOT__popcount))) 
                                        << 0x17U) | 
                                       ((VL_LTES_III(32, 0U, 
                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__14__KET____DOT__genblk1__BRA__14__KET____DOT__popcount))) 
                                         << 0x16U) 
                                        | ((VL_LTES_III(32, 0U, 
                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__14__KET____DOT__genblk1__BRA__13__KET____DOT__popcount))) 
                                            << 0x15U) 
                                           | ((VL_LTES_III(32, 0U, 
                                                           VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__14__KET____DOT__genblk1__BRA__12__KET____DOT__popcount))) 
                                               << 0x14U) 
                                              | ((VL_LTES_III(32, 0U, 
                                                              VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__14__KET____DOT__genblk1__BRA__11__KET____DOT__popcount))) 
                                                  << 0x13U) 
                                                 | ((VL_LTES_III(32, 0U, 
                                                                 VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__14__KET____DOT__genblk1__BRA__10__KET____DOT__popcount))) 
                                                     << 0x12U) 
                                                    | ((VL_LTES_III(32, 0U, 
                                                                    VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__14__KET____DOT__genblk1__BRA__9__KET____DOT__popcount))) 
                                                        << 0x11U) 
                                                       | __Vtemp_758[0xcU]))))))));
    __Vtemp_782[0xdU] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__15__KET____DOT__genblk1__BRA__4__KET____DOT__popcount))) 
                          << 8U) | ((VL_LTES_III(32, 0U, 
                                                 VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__15__KET____DOT__genblk1__BRA__3__KET____DOT__popcount))) 
                                     << 7U) | ((VL_LTES_III(32, 0U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__15__KET____DOT__genblk1__BRA__2__KET____DOT__popcount))) 
                                                << 6U) 
                                               | ((VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__15__KET____DOT__genblk1__BRA__1__KET____DOT__popcount))) 
                                                   << 5U) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__15__KET____DOT__genblk1__BRA__0__KET____DOT__popcount))) 
                                                      << 4U) 
                                                     | ((VL_LTES_III(32, 0U, 
                                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__14__KET____DOT__genblk1__BRA__27__KET____DOT__popcount))) 
                                                         << 3U) 
                                                        | ((VL_LTES_III(32, 0U, 
                                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__14__KET____DOT__genblk1__BRA__26__KET____DOT__popcount))) 
                                                            << 2U) 
                                                           | ((VL_LTES_III(32, 0U, 
                                                                           VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__14__KET____DOT__genblk1__BRA__25__KET____DOT__popcount))) 
                                                               << 1U) 
                                                              | VL_LTES_III(32, 0U, 
                                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__14__KET____DOT__genblk1__BRA__24__KET____DOT__popcount)))))))))));
    __Vtemp_790[0xdU] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__15__KET____DOT__genblk1__BRA__12__KET____DOT__popcount))) 
                          << 0x10U) | ((VL_LTES_III(32, 0U, 
                                                    VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__15__KET____DOT__genblk1__BRA__11__KET____DOT__popcount))) 
                                        << 0xfU) | 
                                       ((VL_LTES_III(32, 0U, 
                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__15__KET____DOT__genblk1__BRA__10__KET____DOT__popcount))) 
                                         << 0xeU) | 
                                        ((VL_LTES_III(32, 0U, 
                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__15__KET____DOT__genblk1__BRA__9__KET____DOT__popcount))) 
                                          << 0xdU) 
                                         | ((VL_LTES_III(32, 0U, 
                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__15__KET____DOT__genblk1__BRA__8__KET____DOT__popcount))) 
                                             << 0xcU) 
                                            | ((VL_LTES_III(32, 0U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__15__KET____DOT__genblk1__BRA__7__KET____DOT__popcount))) 
                                                << 0xbU) 
                                               | ((VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__15__KET____DOT__genblk1__BRA__6__KET____DOT__popcount))) 
                                                   << 0xaU) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__15__KET____DOT__genblk1__BRA__5__KET____DOT__popcount))) 
                                                      << 9U) 
                                                     | __Vtemp_782[0xdU]))))))));
    __Vtemp_798[0xdU] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__15__KET____DOT__genblk1__BRA__20__KET____DOT__popcount))) 
                          << 0x18U) | ((VL_LTES_III(32, 0U, 
                                                    VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__15__KET____DOT__genblk1__BRA__19__KET____DOT__popcount))) 
                                        << 0x17U) | 
                                       ((VL_LTES_III(32, 0U, 
                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__15__KET____DOT__genblk1__BRA__18__KET____DOT__popcount))) 
                                         << 0x16U) 
                                        | ((VL_LTES_III(32, 0U, 
                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__15__KET____DOT__genblk1__BRA__17__KET____DOT__popcount))) 
                                            << 0x15U) 
                                           | ((VL_LTES_III(32, 0U, 
                                                           VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__15__KET____DOT__genblk1__BRA__16__KET____DOT__popcount))) 
                                               << 0x14U) 
                                              | ((VL_LTES_III(32, 0U, 
                                                              VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__15__KET____DOT__genblk1__BRA__15__KET____DOT__popcount))) 
                                                  << 0x13U) 
                                                 | ((VL_LTES_III(32, 0U, 
                                                                 VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__15__KET____DOT__genblk1__BRA__14__KET____DOT__popcount))) 
                                                     << 0x12U) 
                                                    | ((VL_LTES_III(32, 0U, 
                                                                    VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__15__KET____DOT__genblk1__BRA__13__KET____DOT__popcount))) 
                                                        << 0x11U) 
                                                       | __Vtemp_790[0xdU]))))))));
    __Vtemp_814[0xeU] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__16__KET____DOT__genblk1__BRA__8__KET____DOT__popcount))) 
                          << 8U) | ((VL_LTES_III(32, 0U, 
                                                 VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__16__KET____DOT__genblk1__BRA__7__KET____DOT__popcount))) 
                                     << 7U) | ((VL_LTES_III(32, 0U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__16__KET____DOT__genblk1__BRA__6__KET____DOT__popcount))) 
                                                << 6U) 
                                               | ((VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__16__KET____DOT__genblk1__BRA__5__KET____DOT__popcount))) 
                                                   << 5U) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__16__KET____DOT__genblk1__BRA__4__KET____DOT__popcount))) 
                                                      << 4U) 
                                                     | ((VL_LTES_III(32, 0U, 
                                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__16__KET____DOT__genblk1__BRA__3__KET____DOT__popcount))) 
                                                         << 3U) 
                                                        | ((VL_LTES_III(32, 0U, 
                                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__16__KET____DOT__genblk1__BRA__2__KET____DOT__popcount))) 
                                                            << 2U) 
                                                           | ((VL_LTES_III(32, 0U, 
                                                                           VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__16__KET____DOT__genblk1__BRA__1__KET____DOT__popcount))) 
                                                               << 1U) 
                                                              | VL_LTES_III(32, 0U, 
                                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__16__KET____DOT__genblk1__BRA__0__KET____DOT__popcount)))))))))));
    __Vtemp_822[0xeU] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__16__KET____DOT__genblk1__BRA__16__KET____DOT__popcount))) 
                          << 0x10U) | ((VL_LTES_III(32, 0U, 
                                                    VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__16__KET____DOT__genblk1__BRA__15__KET____DOT__popcount))) 
                                        << 0xfU) | 
                                       ((VL_LTES_III(32, 0U, 
                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__16__KET____DOT__genblk1__BRA__14__KET____DOT__popcount))) 
                                         << 0xeU) | 
                                        ((VL_LTES_III(32, 0U, 
                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__16__KET____DOT__genblk1__BRA__13__KET____DOT__popcount))) 
                                          << 0xdU) 
                                         | ((VL_LTES_III(32, 0U, 
                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__16__KET____DOT__genblk1__BRA__12__KET____DOT__popcount))) 
                                             << 0xcU) 
                                            | ((VL_LTES_III(32, 0U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__16__KET____DOT__genblk1__BRA__11__KET____DOT__popcount))) 
                                                << 0xbU) 
                                               | ((VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__16__KET____DOT__genblk1__BRA__10__KET____DOT__popcount))) 
                                                   << 0xaU) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__16__KET____DOT__genblk1__BRA__9__KET____DOT__popcount))) 
                                                      << 9U) 
                                                     | __Vtemp_814[0xeU]))))))));
    __Vtemp_830[0xeU] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__16__KET____DOT__genblk1__BRA__24__KET____DOT__popcount))) 
                          << 0x18U) | ((VL_LTES_III(32, 0U, 
                                                    VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__16__KET____DOT__genblk1__BRA__23__KET____DOT__popcount))) 
                                        << 0x17U) | 
                                       ((VL_LTES_III(32, 0U, 
                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__16__KET____DOT__genblk1__BRA__22__KET____DOT__popcount))) 
                                         << 0x16U) 
                                        | ((VL_LTES_III(32, 0U, 
                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__16__KET____DOT__genblk1__BRA__21__KET____DOT__popcount))) 
                                            << 0x15U) 
                                           | ((VL_LTES_III(32, 0U, 
                                                           VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__16__KET____DOT__genblk1__BRA__20__KET____DOT__popcount))) 
                                               << 0x14U) 
                                              | ((VL_LTES_III(32, 0U, 
                                                              VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__16__KET____DOT__genblk1__BRA__19__KET____DOT__popcount))) 
                                                  << 0x13U) 
                                                 | ((VL_LTES_III(32, 0U, 
                                                                 VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__16__KET____DOT__genblk1__BRA__18__KET____DOT__popcount))) 
                                                     << 0x12U) 
                                                    | ((VL_LTES_III(32, 0U, 
                                                                    VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__16__KET____DOT__genblk1__BRA__17__KET____DOT__popcount))) 
                                                        << 0x11U) 
                                                       | __Vtemp_822[0xeU]))))))));
    __Vtemp_846[0xfU] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__17__KET____DOT__genblk1__BRA__12__KET____DOT__popcount))) 
                          << 8U) | ((VL_LTES_III(32, 0U, 
                                                 VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__17__KET____DOT__genblk1__BRA__11__KET____DOT__popcount))) 
                                     << 7U) | ((VL_LTES_III(32, 0U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__17__KET____DOT__genblk1__BRA__10__KET____DOT__popcount))) 
                                                << 6U) 
                                               | ((VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__17__KET____DOT__genblk1__BRA__9__KET____DOT__popcount))) 
                                                   << 5U) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__17__KET____DOT__genblk1__BRA__8__KET____DOT__popcount))) 
                                                      << 4U) 
                                                     | ((VL_LTES_III(32, 0U, 
                                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__17__KET____DOT__genblk1__BRA__7__KET____DOT__popcount))) 
                                                         << 3U) 
                                                        | ((VL_LTES_III(32, 0U, 
                                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__17__KET____DOT__genblk1__BRA__6__KET____DOT__popcount))) 
                                                            << 2U) 
                                                           | ((VL_LTES_III(32, 0U, 
                                                                           VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__17__KET____DOT__genblk1__BRA__5__KET____DOT__popcount))) 
                                                               << 1U) 
                                                              | VL_LTES_III(32, 0U, 
                                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__17__KET____DOT__genblk1__BRA__4__KET____DOT__popcount)))))))))));
    __Vtemp_854[0xfU] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__17__KET____DOT__genblk1__BRA__20__KET____DOT__popcount))) 
                          << 0x10U) | ((VL_LTES_III(32, 0U, 
                                                    VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__17__KET____DOT__genblk1__BRA__19__KET____DOT__popcount))) 
                                        << 0xfU) | 
                                       ((VL_LTES_III(32, 0U, 
                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__17__KET____DOT__genblk1__BRA__18__KET____DOT__popcount))) 
                                         << 0xeU) | 
                                        ((VL_LTES_III(32, 0U, 
                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__17__KET____DOT__genblk1__BRA__17__KET____DOT__popcount))) 
                                          << 0xdU) 
                                         | ((VL_LTES_III(32, 0U, 
                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__17__KET____DOT__genblk1__BRA__16__KET____DOT__popcount))) 
                                             << 0xcU) 
                                            | ((VL_LTES_III(32, 0U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__17__KET____DOT__genblk1__BRA__15__KET____DOT__popcount))) 
                                                << 0xbU) 
                                               | ((VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__17__KET____DOT__genblk1__BRA__14__KET____DOT__popcount))) 
                                                   << 0xaU) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__17__KET____DOT__genblk1__BRA__13__KET____DOT__popcount))) 
                                                      << 9U) 
                                                     | __Vtemp_846[0xfU]))))))));
    __Vtemp_862[0xfU] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__18__KET____DOT__genblk1__BRA__0__KET____DOT__popcount))) 
                          << 0x18U) | ((VL_LTES_III(32, 0U, 
                                                    VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__17__KET____DOT__genblk1__BRA__27__KET____DOT__popcount))) 
                                        << 0x17U) | 
                                       ((VL_LTES_III(32, 0U, 
                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__17__KET____DOT__genblk1__BRA__26__KET____DOT__popcount))) 
                                         << 0x16U) 
                                        | ((VL_LTES_III(32, 0U, 
                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__17__KET____DOT__genblk1__BRA__25__KET____DOT__popcount))) 
                                            << 0x15U) 
                                           | ((VL_LTES_III(32, 0U, 
                                                           VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__17__KET____DOT__genblk1__BRA__24__KET____DOT__popcount))) 
                                               << 0x14U) 
                                              | ((VL_LTES_III(32, 0U, 
                                                              VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__17__KET____DOT__genblk1__BRA__23__KET____DOT__popcount))) 
                                                  << 0x13U) 
                                                 | ((VL_LTES_III(32, 0U, 
                                                                 VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__17__KET____DOT__genblk1__BRA__22__KET____DOT__popcount))) 
                                                     << 0x12U) 
                                                    | ((VL_LTES_III(32, 0U, 
                                                                    VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__17__KET____DOT__genblk1__BRA__21__KET____DOT__popcount))) 
                                                        << 0x11U) 
                                                       | __Vtemp_854[0xfU]))))))));
    __Vtemp_878[0x10U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__18__KET____DOT__genblk1__BRA__16__KET____DOT__popcount))) 
                           << 8U) | ((VL_LTES_III(32, 0U, 
                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__18__KET____DOT__genblk1__BRA__15__KET____DOT__popcount))) 
                                      << 7U) | ((VL_LTES_III(32, 0U, 
                                                             VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__18__KET____DOT__genblk1__BRA__14__KET____DOT__popcount))) 
                                                 << 6U) 
                                                | ((VL_LTES_III(32, 0U, 
                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__18__KET____DOT__genblk1__BRA__13__KET____DOT__popcount))) 
                                                    << 5U) 
                                                   | ((VL_LTES_III(32, 0U, 
                                                                   VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__18__KET____DOT__genblk1__BRA__12__KET____DOT__popcount))) 
                                                       << 4U) 
                                                      | ((VL_LTES_III(32, 0U, 
                                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__18__KET____DOT__genblk1__BRA__11__KET____DOT__popcount))) 
                                                          << 3U) 
                                                         | ((VL_LTES_III(32, 0U, 
                                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__18__KET____DOT__genblk1__BRA__10__KET____DOT__popcount))) 
                                                             << 2U) 
                                                            | ((VL_LTES_III(32, 0U, 
                                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__18__KET____DOT__genblk1__BRA__9__KET____DOT__popcount))) 
                                                                << 1U) 
                                                               | VL_LTES_III(32, 0U, 
                                                                             VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__18__KET____DOT__genblk1__BRA__8__KET____DOT__popcount)))))))))));
    __Vtemp_886[0x10U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__18__KET____DOT__genblk1__BRA__24__KET____DOT__popcount))) 
                           << 0x10U) | ((VL_LTES_III(32, 0U, 
                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__18__KET____DOT__genblk1__BRA__23__KET____DOT__popcount))) 
                                         << 0xfU) | 
                                        ((VL_LTES_III(32, 0U, 
                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__18__KET____DOT__genblk1__BRA__22__KET____DOT__popcount))) 
                                          << 0xeU) 
                                         | ((VL_LTES_III(32, 0U, 
                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__18__KET____DOT__genblk1__BRA__21__KET____DOT__popcount))) 
                                             << 0xdU) 
                                            | ((VL_LTES_III(32, 0U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__18__KET____DOT__genblk1__BRA__20__KET____DOT__popcount))) 
                                                << 0xcU) 
                                               | ((VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__18__KET____DOT__genblk1__BRA__19__KET____DOT__popcount))) 
                                                   << 0xbU) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__18__KET____DOT__genblk1__BRA__18__KET____DOT__popcount))) 
                                                      << 0xaU) 
                                                     | ((VL_LTES_III(32, 0U, 
                                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__18__KET____DOT__genblk1__BRA__17__KET____DOT__popcount))) 
                                                         << 9U) 
                                                        | __Vtemp_878[0x10U]))))))));
    __Vtemp_894[0x10U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__19__KET____DOT__genblk1__BRA__4__KET____DOT__popcount))) 
                           << 0x18U) | ((VL_LTES_III(32, 0U, 
                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__19__KET____DOT__genblk1__BRA__3__KET____DOT__popcount))) 
                                         << 0x17U) 
                                        | ((VL_LTES_III(32, 0U, 
                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__19__KET____DOT__genblk1__BRA__2__KET____DOT__popcount))) 
                                            << 0x16U) 
                                           | ((VL_LTES_III(32, 0U, 
                                                           VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__19__KET____DOT__genblk1__BRA__1__KET____DOT__popcount))) 
                                               << 0x15U) 
                                              | ((VL_LTES_III(32, 0U, 
                                                              VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__19__KET____DOT__genblk1__BRA__0__KET____DOT__popcount))) 
                                                  << 0x14U) 
                                                 | ((VL_LTES_III(32, 0U, 
                                                                 VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__18__KET____DOT__genblk1__BRA__27__KET____DOT__popcount))) 
                                                     << 0x13U) 
                                                    | ((VL_LTES_III(32, 0U, 
                                                                    VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__18__KET____DOT__genblk1__BRA__26__KET____DOT__popcount))) 
                                                        << 0x12U) 
                                                       | ((VL_LTES_III(32, 0U, 
                                                                       VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__18__KET____DOT__genblk1__BRA__25__KET____DOT__popcount))) 
                                                           << 0x11U) 
                                                          | __Vtemp_886[0x10U]))))))));
    __Vtemp_910[0x11U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__19__KET____DOT__genblk1__BRA__20__KET____DOT__popcount))) 
                           << 8U) | ((VL_LTES_III(32, 0U, 
                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__19__KET____DOT__genblk1__BRA__19__KET____DOT__popcount))) 
                                      << 7U) | ((VL_LTES_III(32, 0U, 
                                                             VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__19__KET____DOT__genblk1__BRA__18__KET____DOT__popcount))) 
                                                 << 6U) 
                                                | ((VL_LTES_III(32, 0U, 
                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__19__KET____DOT__genblk1__BRA__17__KET____DOT__popcount))) 
                                                    << 5U) 
                                                   | ((VL_LTES_III(32, 0U, 
                                                                   VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__19__KET____DOT__genblk1__BRA__16__KET____DOT__popcount))) 
                                                       << 4U) 
                                                      | ((VL_LTES_III(32, 0U, 
                                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__19__KET____DOT__genblk1__BRA__15__KET____DOT__popcount))) 
                                                          << 3U) 
                                                         | ((VL_LTES_III(32, 0U, 
                                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__19__KET____DOT__genblk1__BRA__14__KET____DOT__popcount))) 
                                                             << 2U) 
                                                            | ((VL_LTES_III(32, 0U, 
                                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__19__KET____DOT__genblk1__BRA__13__KET____DOT__popcount))) 
                                                                << 1U) 
                                                               | VL_LTES_III(32, 0U, 
                                                                             VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__19__KET____DOT__genblk1__BRA__12__KET____DOT__popcount)))))))))));
    __Vtemp_918[0x11U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__20__KET____DOT__genblk1__BRA__0__KET____DOT__popcount))) 
                           << 0x10U) | ((VL_LTES_III(32, 0U, 
                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__19__KET____DOT__genblk1__BRA__27__KET____DOT__popcount))) 
                                         << 0xfU) | 
                                        ((VL_LTES_III(32, 0U, 
                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__19__KET____DOT__genblk1__BRA__26__KET____DOT__popcount))) 
                                          << 0xeU) 
                                         | ((VL_LTES_III(32, 0U, 
                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__19__KET____DOT__genblk1__BRA__25__KET____DOT__popcount))) 
                                             << 0xdU) 
                                            | ((VL_LTES_III(32, 0U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__19__KET____DOT__genblk1__BRA__24__KET____DOT__popcount))) 
                                                << 0xcU) 
                                               | ((VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__19__KET____DOT__genblk1__BRA__23__KET____DOT__popcount))) 
                                                   << 0xbU) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__19__KET____DOT__genblk1__BRA__22__KET____DOT__popcount))) 
                                                      << 0xaU) 
                                                     | ((VL_LTES_III(32, 0U, 
                                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__19__KET____DOT__genblk1__BRA__21__KET____DOT__popcount))) 
                                                         << 9U) 
                                                        | __Vtemp_910[0x11U]))))))));
    __Vtemp_926[0x11U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__20__KET____DOT__genblk1__BRA__8__KET____DOT__popcount))) 
                           << 0x18U) | ((VL_LTES_III(32, 0U, 
                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__20__KET____DOT__genblk1__BRA__7__KET____DOT__popcount))) 
                                         << 0x17U) 
                                        | ((VL_LTES_III(32, 0U, 
                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__20__KET____DOT__genblk1__BRA__6__KET____DOT__popcount))) 
                                            << 0x16U) 
                                           | ((VL_LTES_III(32, 0U, 
                                                           VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__20__KET____DOT__genblk1__BRA__5__KET____DOT__popcount))) 
                                               << 0x15U) 
                                              | ((VL_LTES_III(32, 0U, 
                                                              VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__20__KET____DOT__genblk1__BRA__4__KET____DOT__popcount))) 
                                                  << 0x14U) 
                                                 | ((VL_LTES_III(32, 0U, 
                                                                 VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__20__KET____DOT__genblk1__BRA__3__KET____DOT__popcount))) 
                                                     << 0x13U) 
                                                    | ((VL_LTES_III(32, 0U, 
                                                                    VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__20__KET____DOT__genblk1__BRA__2__KET____DOT__popcount))) 
                                                        << 0x12U) 
                                                       | ((VL_LTES_III(32, 0U, 
                                                                       VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__20__KET____DOT__genblk1__BRA__1__KET____DOT__popcount))) 
                                                           << 0x11U) 
                                                          | __Vtemp_918[0x11U]))))))));
    __Vtemp_942[0x12U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__20__KET____DOT__genblk1__BRA__24__KET____DOT__popcount))) 
                           << 8U) | ((VL_LTES_III(32, 0U, 
                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__20__KET____DOT__genblk1__BRA__23__KET____DOT__popcount))) 
                                      << 7U) | ((VL_LTES_III(32, 0U, 
                                                             VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__20__KET____DOT__genblk1__BRA__22__KET____DOT__popcount))) 
                                                 << 6U) 
                                                | ((VL_LTES_III(32, 0U, 
                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__20__KET____DOT__genblk1__BRA__21__KET____DOT__popcount))) 
                                                    << 5U) 
                                                   | ((VL_LTES_III(32, 0U, 
                                                                   VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__20__KET____DOT__genblk1__BRA__20__KET____DOT__popcount))) 
                                                       << 4U) 
                                                      | ((VL_LTES_III(32, 0U, 
                                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__20__KET____DOT__genblk1__BRA__19__KET____DOT__popcount))) 
                                                          << 3U) 
                                                         | ((VL_LTES_III(32, 0U, 
                                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__20__KET____DOT__genblk1__BRA__18__KET____DOT__popcount))) 
                                                             << 2U) 
                                                            | ((VL_LTES_III(32, 0U, 
                                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__20__KET____DOT__genblk1__BRA__17__KET____DOT__popcount))) 
                                                                << 1U) 
                                                               | VL_LTES_III(32, 0U, 
                                                                             VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__20__KET____DOT__genblk1__BRA__16__KET____DOT__popcount)))))))))));
    __Vtemp_950[0x12U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__21__KET____DOT__genblk1__BRA__4__KET____DOT__popcount))) 
                           << 0x10U) | ((VL_LTES_III(32, 0U, 
                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__21__KET____DOT__genblk1__BRA__3__KET____DOT__popcount))) 
                                         << 0xfU) | 
                                        ((VL_LTES_III(32, 0U, 
                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__21__KET____DOT__genblk1__BRA__2__KET____DOT__popcount))) 
                                          << 0xeU) 
                                         | ((VL_LTES_III(32, 0U, 
                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__21__KET____DOT__genblk1__BRA__1__KET____DOT__popcount))) 
                                             << 0xdU) 
                                            | ((VL_LTES_III(32, 0U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__21__KET____DOT__genblk1__BRA__0__KET____DOT__popcount))) 
                                                << 0xcU) 
                                               | ((VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__20__KET____DOT__genblk1__BRA__27__KET____DOT__popcount))) 
                                                   << 0xbU) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__20__KET____DOT__genblk1__BRA__26__KET____DOT__popcount))) 
                                                      << 0xaU) 
                                                     | ((VL_LTES_III(32, 0U, 
                                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__20__KET____DOT__genblk1__BRA__25__KET____DOT__popcount))) 
                                                         << 9U) 
                                                        | __Vtemp_942[0x12U]))))))));
    __Vtemp_958[0x12U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__21__KET____DOT__genblk1__BRA__12__KET____DOT__popcount))) 
                           << 0x18U) | ((VL_LTES_III(32, 0U, 
                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__21__KET____DOT__genblk1__BRA__11__KET____DOT__popcount))) 
                                         << 0x17U) 
                                        | ((VL_LTES_III(32, 0U, 
                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__21__KET____DOT__genblk1__BRA__10__KET____DOT__popcount))) 
                                            << 0x16U) 
                                           | ((VL_LTES_III(32, 0U, 
                                                           VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__21__KET____DOT__genblk1__BRA__9__KET____DOT__popcount))) 
                                               << 0x15U) 
                                              | ((VL_LTES_III(32, 0U, 
                                                              VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__21__KET____DOT__genblk1__BRA__8__KET____DOT__popcount))) 
                                                  << 0x14U) 
                                                 | ((VL_LTES_III(32, 0U, 
                                                                 VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__21__KET____DOT__genblk1__BRA__7__KET____DOT__popcount))) 
                                                     << 0x13U) 
                                                    | ((VL_LTES_III(32, 0U, 
                                                                    VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__21__KET____DOT__genblk1__BRA__6__KET____DOT__popcount))) 
                                                        << 0x12U) 
                                                       | ((VL_LTES_III(32, 0U, 
                                                                       VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__21__KET____DOT__genblk1__BRA__5__KET____DOT__popcount))) 
                                                           << 0x11U) 
                                                          | __Vtemp_950[0x12U]))))))));
    __Vtemp_974[0x13U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__22__KET____DOT__genblk1__BRA__0__KET____DOT__popcount))) 
                           << 8U) | ((VL_LTES_III(32, 0U, 
                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__21__KET____DOT__genblk1__BRA__27__KET____DOT__popcount))) 
                                      << 7U) | ((VL_LTES_III(32, 0U, 
                                                             VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__21__KET____DOT__genblk1__BRA__26__KET____DOT__popcount))) 
                                                 << 6U) 
                                                | ((VL_LTES_III(32, 0U, 
                                                                VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__21__KET____DOT__genblk1__BRA__25__KET____DOT__popcount))) 
                                                    << 5U) 
                                                   | ((VL_LTES_III(32, 0U, 
                                                                   VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__21__KET____DOT__genblk1__BRA__24__KET____DOT__popcount))) 
                                                       << 4U) 
                                                      | ((VL_LTES_III(32, 0U, 
                                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__21__KET____DOT__genblk1__BRA__23__KET____DOT__popcount))) 
                                                          << 3U) 
                                                         | ((VL_LTES_III(32, 0U, 
                                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__21__KET____DOT__genblk1__BRA__22__KET____DOT__popcount))) 
                                                             << 2U) 
                                                            | ((VL_LTES_III(32, 0U, 
                                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__21__KET____DOT__genblk1__BRA__21__KET____DOT__popcount))) 
                                                                << 1U) 
                                                               | VL_LTES_III(32, 0U, 
                                                                             VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__21__KET____DOT__genblk1__BRA__20__KET____DOT__popcount)))))))))));
    __Vtemp_982[0x13U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__22__KET____DOT__genblk1__BRA__8__KET____DOT__popcount))) 
                           << 0x10U) | ((VL_LTES_III(32, 0U, 
                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__22__KET____DOT__genblk1__BRA__7__KET____DOT__popcount))) 
                                         << 0xfU) | 
                                        ((VL_LTES_III(32, 0U, 
                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__22__KET____DOT__genblk1__BRA__6__KET____DOT__popcount))) 
                                          << 0xeU) 
                                         | ((VL_LTES_III(32, 0U, 
                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__22__KET____DOT__genblk1__BRA__5__KET____DOT__popcount))) 
                                             << 0xdU) 
                                            | ((VL_LTES_III(32, 0U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__22__KET____DOT__genblk1__BRA__4__KET____DOT__popcount))) 
                                                << 0xcU) 
                                               | ((VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__22__KET____DOT__genblk1__BRA__3__KET____DOT__popcount))) 
                                                   << 0xbU) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__22__KET____DOT__genblk1__BRA__2__KET____DOT__popcount))) 
                                                      << 0xaU) 
                                                     | ((VL_LTES_III(32, 0U, 
                                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__22__KET____DOT__genblk1__BRA__1__KET____DOT__popcount))) 
                                                         << 9U) 
                                                        | __Vtemp_974[0x13U]))))))));
    __Vtemp_990[0x13U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__22__KET____DOT__genblk1__BRA__16__KET____DOT__popcount))) 
                           << 0x18U) | ((VL_LTES_III(32, 0U, 
                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__22__KET____DOT__genblk1__BRA__15__KET____DOT__popcount))) 
                                         << 0x17U) 
                                        | ((VL_LTES_III(32, 0U, 
                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__22__KET____DOT__genblk1__BRA__14__KET____DOT__popcount))) 
                                            << 0x16U) 
                                           | ((VL_LTES_III(32, 0U, 
                                                           VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__22__KET____DOT__genblk1__BRA__13__KET____DOT__popcount))) 
                                               << 0x15U) 
                                              | ((VL_LTES_III(32, 0U, 
                                                              VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__22__KET____DOT__genblk1__BRA__12__KET____DOT__popcount))) 
                                                  << 0x14U) 
                                                 | ((VL_LTES_III(32, 0U, 
                                                                 VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__22__KET____DOT__genblk1__BRA__11__KET____DOT__popcount))) 
                                                     << 0x13U) 
                                                    | ((VL_LTES_III(32, 0U, 
                                                                    VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__22__KET____DOT__genblk1__BRA__10__KET____DOT__popcount))) 
                                                        << 0x12U) 
                                                       | ((VL_LTES_III(32, 0U, 
                                                                       VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__22__KET____DOT__genblk1__BRA__9__KET____DOT__popcount))) 
                                                           << 0x11U) 
                                                          | __Vtemp_982[0x13U]))))))));
    __Vtemp_1006[0x14U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__23__KET____DOT__genblk1__BRA__4__KET____DOT__popcount))) 
                            << 8U) | ((VL_LTES_III(32, 0U, 
                                                   VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__23__KET____DOT__genblk1__BRA__3__KET____DOT__popcount))) 
                                       << 7U) | ((VL_LTES_III(32, 0U, 
                                                              VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__23__KET____DOT__genblk1__BRA__2__KET____DOT__popcount))) 
                                                  << 6U) 
                                                 | ((VL_LTES_III(32, 0U, 
                                                                 VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__23__KET____DOT__genblk1__BRA__1__KET____DOT__popcount))) 
                                                     << 5U) 
                                                    | ((VL_LTES_III(32, 0U, 
                                                                    VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__23__KET____DOT__genblk1__BRA__0__KET____DOT__popcount))) 
                                                        << 4U) 
                                                       | ((VL_LTES_III(32, 0U, 
                                                                       VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__22__KET____DOT__genblk1__BRA__27__KET____DOT__popcount))) 
                                                           << 3U) 
                                                          | ((VL_LTES_III(32, 0U, 
                                                                          VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__22__KET____DOT__genblk1__BRA__26__KET____DOT__popcount))) 
                                                              << 2U) 
                                                             | ((VL_LTES_III(32, 0U, 
                                                                             VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__22__KET____DOT__genblk1__BRA__25__KET____DOT__popcount))) 
                                                                 << 1U) 
                                                                | VL_LTES_III(32, 0U, 
                                                                              VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__22__KET____DOT__genblk1__BRA__24__KET____DOT__popcount)))))))))));
    __Vtemp_1014[0x14U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__23__KET____DOT__genblk1__BRA__12__KET____DOT__popcount))) 
                            << 0x10U) | ((VL_LTES_III(32, 0U, 
                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__23__KET____DOT__genblk1__BRA__11__KET____DOT__popcount))) 
                                          << 0xfU) 
                                         | ((VL_LTES_III(32, 0U, 
                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__23__KET____DOT__genblk1__BRA__10__KET____DOT__popcount))) 
                                             << 0xeU) 
                                            | ((VL_LTES_III(32, 0U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__23__KET____DOT__genblk1__BRA__9__KET____DOT__popcount))) 
                                                << 0xdU) 
                                               | ((VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__23__KET____DOT__genblk1__BRA__8__KET____DOT__popcount))) 
                                                   << 0xcU) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__23__KET____DOT__genblk1__BRA__7__KET____DOT__popcount))) 
                                                      << 0xbU) 
                                                     | ((VL_LTES_III(32, 0U, 
                                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__23__KET____DOT__genblk1__BRA__6__KET____DOT__popcount))) 
                                                         << 0xaU) 
                                                        | ((VL_LTES_III(32, 0U, 
                                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__23__KET____DOT__genblk1__BRA__5__KET____DOT__popcount))) 
                                                            << 9U) 
                                                           | __Vtemp_1006[0x14U]))))))));
    __Vtemp_1022[0x14U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__23__KET____DOT__genblk1__BRA__20__KET____DOT__popcount))) 
                            << 0x18U) | ((VL_LTES_III(32, 0U, 
                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__23__KET____DOT__genblk1__BRA__19__KET____DOT__popcount))) 
                                          << 0x17U) 
                                         | ((VL_LTES_III(32, 0U, 
                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__23__KET____DOT__genblk1__BRA__18__KET____DOT__popcount))) 
                                             << 0x16U) 
                                            | ((VL_LTES_III(32, 0U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__23__KET____DOT__genblk1__BRA__17__KET____DOT__popcount))) 
                                                << 0x15U) 
                                               | ((VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__23__KET____DOT__genblk1__BRA__16__KET____DOT__popcount))) 
                                                   << 0x14U) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__23__KET____DOT__genblk1__BRA__15__KET____DOT__popcount))) 
                                                      << 0x13U) 
                                                     | ((VL_LTES_III(32, 0U, 
                                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__23__KET____DOT__genblk1__BRA__14__KET____DOT__popcount))) 
                                                         << 0x12U) 
                                                        | ((VL_LTES_III(32, 0U, 
                                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__23__KET____DOT__genblk1__BRA__13__KET____DOT__popcount))) 
                                                            << 0x11U) 
                                                           | __Vtemp_1014[0x14U]))))))));
    __Vtemp_1038[0x15U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__24__KET____DOT__genblk1__BRA__8__KET____DOT__popcount))) 
                            << 8U) | ((VL_LTES_III(32, 0U, 
                                                   VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__24__KET____DOT__genblk1__BRA__7__KET____DOT__popcount))) 
                                       << 7U) | ((VL_LTES_III(32, 0U, 
                                                              VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__24__KET____DOT__genblk1__BRA__6__KET____DOT__popcount))) 
                                                  << 6U) 
                                                 | ((VL_LTES_III(32, 0U, 
                                                                 VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__24__KET____DOT__genblk1__BRA__5__KET____DOT__popcount))) 
                                                     << 5U) 
                                                    | ((VL_LTES_III(32, 0U, 
                                                                    VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__24__KET____DOT__genblk1__BRA__4__KET____DOT__popcount))) 
                                                        << 4U) 
                                                       | ((VL_LTES_III(32, 0U, 
                                                                       VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__24__KET____DOT__genblk1__BRA__3__KET____DOT__popcount))) 
                                                           << 3U) 
                                                          | ((VL_LTES_III(32, 0U, 
                                                                          VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__24__KET____DOT__genblk1__BRA__2__KET____DOT__popcount))) 
                                                              << 2U) 
                                                             | ((VL_LTES_III(32, 0U, 
                                                                             VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__24__KET____DOT__genblk1__BRA__1__KET____DOT__popcount))) 
                                                                 << 1U) 
                                                                | VL_LTES_III(32, 0U, 
                                                                              VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__24__KET____DOT__genblk1__BRA__0__KET____DOT__popcount)))))))))));
    __Vtemp_1046[0x15U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__24__KET____DOT__genblk1__BRA__16__KET____DOT__popcount))) 
                            << 0x10U) | ((VL_LTES_III(32, 0U, 
                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__24__KET____DOT__genblk1__BRA__15__KET____DOT__popcount))) 
                                          << 0xfU) 
                                         | ((VL_LTES_III(32, 0U, 
                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__24__KET____DOT__genblk1__BRA__14__KET____DOT__popcount))) 
                                             << 0xeU) 
                                            | ((VL_LTES_III(32, 0U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__24__KET____DOT__genblk1__BRA__13__KET____DOT__popcount))) 
                                                << 0xdU) 
                                               | ((VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__24__KET____DOT__genblk1__BRA__12__KET____DOT__popcount))) 
                                                   << 0xcU) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__24__KET____DOT__genblk1__BRA__11__KET____DOT__popcount))) 
                                                      << 0xbU) 
                                                     | ((VL_LTES_III(32, 0U, 
                                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__24__KET____DOT__genblk1__BRA__10__KET____DOT__popcount))) 
                                                         << 0xaU) 
                                                        | ((VL_LTES_III(32, 0U, 
                                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__24__KET____DOT__genblk1__BRA__9__KET____DOT__popcount))) 
                                                            << 9U) 
                                                           | __Vtemp_1038[0x15U]))))))));
    __Vtemp_1054[0x15U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__24__KET____DOT__genblk1__BRA__24__KET____DOT__popcount))) 
                            << 0x18U) | ((VL_LTES_III(32, 0U, 
                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__24__KET____DOT__genblk1__BRA__23__KET____DOT__popcount))) 
                                          << 0x17U) 
                                         | ((VL_LTES_III(32, 0U, 
                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__24__KET____DOT__genblk1__BRA__22__KET____DOT__popcount))) 
                                             << 0x16U) 
                                            | ((VL_LTES_III(32, 0U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__24__KET____DOT__genblk1__BRA__21__KET____DOT__popcount))) 
                                                << 0x15U) 
                                               | ((VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__24__KET____DOT__genblk1__BRA__20__KET____DOT__popcount))) 
                                                   << 0x14U) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__24__KET____DOT__genblk1__BRA__19__KET____DOT__popcount))) 
                                                      << 0x13U) 
                                                     | ((VL_LTES_III(32, 0U, 
                                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__24__KET____DOT__genblk1__BRA__18__KET____DOT__popcount))) 
                                                         << 0x12U) 
                                                        | ((VL_LTES_III(32, 0U, 
                                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__24__KET____DOT__genblk1__BRA__17__KET____DOT__popcount))) 
                                                            << 0x11U) 
                                                           | __Vtemp_1046[0x15U]))))))));
    __Vtemp_1070[0x16U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__12__KET____DOT__popcount))) 
                            << 8U) | ((VL_LTES_III(32, 0U, 
                                                   VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__11__KET____DOT__popcount))) 
                                       << 7U) | ((VL_LTES_III(32, 0U, 
                                                              VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__10__KET____DOT__popcount))) 
                                                  << 6U) 
                                                 | ((VL_LTES_III(32, 0U, 
                                                                 VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__9__KET____DOT__popcount))) 
                                                     << 5U) 
                                                    | ((VL_LTES_III(32, 0U, 
                                                                    VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__8__KET____DOT__popcount))) 
                                                        << 4U) 
                                                       | ((VL_LTES_III(32, 0U, 
                                                                       VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__7__KET____DOT__popcount))) 
                                                           << 3U) 
                                                          | ((VL_LTES_III(32, 0U, 
                                                                          VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__6__KET____DOT__popcount))) 
                                                              << 2U) 
                                                             | ((VL_LTES_III(32, 0U, 
                                                                             VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__5__KET____DOT__popcount))) 
                                                                 << 1U) 
                                                                | VL_LTES_III(32, 0U, 
                                                                              VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__4__KET____DOT__popcount)))))))))));
    __Vtemp_1078[0x16U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__20__KET____DOT__popcount))) 
                            << 0x10U) | ((VL_LTES_III(32, 0U, 
                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__19__KET____DOT__popcount))) 
                                          << 0xfU) 
                                         | ((VL_LTES_III(32, 0U, 
                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__18__KET____DOT__popcount))) 
                                             << 0xeU) 
                                            | ((VL_LTES_III(32, 0U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__17__KET____DOT__popcount))) 
                                                << 0xdU) 
                                               | ((VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__16__KET____DOT__popcount))) 
                                                   << 0xcU) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__15__KET____DOT__popcount))) 
                                                      << 0xbU) 
                                                     | ((VL_LTES_III(32, 0U, 
                                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__14__KET____DOT__popcount))) 
                                                         << 0xaU) 
                                                        | ((VL_LTES_III(32, 0U, 
                                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__13__KET____DOT__popcount))) 
                                                            << 9U) 
                                                           | __Vtemp_1070[0x16U]))))))));
    __Vtemp_1086[0x16U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__0__KET____DOT__popcount))) 
                            << 0x18U) | ((VL_LTES_III(32, 0U, 
                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__27__KET____DOT__popcount))) 
                                          << 0x17U) 
                                         | ((VL_LTES_III(32, 0U, 
                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__26__KET____DOT__popcount))) 
                                             << 0x16U) 
                                            | ((VL_LTES_III(32, 0U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__25__KET____DOT__popcount))) 
                                                << 0x15U) 
                                               | ((VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__24__KET____DOT__popcount))) 
                                                   << 0x14U) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__23__KET____DOT__popcount))) 
                                                      << 0x13U) 
                                                     | ((VL_LTES_III(32, 0U, 
                                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__22__KET____DOT__popcount))) 
                                                         << 0x12U) 
                                                        | ((VL_LTES_III(32, 0U, 
                                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__21__KET____DOT__popcount))) 
                                                            << 0x11U) 
                                                           | __Vtemp_1078[0x16U]))))))));
    __Vtemp_1102[0x17U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__16__KET____DOT__popcount))) 
                            << 8U) | ((VL_LTES_III(32, 0U, 
                                                   VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__15__KET____DOT__popcount))) 
                                       << 7U) | ((VL_LTES_III(32, 0U, 
                                                              VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__14__KET____DOT__popcount))) 
                                                  << 6U) 
                                                 | ((VL_LTES_III(32, 0U, 
                                                                 VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__13__KET____DOT__popcount))) 
                                                     << 5U) 
                                                    | ((VL_LTES_III(32, 0U, 
                                                                    VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__12__KET____DOT__popcount))) 
                                                        << 4U) 
                                                       | ((VL_LTES_III(32, 0U, 
                                                                       VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__11__KET____DOT__popcount))) 
                                                           << 3U) 
                                                          | ((VL_LTES_III(32, 0U, 
                                                                          VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__10__KET____DOT__popcount))) 
                                                              << 2U) 
                                                             | ((VL_LTES_III(32, 0U, 
                                                                             VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__9__KET____DOT__popcount))) 
                                                                 << 1U) 
                                                                | VL_LTES_III(32, 0U, 
                                                                              VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__8__KET____DOT__popcount)))))))))));
    __Vtemp_1110[0x17U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__24__KET____DOT__popcount))) 
                            << 0x10U) | ((VL_LTES_III(32, 0U, 
                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__23__KET____DOT__popcount))) 
                                          << 0xfU) 
                                         | ((VL_LTES_III(32, 0U, 
                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__22__KET____DOT__popcount))) 
                                             << 0xeU) 
                                            | ((VL_LTES_III(32, 0U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__21__KET____DOT__popcount))) 
                                                << 0xdU) 
                                               | ((VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__20__KET____DOT__popcount))) 
                                                   << 0xcU) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__19__KET____DOT__popcount))) 
                                                      << 0xbU) 
                                                     | ((VL_LTES_III(32, 0U, 
                                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__18__KET____DOT__popcount))) 
                                                         << 0xaU) 
                                                        | ((VL_LTES_III(32, 0U, 
                                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__17__KET____DOT__popcount))) 
                                                            << 9U) 
                                                           | __Vtemp_1102[0x17U]))))))));
    __Vtemp_1118[0x17U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__4__KET____DOT__popcount))) 
                            << 0x18U) | ((VL_LTES_III(32, 0U, 
                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__3__KET____DOT__popcount))) 
                                          << 0x17U) 
                                         | ((VL_LTES_III(32, 0U, 
                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__2__KET____DOT__popcount))) 
                                             << 0x16U) 
                                            | ((VL_LTES_III(32, 0U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__1__KET____DOT__popcount))) 
                                                << 0x15U) 
                                               | ((VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__0__KET____DOT__popcount))) 
                                                   << 0x14U) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__27__KET____DOT__popcount))) 
                                                      << 0x13U) 
                                                     | ((VL_LTES_III(32, 0U, 
                                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__26__KET____DOT__popcount))) 
                                                         << 0x12U) 
                                                        | ((VL_LTES_III(32, 0U, 
                                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__25__KET____DOT__popcount))) 
                                                            << 0x11U) 
                                                           | __Vtemp_1110[0x17U]))))))));
    __Vtemp_1134[0x18U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__20__KET____DOT__popcount))) 
                            << 8U) | ((VL_LTES_III(32, 0U, 
                                                   VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__19__KET____DOT__popcount))) 
                                       << 7U) | ((VL_LTES_III(32, 0U, 
                                                              VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__18__KET____DOT__popcount))) 
                                                  << 6U) 
                                                 | ((VL_LTES_III(32, 0U, 
                                                                 VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__17__KET____DOT__popcount))) 
                                                     << 5U) 
                                                    | ((VL_LTES_III(32, 0U, 
                                                                    VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__16__KET____DOT__popcount))) 
                                                        << 4U) 
                                                       | ((VL_LTES_III(32, 0U, 
                                                                       VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__15__KET____DOT__popcount))) 
                                                           << 3U) 
                                                          | ((VL_LTES_III(32, 0U, 
                                                                          VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__14__KET____DOT__popcount))) 
                                                              << 2U) 
                                                             | ((VL_LTES_III(32, 0U, 
                                                                             VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__13__KET____DOT__popcount))) 
                                                                 << 1U) 
                                                                | VL_LTES_III(32, 0U, 
                                                                              VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__12__KET____DOT__popcount)))))))))));
    vlSelf->img_out[0U] = __Vtemp_422[0U];
    vlSelf->img_out[1U] = __Vtemp_422[1U];
    vlSelf->img_out[2U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__3__KET____DOT__genblk1__BRA__11__KET____DOT__popcount))) 
                            << 0x1fU) | ((VL_LTES_III(32, 0U, 
                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__3__KET____DOT__genblk1__BRA__10__KET____DOT__popcount))) 
                                          << 0x1eU) 
                                         | ((VL_LTES_III(32, 0U, 
                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__3__KET____DOT__genblk1__BRA__9__KET____DOT__popcount))) 
                                             << 0x1dU) 
                                            | ((VL_LTES_III(32, 0U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__3__KET____DOT__genblk1__BRA__8__KET____DOT__popcount))) 
                                                << 0x1cU) 
                                               | ((VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__popcount))) 
                                                   << 0x1bU) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__popcount))) 
                                                      << 0x1aU) 
                                                     | ((VL_LTES_III(32, 0U, 
                                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__popcount))) 
                                                         << 0x19U) 
                                                        | __Vtemp_446[2U])))))));
    vlSelf->img_out[3U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__4__KET____DOT__genblk1__BRA__15__KET____DOT__popcount))) 
                            << 0x1fU) | ((VL_LTES_III(32, 0U, 
                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__4__KET____DOT__genblk1__BRA__14__KET____DOT__popcount))) 
                                          << 0x1eU) 
                                         | ((VL_LTES_III(32, 0U, 
                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__4__KET____DOT__genblk1__BRA__13__KET____DOT__popcount))) 
                                             << 0x1dU) 
                                            | ((VL_LTES_III(32, 0U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__4__KET____DOT__genblk1__BRA__12__KET____DOT__popcount))) 
                                                << 0x1cU) 
                                               | ((VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__4__KET____DOT__genblk1__BRA__11__KET____DOT__popcount))) 
                                                   << 0x1bU) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__4__KET____DOT__genblk1__BRA__10__KET____DOT__popcount))) 
                                                      << 0x1aU) 
                                                     | ((VL_LTES_III(32, 0U, 
                                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__4__KET____DOT__genblk1__BRA__9__KET____DOT__popcount))) 
                                                         << 0x19U) 
                                                        | __Vtemp_478[3U])))))));
    vlSelf->img_out[4U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__5__KET____DOT__genblk1__BRA__19__KET____DOT__popcount))) 
                            << 0x1fU) | ((VL_LTES_III(32, 0U, 
                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__5__KET____DOT__genblk1__BRA__18__KET____DOT__popcount))) 
                                          << 0x1eU) 
                                         | ((VL_LTES_III(32, 0U, 
                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__5__KET____DOT__genblk1__BRA__17__KET____DOT__popcount))) 
                                             << 0x1dU) 
                                            | ((VL_LTES_III(32, 0U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__5__KET____DOT__genblk1__BRA__16__KET____DOT__popcount))) 
                                                << 0x1cU) 
                                               | ((VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__5__KET____DOT__genblk1__BRA__15__KET____DOT__popcount))) 
                                                   << 0x1bU) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__5__KET____DOT__genblk1__BRA__14__KET____DOT__popcount))) 
                                                      << 0x1aU) 
                                                     | ((VL_LTES_III(32, 0U, 
                                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__5__KET____DOT__genblk1__BRA__13__KET____DOT__popcount))) 
                                                         << 0x19U) 
                                                        | __Vtemp_510[4U])))))));
    vlSelf->img_out[5U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__6__KET____DOT__genblk1__BRA__23__KET____DOT__popcount))) 
                            << 0x1fU) | ((VL_LTES_III(32, 0U, 
                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__6__KET____DOT__genblk1__BRA__22__KET____DOT__popcount))) 
                                          << 0x1eU) 
                                         | ((VL_LTES_III(32, 0U, 
                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__6__KET____DOT__genblk1__BRA__21__KET____DOT__popcount))) 
                                             << 0x1dU) 
                                            | ((VL_LTES_III(32, 0U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__6__KET____DOT__genblk1__BRA__20__KET____DOT__popcount))) 
                                                << 0x1cU) 
                                               | ((VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__6__KET____DOT__genblk1__BRA__19__KET____DOT__popcount))) 
                                                   << 0x1bU) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__6__KET____DOT__genblk1__BRA__18__KET____DOT__popcount))) 
                                                      << 0x1aU) 
                                                     | ((VL_LTES_III(32, 0U, 
                                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__6__KET____DOT__genblk1__BRA__17__KET____DOT__popcount))) 
                                                         << 0x19U) 
                                                        | __Vtemp_542[5U])))))));
    vlSelf->img_out[6U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__7__KET____DOT__genblk1__BRA__27__KET____DOT__popcount))) 
                            << 0x1fU) | ((VL_LTES_III(32, 0U, 
                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__7__KET____DOT__genblk1__BRA__26__KET____DOT__popcount))) 
                                          << 0x1eU) 
                                         | ((VL_LTES_III(32, 0U, 
                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__7__KET____DOT__genblk1__BRA__25__KET____DOT__popcount))) 
                                             << 0x1dU) 
                                            | ((VL_LTES_III(32, 0U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__7__KET____DOT__genblk1__BRA__24__KET____DOT__popcount))) 
                                                << 0x1cU) 
                                               | ((VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__7__KET____DOT__genblk1__BRA__23__KET____DOT__popcount))) 
                                                   << 0x1bU) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__7__KET____DOT__genblk1__BRA__22__KET____DOT__popcount))) 
                                                      << 0x1aU) 
                                                     | ((VL_LTES_III(32, 0U, 
                                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__7__KET____DOT__genblk1__BRA__21__KET____DOT__popcount))) 
                                                         << 0x19U) 
                                                        | __Vtemp_574[6U])))))));
    vlSelf->img_out[7U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__9__KET____DOT__genblk1__BRA__3__KET____DOT__popcount))) 
                            << 0x1fU) | ((VL_LTES_III(32, 0U, 
                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__9__KET____DOT__genblk1__BRA__2__KET____DOT__popcount))) 
                                          << 0x1eU) 
                                         | ((VL_LTES_III(32, 0U, 
                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__9__KET____DOT__genblk1__BRA__1__KET____DOT__popcount))) 
                                             << 0x1dU) 
                                            | ((VL_LTES_III(32, 0U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__9__KET____DOT__genblk1__BRA__0__KET____DOT__popcount))) 
                                                << 0x1cU) 
                                               | ((VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__8__KET____DOT__genblk1__BRA__27__KET____DOT__popcount))) 
                                                   << 0x1bU) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__8__KET____DOT__genblk1__BRA__26__KET____DOT__popcount))) 
                                                      << 0x1aU) 
                                                     | ((VL_LTES_III(32, 0U, 
                                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__8__KET____DOT__genblk1__BRA__25__KET____DOT__popcount))) 
                                                         << 0x19U) 
                                                        | __Vtemp_606[7U])))))));
    vlSelf->img_out[8U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__10__KET____DOT__genblk1__BRA__7__KET____DOT__popcount))) 
                            << 0x1fU) | ((VL_LTES_III(32, 0U, 
                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__10__KET____DOT__genblk1__BRA__6__KET____DOT__popcount))) 
                                          << 0x1eU) 
                                         | ((VL_LTES_III(32, 0U, 
                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__10__KET____DOT__genblk1__BRA__5__KET____DOT__popcount))) 
                                             << 0x1dU) 
                                            | ((VL_LTES_III(32, 0U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__10__KET____DOT__genblk1__BRA__4__KET____DOT__popcount))) 
                                                << 0x1cU) 
                                               | ((VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__10__KET____DOT__genblk1__BRA__3__KET____DOT__popcount))) 
                                                   << 0x1bU) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__10__KET____DOT__genblk1__BRA__2__KET____DOT__popcount))) 
                                                      << 0x1aU) 
                                                     | ((VL_LTES_III(32, 0U, 
                                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__10__KET____DOT__genblk1__BRA__1__KET____DOT__popcount))) 
                                                         << 0x19U) 
                                                        | __Vtemp_638[8U])))))));
    vlSelf->img_out[9U] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__11__KET____DOT__genblk1__BRA__11__KET____DOT__popcount))) 
                            << 0x1fU) | ((VL_LTES_III(32, 0U, 
                                                      VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__11__KET____DOT__genblk1__BRA__10__KET____DOT__popcount))) 
                                          << 0x1eU) 
                                         | ((VL_LTES_III(32, 0U, 
                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__11__KET____DOT__genblk1__BRA__9__KET____DOT__popcount))) 
                                             << 0x1dU) 
                                            | ((VL_LTES_III(32, 0U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__11__KET____DOT__genblk1__BRA__8__KET____DOT__popcount))) 
                                                << 0x1cU) 
                                               | ((VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__11__KET____DOT__genblk1__BRA__7__KET____DOT__popcount))) 
                                                   << 0x1bU) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__11__KET____DOT__genblk1__BRA__6__KET____DOT__popcount))) 
                                                      << 0x1aU) 
                                                     | ((VL_LTES_III(32, 0U, 
                                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__11__KET____DOT__genblk1__BRA__5__KET____DOT__popcount))) 
                                                         << 0x19U) 
                                                        | __Vtemp_670[9U])))))));
    vlSelf->img_out[0xaU] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__12__KET____DOT__genblk1__BRA__15__KET____DOT__popcount))) 
                              << 0x1fU) | ((VL_LTES_III(32, 0U, 
                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__12__KET____DOT__genblk1__BRA__14__KET____DOT__popcount))) 
                                            << 0x1eU) 
                                           | ((VL_LTES_III(32, 0U, 
                                                           VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__12__KET____DOT__genblk1__BRA__13__KET____DOT__popcount))) 
                                               << 0x1dU) 
                                              | ((VL_LTES_III(32, 0U, 
                                                              VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__12__KET____DOT__genblk1__BRA__12__KET____DOT__popcount))) 
                                                  << 0x1cU) 
                                                 | ((VL_LTES_III(32, 0U, 
                                                                 VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__12__KET____DOT__genblk1__BRA__11__KET____DOT__popcount))) 
                                                     << 0x1bU) 
                                                    | ((VL_LTES_III(32, 0U, 
                                                                    VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__12__KET____DOT__genblk1__BRA__10__KET____DOT__popcount))) 
                                                        << 0x1aU) 
                                                       | ((VL_LTES_III(32, 0U, 
                                                                       VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__12__KET____DOT__genblk1__BRA__9__KET____DOT__popcount))) 
                                                           << 0x19U) 
                                                          | __Vtemp_702[0xaU])))))));
    vlSelf->img_out[0xbU] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__13__KET____DOT__genblk1__BRA__19__KET____DOT__popcount))) 
                              << 0x1fU) | ((VL_LTES_III(32, 0U, 
                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__13__KET____DOT__genblk1__BRA__18__KET____DOT__popcount))) 
                                            << 0x1eU) 
                                           | ((VL_LTES_III(32, 0U, 
                                                           VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__13__KET____DOT__genblk1__BRA__17__KET____DOT__popcount))) 
                                               << 0x1dU) 
                                              | ((VL_LTES_III(32, 0U, 
                                                              VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__13__KET____DOT__genblk1__BRA__16__KET____DOT__popcount))) 
                                                  << 0x1cU) 
                                                 | ((VL_LTES_III(32, 0U, 
                                                                 VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__13__KET____DOT__genblk1__BRA__15__KET____DOT__popcount))) 
                                                     << 0x1bU) 
                                                    | ((VL_LTES_III(32, 0U, 
                                                                    VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__13__KET____DOT__genblk1__BRA__14__KET____DOT__popcount))) 
                                                        << 0x1aU) 
                                                       | ((VL_LTES_III(32, 0U, 
                                                                       VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__13__KET____DOT__genblk1__BRA__13__KET____DOT__popcount))) 
                                                           << 0x19U) 
                                                          | __Vtemp_734[0xbU])))))));
    vlSelf->img_out[0xcU] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__14__KET____DOT__genblk1__BRA__23__KET____DOT__popcount))) 
                              << 0x1fU) | ((VL_LTES_III(32, 0U, 
                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__14__KET____DOT__genblk1__BRA__22__KET____DOT__popcount))) 
                                            << 0x1eU) 
                                           | ((VL_LTES_III(32, 0U, 
                                                           VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__14__KET____DOT__genblk1__BRA__21__KET____DOT__popcount))) 
                                               << 0x1dU) 
                                              | ((VL_LTES_III(32, 0U, 
                                                              VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__14__KET____DOT__genblk1__BRA__20__KET____DOT__popcount))) 
                                                  << 0x1cU) 
                                                 | ((VL_LTES_III(32, 0U, 
                                                                 VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__14__KET____DOT__genblk1__BRA__19__KET____DOT__popcount))) 
                                                     << 0x1bU) 
                                                    | ((VL_LTES_III(32, 0U, 
                                                                    VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__14__KET____DOT__genblk1__BRA__18__KET____DOT__popcount))) 
                                                        << 0x1aU) 
                                                       | ((VL_LTES_III(32, 0U, 
                                                                       VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__14__KET____DOT__genblk1__BRA__17__KET____DOT__popcount))) 
                                                           << 0x19U) 
                                                          | __Vtemp_766[0xcU])))))));
    vlSelf->img_out[0xdU] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__15__KET____DOT__genblk1__BRA__27__KET____DOT__popcount))) 
                              << 0x1fU) | ((VL_LTES_III(32, 0U, 
                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__15__KET____DOT__genblk1__BRA__26__KET____DOT__popcount))) 
                                            << 0x1eU) 
                                           | ((VL_LTES_III(32, 0U, 
                                                           VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__15__KET____DOT__genblk1__BRA__25__KET____DOT__popcount))) 
                                               << 0x1dU) 
                                              | ((VL_LTES_III(32, 0U, 
                                                              VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__15__KET____DOT__genblk1__BRA__24__KET____DOT__popcount))) 
                                                  << 0x1cU) 
                                                 | ((VL_LTES_III(32, 0U, 
                                                                 VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__15__KET____DOT__genblk1__BRA__23__KET____DOT__popcount))) 
                                                     << 0x1bU) 
                                                    | ((VL_LTES_III(32, 0U, 
                                                                    VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__15__KET____DOT__genblk1__BRA__22__KET____DOT__popcount))) 
                                                        << 0x1aU) 
                                                       | ((VL_LTES_III(32, 0U, 
                                                                       VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__15__KET____DOT__genblk1__BRA__21__KET____DOT__popcount))) 
                                                           << 0x19U) 
                                                          | __Vtemp_798[0xdU])))))));
    vlSelf->img_out[0xeU] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__17__KET____DOT__genblk1__BRA__3__KET____DOT__popcount))) 
                              << 0x1fU) | ((VL_LTES_III(32, 0U, 
                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__17__KET____DOT__genblk1__BRA__2__KET____DOT__popcount))) 
                                            << 0x1eU) 
                                           | ((VL_LTES_III(32, 0U, 
                                                           VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__17__KET____DOT__genblk1__BRA__1__KET____DOT__popcount))) 
                                               << 0x1dU) 
                                              | ((VL_LTES_III(32, 0U, 
                                                              VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__17__KET____DOT__genblk1__BRA__0__KET____DOT__popcount))) 
                                                  << 0x1cU) 
                                                 | ((VL_LTES_III(32, 0U, 
                                                                 VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__16__KET____DOT__genblk1__BRA__27__KET____DOT__popcount))) 
                                                     << 0x1bU) 
                                                    | ((VL_LTES_III(32, 0U, 
                                                                    VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__16__KET____DOT__genblk1__BRA__26__KET____DOT__popcount))) 
                                                        << 0x1aU) 
                                                       | ((VL_LTES_III(32, 0U, 
                                                                       VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__16__KET____DOT__genblk1__BRA__25__KET____DOT__popcount))) 
                                                           << 0x19U) 
                                                          | __Vtemp_830[0xeU])))))));
    vlSelf->img_out[0xfU] = ((VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__18__KET____DOT__genblk1__BRA__7__KET____DOT__popcount))) 
                              << 0x1fU) | ((VL_LTES_III(32, 0U, 
                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__18__KET____DOT__genblk1__BRA__6__KET____DOT__popcount))) 
                                            << 0x1eU) 
                                           | ((VL_LTES_III(32, 0U, 
                                                           VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__18__KET____DOT__genblk1__BRA__5__KET____DOT__popcount))) 
                                               << 0x1dU) 
                                              | ((VL_LTES_III(32, 0U, 
                                                              VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__18__KET____DOT__genblk1__BRA__4__KET____DOT__popcount))) 
                                                  << 0x1cU) 
                                                 | ((VL_LTES_III(32, 0U, 
                                                                 VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__18__KET____DOT__genblk1__BRA__3__KET____DOT__popcount))) 
                                                     << 0x1bU) 
                                                    | ((VL_LTES_III(32, 0U, 
                                                                    VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__18__KET____DOT__genblk1__BRA__2__KET____DOT__popcount))) 
                                                        << 0x1aU) 
                                                       | ((VL_LTES_III(32, 0U, 
                                                                       VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__18__KET____DOT__genblk1__BRA__1__KET____DOT__popcount))) 
                                                           << 0x19U) 
                                                          | __Vtemp_862[0xfU])))))));
    vlSelf->img_out[0x10U] = ((VL_LTES_III(32, 0U, 
                                           VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__19__KET____DOT__genblk1__BRA__11__KET____DOT__popcount))) 
                               << 0x1fU) | ((VL_LTES_III(32, 0U, 
                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__19__KET____DOT__genblk1__BRA__10__KET____DOT__popcount))) 
                                             << 0x1eU) 
                                            | ((VL_LTES_III(32, 0U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__19__KET____DOT__genblk1__BRA__9__KET____DOT__popcount))) 
                                                << 0x1dU) 
                                               | ((VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__19__KET____DOT__genblk1__BRA__8__KET____DOT__popcount))) 
                                                   << 0x1cU) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__19__KET____DOT__genblk1__BRA__7__KET____DOT__popcount))) 
                                                      << 0x1bU) 
                                                     | ((VL_LTES_III(32, 0U, 
                                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__19__KET____DOT__genblk1__BRA__6__KET____DOT__popcount))) 
                                                         << 0x1aU) 
                                                        | ((VL_LTES_III(32, 0U, 
                                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__19__KET____DOT__genblk1__BRA__5__KET____DOT__popcount))) 
                                                            << 0x19U) 
                                                           | __Vtemp_894[0x10U])))))));
    vlSelf->img_out[0x11U] = ((VL_LTES_III(32, 0U, 
                                           VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__20__KET____DOT__genblk1__BRA__15__KET____DOT__popcount))) 
                               << 0x1fU) | ((VL_LTES_III(32, 0U, 
                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__20__KET____DOT__genblk1__BRA__14__KET____DOT__popcount))) 
                                             << 0x1eU) 
                                            | ((VL_LTES_III(32, 0U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__20__KET____DOT__genblk1__BRA__13__KET____DOT__popcount))) 
                                                << 0x1dU) 
                                               | ((VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__20__KET____DOT__genblk1__BRA__12__KET____DOT__popcount))) 
                                                   << 0x1cU) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__20__KET____DOT__genblk1__BRA__11__KET____DOT__popcount))) 
                                                      << 0x1bU) 
                                                     | ((VL_LTES_III(32, 0U, 
                                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__20__KET____DOT__genblk1__BRA__10__KET____DOT__popcount))) 
                                                         << 0x1aU) 
                                                        | ((VL_LTES_III(32, 0U, 
                                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__20__KET____DOT__genblk1__BRA__9__KET____DOT__popcount))) 
                                                            << 0x19U) 
                                                           | __Vtemp_926[0x11U])))))));
    vlSelf->img_out[0x12U] = ((VL_LTES_III(32, 0U, 
                                           VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__21__KET____DOT__genblk1__BRA__19__KET____DOT__popcount))) 
                               << 0x1fU) | ((VL_LTES_III(32, 0U, 
                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__21__KET____DOT__genblk1__BRA__18__KET____DOT__popcount))) 
                                             << 0x1eU) 
                                            | ((VL_LTES_III(32, 0U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__21__KET____DOT__genblk1__BRA__17__KET____DOT__popcount))) 
                                                << 0x1dU) 
                                               | ((VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__21__KET____DOT__genblk1__BRA__16__KET____DOT__popcount))) 
                                                   << 0x1cU) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__21__KET____DOT__genblk1__BRA__15__KET____DOT__popcount))) 
                                                      << 0x1bU) 
                                                     | ((VL_LTES_III(32, 0U, 
                                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__21__KET____DOT__genblk1__BRA__14__KET____DOT__popcount))) 
                                                         << 0x1aU) 
                                                        | ((VL_LTES_III(32, 0U, 
                                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__21__KET____DOT__genblk1__BRA__13__KET____DOT__popcount))) 
                                                            << 0x19U) 
                                                           | __Vtemp_958[0x12U])))))));
    vlSelf->img_out[0x13U] = ((VL_LTES_III(32, 0U, 
                                           VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__22__KET____DOT__genblk1__BRA__23__KET____DOT__popcount))) 
                               << 0x1fU) | ((VL_LTES_III(32, 0U, 
                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__22__KET____DOT__genblk1__BRA__22__KET____DOT__popcount))) 
                                             << 0x1eU) 
                                            | ((VL_LTES_III(32, 0U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__22__KET____DOT__genblk1__BRA__21__KET____DOT__popcount))) 
                                                << 0x1dU) 
                                               | ((VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__22__KET____DOT__genblk1__BRA__20__KET____DOT__popcount))) 
                                                   << 0x1cU) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__22__KET____DOT__genblk1__BRA__19__KET____DOT__popcount))) 
                                                      << 0x1bU) 
                                                     | ((VL_LTES_III(32, 0U, 
                                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__22__KET____DOT__genblk1__BRA__18__KET____DOT__popcount))) 
                                                         << 0x1aU) 
                                                        | ((VL_LTES_III(32, 0U, 
                                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__22__KET____DOT__genblk1__BRA__17__KET____DOT__popcount))) 
                                                            << 0x19U) 
                                                           | __Vtemp_990[0x13U])))))));
    vlSelf->img_out[0x14U] = ((VL_LTES_III(32, 0U, 
                                           VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__23__KET____DOT__genblk1__BRA__27__KET____DOT__popcount))) 
                               << 0x1fU) | ((VL_LTES_III(32, 0U, 
                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__23__KET____DOT__genblk1__BRA__26__KET____DOT__popcount))) 
                                             << 0x1eU) 
                                            | ((VL_LTES_III(32, 0U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__23__KET____DOT__genblk1__BRA__25__KET____DOT__popcount))) 
                                                << 0x1dU) 
                                               | ((VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__23__KET____DOT__genblk1__BRA__24__KET____DOT__popcount))) 
                                                   << 0x1cU) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__23__KET____DOT__genblk1__BRA__23__KET____DOT__popcount))) 
                                                      << 0x1bU) 
                                                     | ((VL_LTES_III(32, 0U, 
                                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__23__KET____DOT__genblk1__BRA__22__KET____DOT__popcount))) 
                                                         << 0x1aU) 
                                                        | ((VL_LTES_III(32, 0U, 
                                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__23__KET____DOT__genblk1__BRA__21__KET____DOT__popcount))) 
                                                            << 0x19U) 
                                                           | __Vtemp_1022[0x14U])))))));
    vlSelf->img_out[0x15U] = ((VL_LTES_III(32, 0U, 
                                           VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__3__KET____DOT__popcount))) 
                               << 0x1fU) | ((VL_LTES_III(32, 0U, 
                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__2__KET____DOT__popcount))) 
                                             << 0x1eU) 
                                            | ((VL_LTES_III(32, 0U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__1__KET____DOT__popcount))) 
                                                << 0x1dU) 
                                               | ((VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__25__KET____DOT__genblk1__BRA__0__KET____DOT__popcount))) 
                                                   << 0x1cU) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__24__KET____DOT__genblk1__BRA__27__KET____DOT__popcount))) 
                                                      << 0x1bU) 
                                                     | ((VL_LTES_III(32, 0U, 
                                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__24__KET____DOT__genblk1__BRA__26__KET____DOT__popcount))) 
                                                         << 0x1aU) 
                                                        | ((VL_LTES_III(32, 0U, 
                                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__24__KET____DOT__genblk1__BRA__25__KET____DOT__popcount))) 
                                                            << 0x19U) 
                                                           | __Vtemp_1054[0x15U])))))));
    vlSelf->img_out[0x16U] = ((VL_LTES_III(32, 0U, 
                                           VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__7__KET____DOT__popcount))) 
                               << 0x1fU) | ((VL_LTES_III(32, 0U, 
                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__6__KET____DOT__popcount))) 
                                             << 0x1eU) 
                                            | ((VL_LTES_III(32, 0U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__5__KET____DOT__popcount))) 
                                                << 0x1dU) 
                                               | ((VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__4__KET____DOT__popcount))) 
                                                   << 0x1cU) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__3__KET____DOT__popcount))) 
                                                      << 0x1bU) 
                                                     | ((VL_LTES_III(32, 0U, 
                                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__2__KET____DOT__popcount))) 
                                                         << 0x1aU) 
                                                        | ((VL_LTES_III(32, 0U, 
                                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__26__KET____DOT__genblk1__BRA__1__KET____DOT__popcount))) 
                                                            << 0x19U) 
                                                           | __Vtemp_1086[0x16U])))))));
    vlSelf->img_out[0x17U] = ((VL_LTES_III(32, 0U, 
                                           VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__11__KET____DOT__popcount))) 
                               << 0x1fU) | ((VL_LTES_III(32, 0U, 
                                                         VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__10__KET____DOT__popcount))) 
                                             << 0x1eU) 
                                            | ((VL_LTES_III(32, 0U, 
                                                            VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__9__KET____DOT__popcount))) 
                                                << 0x1dU) 
                                               | ((VL_LTES_III(32, 0U, 
                                                               VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__8__KET____DOT__popcount))) 
                                                   << 0x1cU) 
                                                  | ((VL_LTES_III(32, 0U, 
                                                                  VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__7__KET____DOT__popcount))) 
                                                      << 0x1bU) 
                                                     | ((VL_LTES_III(32, 0U, 
                                                                     VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__6__KET____DOT__popcount))) 
                                                         << 0x1aU) 
                                                        | ((VL_LTES_III(32, 0U, 
                                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__5__KET____DOT__popcount))) 
                                                            << 0x19U) 
                                                           | __Vtemp_1118[0x17U])))))));
    vlSelf->img_out[0x18U] = ((VL_LTES_III(32, 0U, 
                                           VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__27__KET____DOT__popcount))) 
                               << 0xfU) | ((VL_LTES_III(32, 0U, 
                                                        VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__26__KET____DOT__popcount))) 
                                            << 0xeU) 
                                           | ((VL_LTES_III(32, 0U, 
                                                           VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__25__KET____DOT__popcount))) 
                                               << 0xdU) 
                                              | ((VL_LTES_III(32, 0U, 
                                                              VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__24__KET____DOT__popcount))) 
                                                  << 0xcU) 
                                                 | ((VL_LTES_III(32, 0U, 
                                                                 VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__23__KET____DOT__popcount))) 
                                                     << 0xbU) 
                                                    | ((VL_LTES_III(32, 0U, 
                                                                    VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__22__KET____DOT__popcount))) 
                                                        << 0xaU) 
                                                       | ((VL_LTES_III(32, 0U, 
                                                                       VL_EXTENDS_II(32,8, (IData)(vlSelf->__PVT__genblk1__BRA__27__KET____DOT__genblk1__BRA__21__KET____DOT__popcount))) 
                                                           << 9U) 
                                                          | __Vtemp_1134[0x18U])))))));
}
