#include <stdio.h>

int main() {
    int n, i = 1;
    float sum = 0;

    printf("Enter number of terms: ");

    if (scanf("%d", &n) != 1) {
        printf("Error: Please enter an integer value only.\n");
        return 1;
    }

    if (n <= 0) {
        printf("Error: Number of terms must be greater than 0.\n");
        return 1;
    }

    while (i<n){
        sum = ((2 * n) - 1) / 2 * n;
        i++;
    }

    printf("the sum is: %f", sum);
}    
