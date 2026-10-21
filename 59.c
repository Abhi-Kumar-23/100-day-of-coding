#include <stdio.h>

int main() {
    int a[100], n, i, element, position;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter element to insert: ");
    scanf("%d", &element);
    printf("Enter position: ");
    scanf("%d", &position);
    for (i = n; i >= position; i--) {
        a[i] = a[i - 1];
    }
    a[position - 1] = element;
    n++;
    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
