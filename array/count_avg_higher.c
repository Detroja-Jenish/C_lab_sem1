#include <stdio.h>

int main()
{
    int i, n, sum = 0, count = 0;
    float avg;

    printf("Enter a number ");
    scanf("%d", &n);

    int num[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter a number  : ");
        scanf("%d", &num[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum += num[i];
    }

    avg = (float)sum / (float)n;

    for (i = 0; i < n; i++)
    {
        if (num[i] > avg)
        {
            count++;
        }
    }

    printf("number of elements those are higher than avrage value is %d\n\n", count);

    return 0;
}