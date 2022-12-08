#include <stdio.h>

int main()
{
    int i, n, j, temp, flag = 0;

    printf("Enter a number ");
    scanf("%d", &n);

    int m = n+1, num[n], num2[m];

    for (i = 0; i < n; i++)
    {
        printf("Enter a number  : ");
        scanf("%d", &num[i]);
    }
    
    printf("\n\n\noriginal array :  ");

    for (i = 0; i < n; i++)
    {
        printf("%d  ", num[i]);
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
	int q;
	printf("Enter a number that you want to enter in array : ");
	scanf("%d" , &q);

    for (i = 0,j=0; i<m; i++)
    {
	  num2[i] = (q < num[j] && flag == 0) ? q : num[j++];
	  if(num2[i] == q)
	  {
		flag = 1;
	  }
    }
	
	printf("\n\n\nnew inserted array is : ");

	for(i=0; i<m; i++)
	{
	  printf("%d ", num2[i]);
	}

    return 0;
}
