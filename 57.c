#include <stdio.h>

int main() {
    int n, temp, digit, i;
    int maxCount = 0, mostDigit = 0, count;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 0; i <= 9; i++) {
        temp = n;
        count = 0;
        while (temp > 0) {
            digit = temp % 10;

            if (digit == i) {
                count++;
            }

            temp = temp / 10;
        }
        if (count > maxCount) {
            maxCount = count;
            mostDigit = i;
        }
    }
    printf("Most occurring digit = %d\n", mostDigit);
    printf("It occurs %d times\n", maxCount);

    return 0;
}
