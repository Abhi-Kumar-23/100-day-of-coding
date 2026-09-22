#include <stdio.h>

int main() {
    int n, digit, product = 1, found = 0;
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
        if (digit % 2 != 0) {
            product = product * digit;
            found = 1;
        }
        n = n / 10;
    }
    if (found == 1)
        printf("Product of odd digits = %d\n", product);
    else
        printf("There are no odd digits in the number.\n");

    return 0;
}
