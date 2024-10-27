#include <stdio.h>

int main() {
    int firstLength, secondLength, thirdLength;
    printf("Podaj dlugosc pierwszego odcinka: ");
    scanf("%d", &firstLength);
    printf("Podaj dlugosc drugiego odcinka: ");
    scanf("%d", &secondLength);
    printf("Podaj dlugosc trzeciego odcinka: ");
    scanf("%d", &thirdLength);

    if(firstLength + secondLength > thirdLength && firstLength + thirdLength > secondLength && secondLength + thirdLength > firstLength) {
        printf("Z podanych odcinkow mozna utworzyc trojkat");
    }
    else {
        printf("Z podanych odcinkow nie mozna utworzyc trojkata");
    }

    return 0;
}