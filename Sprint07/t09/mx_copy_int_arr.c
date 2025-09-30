#include <stdlib.h>

int *mx_copy_int_arr(const int *src, int size) {
    if (src == NULL) {
        return NULL;
    }
    int *copied_array = malloc(size * sizeof(int));
    if (copied_array == NULL) {
        return NULL;
    }
    for (int i = 0; i < size; i++) {
        copied_array[i] = src[i];
    }
    return copied_array;
}















