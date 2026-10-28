#include <stdio.h>

void maxSubarraySumK(int arr[], int n, int k) {
    if (n < k || k <= 0) return;
    int current_sum = 0;
    for (int i = 0; i < k; i++) {
        current_sum += arr[i];
    }
    int max_sum = current_sum;
    for (int i = k; i < n; i++) {
        current_sum = current_sum + arr[i] - arr[i - k];
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }
    printf("%d\n", max_sum);
}
int main() {
    int n, k;
    if (scanf("%d %d", &n, &k) != 2) return 0;
    int arr[1000];
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) return 0;
    }
    maxSubarraySumK(arr, n, k);
    return 0;
}
