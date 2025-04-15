#!bin/bash

verilator --cc dut.sv
verilator -Wall --trace -cc dut.sv --exe tb_conv.cpp
make -C obj_dir -f Vdut.mk Vdut
./obj_dir/Vdut
gtkwave waveform.vcd