int mx_strlen(const char *s);
char *mx_strstr(const char *s1, const char *s2);

int mx_count_substr(const char *str, const char *sub){
    if (mx_strlen(sub) == 0) {
        return 0;
    }
    int substring_counter = 0;
    char *found_substring = (char *) str;
    while ((found_substring = mx_strstr(found_substring, sub)) != NULL) {
        if (*found_substring == '\0') {
            break;
        }
        substring_counter++;
        found_substring++;
    }
    return substring_counter;
}












