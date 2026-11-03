#include <stdio.h>

void readFile() {
    FILE *file = fopen("info.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }
    char buffer[256];
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }
    fclose(file);
}

int main(){
    readFile();
    return 0;
    
}
