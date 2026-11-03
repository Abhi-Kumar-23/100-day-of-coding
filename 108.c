#include <stdio.h>
void copyFile() {
    char sourceName[100], destName[100];
    printf("Enter source filename: ");
    scanf("%99s", sourceName);
    printf("Enter destination filename: ");
    scanf("%99s", destName);
    FILE *src = fopen(sourceName, "r");
    if (src == NULL) {
        printf("Error opening source file.\n");
        return;
    }
    FILE *dest = fopen(destName, "w");
    if (dest == NULL) {
        printf("Error creating destination file.\n");
        fclose(src);
        return;
    }
    char ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }
    fclose(src);
    fclose(dest);
    printf("File copied successfully.\n");
}

int main() {
    copyFile();
    return 0;
}
