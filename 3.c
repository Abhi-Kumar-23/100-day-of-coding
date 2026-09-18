#include <stdio.h>

int main() {
    int radius;
    float area, circumference;

    printf("Enter the radius: ");

    if (scanf("%d", &radius) != 1) {
        printf("Error: Please enter an integer value only.\n");
        return 1;
    }

    if (radius <= 0) {
        printf("Error: Radius must be greater than 0.\n");
        return 1;
    }

    area = 3.14159 * radius * radius;
    circumference = 2 * 3.14159 * radius;

    printf("Area of circle = %f\n", area);
    printf("Circumference of circle = %f\n", circumference);

    return 0;
}
