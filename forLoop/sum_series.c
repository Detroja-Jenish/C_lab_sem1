#include<stdio.h>

int main()
{
	int i, j, n, sum = 0, temp = 0;

	printf("Enter a number    :  ");
	scanf("%d", &n);

	for(i=1; i<=n; i++)
	{
		printf("( ");
		for(j=1; j<=i; j++)
		{
			if(j == 1)
			{
				printf("1");
			}
			else
			{
				printf(" + %d", j);
			}
			temp += j;
		}
		if( i!=n )
		{
			printf(" ) + ");
		}
		else
		{
			printf(" ) = ");
		}
		sum += temp;
		temp = 0;
	}

	printf("%d.\n", sum);

	return 0;
}
