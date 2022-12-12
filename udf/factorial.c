#include<stdio.h>

int factorial(int n);

int main()
{
	int n;

	printf("Enter a number : ");
	scanf("%d", &n);

	printf("factorial of %d is %d \n", n, factorial(n));

	return 0;
}

int factorial(int n)
{
	return (n == 0 || n == 1) ? 1 : n*factorial(n-1);
}
