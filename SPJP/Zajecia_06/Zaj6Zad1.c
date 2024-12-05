#include <stdio.h>

int dodawanie(int a, int b) {
    return a + b;
}
int odejmowanie(int a, int b) {
    return a - b;
}
int mnozenie(int a, int b) {
    return a * b;
}
float dzielenie(int a, int b) {
    return a / b;
}

int main() {
    int pierwszaLiczba, drugaLiczba, wyborDzialania;

    printf("Podaj pierwsza liczbe:\n");
    scanf("%d", &pierwszaLiczba);
    printf("Podaj druga liczbe:\n");
    scanf("%d", &drugaLiczba);
    printf("\nWybierz dzialanie:\n1.Dodawanie\n2.Odejmowanie\n3.Mnozenie\n4.Dzielenie\n");
    do {
        scanf("%d", &wyborDzialania);
        if (wyborDzialania > 4 || wyborDzialania < 1) {
            printf("Bledny wybor dzialania, sprobuj ponownie\n");
        }
    }while(wyborDzialania > 4 || wyborDzialania < 1);

    switch(wyborDzialania) {
        case 1:
            printf("Wynik dodawania to: %d", dodawanie(pierwszaLiczba, drugaLiczba));
        break;
        case 2:
            printf("Wynik odejmowania to: %d", odejmowanie(pierwszaLiczba, drugaLiczba));
        break;
        case 3:
            printf("Wynik mnozenia to: %d", mnozenie(pierwszaLiczba, drugaLiczba));
        break;
        case 4:
            printf("Wynik dzielenia to: %d", dzielenie(pierwszaLiczba, drugaLiczba));
        break;
    }

}
