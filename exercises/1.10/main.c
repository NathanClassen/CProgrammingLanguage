# include <stdio.h>

/* copy input to the output, replacing tabs with \t, backspaces with \b,
   and backslashes with \\ */

int main()
{
    int input;
    int display;

    while ((input = getchar()) != EOF) {
        switch (input)
        {
        case '\n':
            display = "\\n";
            break;
        case '\t':
            display = "\\t";
            break;
        case '\b':
            display = "\\b";
            break;
        case '\\':
            display = '\\';
            break;
        default:
            display = input;
            break;
        }
        printf("%c", display);
    }
}