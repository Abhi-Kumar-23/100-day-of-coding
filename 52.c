#include <stdio.h>

int main() {
    int n, i, odd=0, even=0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]); 
    }

    for (i = 0; i < n; i++){
        if(arr[i]%2==0){
            even += 1;
        }else{
            odd += 1;
        }
    }
    printf("odd number: %d\n",odd);
    printf("even numbers: %d\n", even);
    return 0;
}
