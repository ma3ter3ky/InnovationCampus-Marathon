void mx_swap_char(char *s1, char *s2) {
    char tmp = *s1;
    *s1 = *s2;
    *s2 = tmp;
}

int mx_strlen(const char *s) {
    int length = 0;

    while (s[length] != '\0') {
        length++;
    }
    return length;
}

void mx_str_reverse(char *s) {
    int i = 0;
    int j = mx_strlen(s) - 1;

    while (i < j) {
        mx_swap_char(&s[i], &s[j]);
        i++;
        j--;
    }
}





