#include <stdio.h>

int main()
{
    int D;

    printf("Enter any number between 1 to 12");

    scanf("%d", &D);

    switch(D)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("\n31 days in this month.\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("\n30 days in this month.\n");
            break;
        case 2:
            printf("\n28 or 29 days in this month.\n");
            break;
        default:
            printf("Invalid Input...!!!");
    }
    return 0;
}