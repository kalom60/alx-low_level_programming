#!/bin/bash
wget -P $PWD https://github.com/kalom60/alx-low_level_programming/master/0x18-dynamic_libraries/random.so
export LD_PRELOAD=$PWD/random.so
