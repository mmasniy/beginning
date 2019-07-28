#include <unistd.h>

int mx_strlen(const char *s);

void mx_printstr(const char *s) {

	int i;

	i = 0;
	while(s[i]) {
		write(1, &s[i], 1);
		i++;
	}
}
