#include <stdio.h>
int main(){
    int num,orginal,remainder,sum=0,a=0;
    int arr[10];

    printf("Enter an integer: ");
    scanf("%d", &num);

    orginal = num;

    while(num!=0){
        remainder = num%10;
        arr[a] = remainder;
        num /= 10;
        a++;
    }
    
    for(int i = a-1 ;i>=0;i--){
        int x = arr[i];
        int y = 1;
        for(int j = 1;j<=a;j++){
            y*=x;
        }
        sum+=y;
    }
    if(sum == orginal){
        printf("%d is an armstrong number",orginal);
    }else{
        printf("%d is not an armstrong number",orginal);
    }
}