#include <stdio.h>

int main()
{
    int n, binary = 0, power = 1, dummy = 0;
    scanf("%d", &n);
    
    while(1)
    {
        power *= 2;
        if(power > n){
            power /= 2;
            break;
        }
    }
    
    while(power > 0)
    {
        binary*=10;
        if((dummy + power) <= n)
        {
         dummy += power;
         binary += 1;
         }
         power /= 2;
    }
    
    printf("n is in binary :  %d", binary);
    return 0;
}