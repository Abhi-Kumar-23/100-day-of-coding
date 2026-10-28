#include <stdio.h>

void findPivotInteger(int n) {
    int totalSum = (n * (n + 1)) / 2;
    int currentSum = 0;
    for (int x = 1; x <= n; x++) {
        currentSum += x;
        if (currentSum == totalSum - currentSum + x) {
            printf("Pivot integer: %d\n", x);
            return;
        }
    }
    printf("Pivot integer: -1\n");
}

int main() {
    int n;
    printf("Enter positive integer n: ");
    scanf("%d", &n);
    findPivotInteger(n);
    return 0;
}
