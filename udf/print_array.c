#include <stdio.h>

void print_array(int a[],int n);
int main()
{
    int i, n;

    printf("Enter a number ");
    scanf("%d", &n);

    int num[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter a number  : ");
        scanf("%d", &num[i]);
    }

		print_array(num,n);
    return 0;
}

void print_array(int a[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%d", a[i]);
	}
}
