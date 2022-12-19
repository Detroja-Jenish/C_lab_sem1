#include <stdio.h>

struct student
{
    char name[20];
    float percentage;
    int age;
};

void GetDetails(struct student *s);
void PrintDetails(struct student s);

int main()
{
    struct student students[5];
    int i;

    printf("%ld \n\n", sizeof(students[0]));

    for(i=0; i<5; i++)
    {
        GetDetails(&students[i]);
    }

    for(i=0; i<5; i++)
    {
        PrintDetails(students[i]);
    }

    return 0;
}

void GetDetails(struct student *s)
{
    printf("Enter student's name : ");
    scanf("%s", s->name);
    printf("Enter %s's percentage : ", s->name);
    scanf("%f", &(s->percentage));
    printf("Enter %s's age : ", s->name);
    scanf("%d", &s->age);
    printf("\n\n\n");
}

void PrintDetails(struct student s)
{
    printf("%s is %d years old and got %f perctages in mid-sem.\n\n", s.name, s.age, s.percentage);
}