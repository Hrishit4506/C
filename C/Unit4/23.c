#include <stdio.h>
int main() {
    int num;
    float factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    printf("Factorial of %d = %.2f\n", num, factorial);
    return 0;
}
