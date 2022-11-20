#include<stdio.h>

int main()
{
	int i, n, first_digit, last_digit, swaped_n;

	printf("Enter a number :  ");
	scanf("%d", &n);

	last_digit = n%10;

	for(i = 10; n/i > 10; i *= 10)
	{
	}

	first_digit = n/i;

	swaped_n = n;
	swaped_n = (swaped_n%i) + (last_digit*i);
	swaped_n = ( (swaped_n/10)*10) + first_digit;

	printf("%d's first and last digit are succesfully swaped and new int is  %d\n", n, swaped_n);
	return 0;
}
