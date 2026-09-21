#include <stdio.h>

int main() {
    int n, original, reverse = 0, digit;

    printf("Enter a number: ");

    if (scanf("%d", &n) != 1) {
        printf("Error: Please enter an integer value only.\n");
        return 1;
    }

    original = n;

    while (n != 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    printf("Reverse of %d = %d\n", original, reverse);

    return 0;
}
