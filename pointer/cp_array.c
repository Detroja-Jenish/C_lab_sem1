#include <stdio.h>

int main()
{
    int i, n;

    printf("Enter a number ");
    scanf("%d", &n);

    int A[n], B[n];
		int *p, *q;
		p = A;
		q = B;

    for (i = 0; i < n; i++)
    {
        printf("Enter a number  : ");
        scanf("%d", p + i);
    }

		for(i=0; i<n; i++)
		{
			*(p+i) = *(q+i);
		}

		printf("\n\nThe array A is : ");

		for(i=0; i<n; i++)
		{
			printf("%d ", *(p+i));
		}

		printf("\n\nThe array B that was coppied is : ");

		for(i=0; i<n; i++)
		{
			printf("%d ", *(q+i));
		}

		printf("\n\n\n");

		return 0;
