/* atoi: convert s to integer */
#include <stdio.h>

int atoi(char s[]);

int main(int argc, char const *argv[])
{
    char s[5] = "hello";
    int res = atoi(*s);
    printf("%d", res);
    return 0;
}


int atoi(char s[])
{
    int i, n;

    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');
    return n;
}

/*
    s[i] - '0'   gives the numeric value of the character stored in s[i],
    because the values of '0', '1', etc, form a continous increasing sequence.
*/