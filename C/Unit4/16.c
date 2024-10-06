#include <stdio.h>
int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if(number%2==0){
        goto even;
    }else{
        goto odd;
    }

    even:
        printf("%d number is even",number);
        goto end;

    odd:
        printf("%d number is odd",number);
        goto end;

    end:
        return 0;
}
