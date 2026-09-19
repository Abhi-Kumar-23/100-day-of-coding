#include<stdio.h>
int main(){
    int num;
    printf("enter a number from 1-7: ");
    if(scanf("%d", &num)!=1){
        printf("enter a valid number");
    }else if (num>7){
        printf("enter a valid number");
    }

    switch(num){
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
    }
}
