#include <stdio.h>

int main()
{
    int height[5], weight[5], i, count = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Enter a height : ");
        scanf("%d", &height[i]);

		printf("Enter a weight : ");
        scanf("%d", &weight[i]);

		printf("\n");
    }

	for(i = 0; i < 5; i++)
	{
			if( height[i] > 170 && weight[i] < 50 )
			{
					count++;
			}

    }

	printf("person having height greater than 170 and weight less than 50 are %d.\n", count);

    return 0;
}
