#include "header.h"


int main(int argc, char *argv[]) {
    if (argc != 6)  {
        mx_handle_error(USAGE);
        exit(1);
    }
    char *filename = argv[1];
    int start_x, start_y, end_x, end_y;
    start_x = mx_atoi(argv[2]);
    start_y = mx_atoi(argv[3]);
    end_x = mx_atoi(argv[4]);
    end_y = mx_atoi(argv[5]);
    t_two_dimensional_array_and_sizes array = read_file_to_array(filename);
    process_aguments(array.array, array.rows, array.cols, start_x, start_y, end_x, end_y);
    lee_algr(array.array, array.rows, array.cols, start_x, start_y, end_x, end_y);
}






