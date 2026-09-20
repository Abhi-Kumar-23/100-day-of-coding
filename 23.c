#include <stdio.h>

int main() {
    int n, i = 1, odd = 1, sum = 0;

    printf("Enter the value of n: ");

    if (scanf("%d", &n) != 1) {
        printf("Error: Please enter an integer value only.\n");
        return 1;
    }

    if (n <= 0) {
        printf("Error: Please enter a positive integer.\n");
        return 1;
    }

    while (i <= n) {
        sum = sum + odd;
        odd = odd + 2;
        i++;
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}
