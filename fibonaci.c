#include <stdio.h>
int main()
{
	int n, i = 0, f0 = 0, f1 = 1, dummy = 0;

	printf("Enter a number   :  ");
	scanf("%d", &n);
	printf("fibonacci series : %d, %d, ", f0, f1);
	while(i <n-2)
	{
		printf("%d, ", f0+f1);
		dummy = f1;
		f1 = f1 + f0;
		f0 = dummy;
		n--;
	}

	printf("\n");

	return 0;
}
