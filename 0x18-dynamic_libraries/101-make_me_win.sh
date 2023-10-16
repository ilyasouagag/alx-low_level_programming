#!/bin/bash
wget -P /tmp https://github.com/ilyasouagag/alx-low_level_programming/raw/master/0x18-dynamic_libraries/lib_adv.so
export LD_PRELOAD=/tmp/lib_adv.so