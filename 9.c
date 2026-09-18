#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");

    if (scanf("%d", &num) != 1) {
        printf("Error: Please enter an integer value only.\n");
        return 1;
    }

    if (num >= 0) {
        if (num == 0) {
            printf("The number is zero.\n");
        } else {
            printf("The number is positive.\n");
        }
    } else {
        printf("The number is negative.\n");
    }

    return 0;
}
