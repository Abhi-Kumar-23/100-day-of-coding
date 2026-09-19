#include<stdio.h>
int main(){
    float side1, side2, side3;

    printf("enter side1: ");
    if (scanf("%f", &side1)!=1){
        printf("enter a valid side");
    }

    printf("enter side2: ");
    if (scanf("%f", &side2)!=1){
        printf("enter a valid side ");
    }

    printf("enter side3: ");
    if(scanf("%f",&side3)!=1){
        printf("enter a valid side");
    }

    if (side1==side2 && side1==side3){
        printf("It is an equilateral triangle");
    }else if (side1!=side2 && side1!=side3 && side2!=side3){
        printf("It is a scalene triangle");
    }else{
        printf("It is a isoceles triangle");
    }
}
