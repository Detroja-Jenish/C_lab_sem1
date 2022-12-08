#include <stdio.h>

int main()
{
  int i,j , n, m;

  printf("Enter size of an array : ");
  scanf("%d %d", &n, &m);

  int num[n][m];

  for(i=0; i<n; i++)
  {
	for(j=0; j<m; j++)
	{

	  printf("Enter a number : ");
	  scanf("%d", &num[i][j]);
	}
  }
  for(i=0; i<n; i++)
  {
	for(j=0; j<m; j++)
	{
	  printf("%d ", num[i][j]);
	}
	printf("\n");
  }

  return 0;
}
