#include <stdio.h>

int main()
{
    char ch;

    printf("Enter nay character _ : ");
    scanf("%c", &ch);
    ((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))?printf("%c is alpha.", ch):printf("%c is not alpha.", ch);

    return 0;
}