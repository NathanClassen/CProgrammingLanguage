# include <stdio.h>

/* copy input to output, replacing input of one or more spaces with one space only */

int main() 
{
    int input;
    int display;

    while ((input = getchar()) != EOF) {
        if (display == ' ') {
            if (input != ' ')
                putchar(input);
        } else {
            putchar(input);
        }
        display = input;
    }
}