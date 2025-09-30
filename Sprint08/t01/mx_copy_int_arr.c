#include "duplicate.h"

t_intarr *mx_copy_int_arr(const int *src, int size) {
    if (src == NULL) {
        return NULL;
    }
    t_intarr *copied_array = malloc(sizeof(t_intarr));
    if (copied_array == NULL) {
        return NULL;
    }
    copied_array->arr = malloc(size * sizeof(int));
    if (copied_array->arr == NULL) {
        free(copied_array);
        return NULL;
    }
    for (int i = 0; i < size; i++) {
        copied_array->arr[i] = src[i];
    }
    copied_array->size = size;
    return copied_array;
}









