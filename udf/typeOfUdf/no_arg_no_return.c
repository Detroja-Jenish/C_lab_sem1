#include<stdio.h>
void sum();
int main()
{
	sum();
	return 0;
}

void sum()
{
	int n, m, ans=0;

  printf("Enter a number : ");
  scanf("%d", &n);

  printf("Enter a number : ");
	scanf("%d", &m);

	ans = n+m;

	printf("The sum = %d", ans);
}
