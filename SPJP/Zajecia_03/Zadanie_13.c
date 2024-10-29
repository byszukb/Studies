#include <stdio.h>

int main() {
    int userChoice;

    printf("Dla 0 radianów wybierz 1\nDla 1/6 Pi rad wybierz 2\nDla 1/4 Pi rad wybierz 3\nDla 1/3 Pi rad wybierz 4\nDla 1/2 Pi rad wybierz 5\n");
    scanf("%d", &userChoice);
    if (userChoice == 1) {
        printf("0 radianow  to 0 stopni");
    }
    else if (userChoice == 2) {
        printf("1/6 Pi radianow  to 30 stopni");
    }
    else if (userChoice == 3) {
        printf("1/4 Pi radianow  to 45 stopni");
    }
    else if (userChoice == 4) {
        printf("1/3 Pi radianow  to 60 stopni");
    }
    else if (userChoice == 5) {
        printf("1/2 Pi radianow  to 90 stopni");
    }
    else {
        printf("Liczba spoza zakresu");
    }
}