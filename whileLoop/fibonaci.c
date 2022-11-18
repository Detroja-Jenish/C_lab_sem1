#include <stdio.h>
int main()
{
	int n, i = 0, f0 = 0, f1 = 1, dummy = 0;

	printf("Enter a number   :  ");
	scanf("%d", &n);
	while(i <n)
	{
		if(i == 0)
		{
			printf("%d ,", f0);
		}
		else if(i == 1)
		{
			printf("%d ,", f1);
		}
		else
		{
			printf("%d, ", f0+f1);
			dummy = f1;
			f1 = f1 + f0;
			f0 = dummy;
		}
		i++;
	}

	printf("\n");

	return 0;
}
