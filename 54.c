int main() {
    int n, i, search, found=0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]); 
    }

    printf("enter the element you watn to search : ");
    scanf("%d", &search);

    for (i = 0; i < n; i++){
        if(search==arr[i]){
            printf("%d found at index %d\n",search,i);
            found = 1;
            break;
        }
    }
    if (!found){
        printf("your selected element is not in the array!!\n");
    }
        return 0;
}
