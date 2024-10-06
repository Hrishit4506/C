#include <stdio.h>
int main() {
    char choice;
    float length, width, radius, side, area;

    printf("Enter your choice:\n'a' for area of rectangle\n'b' for area of circle\n'c' for area of square\n");
    scanf(" %c", &choice);

    switch (choice) {
        case 'a':
            printf("Enter length and width of the rectangle: ");
            scanf("%f %f", &length, &width);
            area = length * width;
            printf("Area of rectangle: %.2f\n", area);
            break;
        case 'b':
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = 3.14159 * radius * radius;
            printf("Area of circle: %.2f\n", area);
            break;
        case 'c':
            printf("Enter the side of the square: ");
            scanf("%f", &side);
            area = side * side;
            printf("Area of square: %.2f\n", area);
            break;
        default:
            printf("Wrong choice.\n");
    }
    
    return 0;
}
