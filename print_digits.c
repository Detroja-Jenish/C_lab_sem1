#include <stdio.h>

int main()
{
	int n;
	printf("Enter a number    :  ");
	scanf("%d", &n);

	printf("digit's of %d are ___", n);

	while(n > 0)
	{
		printf("%d ,", n%10);
		n = n/10;
	}

	return 0;
}
