#include "header.h"

void process_aguments(int **array, int rows, int cols, int start_x, int start_y, int end_x, int end_y) {
    if (start_x < 0 || start_x >= cols || start_y < 0 || start_y >= rows
    | end_x < 0 || end_x >= rows || end_y < 0 || end_y >= cols) {
        mx_handle_error(POINTS_OUT_OF_RANGE);
        exit(1);
    }
    if (array[start_y][start_x] == -1) {
        mx_handle_error(ENTRY_POINT_IS_OBSTACLE);
        exit(1);
    }
    if (array[end_y][end_x] == -1) {
        mx_handle_error(EXIT_POINT_IS_OBSTACLE);
        exit(1);
    }
}












