#include <stdio.h>
void square(int a){
    printf("%d is the square of %d",a*a,a);
}
int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    square(num);
    return 0;
}