#include <stdio.h>

int main() {
    int n, i = 1;

    printf("Enter the value of n: ");

    if (scanf("%d", &n) != 1) {
        printf("Error: Please enter an integer value only.\n");
        return 1;
    }

    if (n <= 0) {
        printf("Error: Please enter a positive integer.\n");
        return 1;
    }

    while (i <= n) {
        printf("%d ", i); 
        i++;
    }

    return 0;
}
