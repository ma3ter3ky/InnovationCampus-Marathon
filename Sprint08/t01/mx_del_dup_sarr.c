#include "duplicate.h"

t_intarr *mx_del_dup_arr(t_intarr *src) {
    if (src == NULL || src->arr == NULL || src->size <= 0) {
        return NULL;
    }
    t_intarr *temp_array = malloc(sizeof(t_intarr));
    if (temp_array == NULL) {
        return NULL;
    }
    temp_array->arr = malloc(src->size * sizeof(int));
    if (temp_array->arr == NULL) {
        free(temp_array);
        return NULL;
    }
    int unique_count = 0;
    for (int i = 0; i < src->size; i++) {
        int j;
        for (j = 0; j < unique_count; j++) {
            if (src->arr[i] == temp_array->arr[j]) {
                break;
            }
        }
        if (j == unique_count) {
            temp_array->arr[unique_count++] = src->arr[i];
        }
    }

    t_intarr *no_dup_arr = mx_copy_int_arr(temp_array->arr, unique_count);
    free(temp_array);
    if (no_dup_arr == NULL) {
        return NULL;
    }
    no_dup_arr->size = unique_count;
    return no_dup_arr;
}














