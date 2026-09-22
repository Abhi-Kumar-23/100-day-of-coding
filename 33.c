#include <stdio.h>

int main() {
    int a, b, x, y, temp, gcd, lcm;
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
    x = a;
    y = b;
    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }
    gcd = x;
    lcm = (a / gcd) * b;
    printf("LCM = %d\n", lcm);
    return 0;
}
