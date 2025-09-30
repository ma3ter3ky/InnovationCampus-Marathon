#include "header.h"

int main(int argc, char *argv[]) { 
    int lines_total = argc - 1;
    int words_total = 0;
    int chars_total = 0;
    if (argc < 2) {
        int lines = 0;
        int words = 0;
        int chars = 0; 
        char ch, prev_ch;
        while (read(0, &ch, 1)) {
            if (ch == '\n') {
                lines++;
                lines_total++;
            }
            if (mx_isspace(ch) && !mx_isspace(prev_ch)) {
                words++;
                words_total++;
            }
            chars++;
            chars_total++;
            prev_ch = ch;
        }
        mx_printchar('\t');
        mx_printint(lines);
        mx_printchar('\t');
        mx_printint(words);
        mx_printchar('\t');
        mx_printint(chars);
        mx_printchar('\n');
        return 0;
    }
    for (int i = 1; i < argc; i++) {
        int lines = 1;
        int words = 0;
        int chars = 0; 

        int fd = open(argv[i], O_RDONLY);
        char ch, prev_ch;

        if (fd < 0) {
            mx_printerr("mx_wc: ");
            mx_printerr(argv[i]);
            mx_printerr(": open: ");
            mx_printerr(strerror(errno));
            mx_printerr("\n");
            exit(0);
        }

        if (read(fd, &ch, 1) < 0 && errno == EISDIR) {
            mx_printerr("mx_wc: ");
            mx_printerr(argv[i]);
            mx_printerr(": read: ");
            mx_printerr(strerror(errno));
            mx_printerr("\n");
            exit(0);
        }
        if (close(fd) < 0) exit(0);
        fd = open(argv[i], O_RDONLY);
        while (read(fd, &ch, 1)) {
            if (ch == '\n') {
                lines++;
                lines_total++;
            }
            if (mx_isspace(ch) && !mx_isspace(prev_ch)) {
                words++;
                words_total++;
            }
            chars++;
            chars_total++;
            prev_ch = ch;
        }
        if (!mx_isspace(prev_ch)) {
            words++;
            words_total++;
        }
        if (mx_isspace(prev_ch)) {
            lines--;
            lines_total--;
        }

        if (close(fd) < 0) exit(0);
        mx_printchar('\t');
        mx_printint(lines);
        mx_printchar('\t');
        mx_printint(words);
        mx_printchar('\t');
        mx_printint(chars);
        mx_printchar('\t');
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }
    if (argc > 2) {
        mx_printchar('\t');
        mx_printint(lines_total);
        mx_printchar('\t');
        mx_printint(words_total);
        mx_printchar('\t');
        mx_printint(chars_total);
        mx_printstr("\ttotal\n");
    }
    return 0;
}

