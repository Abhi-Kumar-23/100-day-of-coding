#include <stdio.h>
void productExceptSelf(int arr[], int n) {
    int answer[1000];
    for (int i = 0; i < n; i++) {
        int prod = 1;
        for (int j = 0; j < n; j++) {
            if (i != j) {
                prod *= arr[j];
            }
        }
        answer[i] = prod;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", answer[i]);
    }
    printf("\n");
}
int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int arr[1000];
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) return 0;
    }
    productExceptSelf(arr, n);
    return 0;
}
