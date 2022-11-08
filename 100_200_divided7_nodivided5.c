#include<stdio.h>
int main()
{
	int i = 100, n = 200;
	while(i<n)
	{
		if(i%5 != 0 && i%7 == 0)
		{
			printf("%d\n", i);
		}
		i++;
	}
	return 0;
}

