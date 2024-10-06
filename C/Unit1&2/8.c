#include <stdio.h>
int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks < 35) {
        printf("You Failed.\n");
    } else {
        printf("You Passed.\n");
    }

    return 0;
}
