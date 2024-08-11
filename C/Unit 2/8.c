#include <stdio.h>

int main() {
    int num1,num2,num3,num4,num5;
    int sum = 0;
    float average;

    printf("Enter marks of num 1: ");
    scanf("%d",&num1);
    printf("Enter marks of num 2: ");
    scanf("%d",&num2);
    printf("Enter marks of num 3: ");
    scanf("%d",&num3);
    printf("Enter marks of num 4: ");
    scanf("%d",&num4);
    printf("Enter marks of num 5: ");
    scanf("%d",&num5);

    sum = num1+num2+num3+num4+num5;

    average = sum / 5.0;

    printf("Average: %.2f\n", average);
    return 0;
}
