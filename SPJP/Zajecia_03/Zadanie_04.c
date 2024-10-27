#include <stdio.h>

int main() {
    int firstNumber, secondNumber, thirdNumber;

    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &firstNumber);
    printf("Podaj druga liczbe: ");
    scanf("%d", &secondNumber);
    printf("Podaj trzecia liczbe: ");
    scanf("%d", &thirdNumber);

    if (firstNumber > secondNumber, firstNumber > thirdNumber) {
        printf("Najwieksza liczba jest %d", firstNumber);
    }
    else if (secondNumber > firstNumber, secondNumber > thirdNumber) {
        printf("Najwieksza liczba jest %d", secondNumber);
    }
    else {
        printf("Najwieksza liczba jest %d", thirdNumber);
    }
}