#include <stdio.h>

int squareOf(int a) {
    return a * a;
}

int main() {
    int firstLength, secondLength, thirdLength, isCorrectPitogras;
    printf("Podaj dlugosc pierwszego odcinka: ");
    scanf("%d", &firstLength);
    printf("Podaj dlugosc drugiego odcinka: ");
    scanf("%d", &secondLength);
    printf("Podaj dlugosc trzeciego odcinka: ");
    scanf("%d", &thirdLength);


    if(firstLength > secondLength && firstLength > thirdLength) {
        if(squareOf(firstLength) == squareOf(secondLength) + squareOf(thirdLength)) {
            isCorrectPitogras = 1;
        }
        else {
            isCorrectPitogras = 0;
        }
    }
    else if(secondLength > firstLength && secondLength > thirdLength) {
        if(squareOf(secondLength) == squareOf(firstLength) + squareOf(thirdLength)) {
            isCorrectPitogras = 1;
        }
        else {
            isCorrectPitogras = 0;
        }
    }
    else {
        if(squareOf(thirdLength) == squareOf(firstLength) + squareOf(secondLength)) {
            isCorrectPitogras = 1;
        }
        else {
            isCorrectPitogras = 0;
        }
    }

    if(firstLength + secondLength > thirdLength && firstLength + thirdLength > secondLength && secondLength + thirdLength > firstLength && isCorrectPitogras == 1) {
        printf("Z podanych odcinkow mozna utworzyc trojkat prostokatny");
    }
    else {
        printf("Z podanych odcinkow nie mozna utworzyc trojkata prostokatnego");
    }

    return 0;
}