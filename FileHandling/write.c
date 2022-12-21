#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fp;
    char a = 'a';
    char str[10] = "Jenish";

    fp = fopen("intro.txt", "w");

    fputc(a,fp);
    fputc(' ', fp);
    fputs(str, fp);
    fputc('\n', fp);

    int i;
    for(i=0; i<strlen(str); i++)
    {
        fputc(str[i], fp);

    }
    fclose(fp);
}