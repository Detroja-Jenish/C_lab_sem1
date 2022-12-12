#include<stdio.h>
int sum();
int main()
{
	int ans;
	ans = sum();

	printf("ans = %d.\n\n", ans);

	return 0;
}

int sum()
{
	int n, m;

	printf("Enter a number : ");
  scanf("%d", &n);

  printf("Enter a number : ");
  scanf("%d", &m);

	return m + n;
}
