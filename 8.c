#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    printf("Enter time in seconds: ");

    if (scanf("%d", &totalSeconds) != 1) {
        printf("Error: Please enter an integer value only.\n");
        return 1;
    }

    if (totalSeconds < 0) {
        printf("Error: Time cannot be negative.\n");
        return 1;
    }

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    printf("Time = %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
