#include <stdio.h>

int main()
{
	int i, j, n;

	printf("Enter a number  : ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = n; j >= 1; j--)
		{
			printf((j <= i) ? "* " : " ");
		}
		printf("\n");
	}
	return 0;
}
