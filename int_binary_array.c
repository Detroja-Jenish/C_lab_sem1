#include <stdio.h>

int main()
{
    int n, binary[32], i;
    scanf("%d", &n);

    printf("%d is in binary :   ___  ", n);

    for(i=0; i<32; i++)
    {
        binary[i] = 0;
    }

    for(i=31, n=n; i>=0 && n>0; i--, n /= 2){
        binary[i] = n%2;
    }

    for(i=0; i<32; i++)
    {
        printf("%d", binary[i]);
    }
    printf("\n\n");
    return 0;
}