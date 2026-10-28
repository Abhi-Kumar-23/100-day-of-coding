#include <stdio.h>

int findRepeated(int arr[], int n) {
    int slow = arr[0];
    int fast = arr[0];
    
    do {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);
    
    fast = arr[0];
    while (slow != fast) {
        slow = arr[slow];
        fast = arr[fast];
    }
    return slow;
}

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements (where exactly one element repeats): ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Repeated element: %d\n", findRepeated(arr, n));
    return 0;
}
