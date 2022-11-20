#include <stdio.h>
int main()
{
	int n, i = 0, f0 = 0, f1 = 1, temp = 0;

	printf("Enter a number   :  ");
	scanf("%d", &n);
	for(i=0; i<n; i++)
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
			temp = f1;
			f1 = f1 + f0;
			f0 = temp;
		}
	}

	printf("\n");

	return 0;
}
