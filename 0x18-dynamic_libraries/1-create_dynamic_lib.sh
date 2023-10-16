#!/bin/bash
gcc -c -fPIC *.c
fcc -shared -o liball.so *.o