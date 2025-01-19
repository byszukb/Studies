#include <stdio.h>

struct Punkt {
    int x;
    int y;
};

int rownanieProstej(int x1, int y1, int x2, int y2) {
    if (x1 == x2) {
        printf("Bledne wartosci x1 i x2!!!");
        return 0;
    }
    int a = (y2 - y1)/(x2 - x1);
    int b = y1 - (a*x1);
    if( b < 0) {
        printf("Rownanie prostej dla podanych punktow to: y=%dx%d\n", a,b );
        return a;
    }
    else {
        printf("Rownanie prostej dla podanych punktow to: y=%dx+%d\n", a,b );
        return a;
    }
}

void sprawdzCzyRownolegle(int a1, int a2) {
    if (a1 == a2) {
        printf("Proste rownolegle");
    }
    else {
        printf("Proste nie sa rownolegle");
    }
}

int main() {
    struct Punkt punkt1, punkt2, punkt3, punkt4;
    punkt1.x = 2;
    punkt1.y = 5;
    punkt2.x = 4;
    punkt2.y = 9;
    punkt3.x = 10;
    punkt3.y = 15;
    punkt4.x = 20;
    punkt4.y = 35;

    int firstA = rownanieProstej(punkt1.x, punkt1.y, punkt2.x, punkt2.y);
    int secondA = rownanieProstej(punkt3.x, punkt3.y, punkt4.x, punkt4.y);
    sprawdzCzyRownolegle(firstA, secondA);
}