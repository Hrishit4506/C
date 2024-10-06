#include <stdio.h>
float calculateAverage(int marks[]) {
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += marks[i];
    }

    return (float)sum / 5;
}

int main() {
    int marks[5];
    float average;

    printf("Enter 5 marks: \n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
    }

    average = calculateAverage(marks); 

    printf("The average of the 5 marks is: %.2f\n", average);

    return 0;
}