#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fp;
    char str[10] = "Viral";
    fp =fopen("intro.txt", "a");
    
    fputc('\n', fp);
    fputs(str, fp);

    fclose(fp);
    return 0;
}