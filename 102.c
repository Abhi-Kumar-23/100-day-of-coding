#include <stdio.h>

int findMissing(int arr[], int n) {
    int expectedSum = (n * (n + 1)) / 2;
    int actualSum = 0;
    for (int i = 0; i < n; i++) {
        actualSum += arr[i];
    }
    return expectedSum - actualSum;
}

int main() {
    int n;
    printf("Enter the total array size (n): ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements ranging between 0 and %d (with one missing): ", n, n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Missing number: %d\n", findMissing(arr, n));
    return 0;
}
