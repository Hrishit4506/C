#include <stdio.h>

int main() {
    int employee_id;
    char employee_name[50], employee_dept[50];

    printf("Enter employee ID: ");
    scanf("%d", &employee_id);

    printf("Enter employee name: ");
    getchar();
    gets(employee_name);

    printf("Enter employee department: ");
    gets(employee_dept);

    printf("Employee ID: %d\n", employee_id);
    printf("Employee Name: %s\n", employee_name);
    printf("Employee Department: %s\n", employee_dept);
    return 0;
}
