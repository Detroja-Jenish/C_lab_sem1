#include<stdio.h>
#include "mylibrary.h"

int main()
{
	int n;

	printf("Enter a number : ");
	scanf("%d", &n);

	(is_prime_num(n)) ? printf("%d is prime number.\n", n) : printf("%d is not a prime number.\n", n);
	(is_armstrong_num(n)) ? printf("%d is armstrong number.\n", n) : printf("%d is not a armstrong number.\n", n);
	(is_perfect_num(n)) ? printf("%d is perfect number.\n", n) : printf("%d is not a perfect number.\n", n);

	return 0;
}
