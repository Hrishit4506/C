#include <stdio.h>

int main() {
    float num1, num2;
    float difference, quotient, product;

    // Prompt user for input
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Calculate difference, quotient, and product
    difference = num1 - num2;
    quotient = num1 / num2;
    product = num1 * num2;

    // Output the results
    printf("Difference: %.2f\n", difference);
    printf("Quotient: %.2f\n", quotient);
    printf("Product: %.2f\n", product);

    return 0;
}
