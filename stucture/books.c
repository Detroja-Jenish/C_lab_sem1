#include<stdio.h>

struct book
{
    char name[20];
    char author[20];
    char publication[20];
    int price;
};
void GetDetails(struct book *b);
void PrintDetails(struct book b);

int main()
{
    struct book b1, b2, b3;

    GetDetails(&b1);
    GetDetails(&b2);
    GetDetails(&b3);

    PrintDetails(b1);
    PrintDetails(b2);
    PrintDetails(b3);

    return 0;
}

void GetDetails(struct book *b)
{
    printf("which book is  you reading nowadays : ");
    scanf("%s", b->name);
    printf("who is author : ");
    scanf("%s", b->author);
    printf("Which publication has publiced this book : ");
    scanf("%s", b->publication);
    printf("what is price of this book : ");
    scanf("%d", &b->price);
    printf("\n\n\n");
}

void PrintDetails(struct book b)
{
    printf(" Book : %s\n Author : %s\n Publication : %s\n Price : %d.\n\n\n", b.name, b.author, b.publication, b.price);
}