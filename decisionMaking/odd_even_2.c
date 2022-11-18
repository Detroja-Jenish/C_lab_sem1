#include <stdio.h>

int main()
{
    int N;

    printf("Enter any number _ : ");
    scanf("%d", &N);

    (N%2 == 0)?printf("%d is even number", N):printf("%d is odd number", N);
    return 0;
}