#include <stdio.h>
int main() {
    float principal, rate, time, interest;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time in years: ");
    scanf("%f", &time);

    interest = (principal * rate * time) / 100;
    printf("Simple Interest: %.2f\n", interest);

    if (interest > 500) {
        printf("Very Good\n");
    } else {
        printf("Nice\n");
    }

    return 0;
}
