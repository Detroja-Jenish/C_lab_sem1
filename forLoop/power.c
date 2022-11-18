#include <stdio.h>

int main()
{
    int i = 0, x, y, ans = 1;

    printf("enter a base and exponent : ");
    scanf("%d %d", &x, &y);

    for(i = 0; i<y; i++)
    {
        ans *= x;
    }

    printf("%d power of %d is %d.\n", y, x, ans);
    return 0;
}
