#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter any three integers : ");
    scanf("%d %d %d", &a, &b, &c);

    if(a>b && a>c)
    {
        printf("%d is greater than %d, %d", a, b, c);
    }
    else if(b>c)
    {
        printf("%d is greater than %d, %d", b, c, a);
    }
    else{
        printf("%d is greater than %d, %d", c, b, a);
    }
    return 0;
}