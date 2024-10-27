#include <stdio.h>
#include <ctype.h>

int main() {
    char characterToCompare;

    printf("Podaj znak do porownania: ");
    scanf("%c", &characterToCompare);

    if (isalpha(characterToCompare)) {
        printf("Znak jest litera alfabetu");
    }
    else {
        printf("Znak nie jest litera alfabetu");
    }

    return 0;
}