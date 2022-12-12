#include<stdio.h>
int sum(int n, int m);
int main()
{
	int n, m, ans=0;

  printf("Enter a number : ");
  scanf("%d", &n);

  printf("Enter a number : ");
	scanf("%d", &m);

	ans = sum(n,m);
	printf("the sum = %d",ans);
	return 0;
}

int sum(int n, int m)
{
	int  ans=0;

	ans = n+m;

	return ans;
}
