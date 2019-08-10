#include "lib.h"

bool check_map(char *filename, int x, int y) {
	int file = open(filename, O_RDONLY);
	char buffer;

	for (int i = 0; i < y; i++) {
		for (int j = 0; read(file, &buffer, 1) > 0 && j < x; j++) {
			if (j % 2 == 0 && buffer != '#' && buffer != '.') {
				close(file);
				return false;
			}
			else if (j % 2 && buffer != ',' && buffer != '\n') {
				close(file);
				return false;
			}
		}
	}

	close(file);
	return true;
}

int count_line(char *filename) {
	int file = open(filename, O_RDONLY);
	int size_line1 = 0;
	char buffer;

	while (read(file, &buffer, 1) > 0 && buffer != '\n')
		size_line1++;

	close(file);
	return size_line1 + 1;
}

bool mx_get_size(char *filename, int *x, int *y) {
	int file;
	char buffer;
	int size_line2 = 0;
	int size_line1 = count_line(filename);

	if ((file = open(filename, O_RDONLY)) < 0)
		return false;

	while (read(file, &buffer, 1) > 0 && ++(*x)) {
		for (size_line2 = 1; buffer != '\n' && read(file, &buffer, 1) > 0; size_line2++) {
			if (buffer == '\n')
				(*y)++;
			else if (buffer != ',' || buffer == '.' || buffer == '#')
				(*x)++;
		}
		if (size_line1 != size_line2)
			mx_map_error();
	}
	(*x) /= (*y);
	close(file);

	return check_map(filename, *x, *y);
}
