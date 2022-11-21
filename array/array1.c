#include <stdio.h>

int main()
{
    int i, n;

    printf("Enter a number ");
    scanf("%d", &n);

    int num[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter a number  : ");
        scanf("%d", &num[i]);
    }

    printf("\n\nentered array in normal order =  \n");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", num[i]);
    }

    printf("\n\nentered array in revers order =  \n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d  ", num[i]);
    }

    return 0;
}