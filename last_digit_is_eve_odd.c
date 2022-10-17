#include <stdio.h>

int main()
{
    int n, last_digit;

    printf("enter any positive integer ");
    scanf("%d", &n);
    last_digit =n%10;

    if( last_digit%2 == 0){
        printf("last digit of your %d id %d  is even", n, last_digit);
    }
    else{
        printf("last digit of your %d id %d is even", n, last_digit);
    }

    return 0;
}