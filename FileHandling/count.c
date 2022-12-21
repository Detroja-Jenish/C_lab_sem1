#include<stdio.h>
#include<string.h>

int main()
{
    int newLine = 0, space = 0, tab = 0, c = 0;
    char ch;
    FILE *fp;
    fp = fopen("demo.txt", "r");

    while(!feof(fp))
    {
        ch=fgetc(fp);
        switch(ch)
        {
            case '\n':
                newLine++;
                break;

            case ' ':
                space++;
                break;

            case '\t':
                tab++;
                break;
        }
        c++;
    }
    fclose(fp);
    printf("Number of line : %d\nNumber of spaces: %d\nNumber of tabs : %d\nNUmber of chars : %d\n\n", newLine+1, space, tab , c);
    return 0;

}