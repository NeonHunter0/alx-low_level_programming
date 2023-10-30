#!/bin/bash
gcc -c *.c
ar rcs liball.a *.o
ar rn liball.a *.o
