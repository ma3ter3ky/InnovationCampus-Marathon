int mx_strlen(const char *s);

char *mx_strcat(char *s1, const char *s2) {
    int length1 = mx_strlen(s1);
    int length2 = mx_strlen(s2);

    for (int i = 0; i < length2; i++) {
        s1[i + length1] = s2[i];
    }
    s1[length1 + length2] = '\0';
    return s1;
}


















