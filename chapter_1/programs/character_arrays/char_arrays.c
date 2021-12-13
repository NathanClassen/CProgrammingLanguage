#include <stdio.h>

#define MAXLINE 1000

int max; /* declare as external/global variable */
char line[MAXLINE];
char longest[MAXLINE];

int  get_line(void);
void copy(void);

/* prints longest input line */
int main()
{
    int len;
    /* 
        all uses of the `extern` declaration till end of file are redundant.
        We need not use `extern` to identify external variables within functions
        if the external variable was declared in the source file before it's use
        in a particular function

        If the source code is divided into file1, file2, file3, and variables
        defined in file1, then the `extern` declarations are needed in files 2 and 3

        Typical practice is to put all extern declarations of variables and functions
        into a separate file, and then #include that at the front of each source file
    */

    extern int max;
    extern char longest[MAXLINE];

    max = 0;
    while ((len = get_line()) > 0)
        if (len > max) {
            max = len;
            copy();
        }
    if (max > 0)
        printf("%s", longest);
    return 0;
}

/* getline: read a line into s, return length */
int get_line(void)
{
    int c, i;
    extern char line[];

    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

/* copy: copy 'from' into 'to'; assume 'to' is big enough */
void copy()
{
    int i;
    extern char line[], longest[];

    i = 0;
    while ((longest[i] = line[i]) != '\0')
        ++i;
}