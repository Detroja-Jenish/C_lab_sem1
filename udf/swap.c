#include<stdio.h>

void swap(int *n, int *m);

int main()
{
    int x, y;
    
    printf("Enter value of x = ");
    scanf("%d", &x);
    
    printf("Enter value of y = ");
    scanf("%d", &y);
    
    printf("Before swaping\nx = %d \ny = %d\n\n", x, y);
    
    swap(&x, &y);
    
    printf("After swaping\nx = %d \ny = %d\n\n", x, y);
    
    return 0;
}

void swap(int *n, int *m){
    int t;
    t = *n;
    *n = *m;
    *m = t;
}