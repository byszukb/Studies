#include <stdio.h>
#include <string.h>

int porownajIndeksy(char str[], int index) {
    int dlugosc = strlen(str);
    for (int i = 0; i < index; i++) {
        if(str[i] != str[dlugosc - i - 1]) {
            return 0;
        }
    }
    return 1;
}
void sprawdzCzyPalindrom(int wynik) {
    if(wynik == 1) {
        printf("Podany wyraz to palindrom\n");
    }
    else {
        printf("Podany wyraz nie jest palindromem\n");
    }
}

int main() {
    char potencjalnyPalindrom[100];
    int index, wynik;
    printf("Podaj slowo:\n");
    scanf("%s", potencjalnyPalindrom);
    size_t dlugoscStringa = strlen(potencjalnyPalindrom);
    printf("%d\n", dlugoscStringa);

    if(dlugoscStringa % 2 == 0) {
        index = dlugoscStringa / 2;
        wynik = porownajIndeksy(potencjalnyPalindrom, index);
        sprawdzCzyPalindrom(wynik);
    }
    else {
        index = (dlugoscStringa / 2) + 1;
        wynik = porownajIndeksy(potencjalnyPalindrom, index);
        sprawdzCzyPalindrom(wynik);
    }
}