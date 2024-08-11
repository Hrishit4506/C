#include <stdio.h>
int main(){
    float area,pi,radius,circumference;
    pi=3.14;
    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);
    circumference = 2*pi*radius;
    area = pi*radius*radius;
    printf("Area of the circle is %.2f \n",area);
    printf("Circumference of the circle is %.2f",circumference);
    return 0;
}