#include <stdio.h>
int main(){
    int n,a;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    printf("Enter a char: ");
    scanf("%d",&a);

    for(int i = 0;i<n;i++){
        for(int j = 0;j<=i;j++){
            printf("%d",a+i);
        }
        printf("\n");
    }
} 