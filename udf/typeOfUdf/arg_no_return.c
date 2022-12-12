#include<stdio.h>
void sum(int n, int m);
int main()
{
	int n, m;

  printf("Enter a number : ");
  scanf("%d", &n);

  printf("Enter a number : ");
	scanf("%d", &m);

	sum(n,m);
	return 0;
}

void sum(int n, int m)
{
	int  ans=0;

	ans = n+m;

	printf("The sum = %d", ans);
}
