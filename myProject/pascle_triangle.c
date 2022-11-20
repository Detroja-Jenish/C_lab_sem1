#include<stdio.h>

int factorial(int);

int main()
{
	int n, i, j, pascle_value;

	printf("how many rows do you waant...?  :  ");
	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		for(j=0; j<=i; j++)
		{
			pascle_value = factorial(i)/(factorial(j)*factorial(i-j));
			printf("%d ", pascle_value);
		}
		printf("\n");
	}
}

int factorial(int n)
{
	if(n == 0){
		return 1;
	}

	int ans = 1, i;

	for(i=1; i<=n; i++)
	{
		ans *= i;
	}

	return ans;
}
