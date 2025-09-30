#include "header.h"

void mx_handle_error(int error) {
    char *message = NULL;

    if (error == USAGE) {
        message = USAGE_ERROR_MESSAGE;
    }
    else if (error == MAP_DOESNT_EXIST) {
        message = MAP_DOESNT_EXIST_ERROR_MESSAGE;
    }
    else if (error == MAP_ERROR) {
        message = MAP_ERROR_ERROR_MESSAGE;
    }
    else if (error == POINTS_OUT_OF_RANGE) {
        message = POINTS_OUT_OF_RANGE_ERROR_MESSAGE;
    }
    else if (error == ENTRY_POINT_IS_OBSTACLE) {
        message = ENTRY_POINT_IS_OBSTACLE_ERROR_MESSAGE;
    }
    else if (error == EXIT_POINT_IS_OBSTACLE) {
        message = EXIT_POINT_IS_OBSTACLE_ERROR_MESSAGE;
    }
    else if (error == ROUTE_NOT_FOUND) {
        message = ROUTE_NOT_FOUND_ERROR_MESSAGE;
    }
    else {
        message = DEFAULT_ERROR_MESSAGE_ERROR_MESSAGE;
    }
    mx_printerr(message);
}









