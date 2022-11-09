#include <stdio.h>

int main()
{
    int n, binary = 0;
    printf("enter an number : ");
    scanf("%d", &n);
    printf("the binary of %d is ", n);
    while (n > 0)
    {
        binary = (binary * 10) + (n % 2);
        n = n / 2;
    }

    printf("%d\n", binary);
    return 0;
}