#include <stdio.h>

void reverse_part_of_array(int *arr, int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void mx_arr_rotate(int *arr, int size, int shift) {
    shift %= size;
    if (shift < 0) {
        shift += size;
    }
    reverse_part_of_array(arr, 0, size - 1);
    reverse_part_of_array(arr, 0, shift - 1);
    reverse_part_of_array(arr, shift, size - 1);
}









