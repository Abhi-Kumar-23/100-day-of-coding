#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");

    if (scanf("%d", &year) != 1) {
        printf("Error: Please enter an integer value only.\n");
        return 1;
    }

    if (year <= 0) {
        printf("Error: Please enter a valid positive year.\n");
        return 1;
    }

    if (year % 400 == 0) {
        printf("%d is a leap year.\n", year);
    } else if (year % 100 == 0) {
        printf("%d is not a leap year.\n", year);
    } else if (year % 4 == 0) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
