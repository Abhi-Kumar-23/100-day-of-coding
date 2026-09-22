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
    if (a <= 0 || b <= 0) {
        printf("Error: Please enter positive integers only.\n");
        return 1;
    }
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    printf("HCF = %d\n", a);
    return 0;
}
