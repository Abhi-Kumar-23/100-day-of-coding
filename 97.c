#include <stdio.h>

void nextGreaterElement(int arr[], int n) {
    printf("Next greater elements: ");
    for (int i = 0; i < n; i++) {
        int nextGreater = -1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j];
                break;
            }
        }
        if (i == n - 1) {
            printf("%d", nextGreater);
        } else {
            printf("%d, ", nextGreater);
        }
    }
    printf("\n");
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
    nextGreaterElement(arr, n);
    return 0;
}
