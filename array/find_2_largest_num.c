#include <stdio.h>

int main()
{
    int i, n, j, temp, max1, max2;

    printf("Enter a number ");
    scanf("%d", &n);

    int num[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter a number  : ");
        scanf("%d", &num[i]);
    }
    
    for (i = n; i > 0; i--)
    {
        for (j = 0; j < i - 1; j++)
        {
            if (num[j] > num[j + 1])
            {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

	max1 = num[n-1];
	max2 = num[n-2];
	for(i=3; max1==max2 && n-i>=0; i++)
	{
	  max2 = num[n-i];
	}

	printf("laregest 2 numbers among them are %d and %d", max1, max2);
    return 0;
}
