#include<stdio.h>

int main()
{
	int i, j, count = 1;

	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++, count++)
		{
			printf("%d ", count%2);
		}
		printf("\n");
	}

	return 0;
}
