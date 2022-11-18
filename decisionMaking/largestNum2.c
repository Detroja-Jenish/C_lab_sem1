#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter any Three integer _ : ");
    scanf("%d %d %d", &a, &b, &c);

    printf("%d is largest number among %d, %d and %d...", (a>b)?((a>c)?a:c):((b>c)?b:c), a, b, c);

    return 0;
}