#include <stddef.h> 

int mx_strlen(const char *s);
char *mx_strchr(const char *s, int c);
int mx_strncmp(const char *s1, const char *s2, int n);

char *mx_strstr(const char *s1, const char *s2){
    int length_of_s2 = mx_strlen(s2);
    while (mx_strchr(s1, s2[0]) != NULL) {
        if (mx_strncmp(s1, s2, length_of_s2) == 0) {
            return (char *)s1;
        }
        s1++;
    }
    return 0;
}
















