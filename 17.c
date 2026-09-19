#include<stdio.h>
int main(){
    int num;
    printf("enter a number from 1-12");
    if (scanf("%d",&num)!=1){
        printf("enter a valid number");
    }else if (num>12){
        printf("enter the number in range of 1-12 ");
    }

    switch(num){
        case 1:
            printf("January");
            printf("31 days");
            break;
        case 2:
            printf("Feburary");
            printf("28 days");
            break;
        case 3:
            printf("March");
            printf("31 days");
            break;
        case 4:
            printf("April");
            printf("30 days");
            break;
        case 5:
            printf("May");
            printf("31 days");
            break;
        case 6:
            printf("June");
            printf("30 days");
            break;
        case 7:
            printf("July");
            printf("31 days");
            break;
        case 8:
            printf("August");
            printf("31 days");
            break;
        case 9:
            printf("September");
            printf("30 days");
            break;
        case 10:
            printf("October");
            printf("31 days");
            break;
        case 11:
            printf("November");
            printf("30 days");
            break;
        case 12:
            printf("December");
            printf("31 days");
            break;
        
    }
}
