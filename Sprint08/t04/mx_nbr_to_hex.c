#include "get_address.h"

char *mx_nbr_to_hex(unsigned long nbr) {
    if (nbr == 0) {
        char *return_zero_string = mx_strnew(1);
        if (return_zero_string != NULL) {
            return_zero_string[0] = '0';
        }
        return return_zero_string;
    }
    int size_of_hex = 0;
    unsigned long num_copy = nbr;
    while(num_copy != 0) {
        num_copy /= 16;
        size_of_hex++;
    }
    char *hex_num = mx_strnew(size_of_hex);
    for (int i = size_of_hex - 1; i >= 0; i--) {
        short hex_digit = nbr % 16;
        hex_num[i] = hex_digit < 10 ? (hex_digit + '0') : (hex_digit - 10 + 'a');
        nbr /= 16;
    }
    return hex_num;
}






