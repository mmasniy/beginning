#include "lib.h"

static void mx_printchar(char c) {
    write(1, &c, 1);
}

static void mx_printnum(int num) {
    if (num > 9)
        mx_printnum(num / 10);
    mx_printchar(num % 10 + 48);
}

void mx_printint(int num) {
    if (num == -2147483648) {
        write(1, "-2147483648", 11);
        return;
    }
    if (num < 0) {
        write(1, "-", 1);
        num *= -1;
    }
    mx_printnum(num);
}

void mx_printstr(const char *s) {
    write(1, s, mx_strlen(s));
}

void mx_printerr(const char *s) {
    write(2, s, mx_strlen(s));
}

unsigned mx_strlen(const char *s) {
    unsigned i = 0;

    if (s == NULL)
        return 0;

    while (s[i])
        i++;

    return i;
}
