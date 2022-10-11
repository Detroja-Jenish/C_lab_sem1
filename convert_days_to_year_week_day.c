#include <stdio.h>

int main()
{
	int N_Days, year, week, day;

	printf("enter no. of days : ");
	scanf("%d", &N_Days);

	year = N_Days/365;
	week = (N_Days - (365*year))/7;
	day = (N_Days - (365*year))%7;

	printf("the %d  N_Days is equals to %d years %d weeks %d", N_Days, year, week, day);

	return 0;
} 	
