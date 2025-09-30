void mx_swap_char(char *s1, char *s2);
int mx_strlen(const char *s);

void mx_str_reverse(char *s) {
    int i = 0;
    int j = mx_strlen(s) - 1;

    while (i < j) {
        mx_swap_char(&s[i], &s[j]);
        i++;
        j--;
    }
}

















