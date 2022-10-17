#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any character _ ");
    scanf("%c", &ch);

    if(ch>=65 && ch<=90){
        printf("%c is in upper_case", ch);
    }
    else if(ch>=97 && ch<=122){
        printf("%c is in lower_case", ch);
    }
    else if(ch>=48 && ch<=57){
        printf("%c is digit", ch);
    }
    else{
        printf("%c is in Special_character", ch);
    }

    return 0;
}