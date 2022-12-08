#include <stdio.h>

void swap(int * a, int * b);

int main()
{
  int i, n;

  printf("Enter size of an array : ");
  scanf("%d", &n);

  int num[n];

  for(i=0; i<n; i++)
  {
	printf("Enter a number : ");
	scanf("%d", &num[i]);
  }


  printf("\noriginal array is in reversed order : ");
  for(i=0; i<n; i++)
  {
	printf("%d ", num[i]);
  }

  //reversing the original array

  for(i=0; i<n/2; i++)
  {
	swap(&num[i], &num[n-1-i]);
  }

  printf("\nNow original array is in reversed order : ");
  for(i=0; i<n; i++)
  {
	printf("%d ", num[i]);
  }

  return 0;
}

void swap(int *a, int *b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
