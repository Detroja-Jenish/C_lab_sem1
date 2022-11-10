#include <stdio.h>

int main()
{
    int n, r_binary = 0, counter = 0;
    scanf("%d", &n);
    
    while(n>0)
    {
        r_binary = (r_binary*10) + (n%2);
        n /= 2;
        counter++;
    }
    
    while(counter > 0)
    {
        printf("%d", r_binary%10);
        r_binary /= 10;
        counter--;
    }
    return 0;
}