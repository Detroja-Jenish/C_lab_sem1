#include <stdio.h>

int main()
{
  int j, i, n, a, count=0;

  printf("Enter size of an array : ");
  scanf("%d", &n);

  int num[n], index[n];

  for(i=0; i<n; i++)
  {
	printf("Enter a number : ");
	scanf("%d", &num[i]);
	index[i] = 0;
  }

  for(j=0; j<n; j++)
  {
	if(index[j] != -1)
	{
	  a = num[j];
	}
	else{
	  continue;
	}

	for(i=j; i<n; i++)
	{
	  if(num[i] == a && i != j)
	  {
		count++;
		index[i] = -1;
	  }
	}
  }

  int new_array[n-count];

  for(i=0,j=0; i<n; i++)
  {
	if(index[i] != -1)
	{
	  new_array[j] = num[i];
	  j++;
	}
  }

  printf("\n after deleting duplictae elements new array is like this : \n");

  for(i=0; i<(n-count); i++)
  {
	printf("%d ", new_array[i]);
  }

  return 0;
}
