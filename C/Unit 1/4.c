#include <stdio.h>
int main(){
    int principle,years,interest,si;
    printf("Enter the principle: ");
    scanf("%d",&principle);
    printf("Enter no of years: ");
    scanf("%d",&years);
    printf("Enter the rate of interest: ");
    scanf("%d",&interest);
    si= (principle*years*interest)/100;
    printf("The amount of simple interest is: %d",si);
    return 0;
}