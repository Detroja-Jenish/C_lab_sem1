#include<stdio.h>
int read_rollnum();
int read_marks();

int main()
{
  int n, i, j;

  printf("Enter number of students : ");
  scanf("%d", &n);

  int data[n][2];

  for(i=0; i<n; i++)
  {
	for(j=0; j<2; j++)
	{
	  data[i][j] = (j == 0) ? read_rollnum() : read_marks();
	}
  }

  printf(" sr no. || roll no. || marks\n");
  printf(" ___________________________\n");
  for(i=0; i<n; i++)
  {
	printf("   %2d   ||",i+1);
	for(j=0; j<2; j++)
	{
	  printf("   %3d    ", data[i][j]);
	  if(j==0)
	  {
		printf("||");
	  }
	}
	printf("\n ___________________________\n");
  }

  return 0;
}

int read_rollnum()
{
  int inp;

  printf("enetr student's roll number : ");
  scanf("%d", &inp);

  return inp;
}

int read_marks()
{
  int inp;

  printf("enetr student's marks : ");
  scanf("%d", &inp);

  return inp;
}
