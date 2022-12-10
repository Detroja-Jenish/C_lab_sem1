#include<stdio.h>

void max_min(int n, int m, int *max, int *min);
int main()
{
  int n, m, max, min;

  printf("Enter a number : ");
  scanf("%d", &n);

  printf("Enter a number : ");
  scanf("%d", &m);

  max_min(n, m, &max, &min);
  printf("the max : %d and min : %d among %d and %d.\n\n\n",max,min, n, m);

  return 0;
}

void max_min(int n, int m, int *max, int *min)
{
  *min = (n<m)?n:m;
  *max = (n>m)?n:m;
}
