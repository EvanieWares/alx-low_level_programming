#!/bin/bash
gcc -shared -fPIC printf.c -o jackpot.so
export LD_PRELOAD=./jackpot.so:$LD_LIBRARY_PATH