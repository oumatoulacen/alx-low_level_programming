#!/bin/bash
gcc -Wall -pedantic -Werror -fPIC *.c
gcc -Wall -pedantic -Werror -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
