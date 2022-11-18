#include <stdio.h>

int main()
{
    int n, factorial = 1;

    printf("enter an number : ");
    scanf("%d", &n);

    printf("The factorial of %d is ", n);
    for(n=n; n>1; n--)
    {
        factorial *= n;
    }

    printf("%d.\n", factorial);
    return 0;
}
