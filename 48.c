#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*\n");
        }

        if (i < 5) {
            printf("\n");
        }
    }

    for (i = 4; i >= 1; i--) {
        printf("\n");

        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*\n");
        }
    }

    return 0;
}
