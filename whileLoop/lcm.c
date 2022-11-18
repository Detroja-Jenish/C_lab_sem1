#include<stdio.h>

int main()
{
	int n, m, lcm, max, i;

	printf("Enter two number   :  " );
	scanf("%d %d", &n, &m);

	max = (n > m) ? n : m;
	i = max;

	while(1)
	{
		if(i%n == 0 && i%m == 0)
		{
			lcm = i;
			break;
		}
		i += max;
	}

	printf("The L.C.M. of %d and %d is %d", n, m, lcm);

	return 0;
}
