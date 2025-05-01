// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdut__Syms.h"


void Vdut___024root__trace_chg_0_sub_0(Vdut___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdut___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_chg_0\n"); );
    // Init
    Vdut___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdut___024root*>(voidSelf);
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdut___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vdut___024root__trace_chg_0_sub_0(Vdut___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<18>/*575:0*/ __Vtemp_15;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgWData(oldp+0,(vlSelf->dut__DOT__conv1_img_in[0]),900);
        bufp->chgSData(oldp+29,(vlSelf->dut__DOT__conv1_weights[0]),9);
        bufp->chgSData(oldp+30,(vlSelf->dut__DOT__conv1_weights[1]),9);
        bufp->chgSData(oldp+31,(vlSelf->dut__DOT__conv1_weights[2]),9);
        bufp->chgSData(oldp+32,(vlSelf->dut__DOT__conv1_weights[3]),9);
        bufp->chgSData(oldp+33,(vlSelf->dut__DOT__conv1_weights[4]),9);
        bufp->chgSData(oldp+34,(vlSelf->dut__DOT__conv1_weights[5]),9);
        bufp->chgSData(oldp+35,(vlSelf->dut__DOT__conv1_weights[6]),9);
        bufp->chgSData(oldp+36,(vlSelf->dut__DOT__conv1_weights[7]),9);
        bufp->chgSData(oldp+37,(vlSelf->dut__DOT__conv1_weights[8]),9);
        bufp->chgSData(oldp+38,(vlSelf->dut__DOT__conv1_weights[9]),9);
        bufp->chgSData(oldp+39,(vlSelf->dut__DOT__conv1_weights[10]),9);
        bufp->chgSData(oldp+40,(vlSelf->dut__DOT__conv1_weights[11]),9);
        bufp->chgSData(oldp+41,(vlSelf->dut__DOT__conv1_weights[12]),9);
        bufp->chgSData(oldp+42,(vlSelf->dut__DOT__conv1_weights[13]),9);
        bufp->chgSData(oldp+43,(vlSelf->dut__DOT__conv1_weights[14]),9);
        bufp->chgSData(oldp+44,(vlSelf->dut__DOT__conv1_weights[15]),9);
        bufp->chgWData(oldp+45,(vlSelf->dut__DOT__conv2_weights[0]),144);
        bufp->chgWData(oldp+50,(vlSelf->dut__DOT__conv2_weights[1]),144);
        bufp->chgWData(oldp+55,(vlSelf->dut__DOT__conv2_weights[2]),144);
        bufp->chgWData(oldp+60,(vlSelf->dut__DOT__conv2_weights[3]),144);
        bufp->chgWData(oldp+65,(vlSelf->dut__DOT__conv2_weights[4]),144);
        bufp->chgWData(oldp+70,(vlSelf->dut__DOT__conv2_weights[5]),144);
        bufp->chgWData(oldp+75,(vlSelf->dut__DOT__conv2_weights[6]),144);
        bufp->chgWData(oldp+80,(vlSelf->dut__DOT__conv2_weights[7]),144);
        bufp->chgWData(oldp+85,(vlSelf->dut__DOT__conv2_weights[8]),144);
        bufp->chgWData(oldp+90,(vlSelf->dut__DOT__conv2_weights[9]),144);
        bufp->chgWData(oldp+95,(vlSelf->dut__DOT__conv2_weights[10]),144);
        bufp->chgWData(oldp+100,(vlSelf->dut__DOT__conv2_weights[11]),144);
        bufp->chgWData(oldp+105,(vlSelf->dut__DOT__conv2_weights[12]),144);
        bufp->chgWData(oldp+110,(vlSelf->dut__DOT__conv2_weights[13]),144);
        bufp->chgWData(oldp+115,(vlSelf->dut__DOT__conv2_weights[14]),144);
        bufp->chgWData(oldp+120,(vlSelf->dut__DOT__conv2_weights[15]),144);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgWData(oldp+125,(vlSelf->dut__DOT__pool1_img_out[0]),196);
        bufp->chgWData(oldp+132,(vlSelf->dut__DOT__pool1_img_out[1]),196);
        bufp->chgWData(oldp+139,(vlSelf->dut__DOT__pool1_img_out[2]),196);
        bufp->chgWData(oldp+146,(vlSelf->dut__DOT__pool1_img_out[3]),196);
        bufp->chgWData(oldp+153,(vlSelf->dut__DOT__pool1_img_out[4]),196);
        bufp->chgWData(oldp+160,(vlSelf->dut__DOT__pool1_img_out[5]),196);
        bufp->chgWData(oldp+167,(vlSelf->dut__DOT__pool1_img_out[6]),196);
        bufp->chgWData(oldp+174,(vlSelf->dut__DOT__pool1_img_out[7]),196);
        bufp->chgWData(oldp+181,(vlSelf->dut__DOT__pool1_img_out[8]),196);
        bufp->chgWData(oldp+188,(vlSelf->dut__DOT__pool1_img_out[9]),196);
        bufp->chgWData(oldp+195,(vlSelf->dut__DOT__pool1_img_out[10]),196);
        bufp->chgWData(oldp+202,(vlSelf->dut__DOT__pool1_img_out[11]),196);
        bufp->chgWData(oldp+209,(vlSelf->dut__DOT__pool1_img_out[12]),196);
        bufp->chgWData(oldp+216,(vlSelf->dut__DOT__pool1_img_out[13]),196);
        bufp->chgWData(oldp+223,(vlSelf->dut__DOT__pool1_img_out[14]),196);
        bufp->chgWData(oldp+230,(vlSelf->dut__DOT__pool1_img_out[15]),196);
        bufp->chgQData(oldp+237,(vlSelf->dut__DOT__pool2_img_out[0]),36);
        bufp->chgQData(oldp+239,(vlSelf->dut__DOT__pool2_img_out[1]),36);
        bufp->chgQData(oldp+241,(vlSelf->dut__DOT__pool2_img_out[2]),36);
        bufp->chgQData(oldp+243,(vlSelf->dut__DOT__pool2_img_out[3]),36);
        bufp->chgQData(oldp+245,(vlSelf->dut__DOT__pool2_img_out[4]),36);
        bufp->chgQData(oldp+247,(vlSelf->dut__DOT__pool2_img_out[5]),36);
        bufp->chgQData(oldp+249,(vlSelf->dut__DOT__pool2_img_out[6]),36);
        bufp->chgQData(oldp+251,(vlSelf->dut__DOT__pool2_img_out[7]),36);
        bufp->chgQData(oldp+253,(vlSelf->dut__DOT__pool2_img_out[8]),36);
        bufp->chgQData(oldp+255,(vlSelf->dut__DOT__pool2_img_out[9]),36);
        bufp->chgQData(oldp+257,(vlSelf->dut__DOT__pool2_img_out[10]),36);
        bufp->chgQData(oldp+259,(vlSelf->dut__DOT__pool2_img_out[11]),36);
        bufp->chgQData(oldp+261,(vlSelf->dut__DOT__pool2_img_out[12]),36);
        bufp->chgQData(oldp+263,(vlSelf->dut__DOT__pool2_img_out[13]),36);
        bufp->chgQData(oldp+265,(vlSelf->dut__DOT__pool2_img_out[14]),36);
        bufp->chgQData(oldp+267,(vlSelf->dut__DOT__pool2_img_out[15]),36);
        __Vtemp_15[0U] = (IData)(vlSelf->dut__DOT__pool2_img_out
                                 [0U]);
        __Vtemp_15[1U] = (((IData)(vlSelf->dut__DOT__pool2_img_out
                                   [1U]) << 4U) | (IData)(
                                                          (vlSelf->dut__DOT__pool2_img_out
                                                           [0U] 
                                                           >> 0x20U)));
        __Vtemp_15[2U] = (((IData)(vlSelf->dut__DOT__pool2_img_out
                                   [2U]) << 8U) | (
                                                   ((IData)(
                                                            vlSelf->dut__DOT__pool2_img_out
                                                            [1U]) 
                                                    >> 0x1cU) 
                                                   | ((IData)(
                                                              (vlSelf->dut__DOT__pool2_img_out
                                                               [1U] 
                                                               >> 0x20U)) 
                                                      << 4U)));
        __Vtemp_15[3U] = (((IData)(vlSelf->dut__DOT__pool2_img_out
                                   [3U]) << 0xcU) | 
                          (((IData)(vlSelf->dut__DOT__pool2_img_out
                                    [2U]) >> 0x18U) 
                           | ((IData)((vlSelf->dut__DOT__pool2_img_out
                                       [2U] >> 0x20U)) 
                              << 8U)));
        __Vtemp_15[4U] = (((IData)(vlSelf->dut__DOT__pool2_img_out
                                   [4U]) << 0x10U) 
                          | (((IData)(vlSelf->dut__DOT__pool2_img_out
                                      [3U]) >> 0x14U) 
                             | ((IData)((vlSelf->dut__DOT__pool2_img_out
                                         [3U] >> 0x20U)) 
                                << 0xcU)));
        __Vtemp_15[5U] = (((IData)(vlSelf->dut__DOT__pool2_img_out
                                   [5U]) << 0x14U) 
                          | (((IData)(vlSelf->dut__DOT__pool2_img_out
                                      [4U]) >> 0x10U) 
                             | ((IData)((vlSelf->dut__DOT__pool2_img_out
                                         [4U] >> 0x20U)) 
                                << 0x10U)));
        __Vtemp_15[6U] = (((IData)(vlSelf->dut__DOT__pool2_img_out
                                   [6U]) << 0x18U) 
                          | (((IData)(vlSelf->dut__DOT__pool2_img_out
                                      [5U]) >> 0xcU) 
                             | ((IData)((vlSelf->dut__DOT__pool2_img_out
                                         [5U] >> 0x20U)) 
                                << 0x14U)));
        __Vtemp_15[7U] = (((IData)(vlSelf->dut__DOT__pool2_img_out
                                   [7U]) << 0x1cU) 
                          | (((IData)(vlSelf->dut__DOT__pool2_img_out
                                      [6U]) >> 8U) 
                             | ((IData)((vlSelf->dut__DOT__pool2_img_out
                                         [6U] >> 0x20U)) 
                                << 0x18U)));
        __Vtemp_15[8U] = (((IData)(vlSelf->dut__DOT__pool2_img_out
                                   [7U]) >> 4U) | ((IData)(
                                                           (vlSelf->dut__DOT__pool2_img_out
                                                            [7U] 
                                                            >> 0x20U)) 
                                                   << 0x1cU));
        __Vtemp_15[9U] = (IData)(vlSelf->dut__DOT__pool2_img_out
                                 [8U]);
        __Vtemp_15[0xaU] = (((IData)(vlSelf->dut__DOT__pool2_img_out
                                     [9U]) << 4U) | (IData)(
                                                            (vlSelf->dut__DOT__pool2_img_out
                                                             [8U] 
                                                             >> 0x20U)));
        __Vtemp_15[0xbU] = (((IData)(vlSelf->dut__DOT__pool2_img_out
                                     [0xaU]) << 8U) 
                            | (((IData)(vlSelf->dut__DOT__pool2_img_out
                                        [9U]) >> 0x1cU) 
                               | ((IData)((vlSelf->dut__DOT__pool2_img_out
                                           [9U] >> 0x20U)) 
                                  << 4U)));
        __Vtemp_15[0xcU] = (((IData)(vlSelf->dut__DOT__pool2_img_out
                                     [0xbU]) << 0xcU) 
                            | (((IData)(vlSelf->dut__DOT__pool2_img_out
                                        [0xaU]) >> 0x18U) 
                               | ((IData)((vlSelf->dut__DOT__pool2_img_out
                                           [0xaU] >> 0x20U)) 
                                  << 8U)));
        __Vtemp_15[0xdU] = (((IData)(vlSelf->dut__DOT__pool2_img_out
                                     [0xcU]) << 0x10U) 
                            | (((IData)(vlSelf->dut__DOT__pool2_img_out
                                        [0xbU]) >> 0x14U) 
                               | ((IData)((vlSelf->dut__DOT__pool2_img_out
                                           [0xbU] >> 0x20U)) 
                                  << 0xcU)));
        __Vtemp_15[0xeU] = (((IData)(vlSelf->dut__DOT__pool2_img_out
                                     [0xdU]) << 0x14U) 
                            | (((IData)(vlSelf->dut__DOT__pool2_img_out
                                        [0xcU]) >> 0x10U) 
                               | ((IData)((vlSelf->dut__DOT__pool2_img_out
                                           [0xcU] >> 0x20U)) 
                                  << 0x10U)));
        __Vtemp_15[0xfU] = (((IData)(vlSelf->dut__DOT__pool2_img_out
                                     [0xeU]) << 0x18U) 
                            | (((IData)(vlSelf->dut__DOT__pool2_img_out
                                        [0xdU]) >> 0xcU) 
                               | ((IData)((vlSelf->dut__DOT__pool2_img_out
                                           [0xdU] >> 0x20U)) 
                                  << 0x14U)));
        __Vtemp_15[0x10U] = (((IData)(vlSelf->dut__DOT__pool2_img_out
                                      [0xfU]) << 0x1cU) 
                             | (((IData)(vlSelf->dut__DOT__pool2_img_out
                                         [0xeU]) >> 8U) 
                                | ((IData)((vlSelf->dut__DOT__pool2_img_out
                                            [0xeU] 
                                            >> 0x20U)) 
                                   << 0x18U)));
        __Vtemp_15[0x11U] = (((IData)(vlSelf->dut__DOT__pool2_img_out
                                      [0xfU]) >> 4U) 
                             | ((IData)((vlSelf->dut__DOT__pool2_img_out
                                         [0xfU] >> 0x20U)) 
                                << 0x1cU));
        bufp->chgWData(oldp+269,(__Vtemp_15),576);
        bufp->chgSData(oldp+287,(vlSelf->dut__DOT__fc_out[0]),16);
        bufp->chgSData(oldp+288,(vlSelf->dut__DOT__fc_out[1]),16);
        bufp->chgSData(oldp+289,(vlSelf->dut__DOT__fc_out[2]),16);
        bufp->chgSData(oldp+290,(vlSelf->dut__DOT__fc_out[3]),16);
        bufp->chgSData(oldp+291,(vlSelf->dut__DOT__fc_out[4]),16);
        bufp->chgSData(oldp+292,(vlSelf->dut__DOT__fc_out[5]),16);
        bufp->chgSData(oldp+293,(vlSelf->dut__DOT__fc_out[6]),16);
        bufp->chgSData(oldp+294,(vlSelf->dut__DOT__fc_out[7]),16);
        bufp->chgSData(oldp+295,(vlSelf->dut__DOT__fc_out[8]),16);
        bufp->chgSData(oldp+296,(vlSelf->dut__DOT__fc_out[9]),16);
        bufp->chgCData(oldp+297,(vlSelf->dut__DOT__result),4);
        bufp->chgBit(oldp+298,(vlSelf->dut__DOT__conv1_data_ready));
        bufp->chgBit(oldp+299,(vlSelf->dut__DOT__conv2_data_ready));
        bufp->chgBit(oldp+300,(vlSelf->dut__DOT__fc_data_ready));
        bufp->chgSData(oldp+301,(vlSelf->dut__DOT__compare__DOT__max),16);
        bufp->chgCData(oldp+302,(vlSelf->dut__DOT__compare__DOT__max_ind),4);
        bufp->chgIData(oldp+303,(vlSelf->dut__DOT__compare__DOT__cur_ic),32);
        bufp->chgSData(oldp+304,(vlSelf->dut__DOT__conv_pool1__DOT__core_weight),9);
        bufp->chgWData(oldp+305,(vlSelf->dut__DOT__conv_pool1__DOT__core_img_out),784);
        bufp->chgWData(oldp+330,(vlSelf->dut__DOT__conv_pool1__DOT__pool_img_out),196);
        bufp->chgBit(oldp+337,(vlSelf->dut__DOT__conv_pool1__DOT__core_data_in_ready));
        bufp->chgBit(oldp+338,(vlSelf->dut__DOT__conv_pool1__DOT__core_data_out_ready));
        bufp->chgIData(oldp+339,(vlSelf->dut__DOT__conv_pool1__DOT__cur_oc),32);
        bufp->chgIData(oldp+340,(vlSelf->dut__DOT__conv_pool1__DOT__ConvBlock__DOT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+341,(vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount),8);
        bufp->chgIData(oldp+342,(vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic),32);
        bufp->chgIData(oldp+343,(vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__row),32);
        bufp->chgIData(oldp+344,(vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__col),32);
        bufp->chgWData(oldp+345,(vlSelf->dut__DOT__conv_pool2__DOT__core_weight),144);
        bufp->chgWData(oldp+350,(vlSelf->dut__DOT__conv_pool2__DOT__core_img_out),144);
        bufp->chgQData(oldp+355,(vlSelf->dut__DOT__conv_pool2__DOT__pool_img_out),36);
        bufp->chgBit(oldp+357,(vlSelf->dut__DOT__conv_pool2__DOT__core_data_in_ready));
        bufp->chgBit(oldp+358,(vlSelf->dut__DOT__conv_pool2__DOT__core_data_out_ready));
        bufp->chgIData(oldp+359,(vlSelf->dut__DOT__conv_pool2__DOT__cur_oc),32);
        bufp->chgIData(oldp+360,(vlSelf->dut__DOT__conv_pool2__DOT__ConvBlock__DOT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+361,(vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount),8);
        bufp->chgIData(oldp+362,(vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic),32);
        bufp->chgIData(oldp+363,(vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__row),32);
        bufp->chgIData(oldp+364,(vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__col),32);
        bufp->chgIData(oldp+365,(vlSelf->dut__DOT__fc__DOT__cur_ic),32);
        bufp->chgIData(oldp+366,(vlSelf->dut__DOT__fc__DOT__cur_oc),32);
        bufp->chgSData(oldp+367,(vlSelf->dut__DOT__fc__DOT__temp_out),16);
        bufp->chgIData(oldp+368,(vlSelf->dut__DOT__fc__DOT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+369,(vlSelf->clk));
    bufp->chgBit(oldp+370,(vlSelf->data_in_ready));
    bufp->chgBit(oldp+371,(vlSelf->data_out_ready));
}

void Vdut___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_cleanup\n"); );
    // Init
    Vdut___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdut___024root*>(voidSelf);
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
