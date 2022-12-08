#include <stdio.h>

int main()
{
  int i, j, n, sum = 0;

  printf("Enter size of an array : ");
  scanf("%d", &n);

  int A[n][n];

  for(i=0; i<n; i++)
  {
	for(j=0; j<n; j++)
	{

	  printf("Enter a number : ");
	  scanf("%d", &A[i][j]);
	}
  }

  printf("\nThe diagonal entries of matrix A are : ");
  for(i=0; i<n; i++)
  {
	sum = sum + A[i][i];
	printf("%d ", A[i][i]);
  }

  printf("\nThe sum of diagonal entries is %d.\n", sum);

  return 0;
}
