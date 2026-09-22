#include <stdio.h>

int main() {
    int n, i = 1;
    printf("Enter a number: ");

    if (scanf("%d", &n) != 1) {
        printf("Error: Please enter an integer value only.\n");
        return 1;
    }
    if (n <= 0) {
        printf("Error: Please enter a positive integer.\n");
        return 1;
    }
    printf("Factors of %d are: ", n);
    while (i <= n) {
        if (n % i == 0) {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");
    return 0;
}
