#include <stdio.h>

int main(){
    int mat, c, wd, eng, env;
    float percentage;
    printf("enter marks of mat, c, wd, eng, env in squence _");
    scanf("%d %d %d %d %d", &mat, &c, &wd, &eng, &env);

    percentage = (mat + c + wd + eng + env)/5;

    if(percentage<35.00){
        printf("your got %f %c in exam and you failled. \nBetter luck next time.", percentage, '%');
    }
    else if(percentage<45.00){
        printf("your got %f %c in exam and you passed", percentage, '%');
    }
    else if(percentage<60.00){
        printf("your got %f %c in exam and you passed with second grade", percentage, '%');
    }
    else if(percentage<=70.00){
        printf("your got %f %c in exam and you passed with first grade", percentage, '%');
    }
    else{
        printf("your got %f %c in exam and you got distincance", percentage, '%');
    }

    return 0;
}