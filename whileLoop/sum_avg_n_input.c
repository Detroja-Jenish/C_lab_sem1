#include<stdio.h>

int main()
{
	int n, flag, sum = 0, avg = 0, count = 0;
	
	do
	{
		printf("if you want add number than enter 1  _ : ");
		scanf("%d", &flag);
		if(flag == 1)
		{
			printf("enter a number   : ");
			scanf("%d", &n);
			sum += n;
			count++;
		}
	}while(flag == 1);

	avg = sum/count;

	printf("sum = %d , avarage = %d...\n", sum, avg);

	return 0;
}
