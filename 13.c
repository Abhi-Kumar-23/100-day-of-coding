#include <stdio.h>
int main(){
    int num1, num2, num3;

    printf("enter 1 number: ");
    if (scanf("%d",&num1)!=1){
        printf("enter a valid number ");
    }

    printf("enter 2 number: ");
    if (scanf("%d", &num2)!=1){
        printf("enter a valid number: ");
    }

    printf("enter 3 number: ");
    if(scanf("%d", &num3)!=1){
        printf("etner a valid number");
    }

    if (num1>num2 && num1>num3){
        printf("number %d is greater", num1);
    }else if (num2>num1 && num2>num3){
        printf("number %d is greater", num2);
    }else {
        printf("number %d is greater", num3);
    }
    return 0;
}
