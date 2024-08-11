#include <stdio.h>

int main() {
    int num;
    float f;

    printf("Enter an integer: ");
    scanf("%d", &num);

    f = (float)num;

    printf("Integer %d converted to float is %.2f\n", num, f);
    return 0;
}
