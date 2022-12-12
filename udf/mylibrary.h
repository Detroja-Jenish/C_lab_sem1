int is_prime_num(int n)
{
	int i;
	for(i=2; i<n/2; i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}

int is_perfect_num(int n)
{
	int i, sum = 1;
	for(i=2; i<n; i++)
	{
		if(n%i == 0)
		{
			sum += i;
		}
	}

	return (sum == n) ? 1 : 0;
}

int number_digits(int n)
{
	return (n == 0) ? 0 : 1 + number_digits(n/10);
}

int power(int x, int y)
{
	return (y == 1) ? x : x*power(x,--y);
}

int is_armstrong_num(int n)
{
	int sum = 0;
	int m = n;
	int y = number_digits(n);

	while(m>0)
	{
		sum += power(m%10, y);
		m = m/10;
	}

	return (sum == n) ? 1 : 0;
}

int factorial(int n)
{
	return (n == 0 || n == 1) ? 1 : n*factorial(n-1);
}
