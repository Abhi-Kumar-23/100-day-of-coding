#include <stdio.h>
int main(){
    float percent;

    printf("enter the percentage: ");
    if(scanf("%f",&percent)!=1){
        printf("enter the valid percetnage! ");
        return 0;
    }

    if(percent>=90.0 && percent<=100){
        printf("Grade A");
    }else if(percent>=80 && percent<=89){
        printf("Grade B");
    }else if(percent>=70 && percent<=79){
        printf("Grade C");
    }else if(percent>=60 && percent<=69){
        printf("Grade D");
    }else if(percent<=59){
        printf("Grade F");
    }else if (percent > 100 || percent < 0){
        printf("enter a valid percentage!! ");
    }
    return 0;
}
