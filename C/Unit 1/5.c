#include <stdio.h>
int main(){
    int principle,years,interest,si,total;
    printf("Enter the principle: ");
    scanf("%d",&principle);
    printf("Enter no of years: ");
    scanf("%d",&years);
    printf("Enter the rate of interest: ");
    scanf("%d",&interest);
    si= (principle*years*interest)/100;
    total = si + principle;
    printf("The total amount with simple interest is: %d",total);
    return 0;
}