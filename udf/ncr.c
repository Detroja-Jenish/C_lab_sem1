#include<stdio.h>

int ncr(int n, int r);
int factorial(int n);

int main()
{
	int n,r;

	printf("Enter a number for n : ");
	scanf("%d", &n);


	printf("Enter a number for r: ");
	scanf("%d", &r);

	printf("%dC%d = %d", n, r,ncr(n,r));

	return 0;
}

int factorial(int n)
{
	return (n == 0 || n == 1) ? 1 : n*factorial(n-1);
}

int ncr(int n, int r)
{
	return factorial(n)/(factorial(r)*factorial(n-r));
}
