void mx_printchar(char c);

void mx_print_horizontal_line(const int amount_of_horizontal_chars){
    mx_printchar('+');
    for (int i = 0; i < amount_of_horizontal_chars; i++) {
        mx_printchar('-');
    }
    mx_printchar('+');
}

void mx_cube (int n) {
    if (n <= 1){
        return;
    }

    int amount_of_spaces = n / 2 + 1;
    const int amount_of_horizontal_chars = n * 2;
    const int amount_of_diagonal_lines = n / 2;

    // printing first horizontal layer
    for (int i = 0; i < amount_of_spaces; i++) {
        mx_printchar(' ');
    }
    mx_print_horizontal_line(amount_of_horizontal_chars);
    mx_printchar('\n');

    // printing depth side
    for (int i = 0; i < amount_of_diagonal_lines; i++) {
        for (int j = i + 1; j < amount_of_spaces; j++) {
            mx_printchar(' ');
        }
        mx_printchar('/');
        for (int j = 0; j < amount_of_horizontal_chars; j++) {
            mx_printchar(' ');
        }
        mx_printchar('/');
        for (int j = 0; j < i; j++) {
            mx_printchar(' ');
        }
        mx_printchar('|');
        mx_printchar('\n');
    }

    // printing second horizontal layer
    mx_print_horizontal_line(amount_of_horizontal_chars);
    for (int i = 0; i < amount_of_spaces - 1; i++) {
        mx_printchar(' ');
    }
    mx_printchar('|');
    mx_printchar('\n');

    // printing front side
    for (int i = 0; i < n - amount_of_diagonal_lines - 1; i++) {
        mx_printchar('|');
        for (int j = 0; j < amount_of_horizontal_chars; j++) {
            mx_printchar(' ');
        }
        mx_printchar('|');
        for (int j = 0; j < amount_of_spaces - 1; j++) {
            mx_printchar(' ');
        }
        mx_printchar('|');
        mx_printchar('\n');
    }

    // printing down back side
    mx_printchar('|');
    for (int j = 0; j < amount_of_horizontal_chars; j++) {
        mx_printchar(' ');
    }
    mx_printchar('|');
    for (int i = 0; i < amount_of_spaces - 1; i++) {
        mx_printchar(' ');
    }
    mx_printchar('+');
    mx_printchar('\n');

    // printing front side and down layer
    for (int i = 0; i < amount_of_diagonal_lines; i++) {

        mx_printchar('|');
        for (int j = 0; j < amount_of_horizontal_chars; j++) {
            mx_printchar(' ');
        }
        mx_printchar('|');
        for (int j = amount_of_spaces - 2; j > i; j--) {
            mx_printchar(' ');
        }
        mx_printchar('/');
        mx_printchar('\n');
    }
    // printing down horizontal layer
    mx_print_horizontal_line(amount_of_horizontal_chars);
    mx_printchar('\n');

}














