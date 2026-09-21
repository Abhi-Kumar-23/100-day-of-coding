#include <stdio.h>

int main() {
    int n, remainder;
    int binary = 0, place = 1;

    printf("Enter a number: ");

    if (scanf("%d", &n) != 1) {
        printf("Error: Please enter an integer value only.\n");
        return 1;
    }

    if (n < 0) {
        printf("Error: Please enter a non-negative integer.\n");
        return 1;
    }

    if (n == 0) {
        printf("Binary representation = 0\n");
        return 0;
    }

    while (n > 0) {
        remainder = n % 2;
        binary = binary + remainder * place;
        place = place * 10;
        n = n / 2;
    }

    printf("Binary representation = %d\n", binary);

    return 0;
}
