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
	  if(num[i] == a)
	  {
		count++;
		index[i] = -1;
	  }
	}

	printf("%d is occurs in array %d times.\n", a, count);
	count = 0;
  }


  return 0;
}
