#include <stdio.h>

int main()
{
	int i, n;
	printf("Enter a number   :  ");
	scanf("%d", &n);

	for(i=1; i<=10; i++)
	{
		printf("%3d X %3d = %3d\n", n, i, n*i);
	}
	return 0;
}
