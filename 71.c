#include <stdio.h>

int main() {
    int rows = 3, cols = 3;
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int k = 0; k < rows + cols - 1; k++) {
        for (int i = 0; i < rows; i++) {
            int j = k - i;
            if (j >= 0 && j < cols) {
                printf("%d ", a[i][j]);
            }
        }
    }
    
    return 0;
}
