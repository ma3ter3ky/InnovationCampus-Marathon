#include <stdbool.h>

void mx_printchar(char c);

void mx_str_separate(const char *str, char delim) {
    int iterator = 0;
    bool is_fragment = false;

    while (str[iterator] != '\0') {
        if (str[iterator] == delim) {
            if (!is_fragment) {
                mx_printchar('\n');
                is_fragment = true;
            }
        }
        else {
            is_fragment = false;
            mx_printchar(str[iterator]);
        }
        iterator++;
    }
}








