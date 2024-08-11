#include <stdio.h>

int main() {
    int sub1,sub2,sub3,sub4,sub5,total = 0;
    float percentage;

    printf("Enter marks of sub 1: ");
    scanf("%d",&sub1);
    printf("Enter marks of sub 2: ");
    scanf("%d",&sub2);
    printf("Enter marks of sub 3: ");
    scanf("%d",&sub3);
    printf("Enter marks of sub 4: ");
    scanf("%d",&sub4);
    printf("Enter marks of sub 5: ");
    scanf("%d",&sub5);

    total = sub1+sub2+sub3+sub4+sub5;
    percentage = total / 5.0;

    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    return 0;
}
