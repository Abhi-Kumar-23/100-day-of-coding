#include <stdio.h>

int main() {
    int n, i = 2;
    int product = 1;

    printf("Enter the value of n: ");

    if (scanf("%d", &n) != 1) {
        printf("Error: Please enter an integer value only.\n");
        return 1;
    }

    if (n < 2) {
        printf("Error: There are no positive even numbers ");
        return 1;
    }

    while (i <= n) {
        product = product * i;
        i = i + 2;
    }

    printf("Product of even numbers = %d\n", product);

    return 0;
}
