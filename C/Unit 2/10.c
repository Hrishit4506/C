#include <stdio.h>

int main() {
    int rollno;
    char name[50];

    printf("Enter roll number: ");
    scanf("%d", &rollno);

    printf("Enter student name: ");
    getchar();
    gets(name);

    printf("Roll Number: %d\n", rollno);
    printf("Student Name: %s\n", name);
    return 0;
}
