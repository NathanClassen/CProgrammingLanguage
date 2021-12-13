# include <stdio.h>

// Write a program to dertermine the ranges of char, short, int
//   and long variables, both signed and unsigned, by printing
//   appropriate values from standard harders and by direct
//   computation.


void char_range() {
    char val;
    printf("%c\n", &val);
}

void short_range() {
    short val;
    printf(val);
}

void int_range() {
    int val;
    printf(val);
}

void long_range() {
    long val;
    printf(val);
}

int main() {
    char_range();
    short_range();
    int_range();
    long_range();
    return 0;
}