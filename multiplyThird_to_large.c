#include <stdio.h>

int main()
{
	int a, b, c;
	printf("Enter any three num.. _ : ");
	scanf("%d %d %d" , &a, &b, &c);
	printf("largest = %d", (a>b)?(a*c):(b*c));
	return 0;
}
