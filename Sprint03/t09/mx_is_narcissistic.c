#include <stdbool.h>

double mx_pow(double n, unsigned int pow);

bool mx_is_narcissistic(int num) {
    if (num < 0) {
        return false;
    }
    int value = 0;
    int num_copy = num;
    int length = 0;
    while (num_copy != 0) {
        num_copy /= 10;
        length++;
    }
    num_copy = num;
    while (num_copy != 0) {
        value += mx_pow(num_copy % 10, length);
        num_copy /= 10;
    }
    return value == num;
}

