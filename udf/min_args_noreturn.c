#include<stdio.h>

void Min(int x, int y);

int main()
{
	int n, m, sum=0;

  printf("Enter a number : ");
  scanf("%d", &n);

  printf("Enter a number : ");
  scanf("%d", &m);

	Min( n, m );

	return 0;
}

void Min(int x, int y)
{
	printf("min = %d\n\n",(x<y) ? x : y);
}
