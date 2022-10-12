#include <stdio.h>
int main(){
    int a, b;
    printf("enter any two integers : ");
    scanf("%d %d", &a, &b);

    printf("\nfirst, a = %d and b = %d", a, b);

    a += b;
    b = a - b;
    a = a - b;

    printf("\nnow, a = %d and b = %d", a, b);
    return 0;
}