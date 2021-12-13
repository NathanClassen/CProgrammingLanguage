#include <stdio.h>

int power(int, int);

int main()
{
    printf("%d\n", power(2,4));
}

int power(int m, int n)
{
    int i = 1;
    while (n > 0) {
        i *= m;
        --n;
    }
    return i;
}
