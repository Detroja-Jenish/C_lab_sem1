#include <stdio.h>

int main()
{
	int second, minute, hour;

	printf("enter no. seconds : ");
	scanf("%d", &second);

	hour = second/3600;
	minute = (second - (3600*hour))/60;
	second = second%60;

	printf("Time :- %d : %d : %d", hour, minute, second);

	return 0;
}
