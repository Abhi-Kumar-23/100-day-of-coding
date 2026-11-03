#include <stdio.h>

void appendToFile() {
    FILE *file = fopen("info.txt", "a");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }
    char text[256];
    printf("Enter text to append: ");
    getchar();
    fgets(text, sizeof(text), stdin);
    fprintf(file, "%s", text);
    fclose(file);
    printf("Text appended successfully.\n");
}

int main() {
    appendToFile();
    return 0;
}
