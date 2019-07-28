#include <unistd.h>

void mx_printchar(char c);

static void output_spaces(int n, char symbol) {
	for (int i = 0; i < n; i++)
		mx_printchar(' ');
	mx_printchar(symbol);
}

static void output_tringles(int n, int *space, int i) {
	output_spaces(space[0]--, '/');
	output_spaces(space[1], '\\');
	space[1] += 2;

	if(i < n / 2 - 1)
		output_spaces(space[2]++, '\\');
	else
		output_spaces(--space[2], '|');
	mx_printchar('\n');
}

void mx_pyramid(int n) {
	int space[3] = {n - 1, 1, 1};

	if (n < 2)
		return;
	else if (n % 2 != 0) {
		mx_printchar('\n');
		return;
	}
	output_spaces(space[0]--, '/');
	write(1, "\\\n", 2);
	for (int i = 0; i < n - 2; i++)
		output_tringles(n, space, i);
	mx_printchar('/');
	for (int i = 0; i < ((2 * n) - 3); i++)
		mx_printchar('_');
	write(1, "\\|\n", 3);
}
