#include <stdio.h>

int main() {
    float num1, num2, product;

    // Prompt user for input
    printf("Enter the first floating point number: ");
    scanf("%f", &num1);

    printf("Enter the second floating point number: ");
    scanf("%f", &num2);

    // Multiply the two numbers
    product = num1 * num2;

    // Output the result
    printf("Product of %.2f and %.2f is %.2f\n", num1, num2, product);

    return 0;
}
