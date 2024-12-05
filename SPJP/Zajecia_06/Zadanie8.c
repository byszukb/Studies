#include <stdio.h>

int sprawdzDate(int d, int m, int r) {
    if(m <= 0 || m > 12)
        return 0;

    if(m == 2) {
        if ((r % 4 == 0 && r % 100 != 0) || (r % 400 == 0)) {
            if(d < 0 || d > 29) {
                return 0;
            }
        }
        else {
            if(d < 0 || d > 28) {
                return 0;
            }
        }
    }
    if(m == 4 || m == 6 || m == 9 || m == 11) {
        if(d < 0 || d > 30) {
            return 0;
        }
    }
    else {
        if(d < 0 || d > 31) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int dzien = 29, miesiac = 2, rok = 2000;
    int wynik = sprawdzDate(dzien, miesiac, rok);

    if(wynik == 1) {
        printf("Podana data jest prawidlowa");
    }
    else {
        printf("Podana data nie jest prawidlowa");
    }
}