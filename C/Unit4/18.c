#include <stdio.h>
int main(){
    int num1,num2,num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1>num2){
        goto check_num3;
    }else{
        goto check_num2;
    }

    check_num3:
        if(num1>num3){
            goto print_num1;
        }else{
            goto print_num3;
        }
    check_num2:
        if(num2>num3){
            goto print_num2;
        }else{
            goto print_num3;
        }
    
    print_num1:
        printf("%d is the greatest number.\n", num1);
        goto end;

    print_num2:
        printf("%d is the greatest number.\n", num2);
        goto end;

    print_num3:
        printf("%d is the greatest number.\n", num3);
        goto end;

    end:
        return 0;
}