#include "lib.h"

int main(int argc, char **argv) {
	char buffer;
	int x = 0;
	int y = 0;

	if (argc == 6) {
		if (open(argv[1], O_RDONLY) < 0)
			mx_map_not_exist();
		if (read((open(argv[1], O_RDONLY)), &buffer, 1))
			mx_map_not_exist();
		if(mx_get_size(argv[1], &x, &y))
			mx_start_logic(argv, x, y);
	}
	else
		mx_invalid_usage();

	return 0;
}
