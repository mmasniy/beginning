#ifndef errors_h
#define errors_h

#define USAGE "usage: ./race04 [file_name] [x1] [y1] [x2] [y2]\n"
#define MAP_NOT_EXIST "map does not exist\n"
#define MAP_ERR "map error\n"
#define POINTS_OUT "points are out of map range\n"
#define ENTRY "entry point cannot be an obstacle\n"
#define EXIT "exit point cannot be an obstacle\n"
#define ROUTE_NOT_FOUND "route not found\n"
#define ERROR "error\n"

void mx_invalid_usage();
void mx_points_out_of_map();
void mx_start_point_obstacle();
void mx_exit_point_obstacle();
void mx_map_not_exist();
void mx_route_not_found();
void mx_map_error();
void mx_error();

#endif
