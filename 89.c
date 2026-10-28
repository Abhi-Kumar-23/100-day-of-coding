#include <stdio.h>

void formatDate(char date[]) {
    int day, month, year;
    if (sscanf(date, "%d/%d/%d", &day, &month, &year) == 3) {
        if (month == 4) {
            printf("Formatted date: %02d-Apr-%04d\n", day, year);
        } else {
            printf("Invalid or unhandled month format.\n");
        }
    } else {
        printf("Invalid date format.\n");
    }
}

int main() {
    char date[20];
    printf("Enter date in dd/04/yyyy format: ");
    scanf("%s", date);
    formatDate(date);
    return 0;
}
