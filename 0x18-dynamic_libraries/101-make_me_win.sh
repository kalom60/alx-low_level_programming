#!/bin/bash
wget -q --output-document=$PWD/random.so https://github.com/kalom60/alx-low_level_programming/raw/main/0x18-dynamic_libraries/random.so
export LD_PRELOAD=$PWD/random.so
