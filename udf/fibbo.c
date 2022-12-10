#include<stdio.h>
int fibbo(int n);
int main()
{
  int n, i;

  printf("Enter a number : ");
  scanf("%d", &n);

  for(i=0; i<n; i++)
  {
	printf("%d ", fibbo(i));
  }
  printf("\n\n");
  return 0;
}

int fibbo(int n)
{
	return (n == 0 || n == 1) ? n : fibbo(n-1) + fibbo(n-2); 
}
