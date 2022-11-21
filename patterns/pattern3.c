#include <stdio.h>

int main()
{
	int i, j, k, n;

	printf("Enter a number  : ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 1, k = n; j <= i; j++, k--)
		{
			printf("%d", k);
		}
		printf("\n");
	}

	return 0;
}
