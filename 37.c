#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) {
        printf("Error: Please enter an integer value only.\n");
        return 1;
    }
    if (n <= 0) {
        printf("Error: Please enter a positive integer.\n");
        return 1;
    }
    while (i <= n / 2) {
        if (n % i == 0) {
            sum = sum + i;
        }
        i++;
    }
    if (sum == n)
        printf("%d is a perfect number.\n", n);
    else
        printf("%d is not a perfect number.\n", n);
    return 0;
}
