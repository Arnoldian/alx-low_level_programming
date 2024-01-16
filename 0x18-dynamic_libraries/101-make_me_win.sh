#!/bin/bash

wget -P /tmp/ https://raw.github.com/Arnoldian/alx-low_level_programming/master/0x18-dynamic_libraries/new_rand.so
export LD_PRELOAD=/tmp/new_rand.so
