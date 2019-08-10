#include "lib.h"

void mx_print_file(t_map *map) {
    int file = open("path.txt", 0x0601, 0600);

    if (file > 0) {
        for (int i = 0; i < map->size_y; i++) {
            for (int j = 0; j < map->size_x; j++)
                write(file, &map->map[i][j], 1);
            write(file, "\n", 1);
        }
        close(file);
    }
}

// печатает строки dist exit и число в формате ХХ
void mx_print_result(t_map *map, int exit_x, int exit_y) {
	int dist = mx_set_max(map, exit_x, exit_y);

	mx_printstr("dist=");
	mx_printint(dist);
	mx_printstr("\nexit=");
    mx_printint(map->path[exit_y][exit_x]);
    mx_printstr("\n");
		
	mx_print_file(map);
}
