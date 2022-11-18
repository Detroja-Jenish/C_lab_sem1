#include <stdio.h>

int main()
{
	int i = 1;
    int sum = 0;
    int n;
    printf("enter any integer : ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
	    sum += i;
    }

    printf("the sum of 1 to %d is %d\n", n, sum);

    return 0;
}
