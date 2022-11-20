#include<stdio.h>

int main()
{
	int i, j;
	float e = 1.0, factorial = 1.0;

	for(i=1; i<12; i++)
	{
		for(j=1; j<=i; j++)
		{
			factorial *= j;
		}

		e += 1/factorial;
		factorial = 1;
	}
	printf("constant e = %f.\n", e);
	return 0;
}
