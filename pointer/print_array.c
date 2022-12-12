#include <stdio.h>

int main()
{
    int i, n;

    printf("Enter a number ");
    scanf("%d", &n);

    int A[n];

		int *p;
		p = A;

    for (i = 0; i < n; i++)
    {
        printf("Enter a number  : ");
        scanf("%d", p+i);
    }

		printf("\n\nThe array : ");

		for(i=0; i<n; i++)
		{
			printf("%d ", *(p+i));
		}

		printf("\n");

		return 0;
}
