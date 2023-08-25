#!/bin/bash
gcc -shared -o libgigmill.so -fPIC gigamill.c
export LD_PRELOAD=$PWD/libgigmill.so:$LD_LIBRARY_PATH
