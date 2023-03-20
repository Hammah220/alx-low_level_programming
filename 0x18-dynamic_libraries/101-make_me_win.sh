#!/bin/bash
wget -O /tmp/libmask.so https://github.com/ShagizMan/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libmask.so
export LD_PRELOAD=/tmp/libmask.so
