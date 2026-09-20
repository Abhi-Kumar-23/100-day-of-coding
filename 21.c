#include <stdio.h>

int main() {
    float num1, num2;
    char operator;

    printf("Enter first number: ");
    if (scanf("%f", &num1) != 1) {
        printf("Error: Please enter a valid number.\n");
        return 1;
    }

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    if (scanf("%f", &num2) != 1) {
        printf("Error: Please enter a valid number.\n");
        return 1;
    }

    switch (operator) {
        case '+':
            printf("Result = %.2f\n", num1 + num2);
            break;

        case '-':
            printf("Result = %.2f\n", num1 - num2);
            break;

        case '*':
            printf("Result = %.2f\n", num1 * num2);
            break;

        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
                return 1;
            }
            printf("Result = %.2f\n", num1 / num2);
            break;

        default:
            printf("Error: Invalid operator. Use +, -, * or / only.\n");
    }

    return 0;
}
