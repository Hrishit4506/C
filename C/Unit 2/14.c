#include <stdio.h>

int main() {
    char ch;
    int num;

    printf("Enter a character: ");
    scanf("%c", &ch);

    num = (int)ch;

    printf("Character %c converted to integer is %d\n", ch, num);
    return 0;
}
