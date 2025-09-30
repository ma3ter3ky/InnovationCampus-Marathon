#include <stdlib.h>
#include <stdbool.h>

char *mx_strtrim(const char *str);
bool mx_isspace(char c);
char *mx_strnew(const int size);
void mx_strdel(char **str);
int mx_strlen(const char *s);
char *mx_strncpy(char *dst, const char *src, int len);

char *mx_del_extra_whitespaces(const char *str) {
    if (str == NULL) {
        return NULL;
    }
    char *trimmed_string = mx_strtrim(str);
    if (trimmed_string == NULL) {
        return NULL;
    }
    int length_of_the_cleaned_string = 0;
    bool in_word = false;
    for (int i = 0; trimmed_string[i] != '\0'; i++) {
        if (!mx_isspace(trimmed_string[i])) {
            length_of_the_cleaned_string++;
            in_word = true;
        } else if (in_word) {
            length_of_the_cleaned_string++;
            in_word = false;
        }
    }

    char *cleaned = mx_strnew(length_of_the_cleaned_string - 1);
    if (cleaned == NULL) {
        mx_strdel(&trimmed_string);
        return NULL;
    }
    int j = 0;
    in_word = false;
    for (int i = 0; i < mx_strlen(trimmed_string) && j < length_of_the_cleaned_string; i++) {
        if (!mx_isspace(trimmed_string[i])) {
            cleaned[j++] = trimmed_string[i];
            in_word = true;
        } else if (in_word) {
            cleaned[j++] = ' ';
            in_word = false;
            while (mx_isspace(trimmed_string[i + 1])) {
                i++;
            }
        }
    }
    cleaned[length_of_the_cleaned_string] = '\0';
    mx_strdel(&trimmed_string);
    return cleaned;
}







