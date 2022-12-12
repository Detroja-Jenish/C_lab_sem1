#include<stdio.h>

int main()
{
	int x, y;

	printf("Enter value of x = ");
	scanf("%d", &x);

	printf("Enter value of y = ");
	scanf("%d", &y);
	
	int *p, *q, sum = 0;
	p = &x;
	q = &y;

	sum = *p + *q;

	printf("sum = %d + %d = %d\n",x ,y, sum);

	return 0;
}
