#include <stdio.h>

int main()
{
  int row, col, i, j;

  printf("Enter number of rows : ");
  scanf("%d", &row);
  printf("Enter number of columns : ");
  scanf("%d", &col);

  int A[row][col];

  for(i=0; i<row; i++)
  {
	for(j=0; j<col; j++)
	{
	  printf("Enter a number : ");
	  scanf("%d", &A[i][j]);
	}
  }

  printf("\n\nfomatrix A is : \n\n");

  for(i=0; i<col; i++)
  {
	for(j=0; j<row; j++)
	{
	  printf("%d ", A[i][j]);
	}
	printf("\n");
  
  }
  printf("\n\nTranspose of matrix A is : \n\n");

  for(j=0; j<col; j++)
  {
	for(i=0; i<row; i++)
	{
	  printf("%d ", A[i][j]);
	}
	printf("\n");
  }
  return 0;
}
