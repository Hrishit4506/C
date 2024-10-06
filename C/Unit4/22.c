#include <stdio.h>
int main() {
    char letter = 'A';

    do {
        printf("%c ", letter);
        letter++;
    } while (letter <= 'Z');

    printf("\n");
    return 0;
}
