#include <stdio.h>
int main(){
    int len,volume;
    printf("Enter the length of cube: ");
    scanf("%d",&len);
    volume = len*len*len;
    printf("Volume of the cube is %d",volume);
    return 0;
}