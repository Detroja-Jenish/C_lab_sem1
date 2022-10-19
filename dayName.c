#include <stdio.h>

int main(){
    int D;

    printf("enter any number between 1 to 7 : ");
    scanf("%d", &D);

    switch(D)
    {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("WEdnesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid input");

    }
    return 0;
}