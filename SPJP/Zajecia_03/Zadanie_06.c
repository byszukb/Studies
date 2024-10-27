#include <stdio.h>

//rok przestepny - jest liczba podzielna przez 4

int main() {
    int year;

    printf("Podaj rok: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Rok jest przestepny");
    }
    else {
        printf("Rok nie jest przestepny");
    }
}