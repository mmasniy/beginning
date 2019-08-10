#include "lib.h"
#include "errors.h"

bool mx_check_points_1(int x, int y, int s_p_x, int s_p_y) {
    if (s_p_x < 0 || s_p_x > x - 1)
        return false;
    if (s_p_y < 0 || s_p_y > y - 1)
        return false;
    return true;
}

bool mx_check_points_2(int x, int y, int e_p_x, int e_p_y) {
    if (e_p_x < 0 || e_p_x > x - 1)
        return false;
    if (e_p_y < 0 || e_p_y > y - 1)
        return false;
    return true;
}

void mx_start_logic(char **argv, int x, int y) {
    int start_point_x;
    int start_point_y;
    int end_point_x;
    int end_point_y;

    if(mx_atoi(argv[2], &start_point_x)
        && mx_atoi(argv[3], &start_point_y)
        && mx_atoi(argv[4], &end_point_x)
        && mx_atoi(argv[5], &end_point_y))
    {
        if(mx_check_points_1(x, y, start_point_x, start_point_y)
            && mx_check_points_2(x, y, end_point_x, end_point_y)) {
            t_map *my_map = mx_create_map(argv[1], x, y);
            mx_BFS(my_map, start_point_x, start_point_y);

            if (my_map->path[end_point_y][end_point_x] != 0) {
                mx_DFS(my_map, end_point_x, end_point_y);
                mx_print_result(my_map, end_point_x, end_point_y);
            }
            else
                mx_route_not_found();
        }
    }
    else
        mx_error();
}
