#include <stdio.h>

void checkPositiveNegative(int num) {
    if (num > 0) {
        printf("%d is a positive number.\n", num);
    } else if (num < 0) {
        printf("%d is a negative number.\n", num);
    } else {
        printf("The number is zero.\n");
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    checkPositiveNegative(number);

    return 0;
}
