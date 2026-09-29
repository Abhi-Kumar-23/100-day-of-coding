#include <stdio.h>

int main() {
    int n, first, last, temp, place = 1, middle, result;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) {
        printf("Error: Please enter an integer value only.\n");
        return 1;
    }
    if (n < 0) {
        printf("Error: Please enter a non-negative integer.\n");
        return 1;
    }
    if (n < 10) {
        printf("Number after swapping = %d\n", n);
        return 0;
    }
    last = n % 10;
    temp = n;
    while (temp >= 10) {
        temp = temp / 10;
        place = place * 10;
    }
    first = temp;
    middle = (n % place) / 10;
    result = last * place + middle * 10 + first;
    printf("Number after swapping = %d\n", result);
    return 0;
}
