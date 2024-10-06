#include <stdio.h>
int main() {
    int num = 1;

    printf("Even numbers between 1 and 100 are:\n");

    while (num <= 100) {
        if (num % 2 == 0) {
            printf("%d ", num);
        }
        num++;
    }

    printf("\n");
    return 0;
}
