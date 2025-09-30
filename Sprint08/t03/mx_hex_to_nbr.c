#include "hex_to_nbr.h"

unsigned long mx_hex_to_nbr(const char *hex) {
    unsigned long return_num = 0;
    while (*hex != '\0') {
        if (mx_isdigit(*hex)) {
            return_num = return_num * 16 + (int) (*hex - '0');
        }
        else if (mx_isalpha(*hex)) {
            if (mx_islower(*hex)) {
                return_num = return_num * 16 + (int) (*hex - 'a' + 10);
            }
            else {
                return_num = return_num * 16 + (int) (*hex - 'A' + 10);
            }
        }
        else {
            return 0;
        }
        hex++;
    }
    return return_num;
}







