#include <stdio.h>

int main()
{
    int num1, num2;
    printf("enter first numbers: ");
    if(scanf("%d", &num1)!=1){
        printf("invalid entry! ");
    }
    printf("entr second number: ");
    if (scanf("%d", &num2)!=1){
        printf("invalid statement");
    }

    int sum = num1 + num2;
    int diff = num1 - num2;
    int product = num1 * num2;
    int quotient = num1 / num2;

    printf("The sum is %d\n", sum);
    printf("The difference is %d\n", diff );
    printf("The product is %d\n", product);
    printf("The quotient is %d\n", quotient);
    

    return 0;
}
