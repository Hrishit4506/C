#include <stdio.h>
int main() {
    int start, end;
    
    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);

    printf("Numbers divisible by 5 in the range %d to %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (i % 5 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
