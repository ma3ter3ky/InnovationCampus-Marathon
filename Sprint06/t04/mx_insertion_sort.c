#include <stdio.h>

int mx_strlen(const char *s);

int mx_insertion_sort(char **arr, int size) {
    int shift_counter = 0;
    if (!arr) {
        return -1;
    }
    for (int i = 1; i < size; i++) {
        char *current_key = arr[i];
        int j = i - 1;
        while ((j >= 0) && (mx_strlen(arr[j]) > mx_strlen(current_key))) {
            arr[j + 1] = arr[j];
            j = j - 1;
            shift_counter++;
        }
        arr[j + 1] = current_key;
    }
    return shift_counter;
}









