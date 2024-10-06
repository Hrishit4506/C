#include <stdio.h>
int main() {
    int marks[5],sum=0;
    float average;

    printf("Enter 5 marks: \n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 5; i++) {
        sum += marks[i];
    }
    average = sum/5;

    printf("The average of the 5 marks is: %.2f\n", average);

    return 0;
}