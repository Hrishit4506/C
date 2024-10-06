#include <stdio.h>
float calc(float num1,float num2,char operator){
     switch (operator) {
        case '+':
            return num1+num2;
            break;
        case '-':
            return num1-num2;
            break;
        case '*':
            return num1*num2;
            break;
        case '/':
            return num1/num2;
            break;
        default:
            printf("Invalid operator. Please use +, -, *, or /.\n");
    }
    return 0;
}
int main(){
    float num1, num2;
    char operator;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    float ans = calc(num1,num2,operator);
    printf("Result: %.2f\n",ans);
    return 0;
}