int mx_strncmp(const char *s1, const char *s2, int n) {
    int iterator = 0;
    while ((s1[iterator] != '\0' || s2[iterator] != '\0') && (iterator < n)) {
        if (s1[iterator] != s2[iterator]) {
            return s1[iterator] - s2[iterator];
        }
        iterator++;
    }
    return 0;
}




















