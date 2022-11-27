#include <stdio.h>

int main()
{
    int i, n, j, temp;

    printf("Enter a number ");
    scanf("%d", &n);

    int num[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter a number  : ");
        scanf("%d", &num[i]);
    }
    
    printf("\n\n\noriginal array :  ");

    for (i = 0; i < n; i++)
    {
        printf("%d  ", num[i]);
    }

    for (i = n; i > 0; i--)
    {
        for (j = 0; j < i - 1; j++)
        {
            if (num[j] > num[j + 1])
            {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
    printf("\n\n\nsorted array :  ");

    for (i = 0; i < n; i++)
    {
        printf("%d  ", num[i]);
    }

    return 0;
}