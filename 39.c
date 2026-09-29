#include <stdio.h>

int main() {
    int n, i = 1;
    float numerator = 2, denominator = 3, sum = 0;

    printf("Enter number of terms: ");

    if (scanf("%d", &n) != 1) {
        printf("Error: Please enter an integer value only.\n");
        return 1;
    }
    if (n <= 0) {
        printf("Error: Number of terms must be greater than 0.\n");
        return 1;
    }
    while (i <= n) {
        sum = sum + numerator / denominator;

        numerator = numerator + 2;
        denominator = denominator + 4;

        i++;
    }
    printf("Sum of the series = %.2f\n", sum);

    return 0;
}
