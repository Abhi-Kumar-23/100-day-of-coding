#include <stdio.h>

void mergeArrays(int arr1[], int m, int arr2[], int n) {
    int merged[m + n];
    int i = 0, j = 0, k = 0;
    
    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }
    
    while (i < m) {
        merged[k++] = arr1[i++];
    }
    
    while (j < n) {
        merged[k++] = arr2[j++];
    }
    
    printf("Merged sorted array: ");
    for (int x = 0; x < m + n; x++) {
        printf("%d ", merged[x]);
    }
    printf("\n");
}

int main() {
    int m, n;
    printf("Enter size of first sorted array (m): ");
    scanf("%d", &m);
    printf("Enter size of second sorted array (n): ");
    scanf("%d", &n);
    
    int arr1[m], arr2[n];
    printf("Enter %d sorted elements for first array: ", m);
    for (int i = 0; i < m; i++) scanf("%d", &arr1[i]);
    
    printf("Enter %d sorted elements for second array: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr2[i]);
    
    mergeArrays(arr1, m, arr2, n);
    return 0;
}

