#include <stdlib.h>

int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strcat(char *s1, const char *s2);
char *mx_strdup(const char *str);

char *mx_concat_words(char **words) {
    if (words == NULL || *words == NULL) {
        return NULL;
    }
    int length_of_sentence = 0;
    for (int i = 0; words[i] != NULL; i++) {
        length_of_sentence += mx_strlen(words[i]);
        if (words[i + 1] != NULL) length_of_sentence++;
    }
    char *output_sentence = mx_strnew(length_of_sentence);
    if (!output_sentence) {
        return NULL;
    }
    for (int i = 0; words[i] != NULL; i++) {
        mx_strcat(output_sentence, words[i]);
        if (words[i + 1] != NULL) {
            mx_strcat(output_sentence, " ");
        }
    }
    return output_sentence;
}












