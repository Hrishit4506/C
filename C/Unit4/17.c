#include <stdio.h>
int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if(number<0){
        goto negative;
    }else{
        goto positive;
    }

    positive:
        printf("%d number is positive",number);
        goto end;

    negative:
        printf("%d number is negative",number);
        goto end;

    end:
        return 0;
}