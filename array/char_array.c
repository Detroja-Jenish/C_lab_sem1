#include <stdio.h>

int main()
{
  int i, n;

  printf("Enter size of an array : ");
  scanf("%d", &n);

  int num[n];

  for(i=0; i<n; i++)
  {
	printf("Enter a number : ");
	scanf("%d", &num[i]);
  }

  return 0;
}
