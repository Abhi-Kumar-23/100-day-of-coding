#include <stdio.h>

void writeUserInfo() {
    FILE *file = fopen("info.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }
    char name[50];
    int age;
    printf("Enter name: ");
    scanf("%49s", name);
    printf("Enter age: ");
    scanf("%d", &age);
    fprintf(file, "Name: %s\nAge: %d\n", name, age);
    fclose(file);
    printf("Data was successfully saved.\n");
}

int main() {
    writeUserInfo();
    return 0;
}
