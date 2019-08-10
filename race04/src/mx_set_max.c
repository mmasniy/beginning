#include "lib.h"

int mx_search_max(t_map *map) {
    int max = 0;

    for (int i = 0; i < map->size_y; i++)
        for (int j = 0; j < map->size_x; j++)
            if (map->path[i][j] > max)
                max = map->path[i][j];
    return max;
}

int mx_set_max(t_map *map, int x, int y) {
    int max = mx_search_max(map);

    for (int i = 0; i < map->size_y; i++)
        for (int j = 0; j < map->size_x; j++)
            if (map->path[i][j] == max) {
                if (i == y && j == x)
                    map->map[i][j] = 'X';
                else
                    map->map[i][j] = 'D';
            }
    return max;
}
