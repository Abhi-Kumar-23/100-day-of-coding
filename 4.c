#include <stdio.h>

int main() {
    int celsius;
    float fahrenheit;

    printf("Enter temperature in Celsius: ");

    if (scanf("%d", &celsius) != 1) {
        printf("Error: Please enter an integer value only.\n");
        return 1;
    }

    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    printf("Temperature in Fahrenheit = %f\n", fahrenheit);

    return 0;
}
