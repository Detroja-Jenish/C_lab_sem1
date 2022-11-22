#include <stdio.h>

int main()
{
    int i, n, max = 0, min = 0, sum = 0;

	float avg;

    printf("Enter a number ");
    scanf("%d", &n);

    int num[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter a number  : ");
        scanf("%d", &num[i]);
    }
	min = num[0];
	max = num[0];
    for (i = 0; i < n; i++)
    {
			max = ( num[i] > max ) ? num[i] : max;
			min = ( num[i] < min ) ? num[i] : min;
			sum += num[i];
    }

	avg = (float)sum/(float)n;

    printf("max : %d \nmin : %d \nsum : %d \navg : %f", max, min, sum, avg);

    return 0;
}
