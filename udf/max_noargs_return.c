#include<stdio.h>

int Max();

int main()
{
	int max;

	max = Max();

	printf("max = %d",max);

	return 0;
}

int Max()
{
	int n, m;

  printf("Enter a number : ");
  scanf("%d", &n);

  printf("Enter a number : ");
  scanf("%d", &m);

	return (n>m) ? n : m;	
}
