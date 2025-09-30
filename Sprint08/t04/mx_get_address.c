#include "get_address.h"
#include <stdio.h>

char *mx_get_address(void *p) {
    char *temp_hex_address = mx_nbr_to_hex((unsigned long) p);
    char *pointer_address = mx_strnew(mx_strlen(temp_hex_address) + 2);
    pointer_address[0] = '0';
    pointer_address[1] = 'x';
    for (int i = 0; i < mx_strlen(temp_hex_address); i++) {
        pointer_address[i + 2] = temp_hex_address[i];
    }
    return pointer_address;
}

















