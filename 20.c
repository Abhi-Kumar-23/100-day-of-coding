#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter units consumed: ");

    if (scanf("%d", &units) != 1) {
        printf("Error: Please enter an integer value only.\n");
        return 1;
    }

    if (units < 0) {
        printf("Error: Units cannot be negative.\n");
        return 1;
    }

    if (units <= 100) {
        bill = units * 5;
    } else if (units <= 200) {
        bill = 100 * 5 + (units - 100) * 7;
    } else if (units <= 300) {
        bill = 100 * 5 + 100 * 7 + (units - 200) * 10;
    } else {
        bill = 100 * 5 + 100 * 7 + 100 * 10 + (units - 300) * 12;
    }

    printf("Electricity Bill = Rs. %.2f\n", bill);

    return 0;
}
