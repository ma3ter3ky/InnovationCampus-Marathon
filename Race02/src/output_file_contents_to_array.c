#include "header.h"

void get_dimenesions(const char *filename, int *rows, int *cols) {
    int file_descriptor = open(filename, O_RDONLY);
    if (file_descriptor == -1) {
        mx_handle_error(MAP_DOESNT_EXIST);
        exit(1);
    }
    char buffer;
    int bytesRead;
    int rows_amount = 0, cols_amount = 0;
    int curr_row_length = 0;
    bool next_is_object = true; // obstacle or empty space
    while ((bytesRead = read(file_descriptor, &buffer, 1)) > 0) {
        if (buffer == '\n') {
            if (cols_amount == 0){
                cols_amount = curr_row_length;
                curr_row_length = 0;
                rows_amount++;
                next_is_object = true;
            }
            else {
                if (curr_row_length == cols_amount) {
                    rows_amount++;
                    curr_row_length = 0;
                    next_is_object = true;
                }
                else {
                    mx_handle_error(MAP_ERROR);
                    exit(1);
                }
            }
        }
        else {
            if (next_is_object) {
                if (buffer == '#' || buffer == '.') {
                    curr_row_length++;
                    next_is_object = false;
                }
                else {
                    mx_handle_error(MAP_ERROR);
                    exit(1);
                }
            }
            else {
                if (buffer != ',') {
                    mx_handle_error(MAP_ERROR);
                    exit(1);
                }
                next_is_object = true;
            }
        }
    }
    *rows = rows_amount;
    *cols = cols_amount;
}

void fill_the_array_of_objects(int ***array_of_objects, const char *filename) {
    int file_descriptor = open(filename, O_RDONLY);
    if (file_descriptor == -1) {
        mx_handle_error(MAP_DOESNT_EXIST);
        exit(1);
    }
    char buffer;
    int bytesRead;
    int curr_pos_row = 0, curr_pos_col = 0;

    while ((bytesRead = read(file_descriptor, &buffer, 1)) > 0) {
        if (buffer == '\n') {
            curr_pos_row++;
            curr_pos_col = 0;
        }
        else {
            if (buffer == '#') {
                (*array_of_objects)[curr_pos_row][curr_pos_col] = -1;
                curr_pos_col++;
            }
            else if (buffer == '.') {
                (*array_of_objects)[curr_pos_row][curr_pos_col] = 0;
                curr_pos_col++;
            }

        }
    }
}

t_two_dimensional_array_and_sizes read_file_to_array(const char *filename) {
    int rows = 0, cols = 0;
    get_dimenesions(filename, &rows, &cols);
    t_two_dimensional_array_and_sizes array_of_objects;
    array_of_objects.rows = rows;
    array_of_objects.cols = cols;

    array_of_objects.array = malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        array_of_objects.array[i] = malloc(cols * sizeof(int));
    }
    fill_the_array_of_objects(&array_of_objects.array, filename);
    return array_of_objects;

}











