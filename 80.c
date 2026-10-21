#include <stdio.h>

int main() {
    char str[] = "hello world C program";
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }
    printf("%s\n", str);
    return 0;
}
