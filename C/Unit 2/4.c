#include <stdio.h>

int main() {
    float length, breadth, side, area_rectangle, area_square;

    printf("Enter the length and breadth of the rectangle: ");
    scanf("%f %f", &length, &breadth);

    printf("Enter the side of the square: ");
    scanf("%f", &side);

    area_rectangle = length * breadth;
    area_square = side * side;

    printf("Area of Rectangle: %.2f\n", area_rectangle);
    printf("Area of Square: %.2f\n", area_square);
    return 0;
}
