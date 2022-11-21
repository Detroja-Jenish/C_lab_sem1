#include <stdio.h>

int main()
{
	int i, j, n;
	char alpha = 'A';

	printf("Enter a number  : ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
		{
			printf(" ");
		}

		for (j = 1; j <= i; j++)
		{
			(i % 2 == 0) ? printf("%c ", alpha++) : printf("%d ", j);
		}
		printf("\n");
	}
	return 0;
}
