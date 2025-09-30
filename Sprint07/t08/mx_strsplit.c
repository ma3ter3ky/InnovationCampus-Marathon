#include <stdlib.h>
#include <stdbool.h>

int mx_count_words(const char *str, char delimiter);
void mx_strdel(char **str);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strnew(const int size);

char **mx_strsplit(const char *s, char c) {
    if (s == NULL) {
        return NULL;
    }

    int words = mx_count_words(s, c);
    char **arr = (char **)malloc((words + 1) * sizeof(char *));
    if (arr == NULL) {
        return NULL;
    }

    int wordIndex = 0, i = 0;
    while (*s != '\0') {
        if (*s != c) {
            const char *start = s;
            while (*s != c && *s != '\0') {
                s++;
            }
            int wordLength = s - start;
            arr[wordIndex] = mx_strnew(wordLength);
            if (arr[wordIndex] == NULL) {
                while (--wordIndex >= 0) {
                    mx_strdel(&arr[wordIndex]);
                }
                free(arr);
                return NULL;
            }
            mx_strncpy(arr[wordIndex], start, wordLength);
            wordIndex++;
        }
        if (*s != '\0') {
            s++;
        }
    }
    arr[words] = NULL;
    return arr;
}





