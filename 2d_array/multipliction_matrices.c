#include<stdio.h>

int main()
{
  int row_A, col_A, row_B, col_B, i, j, k, l;

  printf("Enter number of rows of matrix A : ");
  scanf("%d", &row_A);
  printf("Enter number of columns of matrix A : ");
  scanf("%d", &col_A);

  printf("\nEnter number of rows of matrix B : ");
  scanf("%d", &row_B);
  printf("Enter number of columns of matrix A : ");
  scanf("%d", &col_B);

  int A[row_A][col_A], B[row_B][col_B];

  printf("enter values of matrix A : \n");

  for(i=0; i<row_A; i++)
  {
	for(j=0; j<col_A; j++)
	{
	  printf("Enter a number : ");
	  scanf("%d", &A[i][j]);
	}
  }

  printf("\nenter values of matrix B : \n");

  for(i=0; i<row_B; i++)
  {
	for(j=0; j<col_B; j++)
	{
	  printf("Enter a number : ");
	  scanf("%d", &B[i][j]);
	}
  }

  if(col_A == row_B )
  {
	int C[row_A][col_B];

	for(i=0; i<row_A; i++)
	{
	  for(j=0; j<col_B; j++)
	  {
		C[i][j] = 0;
		for(k=0; k<col_A; k++)
		{
		  C[i][j] += A[i][k]*B[k][j];
		}
	  }
	}

	printf("\n\nC = A*B \nso, The matrix C is : \n\n");

	for(i=0; i<row_A; i++)
	{
	  for(j=0; j<col_B; j++)
	  {
		printf("%d ", C[i][j]);
	  }
	  printf("\n");
	}
  }

  else{
	printf("\n\n multiplication of given size of matrix is not valid.");
  }

  return 0;
}
