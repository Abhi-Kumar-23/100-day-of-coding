#include <stdio.h>

int main() {
    int a[100], n, i, element;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter sorted array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter element to insert: ");
    scanf("%d", &element);
    i = n - 1;
    while (i >= 0 && a[i] > element) {
        a[i + 1] = a[i];
        i--;
    }
    a[i + 1] = element;
    n++;
    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
