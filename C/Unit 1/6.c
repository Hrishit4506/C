#include <stdio.h>
int main(){
    float c,f;
    printf("Enter the temperature in F: ");
    scanf("%f",&f);
    c = (f-32)*5/9;
    printf("The temperature in C is: %f",c);
    return 0;
}