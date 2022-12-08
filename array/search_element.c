#include <stdio.h>

int main()
{
  int i, n, q;

  printf("Enter size of an array : ");
  scanf("%d", &n);

  int num[n];

  for(i=0; i<n; i++)
  {
	printf("Enter a number : ");
	scanf("%d", &num[i]);
  }

  printf("Enter search query  : ");
  scanf("%d", &q);

  for(i=0; i<n; i++)
  {
	if(num[i] == q)
	{
	  printf("%d is found at %d index...\n", q, i);
	  return 0;
	}
  }

  printf("%d is not found in given array...\n", q);

  return 0;
}
