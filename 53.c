#include <stdio.h>
int main() {
    int n, i, positive=0, negative=0, zero=0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]); 
    }

    for (i = 0; i < n; i++){
        if(arr[i]>0){
            positive += 1;
        }else if(arr[i]<0){
            negative += 1;
        }else{
            zero += 1;
        }
    }

    printf("positive numbers: %d\n", positive);
    printf("negative numbers: %d\n", negative);
    printf("zero: %d\n", zero);
    return 0;
}
