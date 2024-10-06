#include <stdio.h>
int main() {
    int num1, num2, num3, num4, num5, sum;
    float average;

    printf("Enter 5 numbers: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    sum = num1 + num2 + num3 + num4 + num5;
    average = sum / 5.0;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
