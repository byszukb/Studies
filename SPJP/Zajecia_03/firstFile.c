#include <stdio.h>

int main() {
    int firstNumber, secondNumber;

    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &firstNumber);
    printf("Podaj druga liczbe: ");
    scanf("%d", &secondNumber);

    printf("Suma: %d", firstNumber + secondNumber);
    printf("Roznica: %d", firstNumber - secondNumber);
    printf("Wynik mnozenia: %d", firstNumber * secondNumber);
    printf("Wynik dzielenia: %d", firstNumber / secondNumber);
    printf("Reszta z dzielenia: %d", firstNumber % secondNumber);
    return 0;
}