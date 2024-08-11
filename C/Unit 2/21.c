#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 0;

    if (a && b) {
        printf("Both a and b are non-zero\n");
    }

    if (a || c) {
        printf("Either a or c is non-zero\n");
    }

    if (!c) {
        printf("c is zero\n");
    }

    return 0;
}
