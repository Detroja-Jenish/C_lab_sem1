#include<stdio.h>

int main()
{
	int n, i;
	printf("Enter a number   :  ");
	scanf("%d", &n);

	i = n/2;

	while(i > 1)
	{
		if(n%i == 0)
		{
			printf("%d is not a prime number.\n", n);
			return 0;
		}
		i--;
	}
		printf("%d is a prime number.\n", n);

		return 0;
	}

