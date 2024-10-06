#include <stdio.h>
int main() {
    char operator;
    int num1, num2;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    
    printf("Enter second number: ");
    scanf("%d", &num2);

    switch (operator)
    {
    case '+':
        printf("%d",num1+num2);
        break;
    case '-':
        printf("%d",num1-num2);
        break;
    case '*':
        printf("%d",num1*num2);
        break;
    case '/':
        printf("%d",num1/num2);
        break;
    default:
    printf("Enter a valid operator");
        break;
    }
}