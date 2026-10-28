#include <stdio.h>

void findTwoSum(int nums[], int size, int target) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                return;
            }
        }
    }
    printf("-1 -1\n");
}

int main() {
    int n, target;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter %d positive integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    printf("Enter the target sum: ");
    scanf("%d", &target);
    findTwoSum(nums, n, target);
    return 0;
}

