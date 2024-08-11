#include <stdio.h>

int main() {
    float feet, centimeters;

    // Prompt user for input
    printf("Enter the length in feet: ");
    scanf("%f", &feet);

    // Convert feet to centimeters
    centimeters = feet * 30.48;

    // Output the result
    printf("%.2f feet is equal to %.2f centimeters.\n", feet, centimeters);

    return 0;
}
