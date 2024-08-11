#include <stdio.h>

int main() {
    float basic_salary, da, hra, pf, gross_salary;

    printf("Enter basic salary, DA, HRA, and PF: ");
    scanf("%f %f %f %f", &basic_salary, &da, &hra, &pf);

    gross_salary = basic_salary + da + hra - pf;

    printf("Gross Salary: %.2f\n", gross_salary);
    return 0;
}
