#include <stdio.h>
#include <stdbool.h>

bool mx_digit(int c);
bool mx_isspace(char c);
void mx_printchar(char c);
void mx_printint(int n);
int mx_strlen(const char *s);
int mx_atoi(const char *str);

int main(int argc, char *argv[]) {
    if (argc != 3) {
        return 0;
    }
    int l = mx_atoi(argv[1]);
    int r = mx_atoi(argv[2]);

    if (!(l > 0 && l < 10 && r > 0 && r < 10)) {
        return 0;
    }
    if (l > r) {
        int temp = l;
        l = r;
        r = temp;
    }
    for (int i = l; i <= r; i++) {
        for (int j = l; j <= r; j++) {
            mx_printint(i * j);
            (j == r) ? mx_printchar('\n') : mx_printchar('\t');
        }
    }
    return 0;
}








