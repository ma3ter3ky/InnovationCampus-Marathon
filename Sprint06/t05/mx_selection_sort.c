#include <stdio.h>

int mx_strlen(const char *s);
int mx_strcmp(const char *s1, const char *s2);

int mx_selection_sort(char **arr, int size) {
    int swap_operations_counter = 0;
    for (int i = 0; i < size - 1; i++) {
        int min_element_index = i;
        for (int j = i + 1; j < size; j++) {
            if (mx_strlen(arr[j]) < mx_strlen(arr[min_element_index]) ||
                (mx_strlen(arr[j]) == mx_strlen(arr[min_element_index]) && mx_strcmp(arr[j], arr[min_element_index]) < 0)) {
                min_element_index = j;
            }
        }
        if (min_element_index != i) {
            char *temp = arr[i];
            arr[i] = arr[min_element_index];
            arr[min_element_index] = temp;
            swap_operations_counter++;
        }
    }
    return swap_operations_counter;
}






