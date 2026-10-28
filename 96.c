#include <stdio.h>

void findMajorityElement(int nums[], int n) {
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (nums[i] == nums[j]) {
                count++;
            }
        }
        if (count > n / 2) {
            printf("Majority element: %d\n", nums[i]);
            return;
        }
    }
    printf("Majority element: -1\n");
}

int main() {
    int n;
    printf("Enter array size n: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    findMajorityElement(nums, n);
    return 0;
}
