#include <stdio.h>

int main()
{
    int i = 0, odd = 0, even = 0, n;

    while (i < 10)
    {
        printf("enter a number : ");
        scanf("%d", &n);

        if (n % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        i++;
    }
    printf("Ther is %d odd numbers and %d even number are entered.", odd, even);
    return 0;
}