#include <stdlib.h>

int *mx_copy_int_arr(const int *src, int size);

int *mx_del_dup_arr(int *src, int src_size, int *dst_size) {
    if (src == NULL || dst_size == NULL || src_size <= 0) {
        return NULL;
    }
    int *temp = malloc(src_size * sizeof(int));
    if (temp == NULL) {
        return NULL;
    }

    int unique_count = 0;
    for (int i = 0; i < src_size; i++) {
        int j;
        for (j = 0; j < unique_count; j++) {
            if (src[i] == temp[j]) {
                break;
            }
        }
        if (j == unique_count) {
            temp[unique_count++] = src[i];
        }
    }

    int *no_dup_arr = mx_copy_int_arr(temp, unique_count);
    free(temp);

    if (no_dup_arr == NULL) {
        return NULL;
    }

    *dst_size = unique_count;
    return no_dup_arr;
}














