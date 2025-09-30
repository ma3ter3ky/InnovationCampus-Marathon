#include <stdbool.h>

int mx_count_words(const char *str, char delimiter) {
    int words_counter = 0;
    bool is_in_word = false;
    while (*str!= '\0') {
        if (*str == delimiter) {
            is_in_word = false;
        }
        else if (!is_in_word) {
                words_counter++;
                is_in_word = true;
        }
        str++;
    }
    return words_counter;
}













