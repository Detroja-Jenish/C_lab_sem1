#include <stdio.h>

int main()
{
    int a, b, choice, ans;
    printf("enter two number _ : ");
    scanf("%d %d", &a, &b);

    printf(" enter digit between 1 to 4 as per you choice:: addition : 1, sub : 2, multiply : 3, division : 4  _");
	scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            ans = a+b;
		    printf("%d + %d = %d", a, b, ans);
            break;
        case 2:
            ans = a-b;
            printf("%d - %d = %d", a, b, ans);
            break;
        case 3:
            ans = a*b;
            printf("%d * %d = %d", a, b, ans);
            break;
        case 4:
            ans = a/b;
            printf("%d / %d = %d", a, b, ans);
            break;
        default:
            printf("Invalid Input...!!!");
    }

    return 0;
}
