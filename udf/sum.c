#include<stdio.h>

int sumf(int n, int m);
int main()
{
  int n, m, sum=0;

  printf("Enter a number : ");
  scanf("%d", &n);

  printf("Enter a number : ");
  scanf("%d", &m);

  sum = sumf(n,m);

  printf("the sum of %d and %d is %d\n", n, m, sum);

  return 0;
}

int sumf(int n, int m)
{
  return (n+m);
}
