#include <stdio.h>
int main() {
    int num = 50;
    int sum = 0;

    while (num <= 100) {
        if (num % 2 == 0) { 
            sum += num;
        }
        num++;
    }

    printf("The sum of even numbers between 50 and 100 is: %d\n", sum);
    return 0;
}
