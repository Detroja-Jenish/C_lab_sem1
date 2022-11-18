#include <stdio.h>

int main()
{
    int unit;
    float amt, tax, finall_bill;

    printf("enter unit _ : ");
    scanf("%d", &unit);

    if(unit<=50)
    {
        amt = unit*0.5;
    }
    else if(unit<=150)
    {
        amt = 25 + (unit-50)*0.75;
    }
    else if(unit<=250)
    {
        amt = 100 + (unit-150)*1.20;
    }
    else
    {
        amt = 220 + (unit-250)*1.5;
    }

    tax = amt*0.2;
    finall_bill = amt + tax;

    printf("you have to paid %f ruppes." , finall_bill);
    return 0;
}