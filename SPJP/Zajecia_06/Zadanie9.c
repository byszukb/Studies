#include <stdio.h>

int sprawdzCzyRokPrzestepny(int r) {
    if ((r % 4 == 0 && r % 100 != 0) || (r % 400 == 0))
        return 1;
    else
        return 0;
}

int main() {
    int rok = 2000;
    int wynik = sprawdzCzyRokPrzestepny(rok);
    if(wynik == 1)
        printf("Rok przestepny");
    else
        printf("Rok nieprzestepny");
}