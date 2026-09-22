#include <stdio.h>
#include <math.h>

int main()
{
    int num, n=0, sum=0, temp;
    printf("enter the number: ");
    scanf("%d",&num);

    while( num > 0){
        num /= 10;
        n+=1;
    }

    for (int i = 0; i <= n; i++){
        temp = num % 10;
        sum += pow(temp, n);
    }

    if (sum!=num){
        printf("the number is not armstrong");
    }else {
        printf("the number is armstrong");
    }

        return 0;
}
