#include <stdio.h>

int main() {
    int firstNumber, secondNumber;

    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &firstNumber);
    printf("Podaj druga liczbe: ");
    scanf("%d", &secondNumber);

    printf("Suma: %d\n", firstNumber + secondNumber);
    printf("Roznica: %d\n", firstNumber - secondNumber);
    printf("Wynik mnozenia: %d\n", firstNumber * secondNumber);
    printf("Wynik dzielenia: %d\n", firstNumber / secondNumber);
    printf("Reszta z dzielenia: %d\n5", firstNumber % secondNumber);
    return 0;
}