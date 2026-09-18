#include <stdio.h>

int main() {
    int n, sum;

    printf("Enter the value of n: ");

    if (scanf("%d", &n) != 1) {
        printf("Error: Please enter an integer value only.\n");
        return 1;
    }

    if (n <= 0) {
        printf("Error: Please enter a positive integer.\n");
        return 1;
    }

    sum = n * (n + 1) / 2;

    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}
