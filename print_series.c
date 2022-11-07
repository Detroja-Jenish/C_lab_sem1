#include <stdio.h>

int main()
{
	int i = 1, j=1, n=50;
	while(i<=n)
	{
		printf("%d\n", j);
		i++;
        j += 3;
	}
	return 0;
}