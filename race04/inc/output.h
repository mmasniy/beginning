#ifndef output_h
#define output_h
#include "structs.h"

void mx_print_file(t_map *map);
void mx_print_result(t_map *map, int exit_x, int exit_y);

void mx_printint(int num);
void mx_printstr(const char *s);
void mx_printerr(const char *s);
unsigned mx_strlen(const char *s);

#endif
