#include <stdio.h>

int main() {
    int n, digit, sum = 0;

    printf("Enter a number: ");

    if (scanf("%d", &n) != 1) {
        printf("Error: Please enter an integer value only.\n");
        return 1;
    }

    if (n < 0) {
        printf("Error: Please enter a non-negative integer.\n");
        return 1;
    }

    while (n != 0) {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
