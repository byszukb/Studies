#include <stdio.h>

struct Punkt {
    int x;
    int y;
};

int main() {
    struct Punkt punkt;
    printf("Podaj punkty x,y po przecinku: ");
    scanf("%d,%d", &punkt.x, &punkt.y);
    printf("Wspolrzedne punktu to: x = %d, y = %d", punkt.x, punkt.y);
}