#include <stdio.h>

int main()
{
  int i, n;

  printf("Enter size of an array : ");
  scanf("%d", &n);

  int A[n], B[n];

  for(i=0; i<n; i++)
  {
	printf("Enter a number : ");
	scanf("%d", &A[i]);
  }

  printf("Copy array 'A' into arry 'B'\n");

  for(i=0; i<n; i++)
  {
	B[i] = A[i];
  }

  printf("\nThe array A is : ");

  for(i=0; i<n; i++)
  {
	printf("%d ", A[i]);
  }

  printf("\nThe array B is : ");

  for(i=0; i<n; i++)
  {
	printf("%d ", B[i]);
  }

  return 0;
}
