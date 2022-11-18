#include<stdio.h>

int main()
{
	int n, m, gcd, min;

	printf("Enter two number   :  " );
	scanf("%d %d", &n, &m);

	min = (n < m) ? n : m;

	while(min > 0)
	{
		if( n%min == 0 && m%min == 0)
		{
			gcd = min;
			break;
		}
		min--;
	}

	printf("The G.C.D. of %d and %d is %d", n, m, gcd);

	return 0;
}
