#include <stdio.h>

struct Punkt {
    int x;
    int y;
};

void rownanieProstej(int x1, int y1, int x2, int y2) {
    if (x1 == x2) {
        printf("Bledne wartosci x1 i x2!!!");
        return;
    }
    int a = (y2 - y1)/(x2 - x1);
    int b = y1 - (a*x1);
    if( b < 0) {
        printf("Rownanie prostej dla podanych punktow to: y=%dx%d ", a,b );
        return;
    }
    printf("Rownanie prostej dla podanych punktow to: y=%dx+%d ", a,b );
}

int main() {
    struct Punkt punkt1, punkt2;
    punkt1.x = 2;
    punkt1.y = 5;
    punkt2.x = 4;
    punkt2.y = 9;

    rownanieProstej(punkt1.x, punkt1.y, punkt2.x, punkt2.y);
}