#include <stdio.h>

int main() {
    float costPrice, sellingPrice, percentage;

    printf("Enter cost price: ");
    if (scanf("%f", &costPrice) != 1) {
        printf("Error: Please enter a valid number.\n");
        return 1;
    }

    printf("Enter selling price: ");
    if (scanf("%f", &sellingPrice) != 1) {
        printf("Error: Please enter a valid number.\n");
        return 1;
    }

    if (costPrice <= 0 || sellingPrice < 0) {
        printf("Error: Please enter valid positive prices.\n");
        return 1;
    }

    if (sellingPrice > costPrice) {
        percentage = ((sellingPrice - costPrice) / costPrice) * 100;
        printf("Profit Percentage = %.2f%%\n", percentage);
    } else if (costPrice > sellingPrice) {
        percentage = ((costPrice - sellingPrice) / costPrice) * 100;
        printf("Loss Percentage = %.2f%%\n", percentage);
    } else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}
