#include <stdio.h>

int main()
{
	int n, dummy, sum = 0, last_digit, first_digit;

	printf("Enter a number   :  ");
	scanf("%d", &n);

	dummy = n;
	last_digit = n%10;

	while( n >= 10 )
	{
		n = n/10;
	}

	first_digit = n;

	sum = last_digit + first_digit;

	printf("%d's last digit is %d and first digit is %d and theirs sum is %d...\n", n, last_digit, first_digit, sum);

	return 0;

}
