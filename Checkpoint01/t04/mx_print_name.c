#include <unistd.h>

void mx_printchar(char c) {
    write(1, &c, 1);
}

void mx_printint(int n) {
    if (n == -2147483648) {
        mx_printchar('-');
        mx_printchar('2');
        mx_printint(147483648);
        return;
    }
    if (n < 0) {
        mx_printchar('-');
        n = -n;
    }
    if (n / 10) {
        mx_printint(n / 10);
    }
    mx_printchar(n % 10 + '0');
}


int mx_strlen(const char *s) {
    int length = 0;

    while (s[length] != '\0') {
        length++;
    }
    return length;
}

void mx_printstr(const char *s) {
    write(1, s, mx_strlen(s));
}

int main(int argc, char *argv[]) {
    mx_printstr(argv[0]);
    mx_printchar('\n');
    mx_printint(argc);
    mx_printchar('\n');

    return 0;
}





