#include <stdio.h>

int main()
{
    int i = 0, x, y, ans = 1;

    printf("enter a base and power : ");
    scanf("%d %d", &x, &y);

    while (i < y)
    {
        ans *= x;
        i++;
    }

    printf("%d power of %d is %d.\n", y, x, ans);
    return 0;
}