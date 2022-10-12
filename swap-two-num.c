#include <stdio.h>
int main(){
    int a, b, c;
    printf("enter any two integers : ");
    scanf("%d %d", &a, &b);

    printf("\nfirst, a = %d and b = %d", a, b);

    c = a;
    a= b;
    b = c;

    printf("\nnow, a = %d and b = %d", a, b);
    return 0;
}