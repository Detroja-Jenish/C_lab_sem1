#include <stdio.h>
int main()
{
	int i = 1, n;
	printf("enter any integer : ");
	scanf("%d", &n);
	while(i <= n)
	{
		if(i%2 == 1){
            printf("%d\n", i);
        }
		i++;
	}
	return 0;
}