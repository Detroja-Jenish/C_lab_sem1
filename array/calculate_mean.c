#include <stdio.h>
#include <math.h>

//Harmonic mean = square_root of product of all entries
//Geomatric mean = (no. ofelements)/( 1/n1 + 1/n2 + 1/n3 + ..... + 1/n) 

int main()
{
  int i, n;
  float hm, gm, avg, sum = 0, inversed_sum = 0, product = 1;

  printf("ENter a size of array : ");
  scanf("%d", &n);

  int num[n];

  for(i=0; i<n; i++)
  {
	printf("Enter a number : ");
	scanf("%d", &num[i]);
  }

  for(i=0; i<n; i++)
  {
	sum += num[i];
	product *= num[i];
	inversed_sum += 1/(float)num[i];
  }

  avg = sum/(float)n;
  hm = sqrt(product);
  gm = (float)n / inversed_sum;

  printf("\n\n\navarge = %f \nHarmonic mean = %f \nGeometric mean = %f \n", avg, hm, gm);

  return 0;
}
