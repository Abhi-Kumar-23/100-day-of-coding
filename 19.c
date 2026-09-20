#include <stdio.h>

int main() {
    int days, fine;

    printf("Enter number of late days: ");

    if (scanf("%d", &days) != 1) {
        printf("Error: Please enter an integer value only.\n");
        return 1;
    }

    if (days < 0) {
        printf("Error: Number of days cannot be negative.\n");
        return 1;
    }

    if (days == 0) {
        printf("No fine.\n");
    } else if (days <= 5) {
        fine = days * 2;
        printf("Fine = Rs. %d\n", fine);
    } else if (days <= 10) {
        fine = 5 * 2 + (days - 5) * 4;
        printf("Fine = Rs. %d\n", fine);
    } else if (days <= 30) {
        fine = 5 * 2 + 5 * 4 + (days - 10) * 6;
        printf("Fine = Rs. %d\n", fine);
    } else {
        printf("Membership Cancelled.\n");
    }

    return 0;
}
