#include<stdio.h>

int main()
{
	int i, j;
	char alpha = 'A';

	for(i=1; i<=5; i++)
	{
		for(j=1; j<=5-i; j++)
		{
			printf(" ");
		}

		for(j=1; j<=i; j++)
		{
			(i%2 == 0) ? printf("%c ", alpha++) : printf("%d ", j);
		}
		printf("\n");
	}
	return 0;
}	
