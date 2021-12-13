# include <stdio.h>

// can trigger EOF via (ctrl + d)

int main()
{
    double nc;

    for (nc = 0; getchar != EOF; ++nc)
        ; // null statement. Do not need but are required to provide a for body. Does not have to be a separate line.
    printf("%.0f\n", nc);
}

int while_counter()
{
    long nc;

    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);
}