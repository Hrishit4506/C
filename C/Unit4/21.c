#include <stdio.h>
int main() {
    int num = 10;
    int sum = 0;

    while (num <= 20) {
        if (num % 2 != 0) {
            sum += num;
        }
        num++;
    }

    printf("The sum of odd numbers between 10 and 20 is: %d\n", sum);
    return 0;
}
