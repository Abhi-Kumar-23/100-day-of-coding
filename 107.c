#include <stdio.h>
#include <ctype.h>
void countFileContents() {
    FILE *file = fopen("info.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }
    int chars = 0, words = 0, lines = 0;
    char ch;
    int inWord = 0;
    while ((ch = fgetc(file)) != EOF) {
        chars++;
        if (ch == '\n') {
            lines++;
        }
        if (isspace(ch)) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            words++;
        }
    }
    fclose(file);
    printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words, lines);
}
int main() {
    countFileContents();
    return 0;
}
