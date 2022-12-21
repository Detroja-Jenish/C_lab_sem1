#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fp;
    char ch;

    fp = fopen("intro.txt", "r");

    while(!feof(fp))
    {
        ch=fgetc(fp);
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}