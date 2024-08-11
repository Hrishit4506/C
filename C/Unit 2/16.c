#include <stdio.h>

int main() {
    int x = 10, y;

    y = ++x;  // Prefix increment
    printf("After prefix increment, x = %d, y = %d\n", x, y);

    y = x--;  // Postfix decrement
    printf("After postfix decrement, x = %d, y = %d\n", x, y);
    
    return 0;
}
