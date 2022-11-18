#include <stdio.h>
int main(){
    int a, b, c;
    printf("enter any integers : ");
    scanf("%d", &a);

    if(a >= 0){
        printf("%d is positive", a);
    }else{
        printf("%d is negativee", a);
    }
    
    return 0;
}