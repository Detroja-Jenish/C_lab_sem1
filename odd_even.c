#include<stdio.h>

int main()
{
    int N;
    printf("Enter any integer : ");
    scanf("%d", &N);

    if(N%2==0)
        printf("%d is even.", N);
    else
        printf("%d is odd.", N);

    return 0;
}