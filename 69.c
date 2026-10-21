#include <stdio.h>

int main() {
    int n, distinct = 1;
    printf("Enter size: ");
    scanf("%d", &n);
    int mat[n][n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (mat[i][i] == mat[j][j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct) break;
    }
    if (distinct) {
        printf("Distinct\n");
    } else {
        printf("Not distinct\n");
    }
    return 0;
}
