#include <stdio.h>

void findCeil(int arr[], int n, int x) {
    int index = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= x) {
            index = i;
            break;
        }
    }
    printf("Ceil index: %d\n", index);
}

int main() {
    int n, x;
    printf("Enter number of elements in sorted array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter value of x: ");
    scanf("%d", &x);
    findCeil(arr, n, x);
    return 0;
}
