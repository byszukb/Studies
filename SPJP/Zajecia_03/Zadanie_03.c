#include <stdio.h>

int main() {
    int firstNumber, secondNumber;

    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &firstNumber);
    printf("Podaj druga liczbe: ");
    scanf("%d", &secondNumber);
    if (firstNumber > secondNumber){
        printf("Wieksza liczba jest %d", firstNumber);
    }
    else {
        printf("Wieksza liczba jest %d", secondNumber);
    }
}