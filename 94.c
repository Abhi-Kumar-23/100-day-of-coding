#include <stdio.h>

void findPivotIndex(int arr[], int n) {
    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }
    
    int leftSum = 0;
    for (int i = 0; i < n; i++) {
        if (leftSum == totalSum - leftSum - arr[i]) {
            printf("Leftmost pivot index: %d\n", i);
            return;
        }
        leftSum += arr[i];
    }
    printf("Leftmost pivot index: -1\n");
}

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    findPivotIndex(arr, n);
    return 0;
}
