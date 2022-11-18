#include<stdio.h>

int main()
{
	int n, sum = 0, d, N;

	printf("Enter a number    :  ");
	scanf("%d", &n);

	N = n;

	while(n != 0)
	{
		d = n%10;
		sum += d*d*d;
		n = n/10;
	}

	(sum == N)?printf("%d is armstrong number.\n",N) : printf("%d is not armstrong number.\n",N);

	return 0;
}
