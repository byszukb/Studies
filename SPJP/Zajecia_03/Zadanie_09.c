#include <stdio.h>

int main() {
    int firstX, firstY, secondX, secondY, width, height, squareOfRectangle, perimeterOfRectangle;
    printf("Podaj pierwsze wspolrzedne po przecinku : ");
    scanf("%d,%d", &firstX, &firstY);
    printf("Podaj drugie wspolrzedne po przecinku : ");
    scanf("%d,%d", &secondX, &secondY);

    // 5,7
    // 3,2
    if(firstX > secondX) {
        width = firstX - secondX;
    }
    else {
        width = secondX - firstX;
    }
    if(firstY > secondY) {
        height = firstY - secondY;
    }
    else {
        height = secondY - firstY;
    }
    squareOfRectangle = width * height;
    perimeterOfRectangle = 2* width + 2* height;
    printf("Pole prostokata: %d\n", squareOfRectangle);
    printf("Obwod prostokata: %d", perimeterOfRectangle);

    return 0;
}