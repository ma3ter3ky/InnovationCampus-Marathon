#pragma once

#include <stdlib.h>

typedef struct s_intarr {
    int *arr;
    int size;
} t_intarr;

t_intarr *mx_copy_int_arr(const int *src, int size);
t_intarr *mx_del_dup_arr(t_intarr *src);









