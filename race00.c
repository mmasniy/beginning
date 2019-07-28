int mx_strlen(const char *s);

void mx_printchar(char c);

void mx_printstr(const char *s);

static void up_down_line(int wid){
	for(int i = 0; i < wid; i++) {
		if (wid == 1)
			mx_printstr("<=>");
		else if (i == 0)
			mx_printstr("<=");
		else if ((i >= 1) && (i < wid - 1))
			mx_printchar('-');
		else if (i == wid - 1)
			mx_printstr("=>");
	}
	mx_printchar('\n');
}

static void output_map(int len, int wid, int y, int x) {
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < (wid + 2); j++) {
			if ((y == i) && (x == j))
				mx_printchar('1');
			else if ((j >= 1) && (j <= wid))
				mx_printchar('0');
			if ((i % 2 == 0) && ((j == 0) || (j == (wid + 1))))
				mx_printchar('*');
			else if ((i % 2 != 0) && ((j == 0) || (j == (wid + 1))))
				mx_printchar('+');
		}
		mx_printchar('\n');
	}
}

void race00(int map_length, int map_width, int one_y, int one_x) {
	if (one_x >= 0 && one_x < map_width &&\
		one_y >= 0 && one_y < map_length &&\
		map_width > 0 && map_length > 0) {
			one_x++;
			up_down_line(map_width);
			output_map(map_length, map_width, one_y, one_x);
			up_down_line(map_width);
	}
}
