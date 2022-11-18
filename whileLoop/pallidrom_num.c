#include <stdio.h>

int main()
{
	int n, reversed_num = 0, temp;
	printf("Enter a number    :  ");
	scanf("%d", &n);
	
	temp = n;

	while(n > 0)
	{
		reversed_num = (reversed_num*10) + (n%10);
		n = n/10;
	}
	
	if(reversed_num == temp)
	{
		printf("%d is pallidromn number", temp);
	}
	else
	{
		printf("%d is not pallidromn number", temp);
	}

	return 0;
}
