#include "lib.h"

void mx_invalid_usage() {
    mx_printerr(USAGE);
}

void mx_map_not_exist() {
    mx_printerr(MAP_NOT_EXIST);
    exit(0);
}

void mx_points_out_of_map() {
    mx_printerr(POINTS_OUT);
}

void mx_start_point_obstacle() {
    mx_printerr(ENTRY);
}

void mx_exit_point_obstacle() {
    mx_printerr(EXIT);
}

void mx_route_not_found() {
    mx_printerr(ROUTE_NOT_FOUND);
}

void mx_error() {
    mx_printerr(ERROR);
}

void mx_map_error() {
    mx_printerr(MAP_ERR);
}
