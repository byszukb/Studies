#include <stdio.h>

int main() {
    int numberToGuess, userInput;
    numberToGuess = 5;

    printf("Zgadnij liczbe z zakresu 1-5\n");
    scanf("%d", &userInput);
    if (userInput == numberToGuess) {
        printf("Brawo, zgadles liczbe!");
    }
    else {
        printf("Sprobuj ponownie!\n");
        scanf("%d", &userInput);
        if (userInput == numberToGuess) {
            printf("Brawo, zgadles liczbe!");
        }
        else {
            printf("Sprobuj ponownie!\n");
            scanf("%d", &userInput);
            if (userInput == numberToGuess) {
                printf("Brawo, zgadles liczbe!");
            }
            else {
                printf("Niestety, przegrales\n");
            }
        }
    }
    return 0;
}