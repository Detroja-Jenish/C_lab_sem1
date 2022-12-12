#include<stdio.h>

int main()
{
	int x, y;

	printf("Enter value of x = ");
	scanf("%d", &x);

	printf("Enter value of y = ");
	scanf("%d", &y);
	
	printf("Before swaping\nx = %d \ny = %d\n\n", x, y);

	int *p, *q, temp;
	p = &x;
	q = &y;

	temp = *p;
	*p = *q;
	*q = temp;

	printf("After swaping\nx = %d \ny = %d\n\n", x, y);

	return 0;
}
