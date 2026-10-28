#include <stdio.h>

void findFirstAndLast(int nums[], int n, int target) {
    int first = -1, last = -1;
    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (first == -1) {
                first = i;
            }
            last = i;
        }
    }
    printf("First and last occurrence indices: %d, %d\n", first, last);
}

int main() {
    int n, target;
    printf("Enter number of elements in sorted array: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    printf("Enter target value: ");
    scanf("%d", &target);
    findFirstAndLast(nums, n, target);
    return 0;
}
