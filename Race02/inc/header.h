#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <fcntl.h>

#define MAX_SIZE 5

#define USAGE_ERROR_MESSAGE "usage: ./way_home [file_name] [x1] [y1] [x2] [y2]\n"
#define MAP_DOESNT_EXIST_ERROR_MESSAGE "map does not exist\n"
#define MAP_ERROR_ERROR_MESSAGE "map error\n"
#define POINTS_OUT_OF_RANGE_ERROR_MESSAGE "points are out of map range\n"
#define ENTRY_POINT_IS_OBSTACLE_ERROR_MESSAGE "entry point cannot be an obstacle\n"
#define EXIT_POINT_IS_OBSTACLE_ERROR_MESSAGE "exit point cannot be an obstacle\n"
#define ROUTE_NOT_FOUND_ERROR_MESSAGE "route not found\n"
#define DEFAULT_ERROR_MESSAGE_ERROR_MESSAGE "error\n"

typedef struct s_queue_node{
    int x;
    int y;
    int dist;
} t_queue_node;

typedef struct s_two_dimensional_array_and_sizes{
    int **array;
    int rows;
    int cols;
} t_two_dimensional_array_and_sizes;

enum e_error{
    MAP_DOESNT_EXIST,
    MAP_ERROR, // if there are forbidden characters or the map is not rectangular
    POINTS_OUT_OF_RANGE,
    ENTRY_POINT_IS_OBSTACLE,
    EXIT_POINT_IS_OBSTACLE,
    ROUTE_NOT_FOUND,
    DEFAULT_ERROR_MESSAGE,
    USAGE
};

int mx_strlen(const char *s);
void mx_printchar(char c);
void mx_printerr(const char *s);
void mx_handle_error(int error);
void mx_printstr(const char *s);
void mx_printint(int n);
int mx_atoi(const char *s);
void lee_algr(int **maze, int rows, int cols, int startX, int startY, int endX, int endY);
void process_aguments(int **array, int rows, int cols, int start_x, int start_y, int end_x, int end_y);
t_two_dimensional_array_and_sizes read_file_to_array(const char *filename);












