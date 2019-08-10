#include "lib.h"

static void add_new_points(t_map *map, int x, int y, int temp_step) {
    if (x > 0 && map->path[y][x - 1] == 0
        && map->map[y][x - 1] != '#')
            mx_push_back(map->queue, mx_create_node(x - 1, y, temp_step + 1));

    if (y > 0 && map->path[y - 1][x] == 0
        && map->map[y - 1][x] != '#')
            mx_push_back(map->queue, mx_create_node(x, y - 1, temp_step + 1));

    if (x + 1 < map->size_x && map->path[y][x + 1] == 0
        && map->map[y][x + 1] != '#')
            mx_push_back(map->queue, mx_create_node(x + 1, y, temp_step + 1));

    if (y + 1 < map->size_y && map->path[y + 1][x] == 0
        && map->map[y + 1][x] != '#')
            mx_push_back(map->queue, mx_create_node(x, y + 1, temp_step + 1));
}

void mx_BFS(t_map *map, int x, int y) {
    t_node *node = NULL;

    mx_push_back(map->queue, mx_create_node(x, y, 0));
    while (map->queue->head) {
        node = mx_pop_front(map->queue);

        map->path[node->y][node->x] = node->prev_step + 1;
        add_new_points(map, node->x, node->y, node->prev_step);

        free(node);
    }
}

static void get_coords(t_map *map, int *x, int *y) {
    if (*x > 0 && map->path[*y][*x - 1] != 0
        && map->path[*y][*x - 1] + 1 == map->path[*y][*x])
            *x -= 1;

    else if (*y > 0 && map->path[*y - 1][*x] != 0
        && map->path[*y - 1][*x] + 1 == map->path[*y][*x])
            *y -= 1;

    else if (*x + 1 < map->size_x && map->path[*y][*x + 1] != 0
        && map->path[*y][*x + 1] + 1 == map->path[*y][*x])
            *x += 1;

    else if (*y + 1 < map->size_y && map->path[*y + 1][*x] != 0
        && map->path[*y + 1][*x] + 1 == map->path[*y][*x])
            *y += 1;
}

void mx_DFS(t_map *map, int x, int y) {
    int step = map->path[y][x];
    map->map[y][x] = '*';

    while (step != 1) {
        get_coords(map, &x, &y);
        map->map[y][x] = '*';
        step--;
    }
}
