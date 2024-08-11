#include <stdio.h>

int main() {
    int a = 5, b = 3;

    printf("a & b = %d\n", a & b);  // Bitwise AND
    printf("a | b = %d\n", a | b);  // Bitwise OR
    printf("a ^ b = %d\n", a ^ b);  // Bitwise XOR
    printf("~a = %d\n", ~a);        // Bitwise NOT
    printf("a << 1 = %d\n", a << 1); // Bitwise left shift
    printf("a >> 1 = %d\n", a >> 1); // Bitwise right shift

    return 0;
}
