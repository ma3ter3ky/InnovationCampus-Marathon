#include <stdlib.h>

void mx_printchar(char c);

void mx_printint(int n) {
    if (n < 0) {
        mx_printchar('-');
        n *= -1;
    }
    int temporary_number = n;
    int length_of_number = 0;
    if (n == 0) {
        length_of_number = 1;
    }
    while (temporary_number > 0) {
        temporary_number /= 10;
        length_of_number++;
    }
    int *array_of_digits;
    array_of_digits = malloc(length_of_number * sizeof(int));
    for (int i = 0; i < length_of_number; i++) {
        array_of_digits[i] = n % 10;
        n /= 10;
    }
    for (int i = length_of_number - 1; i >= 0; i--){
        mx_printchar((char) (array_of_digits[i] + '0'));
    }
    free(array_of_digits);
}





















