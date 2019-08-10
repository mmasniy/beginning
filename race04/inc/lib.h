#ifndef lib_h
#define lib_h

#include "errors.h"
#include "output.h"
#include "structs.h"
#include "check_args.h"

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

int count_line(char *filename);
bool check_map(char *filename, int x, int y);
bool mx_get_size(char *filename, int *x, int *y);

void mx_start_logic(char **argv, int x, int y);
char **mx_get_map(char *file, int x, int y);

void mx_BFS(t_map *map, int x, int y);
void mx_DFS(t_map *map, int x, int y);

int mx_search_max(t_map *map);
int mx_set_max(t_map *map, int x, int y);

#endif
