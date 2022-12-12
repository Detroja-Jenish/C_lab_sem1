#include<stdio.h>
float Max(float x, float y, float z);
int main()
{
	float x, y, z;

	printf("Enter a number : ");
	scanf("%f", &x);
	printf("Enter a number : ");
	scanf("%f", &y);
	printf("Enter a number : ");
	scanf("%f", &z);

	float max;
	max = Max(x, y, z);

	printf("max = %f", max);

	return 0;
}

float Max(float x, float y, float z)
{
	float m1;
	float m2;

	m1 = (x>y) ? x : y;

	m2 = (m1>z) ? m1 :z;

	return m2;
}
