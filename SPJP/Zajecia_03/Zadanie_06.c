#include <stdio.h>

//rok przestepny - jest liczba podzielna przez 4

int main() {
    int rok;

    printf("Podaj rok: ");
    scanf("%d", &rok);
    if (rok % 4 == 0) {
        printf("Rok jest przestepny");
    }
    else {
        printf("Rok nie jest przestepny");
    }
}