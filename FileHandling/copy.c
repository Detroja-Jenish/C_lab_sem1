#include<stdio.h>
#include<string.h>

int main()
{
    char ch;
    FILE *fp;
    fp =fopen("intro.txt","r");
    FILE *fp2;
    fp2 = fopen("copycat.txt", "w");
    while(!feof(fp))
    {
        fputc(fgetc(fp), fp2);
    }

    fclose(fp);
    fclode(fp2);
    return 0;
}