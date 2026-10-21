#include <stdio.h>
int main() {
    int rows1, cols1 ;
    printf("Enter the number of rows: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns: ");
    scanf("%d", &cols1);

    int matrix[rows1][cols1];
    printf("\nEnter the elements of the matrix 1:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    int matrix2[rows1][cols1];
    int sum[rows1][cols1];
    printf("\nEnter the elements of the matrix 2:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            sum[i][j] = matrix[i][j] + matrix2[i][j];
        }
    }
    printf("\nthe sum matrix is: \n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }


    return 0;
}
