#include <stdio.h>

int findCube(int num) {
    return num * num * num;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int cube = findCube(number);

    printf("The cube of %d is: %d\n", number, cube);

    return 0;
}
