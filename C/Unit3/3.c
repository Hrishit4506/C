#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 15 == 0 && num % 25 == 0) {
        printf("Divisible by 15 and 25\n");
    } else {
        printf("Not divisible by 15 and 25\n");
    }

    return 0;
}
