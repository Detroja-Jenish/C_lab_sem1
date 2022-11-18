#include <stdio.h>

int main()
{
    int i = 1, n, sum = 0;
    printf("enter an number : ");
    scanf("%d", &n);

    while (i <= n)
    {
        if (i % 2 == 0)
        {
            sum -= i;
        }

        else
        {
            sum += i;
        }
        i++;
    }

    printf("sum = %d", sum);
    return 0;
}