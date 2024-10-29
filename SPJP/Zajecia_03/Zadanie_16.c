#include <stdio.h>

int main() {
    int numberToGuess, userInput, userInput2, userInput3, userInput4;

    printf("Zgadnij liczbe z zakresu 1-5\n");
    scanf("%d", &userInput);
    printf("Pomylka, sprobuj jeszcze raz!\n");
    scanf("%d", &userInput2);
    printf("Pomylka, sprobuj jeszcze raz!\n");
    scanf("%d", &userInput3);
    printf("Pomylka, sprobuj jeszcze raz!\n");
    scanf("%d", &userInput4);
    if(userInput == 1 || userInput2 == 1 || userInput3 == 1 || userInput4 == 1) {
        if(userInput == 2 || userInput2 == 2 || userInput3 == 2 || userInput4 == 2) {
            if(userInput == 3 || userInput2 == 3 || userInput3 == 3 || userInput4 == 3) {
                if(userInput == 4 || userInput2 == 4 || userInput3 == 4 || userInput4 == 4) {
                    numberToGuess = 5;
                } else {
                    numberToGuess = 4;
                }
            } else {
                numberToGuess = 3;
            }
        } else {
            numberToGuess = 2;
        }
    } else {
        numberToGuess = 1;
    }
    printf("Niestety, nie udalo ci sie poprawna liczba to: %d", numberToGuess);



}