#include <stdio.h>

int main() {
    int n, i = 2, flag = 1;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) {
        printf("Error: Please enter an integer value only.\n");
        return 1;
    }
    if (n <= 1) {
        printf("%d is not a prime number.\n", n);
        return 0;
    }
    while (i * i <= n) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
        i++;
    }
    if (flag == 1)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}
