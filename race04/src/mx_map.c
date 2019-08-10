#include "lib.h"

char **mx_get_map(char *file, int x, int y) {
    char temp;
    char **map = (char **)malloc(sizeof(char *) * y);
    int f_file = open(file, O_RDONLY);

	for (int i = 0; i < y; i++)
        map[i] = (char *)malloc(sizeof(char) * x);

    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            read(f_file, &map[i][j], 1);
            read(f_file, &temp, 1);
        }
    }
    return map;
}

t_map *mx_create_map(char *file, int x, int y) {
    t_map *new_map = (t_map *)malloc(sizeof(t_map));

    if (new_map) {
        new_map->size_x = x;
        new_map->size_y = y;
	    new_map->queue = mx_create_queue();

        new_map->path = (int **)malloc(sizeof(int *) * y);
	    for (int i = 0; i < y; i++) {
            new_map->path[i] = (int *)malloc(sizeof(int) * x);
            for (int j = 0; j < 11; j++)
                new_map->path[i][j] = 0;
        }

        new_map->map = mx_get_map(file, x, y);
    }
    return new_map;
}

void mx_delete_map(t_map *map) {
    for (int i = 0; i < map->size_y; i++) {
        free(map->path[i]);
        free(map->map[i]);
    }

    mx_delete_queue(map->queue);
    free(map->path);
    free(map->map);
}
