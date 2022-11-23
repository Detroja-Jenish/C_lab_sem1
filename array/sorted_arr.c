#include <stdio.h>

int main()
{
    int i, n, j, temp;

    printf("Enter a number ");
    scanf("%d", &n);

    int num[3];

    for (i = 0; i < 3; i++)
    {
        printf("Enter a number  : ");
        scanf("%d", &num[i]);
    }
    for (i = 0; i < 3; i++)
    {
        printf("%d  ", num[i]);
    }

    for (i = 0; i < n; n--)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (num[i] > num[i + 1])
            {
                temp = num[i];
                num[i] = num[i + 1];
                num[i + 1] = temp;
            }
        }
    }
    printf("\n\n\nsorted array :  ");

    for (i = 0; i < 3; i++)
    {
        printf("%d  ", num[i]);
    }

    return 0;
}