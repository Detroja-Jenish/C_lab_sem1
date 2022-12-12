#include<stdio.h>

int power(int x, int y);
int main()
{
	int x, y, ans;

	printf("Enter a base : ");
	scanf("%d", &x);

	printf("Enter a exponent : ");
	scanf("%d", &y);
	
	ans = power(x,y);

	printf("%d^%d = %d \n\n\n", x, y, ans);
}
int power(int x, int y)
{
	return (y == 1) ? x : x*power(x,--y);
}
