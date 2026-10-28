#include <stdio.h>
void findKthSmallest(int arr[], int n, int k) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("%d\n", arr[k - 1]);
}
int main() {
    int n, k;
    if (scanf("%d %d", &n, &k) != 2) return 0;
    int arr[1000];
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) return 0;
    }
    findKthSmallest(arr, n, k);
    return 0;
}
