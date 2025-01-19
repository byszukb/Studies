#include <stdio.h>
#include <string.h>

struct Osoba {
    char imie[20];
    char nazwisko[20];
    int nrTelefonu;
};

int main() {
    struct Osoba osoba, osoba2;
    strcpy(osoba.imie, "Jacek");
    strcpy(osoba.nazwisko, "Kowalski");
    osoba.nrTelefonu = 101202303;

    strcpy(osoba2.imie, "Maciek");
    strcpy(osoba2.nazwisko, "Kowalski");
    osoba2.nrTelefonu = 333999111;

    printf("Osoba 1:\n");
    printf("Imie: %s\n", osoba.imie);
    printf("Nazwisko: %s\n", osoba.nazwisko);
    printf("NrTelefonu: %d\n", osoba.nrTelefonu);

    printf("Osoba 2:\n");
    printf("Imie: %s\n", osoba2.imie);
    printf("Nazwisko: %s\n", osoba2.nazwisko);
    printf("NrTelefonu: %d\n", osoba2.nrTelefonu);
}