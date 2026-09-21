#include <stdio.h>

int main() {
    int n, original, reverse = 0, digit;

    printf("Enter a number: ");

    if (scanf("%d", &n) != 1) {
        printf("Error: Please enter an integer value only.\n");
        return 1;
    }

    if (n < 0) {
        printf("Error: Please enter a non-negative integer.\n");
        return 1;
    }

    original = n;

    while (n != 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if (original == reverse) {
        printf("%d is a palindrome number.\n", original);
    } else {
        printf("%d is not a palindrome number.\n", original);
    }

    return 0;
}
