#include <stdio.h>
int main(){
    char c;
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    printf("Enter a char: ");
    scanf(" %c",&c);

    for(int i = 1;i<=n;i++){
        for(int j = 0;j<i;j++){
            printf("%c",c+j);
        }
        printf("\n");
    }
}   