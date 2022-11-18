#include <stdio.h>

int main()
{
    int BS , GS;
    float HRA, DA;

    printf("enter your Basic Sallary  _ ");
    scanf("%d", &BS);
    if(BS>=10000)
    {
        HRA = 0.20*BS;
        DA = 0.80*BS;
    }
    else if(BS>=20000)
    {
        HRA = 0.25*BS;
        DA = 0.90*BS;
    }
    else if(BS>=30000)
    {
        HRA = 0.30*BS;
        DA = 0.95*BS;
    }


    GS = BS + HRA + DA;
    printf("your gross salay is %d", GS);
    return 0;
}