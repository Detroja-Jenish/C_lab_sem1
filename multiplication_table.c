#include <stdio.h>

int main()
{
    int i = 1, n;

    printf("enter an number : ");
    scanf("%d", &n);

    while (i <= 10)
    {
        printf("%2d x %2d = %3d\n", n, i, n * i);
        i++;
    }

    return 0;
}