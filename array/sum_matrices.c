#include <stdio.h>

int main()
{
  int i,j , n, m;

  printf("Enter size of an array : ");
  scanf("%d %d", &n, &m);

  int A[n][m], B[n][m], C[n][m];
	
  printf("Enter matrix A . \n ");
  for(i=0; i<n; i++)
  {
	for(j=0; j<m; j++)
	{

	  printf("Enter a number : ");
	  scanf("%d", &A[i][j]);
	}
  }

  printf("Enter matrix B . \n ");

  for(i=0; i<n; i++)
  {
	for(j=0; j<m; j++)
	{

	  printf("Enter a number : ");
	  scanf("%d", &B[i][j]);
	}
  }


  for(i=0; i<n; i++)
  {
	for(j=0; j<m; j++)
	{
	  C[i][j] = A[i][j] +B[i][j];
	}
  }

  printf("sum of matrices A and B is \n");

  for(i=0; i<n; i++)
  {
	for(j=0; j<m; j++)
	{
	  printf("%d ", C[i][j]);
	}
	printf("\n");
  }

  return 0;
}
