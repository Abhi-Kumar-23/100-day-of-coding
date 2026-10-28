#include <stdio.h>
#include <ctype.h>
void toSentenceCase(char str[]) {
    int i = 0;
    while (str[i] == ' ' || str[i] == '\t') {
        i++;
    }
    if (str[i] != '\0') {
        str[i] = toupper(str[i]);
        i++;
    }
    while (str[i] != '\0') {
        str[i] = tolower(str[i]);
        i++;
    }
    printf("Sentence case string: %s\n", str);
}
int main() {
    char str[200];
    printf("Enter a string: ");
    scanf(" %[^\n]s", str);
    toSentenceCase(str);
    return 0;
}
