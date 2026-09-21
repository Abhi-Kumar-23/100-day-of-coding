#include <stdio.h>

int main() {
    int n, i = 1;
    int factorial = 1;

    printf("Enter a number: ");

    if (scanf("%d", &n) != 1) {
        printf("Error: Please enter an integer value only.\n");
        return 1;
    }

    if (n < 0) {
        printf("Error: Factorial of a negative number is not defined.\n");
        return 1;
    }

    while (i <= n) {
        factorial = factorial * i;
        i++;
    }

    printf("Factorial of %d = %d\n", n, factorial);

    return 0;
}
