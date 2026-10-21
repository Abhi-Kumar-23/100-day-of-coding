#include <stdio.h>

int main() {
    int n, i, max=0, min=0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]); 
    }

    for (i = 0; i < n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    printf("the maximum number is %d\n", max);

    for (i = 0; i < n; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("the minimum number is %d\n", min);

    return 0;
}
