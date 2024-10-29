#include <stdio.h>

int main() {
    float angleValueInDegrees, angleValueInRadians;

    printf("Podaj wartosc kata w stopniach: \n");
    scanf("%f", &angleValueInDegrees);

    angleValueInRadians = angleValueInDegrees * 3.14159 / 180;
    printf("Wartosc kata w radianach: %f\n", angleValueInRadians);
}