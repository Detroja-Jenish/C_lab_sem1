#include <stdio.h>

int main()
{
    int i, n, positive = 0, negative = 0;

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
        if (num[i] >= 0)
            positive++;

        else
            negative++;
    }

    printf("postive numbers :  %d  , negative numbers  :  %d\n\n", positive, negative);

    return 0;
}