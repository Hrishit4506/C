#include <stdio.h>

int main() {
    int start, end;
    int evenCount = 0, oddCount = 0;

    printf("Enter the start of the range: ");
    scanf("%d", &start);

    printf("Enter the end of the range: ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Total even numbers between %d and %d: %d\n", start, end, evenCount);
    printf("Total odd numbers between %d and %d: %d\n", start, end, oddCount);

    return 0;
}

