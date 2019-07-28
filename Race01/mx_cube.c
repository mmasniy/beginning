#include <unistd.h>

void mx_printchar(char c);

static void outputframe(int n) {
    mx_printchar('+');
    for (int j = 0; j < (2 * n); j++)
        mx_printchar('-');
    mx_printchar('+');
}

static void up_side(int n) {
    int space1 = n / 2;
    int space2 = 0;

    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < space1; j++)
            mx_printchar(' ');
        mx_printchar('/');
        for (int j = 0; j < n * 2; j++)
            mx_printchar(' ');
        mx_printchar('/');
        for (int j = 0; j < space2; j++)
            mx_printchar(' ');
        write(1, "|\n", 2);
        space1--;
        space2++;
    }
}

static void middle_side(int n) {
    int d = 0;

    if (n % 2)
        d++;
    for (int i = 0; i < n / 2 + d; i++) {
        mx_printchar('|');
        for (int j = 0; j < n * 2; j++)
            mx_printchar(' ');
        mx_printchar('|');

        for (int j = 0; j < n / 2; j++)
            mx_printchar(' ');

        i + 1 == n / 2 + d ? write(1, "+\n", 2) : write(1, "|\n", 2);
    }
}

static void down_side(int n) {
    int space = n / 2 - 1;

    for (int i = 0; i < n / 2; i++) {
        mx_printchar('|');
        for (int j = 0; j < n * 2; j++)
            mx_printchar(' ');
        mx_printchar('|');
        for (int j = 0; j < space; j++)
            mx_printchar(' ');
        write(1, "/\n", 2);
        space--;
    }
}

void mx_cube(int n) {
    if (n < 2)
        return;
    for (int i = 0; i < n / 2 + 1; i++)
        mx_printchar(' ');
    outputframe(n);
    mx_printchar('\n');
    up_side(n);
    outputframe(n);
    for (int i = 0; i < n / 2; i++)
        mx_printchar(' ');
    write(1, "|\n", 2);
    middle_side(n);
    down_side(n);
    outputframe(n);
    mx_printchar('\n');
}
