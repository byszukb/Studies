//Napisz funkcję, która przyjmuje jako argument miesiąc i rok i zwróci liczbę dni danego miesiąca.
#include <stdio.h>
int sprawdzCzyRokPrzestepny(int r) {
    if ((r % 4 == 0 && r % 100 != 0) || (r % 400 == 0))
        return 1;
    else
        return 0;
}

int liczbaDni(int miesiac, int rok) {
    int rokP = sprawdzCzyRokPrzestepny(rok);
    if(rokP == 1 && miesiac == 2) {
        return 29;
    }
    if(miesiac == 1 || miesiac == 3 || miesiac == 5
        || miesiac == 7 || miesiac == 8 || miesiac == 10 || miesiac == 12) {
        return 31;
    }
    if(miesiac == 2) {
        return 28;
    }
    return 30;
}
int main() {
    int m = 4, r = 2001;
    printf("%d\n", liczbaDni(m, r));
}