#include <stdio.h>

int main()
{
    int i = 1, n;
    printf("enter an number : ");
    scanf("%d", &n);

    printf("the factors of %d are ", n);

    while (i <= n / 2)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
        i++;
    }

    printf("%d.\n", n);

    return 0;
}