#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter first number: ");

    if (scanf("%d", &a) != 1) {
        printf("Error: Please enter an integer value only.\n");
        return 1;
    }

    printf("Enter second number: ");

    if (scanf("%d", &b) != 1) {
        printf("Error: Please enter an integer value only.\n");
        return 1;
    }

    printf("Before swapping: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
