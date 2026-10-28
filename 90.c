#include <stdio.h>
#include <string.h>

void printSubstrings(char str[]) {
    int len = strlen(str);
    printf("All sub-strings:\n");
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printSubstrings(str);
    return 0;
}
