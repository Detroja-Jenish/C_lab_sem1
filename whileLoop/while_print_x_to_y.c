#include <stdio.h>

int main()
{
    int x, y, i ,j;
    printf("Enter any two integers");
    scanf("%d %d", &x, &y);
    i = x<y?x:y;
    j = x>y?x:y;

    while(i <= j)
    {
		printf("%d\n", i);
		i++;
	}
    return 0;
}