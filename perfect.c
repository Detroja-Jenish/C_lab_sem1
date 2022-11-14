#include <stdio.h>

int main()
{
	int n, sum = 0, i;

	printf("Enter a num    : ");
	scanf("%d", &n);

	i = 1;

	while(i <= n/2)
	{
		if(n%i == 0)
		{
			sum += i;
		}
		i++;
	}

	if(sum == n)
	{
		printf("%d is perfect number...\n",n);
	}
	else
	{
		printf("%d is not perfect number...\n",n);
	}

	return 0;
}
