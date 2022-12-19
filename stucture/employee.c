#include<stdio.h>

struct employee
{
     char name[10];
     int salary;
};

int main()
{
    struct employee employee1;

    printf("enter your name : ");
    scanf("%s", employee1.name);
    printf("Bolo bhai Salary kitni loge discuss kar le : ");
    scanf("%d", &employee1.salary);

    printf("%s's salary is %d rs.", employee1.name, employee1.salary);

    return 0;
}