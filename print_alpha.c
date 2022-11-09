#include <stdio.h>

int main()
{
    int i, j;

    i = 'A';
    j = 'Z';

    while (i <= j)
    {
        printf("%c %c\n", i, i + 32);
        i++;
    }
    return 0;
}