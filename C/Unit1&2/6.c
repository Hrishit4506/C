#include <stdio.h>
int main() {
    float cm, meter;
    printf("Enter value in centimeters: ");
    scanf("%f", &cm);

    meter = cm / 100;
    printf("Value in meters: %.2f\n", meter);

    return 0;
}
