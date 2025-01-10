//Napisz funkcję, która przyjmuje jako argumenty liczby d,m,r i zwróci liczbę dni pozostałych do końca roku.
#include <stdio.h>
int sprawdzCzyRokPrzestepny(int r) {
    if ((r % 4 == 0 && r % 100 != 0) || (r % 400 == 0))
        return 1;
    else
        return 0;
}

int doKoncaRoku(int d, int m, int r) {
    int ileDoKonca = 0;
    for (int i = 12; i > m; i--) {
        if(i == 1 || i == 3 || i == 5
        || i == 7 || i == 8 || i == 10 || i == 12) {
             ileDoKonca += 31;
        }
        else if(i == 2) {
            ileDoKonca += 28;
        }
        else {
            ileDoKonca += 30;
        }
    }
    if(m == 1 || m == 3 || m == 5
        || m == 7 || m == 8 || m == 10 || m == 12) {
        ileDoKonca += 31 - d;
        }
    else if(m == 2) {
        ileDoKonca += 28 - d;
    }
    else if(m == 4 || m == 6 || m == 9 || m == 11) {
        ileDoKonca += 30 - d;
    }
    if(sprawdzCzyRokPrzestepny(r) == 1 && m < 3) {
        ileDoKonca += 1;
    }
    return ileDoKonca;
}

int main() {
    int d = 20, m = 2, r =2002;
    printf("%d\n", doKoncaRoku(d, m, r));
}