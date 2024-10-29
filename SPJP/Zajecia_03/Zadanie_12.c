#include <stdio.h>

int main() {
    int inputNumber;
    printf("Podaj liczbe: ");
    scanf("%d", &inputNumber);

    if(inputNumber % 2 == 0) {
        printf("%d jest podzielna przez 2", inputNumber);
    }
    else if(inputNumber % 3 == 0) {
        printf("%d jest podzielna przez 3", inputNumber);
    }
    else if(inputNumber % 4 == 0) {
        printf("%d jest podzielna przez 4", inputNumber);
    }
    else if(inputNumber % 5 == 0) {
        printf("%d jest podzielna przez 5", inputNumber);
    }
    else if(inputNumber % 6 == 0) {
        printf("%d jest podzielna przez 6", inputNumber);
    }
    else {
        printf("%d nie jest podzielna przez zadna z liczb z zakresu 2-6", inputNumber);
    }

    return 0;
}