#include <stdio.h>

int main()
{
  int i, n, sequence = [1,2,3,4,5,6,7,8,9,10];

  printf("Enter size of an array : ");
  scanf("%d", &n);

  int num[n];

  for(i=0; i<n; i++)
  {
	printf("Enter a number : ");
	scanf("%d", &num[i]);
  }

  for(i=0; i<10; i++)
  {
	for(missing = sequence[i], j=0; j<n; j++)
	{
	  if(num[j] == missing)
	  {
		flag = 1;
		break;
	  }
	}
	if(flag == 0)
	{
	  printf("%d ", missing);
	}



  return 0;
}
