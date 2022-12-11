#include <stdio.h>

int printPrimeNums(int n);

int main()
{
    int n;

    printf("Enter value of n = ");
    scanf("%d", &n);

    printPrimeNums(n);

    return 0;
}

int printPrimeNums(int n)
{
    int i;
    if (n == 2)
    {
        printf("%d ", n);
        return 0;
    }
    for (i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            n = n - 1;
            printPrimeNums(n);
            return 0;
        }
    }

    n = n - 1;
    printPrimeNums(n);
    printf("%d ", n + 1);
    return 0;
}