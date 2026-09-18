#include <stdio.h>

int main() {
    int length, breadth, area, perimeter;

    printf("Enter length: ");
    if(scanf("%d", &length)!=1){
        printf("wrong input");
    }

    printf("Enter breadth: ");
    if (scanf("%d", &breadth)!=1){
        printf("wrong input");
    }

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area = %d\n", area);
    printf("Perimeter = %d\n", perimeter);

    return 0;
}
