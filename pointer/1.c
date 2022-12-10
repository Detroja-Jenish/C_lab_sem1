#include<stdio.h>

int main()
{
  int n;
  printf("Enter a number : ");
  scanf("%d", &n);

  int *p;
  p=&n;

  printf("the address of variable is %p and value is %d.\n", p, *p);

  return 0;
}
