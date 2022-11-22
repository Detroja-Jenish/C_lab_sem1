#include <stdio.h>

int main()
{
    int i, n, odd = 0, even = 0;

    printf("Enter a number ");
    scanf("%d", &n);

    int num[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter a number  : ");
        scanf("%d", &num[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (num[i]%2 == 0)
            even++;

        else
            odd++;
    }

    printf("even numbers :  %d  , odd numbers  :  %d\n\n", even, odd);

    return 0;
}
