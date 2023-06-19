#!/bin/bash
gcc -Wall -pedantic -Werror -fPIC *.c
gcc -shared -o liball.so *.o
