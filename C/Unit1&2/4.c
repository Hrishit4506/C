#include <stdio.h>
int main() {
    int a;
    float b;
    char c;

    printf("Memory occupied by int: %lu bytes\n", sizeof(a));
    printf("Memory occupied by float: %lu bytes\n", sizeof(b));
    printf("Memory occupied by char: %lu bytes\n", sizeof(c));

    return 0;
}
