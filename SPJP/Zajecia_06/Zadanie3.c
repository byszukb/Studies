#include <stdio.h>

void zwrocItyZnak(char slowo[], int i ) {
    printf("%c", slowo[i -1]);
}
int main() {
    char slowo[100];
    int i;

    printf("Podaj slowo:\n");
    scanf("%s", slowo);
    printf("Podaj i:\n");
    scanf("%d", &i);

    zwrocItyZnak(slowo, i);
}