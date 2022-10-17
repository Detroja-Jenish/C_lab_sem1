#include <stdio.h>

int main()
{
	int a, b, choice, ans;

	printf("enter any two number");
	scanf("%d %d", &a, &b);

	printf(" enter digit between 1 to 4 as per you choice:: addition : 1, sub : 2, multiply : 3, division : 4  _");
	scanf("%d", &choice);
	
	
	if(choice == 1)
	{
		ans = a+b;
		printf("%d + %d = %d", a, b, ans);
	}
	else if(choice == 2)
	{
		ans = a-b;
                printf("%d - %d = %d", a, b, ans);

	}
	else if(choice == 3)
	{
		ans = a*b;
                printf("%d * %d = %d", a, b, ans);

	}
	else if(choice == 4)
	{
		ans = a/b;
                printf("%d / %d = %d", a, b, ans);

	}
	else
	{
		printf("Invalid operator or choice");
	}

	return 0;
}

