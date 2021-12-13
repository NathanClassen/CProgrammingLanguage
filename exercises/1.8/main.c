# include <stdio.h>

/* count number of spaces, tabs and newlines in input */

int main()
{
    int bc = 0;
    int c;
    while ((c = getchar()) != EOF)
        if (c == '\t' || c == '\n' || c == ' ')
            ++bc;;
    printf("%d\n", bc);
    
}