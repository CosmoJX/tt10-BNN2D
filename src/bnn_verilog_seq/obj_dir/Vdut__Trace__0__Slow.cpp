// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdut__Syms.h"


VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+370,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+371,0,"data_in_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+372,0,"data_out_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+370,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+371,0,"data_in_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+372,0,"data_out_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+373,0,"CONV1_IC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+374,0,"CONV1_OC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+374,0,"CONV2_OC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+375,0,"FC_IC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+376,0,"FC_OC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+377,0,"CONV1_IMG_IN_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+378,0,"CONV1_IMG_OUT_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+379,0,"POOL1_IMG_OUT_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+380,0,"CONV2_IMG_OUT_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+381,0,"POOL2_IMG_OUT_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+382,0,"OUTPUT_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("conv1_img_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declArray(c+1+i*29,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 899,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("conv1_weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+30+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 8,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("conv2_weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+46+i*5,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 143,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("pool1_img_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+126+i*7,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 195,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("pool2_img_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+238+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 35,0);
    }
    tracep->popPrefix();
    tracep->declArray(c+270,0,"fc_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 575,0);
    tracep->pushPrefix("fc_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+288+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+298,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+299,0,"conv1_data_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+300,0,"conv2_data_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+301,0,"fc_data_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("compare", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+376,0,"IC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+382,0,"OUTPUT_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+370,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+301,0,"data_in_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+288+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+298,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+372,0,"data_out_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+302,0,"max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+303,0,"max_ind",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+304,0,"cur_ic",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("conv_pool1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+373,0,"IC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+374,0,"OC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+377,0,"CONV_IMG_IN_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+378,0,"CONV_IMG_OUT_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+379,0,"POOL_IMG_OUT_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+370,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+371,0,"data_in_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("img_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declArray(c+1+i*29,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 899,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+30+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 8,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("img_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+126+i*7,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 195,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+299,0,"data_out_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+305,0,"core_weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declArray(c+306,0,"core_img_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 783,0);
    tracep->declArray(c+331,0,"pool_img_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 195,0);
    tracep->declBit(c+338,0,"core_data_in_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+339,0,"core_data_out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"cur_oc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("ConvBlock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+341,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+373,0,"IC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+377,0,"IMG_IN_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+378,0,"IMG_OUT_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+370,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"data_in_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("img_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declArray(c+1+i*29,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 899,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+305,0,"weights",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declArray(c+306,0,"img_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 783,0);
    tracep->declBit(c+339,0,"data_out_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+342,0,"popcount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+343,0,"cur_ic",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+344,0,"row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+345,0,"col",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pool", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+378,0,"IMG_IN_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+379,0,"IMG_OUT_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declArray(c+306,0,"img_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 783,0);
    tracep->declArray(c+331,0,"img_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 195,0);
    tracep->pushPrefix("out_row_gen[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("out_col_gen[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+383,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+383,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+383,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+384,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+383,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+385,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+383,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+386,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+383,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+387,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+383,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+388,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+383,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+382,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+383,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+381,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+383,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+389,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+383,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+376,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+383,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+380,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+383,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+379,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+383,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+374,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+383,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+390,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("out_row_gen[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("out_col_gen[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+384,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+383,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+384,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+384,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+384,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+385,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+384,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+386,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+384,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+387,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+384,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+388,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+384,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+382,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+384,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+381,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+384,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+389,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+384,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+376,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+384,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+380,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+384,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+379,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+384,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+374,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+384,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+390,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("out_row_gen[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("out_col_gen[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+385,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+383,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+385,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+384,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+385,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+385,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+385,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+386,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+385,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+387,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+385,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+388,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+385,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+382,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+385,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+381,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+385,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+389,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+385,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+376,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+385,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+380,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+385,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+379,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+385,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+374,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+385,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+390,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("out_row_gen[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("out_col_gen[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+386,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+383,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+386,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+384,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+386,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+385,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+386,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+386,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+386,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+387,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+386,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+388,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+386,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+382,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+386,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+381,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+386,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+389,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+386,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+376,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+386,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+380,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+386,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+379,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+386,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+374,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+386,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+390,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("out_row_gen[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("out_col_gen[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+387,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+383,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+387,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+384,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+387,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+385,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+387,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+386,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+387,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+387,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+387,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+388,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+387,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+382,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+387,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+381,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+387,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+389,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+387,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+376,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+387,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+380,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+387,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+379,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+387,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+374,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+387,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+390,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("out_row_gen[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("out_col_gen[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+388,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+383,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+388,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+384,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+388,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+385,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+388,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+386,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+388,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+387,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+388,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+388,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+388,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+382,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+388,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+381,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+388,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+389,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+388,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+376,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+388,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+380,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+388,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+379,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+388,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+374,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+388,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+390,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("out_row_gen[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("out_col_gen[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+382,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+383,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+382,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+384,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+382,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+385,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+382,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+386,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+382,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+387,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+382,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+388,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+382,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+382,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+382,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+381,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+382,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+389,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+382,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+376,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+382,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+380,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+382,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+379,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+382,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+374,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+382,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+390,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("out_row_gen[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("out_col_gen[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+381,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+383,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+381,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+384,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+381,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+385,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+381,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+386,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+381,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+387,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+381,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+388,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+381,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+382,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+381,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+381,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+381,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+389,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+381,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+376,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+381,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+380,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+381,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+379,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+381,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+374,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+381,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+390,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("out_row_gen[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("out_col_gen[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+389,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+383,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+389,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+384,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+389,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+385,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+389,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+386,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+389,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+387,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+389,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+388,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+389,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+382,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+389,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+381,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+389,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+389,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+389,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+376,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+389,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+380,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+389,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+379,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+389,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+374,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+389,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+390,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("out_row_gen[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("out_col_gen[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+376,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+383,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+376,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+384,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+376,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+385,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+376,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+386,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+376,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+387,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+376,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+388,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+376,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+382,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+376,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+381,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+376,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+389,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+376,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+376,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+376,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+380,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+376,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+379,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+376,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+374,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+376,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+390,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("out_row_gen[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("out_col_gen[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+380,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+383,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+380,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+384,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+380,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+385,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+380,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+386,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+380,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+387,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+380,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+388,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+380,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+382,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+380,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+381,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+380,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+389,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+380,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+376,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+380,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+380,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+380,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+379,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+380,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+374,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+380,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+390,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("out_row_gen[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("out_col_gen[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+379,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+383,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+379,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+384,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+379,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+385,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+379,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+386,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+379,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+387,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+379,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+388,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+379,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+382,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+379,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+381,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+379,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+389,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+379,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+376,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+379,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+380,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+379,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+379,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+379,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+374,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+379,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+390,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("out_row_gen[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("out_col_gen[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+374,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+383,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+374,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+384,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+374,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+385,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+374,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+386,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+374,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+387,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+374,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+388,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+374,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+382,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+374,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+381,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+374,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+389,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+374,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+376,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+374,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+380,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+374,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+379,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+374,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+374,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+374,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+390,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("out_row_gen[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("out_col_gen[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+390,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+383,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+390,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+384,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+390,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+385,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+390,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+386,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+390,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+387,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+390,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+388,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+390,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+382,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+390,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+381,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+390,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+389,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+390,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+376,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+390,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+380,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+390,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+379,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+390,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+374,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+390,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+390,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("conv_pool2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+374,0,"IC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+374,0,"OC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+379,0,"CONV_IMG_IN_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+380,0,"CONV_IMG_OUT_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+381,0,"POOL_IMG_OUT_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+370,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+299,0,"data_in_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("img_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+126+i*7,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 195,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("weights", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+46+i*5,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 143,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("img_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+238+i*2,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 35,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+300,0,"data_out_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+346,0,"core_weight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 143,0);
    tracep->declArray(c+351,0,"core_img_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 143,0);
    tracep->declQuad(c+356,0,"pool_img_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+358,0,"core_data_in_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+359,0,"core_data_out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+360,0,"cur_oc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("ConvBlock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+361,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+374,0,"IC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+379,0,"IMG_IN_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+380,0,"IMG_OUT_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+370,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+358,0,"data_in_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("img_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+126+i*7,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 195,0);
    }
    tracep->popPrefix();
    tracep->declArray(c+346,0,"weights",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 143,0);
    tracep->declArray(c+351,0,"img_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 143,0);
    tracep->declBit(c+359,0,"data_out_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+362,0,"popcount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+363,0,"cur_ic",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+364,0,"row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+365,0,"col",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pool", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+380,0,"IMG_IN_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+381,0,"IMG_OUT_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declArray(c+351,0,"img_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 143,0);
    tracep->declQuad(c+356,0,"img_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->pushPrefix("out_row_gen[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("out_col_gen[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+383,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+383,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+383,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+388,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+383,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+382,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+383,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+381,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+383,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+389,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+383,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+376,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("out_row_gen[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("out_col_gen[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+388,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+383,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+388,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+388,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+388,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+382,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+388,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+381,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+388,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+389,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+388,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+376,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("out_row_gen[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("out_col_gen[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+382,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+383,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+382,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+388,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+382,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+382,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+382,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+381,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+382,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+389,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+382,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+376,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("out_row_gen[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("out_col_gen[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+381,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+383,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+381,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+388,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+381,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+382,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+381,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+381,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+381,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+389,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+381,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+376,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("out_row_gen[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("out_col_gen[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+389,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+383,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+389,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+388,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+389,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+382,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+389,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+381,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+389,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+389,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+389,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+376,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("out_row_gen[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("out_col_gen[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+376,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+383,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+376,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+388,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+376,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+382,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+376,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+381,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+376,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+389,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("out_col_gen[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+376,0,"IN_ROW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+376,0,"IN_COL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+375,0,"IC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+376,0,"OC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+370,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+300,0,"data_in_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+270,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 575,0);
    tracep->pushPrefix("out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+288+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+301,0,"data_out_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+366,0,"cur_ic",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+367,0,"cur_oc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+368,0,"temp_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+369,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdut___024root__trace_init_top(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_top\n"); );
    // Body
    Vdut___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdut___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vdut___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdut___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdut___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdut___024root__trace_register(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vdut___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vdut___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vdut___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vdut___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdut___024root__trace_const_0_sub_0(Vdut___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdut___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_const_0\n"); );
    // Init
    Vdut___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdut___024root*>(voidSelf);
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdut___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdut___024root__trace_const_0_sub_0(Vdut___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+373,(1U),32);
    bufp->fullIData(oldp+374,(0x10U),32);
    bufp->fullIData(oldp+375,(0x240U),32);
    bufp->fullIData(oldp+376,(0xaU),32);
    bufp->fullIData(oldp+377,(0x1eU),32);
    bufp->fullIData(oldp+378,(0x1cU),32);
    bufp->fullIData(oldp+379,(0xeU),32);
    bufp->fullIData(oldp+380,(0xcU),32);
    bufp->fullIData(oldp+381,(6U),32);
    bufp->fullIData(oldp+382,(4U),32);
    bufp->fullIData(oldp+383,(0U),32);
    bufp->fullIData(oldp+384,(0x14U),32);
    bufp->fullIData(oldp+385,(0x16U),32);
    bufp->fullIData(oldp+386,(0x18U),32);
    bufp->fullIData(oldp+387,(0x1aU),32);
    bufp->fullIData(oldp+388,(2U),32);
    bufp->fullIData(oldp+389,(8U),32);
    bufp->fullIData(oldp+390,(0x12U),32);
}

VL_ATTR_COLD void Vdut___024root__trace_full_0_sub_0(Vdut___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdut___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_full_0\n"); );
    // Init
    Vdut___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdut___024root*>(voidSelf);
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdut___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdut___024root__trace_full_0_sub_0(Vdut___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<18>/*575:0*/ __Vtemp_15;
    // Body
    bufp->fullWData(oldp+1,(vlSelf->dut__DOT__conv1_img_in[0]),900);
    bufp->fullSData(oldp+30,(vlSelf->dut__DOT__conv1_weights[0]),9);
    bufp->fullSData(oldp+31,(vlSelf->dut__DOT__conv1_weights[1]),9);
    bufp->fullSData(oldp+32,(vlSelf->dut__DOT__conv1_weights[2]),9);
    bufp->fullSData(oldp+33,(vlSelf->dut__DOT__conv1_weights[3]),9);
    bufp->fullSData(oldp+34,(vlSelf->dut__DOT__conv1_weights[4]),9);
    bufp->fullSData(oldp+35,(vlSelf->dut__DOT__conv1_weights[5]),9);
    bufp->fullSData(oldp+36,(vlSelf->dut__DOT__conv1_weights[6]),9);
    bufp->fullSData(oldp+37,(vlSelf->dut__DOT__conv1_weights[7]),9);
    bufp->fullSData(oldp+38,(vlSelf->dut__DOT__conv1_weights[8]),9);
    bufp->fullSData(oldp+39,(vlSelf->dut__DOT__conv1_weights[9]),9);
    bufp->fullSData(oldp+40,(vlSelf->dut__DOT__conv1_weights[10]),9);
    bufp->fullSData(oldp+41,(vlSelf->dut__DOT__conv1_weights[11]),9);
    bufp->fullSData(oldp+42,(vlSelf->dut__DOT__conv1_weights[12]),9);
    bufp->fullSData(oldp+43,(vlSelf->dut__DOT__conv1_weights[13]),9);
    bufp->fullSData(oldp+44,(vlSelf->dut__DOT__conv1_weights[14]),9);
    bufp->fullSData(oldp+45,(vlSelf->dut__DOT__conv1_weights[15]),9);
    bufp->fullWData(oldp+46,(vlSelf->dut__DOT__conv2_weights[0]),144);
    bufp->fullWData(oldp+51,(vlSelf->dut__DOT__conv2_weights[1]),144);
    bufp->fullWData(oldp+56,(vlSelf->dut__DOT__conv2_weights[2]),144);
    bufp->fullWData(oldp+61,(vlSelf->dut__DOT__conv2_weights[3]),144);
    bufp->fullWData(oldp+66,(vlSelf->dut__DOT__conv2_weights[4]),144);
    bufp->fullWData(oldp+71,(vlSelf->dut__DOT__conv2_weights[5]),144);
    bufp->fullWData(oldp+76,(vlSelf->dut__DOT__conv2_weights[6]),144);
    bufp->fullWData(oldp+81,(vlSelf->dut__DOT__conv2_weights[7]),144);
    bufp->fullWData(oldp+86,(vlSelf->dut__DOT__conv2_weights[8]),144);
    bufp->fullWData(oldp+91,(vlSelf->dut__DOT__conv2_weights[9]),144);
    bufp->fullWData(oldp+96,(vlSelf->dut__DOT__conv2_weights[10]),144);
    bufp->fullWData(oldp+101,(vlSelf->dut__DOT__conv2_weights[11]),144);
    bufp->fullWData(oldp+106,(vlSelf->dut__DOT__conv2_weights[12]),144);
    bufp->fullWData(oldp+111,(vlSelf->dut__DOT__conv2_weights[13]),144);
    bufp->fullWData(oldp+116,(vlSelf->dut__DOT__conv2_weights[14]),144);
    bufp->fullWData(oldp+121,(vlSelf->dut__DOT__conv2_weights[15]),144);
    bufp->fullWData(oldp+126,(vlSelf->dut__DOT__pool1_img_out[0]),196);
    bufp->fullWData(oldp+133,(vlSelf->dut__DOT__pool1_img_out[1]),196);
    bufp->fullWData(oldp+140,(vlSelf->dut__DOT__pool1_img_out[2]),196);
    bufp->fullWData(oldp+147,(vlSelf->dut__DOT__pool1_img_out[3]),196);
    bufp->fullWData(oldp+154,(vlSelf->dut__DOT__pool1_img_out[4]),196);
    bufp->fullWData(oldp+161,(vlSelf->dut__DOT__pool1_img_out[5]),196);
    bufp->fullWData(oldp+168,(vlSelf->dut__DOT__pool1_img_out[6]),196);
    bufp->fullWData(oldp+175,(vlSelf->dut__DOT__pool1_img_out[7]),196);
    bufp->fullWData(oldp+182,(vlSelf->dut__DOT__pool1_img_out[8]),196);
    bufp->fullWData(oldp+189,(vlSelf->dut__DOT__pool1_img_out[9]),196);
    bufp->fullWData(oldp+196,(vlSelf->dut__DOT__pool1_img_out[10]),196);
    bufp->fullWData(oldp+203,(vlSelf->dut__DOT__pool1_img_out[11]),196);
    bufp->fullWData(oldp+210,(vlSelf->dut__DOT__pool1_img_out[12]),196);
    bufp->fullWData(oldp+217,(vlSelf->dut__DOT__pool1_img_out[13]),196);
    bufp->fullWData(oldp+224,(vlSelf->dut__DOT__pool1_img_out[14]),196);
    bufp->fullWData(oldp+231,(vlSelf->dut__DOT__pool1_img_out[15]),196);
    bufp->fullQData(oldp+238,(vlSelf->dut__DOT__pool2_img_out[0]),36);
    bufp->fullQData(oldp+240,(vlSelf->dut__DOT__pool2_img_out[1]),36);
    bufp->fullQData(oldp+242,(vlSelf->dut__DOT__pool2_img_out[2]),36);
    bufp->fullQData(oldp+244,(vlSelf->dut__DOT__pool2_img_out[3]),36);
    bufp->fullQData(oldp+246,(vlSelf->dut__DOT__pool2_img_out[4]),36);
    bufp->fullQData(oldp+248,(vlSelf->dut__DOT__pool2_img_out[5]),36);
    bufp->fullQData(oldp+250,(vlSelf->dut__DOT__pool2_img_out[6]),36);
    bufp->fullQData(oldp+252,(vlSelf->dut__DOT__pool2_img_out[7]),36);
    bufp->fullQData(oldp+254,(vlSelf->dut__DOT__pool2_img_out[8]),36);
    bufp->fullQData(oldp+256,(vlSelf->dut__DOT__pool2_img_out[9]),36);
    bufp->fullQData(oldp+258,(vlSelf->dut__DOT__pool2_img_out[10]),36);
    bufp->fullQData(oldp+260,(vlSelf->dut__DOT__pool2_img_out[11]),36);
    bufp->fullQData(oldp+262,(vlSelf->dut__DOT__pool2_img_out[12]),36);
    bufp->fullQData(oldp+264,(vlSelf->dut__DOT__pool2_img_out[13]),36);
    bufp->fullQData(oldp+266,(vlSelf->dut__DOT__pool2_img_out[14]),36);
    bufp->fullQData(oldp+268,(vlSelf->dut__DOT__pool2_img_out[15]),36);
    __Vtemp_15[0U] = (IData)(vlSelf->dut__DOT__pool2_img_out
                             [0U]);
    __Vtemp_15[1U] = (((IData)(vlSelf->dut__DOT__pool2_img_out
                               [1U]) << 4U) | (IData)(
                                                      (vlSelf->dut__DOT__pool2_img_out
                                                       [0U] 
                                                       >> 0x20U)));
    __Vtemp_15[2U] = (((IData)(vlSelf->dut__DOT__pool2_img_out
                               [2U]) << 8U) | (((IData)(
                                                        vlSelf->dut__DOT__pool2_img_out
                                                        [1U]) 
                                                >> 0x1cU) 
                                               | ((IData)(
                                                          (vlSelf->dut__DOT__pool2_img_out
                                                           [1U] 
                                                           >> 0x20U)) 
                                                  << 4U)));
    __Vtemp_15[3U] = (((IData)(vlSelf->dut__DOT__pool2_img_out
                               [3U]) << 0xcU) | (((IData)(
                                                          vlSelf->dut__DOT__pool2_img_out
                                                          [2U]) 
                                                  >> 0x18U) 
                                                 | ((IData)(
                                                            (vlSelf->dut__DOT__pool2_img_out
                                                             [2U] 
                                                             >> 0x20U)) 
                                                    << 8U)));
    __Vtemp_15[4U] = (((IData)(vlSelf->dut__DOT__pool2_img_out
                               [4U]) << 0x10U) | (((IData)(
                                                           vlSelf->dut__DOT__pool2_img_out
                                                           [3U]) 
                                                   >> 0x14U) 
                                                  | ((IData)(
                                                             (vlSelf->dut__DOT__pool2_img_out
                                                              [3U] 
                                                              >> 0x20U)) 
                                                     << 0xcU)));
    __Vtemp_15[5U] = (((IData)(vlSelf->dut__DOT__pool2_img_out
                               [5U]) << 0x14U) | (((IData)(
                                                           vlSelf->dut__DOT__pool2_img_out
                                                           [4U]) 
                                                   >> 0x10U) 
                                                  | ((IData)(
                                                             (vlSelf->dut__DOT__pool2_img_out
                                                              [4U] 
                                                              >> 0x20U)) 
                                                     << 0x10U)));
    __Vtemp_15[6U] = (((IData)(vlSelf->dut__DOT__pool2_img_out
                               [6U]) << 0x18U) | (((IData)(
                                                           vlSelf->dut__DOT__pool2_img_out
                                                           [5U]) 
                                                   >> 0xcU) 
                                                  | ((IData)(
                                                             (vlSelf->dut__DOT__pool2_img_out
                                                              [5U] 
                                                              >> 0x20U)) 
                                                     << 0x14U)));
    __Vtemp_15[7U] = (((IData)(vlSelf->dut__DOT__pool2_img_out
                               [7U]) << 0x1cU) | (((IData)(
                                                           vlSelf->dut__DOT__pool2_img_out
                                                           [6U]) 
                                                   >> 8U) 
                                                  | ((IData)(
                                                             (vlSelf->dut__DOT__pool2_img_out
                                                              [6U] 
                                                              >> 0x20U)) 
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
                                 [0xaU]) << 8U) | (
                                                   ((IData)(
                                                            vlSelf->dut__DOT__pool2_img_out
                                                            [9U]) 
                                                    >> 0x1cU) 
                                                   | ((IData)(
                                                              (vlSelf->dut__DOT__pool2_img_out
                                                               [9U] 
                                                               >> 0x20U)) 
                                                      << 4U)));
    __Vtemp_15[0xcU] = (((IData)(vlSelf->dut__DOT__pool2_img_out
                                 [0xbU]) << 0xcU) | 
                        (((IData)(vlSelf->dut__DOT__pool2_img_out
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
                                        [0xeU] >> 0x20U)) 
                               << 0x18U)));
    __Vtemp_15[0x11U] = (((IData)(vlSelf->dut__DOT__pool2_img_out
                                  [0xfU]) >> 4U) | 
                         ((IData)((vlSelf->dut__DOT__pool2_img_out
                                   [0xfU] >> 0x20U)) 
                          << 0x1cU));
    bufp->fullWData(oldp+270,(__Vtemp_15),576);
    bufp->fullSData(oldp+288,(vlSelf->dut__DOT__fc_out[0]),16);
    bufp->fullSData(oldp+289,(vlSelf->dut__DOT__fc_out[1]),16);
    bufp->fullSData(oldp+290,(vlSelf->dut__DOT__fc_out[2]),16);
    bufp->fullSData(oldp+291,(vlSelf->dut__DOT__fc_out[3]),16);
    bufp->fullSData(oldp+292,(vlSelf->dut__DOT__fc_out[4]),16);
    bufp->fullSData(oldp+293,(vlSelf->dut__DOT__fc_out[5]),16);
    bufp->fullSData(oldp+294,(vlSelf->dut__DOT__fc_out[6]),16);
    bufp->fullSData(oldp+295,(vlSelf->dut__DOT__fc_out[7]),16);
    bufp->fullSData(oldp+296,(vlSelf->dut__DOT__fc_out[8]),16);
    bufp->fullSData(oldp+297,(vlSelf->dut__DOT__fc_out[9]),16);
    bufp->fullCData(oldp+298,(vlSelf->dut__DOT__result),4);
    bufp->fullBit(oldp+299,(vlSelf->dut__DOT__conv1_data_ready));
    bufp->fullBit(oldp+300,(vlSelf->dut__DOT__conv2_data_ready));
    bufp->fullBit(oldp+301,(vlSelf->dut__DOT__fc_data_ready));
    bufp->fullSData(oldp+302,(vlSelf->dut__DOT__compare__DOT__max),16);
    bufp->fullCData(oldp+303,(vlSelf->dut__DOT__compare__DOT__max_ind),4);
    bufp->fullIData(oldp+304,(vlSelf->dut__DOT__compare__DOT__cur_ic),32);
    bufp->fullSData(oldp+305,(vlSelf->dut__DOT__conv_pool1__DOT__core_weight),9);
    bufp->fullWData(oldp+306,(vlSelf->dut__DOT__conv_pool1__DOT__core_img_out),784);
    bufp->fullWData(oldp+331,(vlSelf->dut__DOT__conv_pool1__DOT__pool_img_out),196);
    bufp->fullBit(oldp+338,(vlSelf->dut__DOT__conv_pool1__DOT__core_data_in_ready));
    bufp->fullBit(oldp+339,(vlSelf->dut__DOT__conv_pool1__DOT__core_data_out_ready));
    bufp->fullIData(oldp+340,(vlSelf->dut__DOT__conv_pool1__DOT__cur_oc),32);
    bufp->fullIData(oldp+341,(vlSelf->dut__DOT__conv_pool1__DOT__ConvBlock__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+342,(vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__popcount),8);
    bufp->fullIData(oldp+343,(vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__cur_ic),32);
    bufp->fullIData(oldp+344,(vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__row),32);
    bufp->fullIData(oldp+345,(vlSelf->dut__DOT__conv_pool1__DOT__core__DOT__col),32);
    bufp->fullWData(oldp+346,(vlSelf->dut__DOT__conv_pool2__DOT__core_weight),144);
    bufp->fullWData(oldp+351,(vlSelf->dut__DOT__conv_pool2__DOT__core_img_out),144);
    bufp->fullQData(oldp+356,(vlSelf->dut__DOT__conv_pool2__DOT__pool_img_out),36);
    bufp->fullBit(oldp+358,(vlSelf->dut__DOT__conv_pool2__DOT__core_data_in_ready));
    bufp->fullBit(oldp+359,(vlSelf->dut__DOT__conv_pool2__DOT__core_data_out_ready));
    bufp->fullIData(oldp+360,(vlSelf->dut__DOT__conv_pool2__DOT__cur_oc),32);
    bufp->fullIData(oldp+361,(vlSelf->dut__DOT__conv_pool2__DOT__ConvBlock__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+362,(vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__popcount),8);
    bufp->fullIData(oldp+363,(vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__cur_ic),32);
    bufp->fullIData(oldp+364,(vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__row),32);
    bufp->fullIData(oldp+365,(vlSelf->dut__DOT__conv_pool2__DOT__core__DOT__col),32);
    bufp->fullIData(oldp+366,(vlSelf->dut__DOT__fc__DOT__cur_ic),32);
    bufp->fullIData(oldp+367,(vlSelf->dut__DOT__fc__DOT__cur_oc),32);
    bufp->fullSData(oldp+368,(vlSelf->dut__DOT__fc__DOT__temp_out),16);
    bufp->fullIData(oldp+369,(vlSelf->dut__DOT__fc__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+370,(vlSelf->clk));
    bufp->fullBit(oldp+371,(vlSelf->data_in_ready));
    bufp->fullBit(oldp+372,(vlSelf->data_out_ready));
}
