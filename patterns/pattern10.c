#include <stdio.h>

int main()
{
	int i, j, count = 1, n;
	printf("Enter a number  : ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++, count = !count)
		{
			printf("%d ", count);
		}
		printf("\n");
	}

	return 0;
}
