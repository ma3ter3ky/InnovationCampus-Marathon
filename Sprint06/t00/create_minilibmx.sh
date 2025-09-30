#!/bin/bash

COMPILER="clang"
CFLAGS=(-std=c11 -Wall -Wextra -Werror -Wpedantic)
LIBNAME="minilibmx.a"

$COMPILER "${CFLAGS[@]}" -c *.c
ar rcs $LIBNAME *.o
ranlib $LIBNAME
rm -f *.o










