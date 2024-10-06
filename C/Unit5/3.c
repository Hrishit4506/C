#include <stdio.h>

int largest(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int num1, num2, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    max = largest(num1, num2);

    printf("The largest number is: %d\n", max);

    return 0;
}
