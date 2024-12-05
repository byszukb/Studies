#include <stdio.h>

int sprawdzCzyTakieSame(char a, char b) {
    return a == b;
}

int main() {
    char pierwszyZnak, drugiZnak;
    printf("Podaj pierwszy znak:\n");
    scanf("%c", &pierwszyZnak);
    getchar();


    printf("Podaj drugi znak:\n");
    scanf("%c", &drugiZnak);

    if(sprawdzCzyTakieSame(pierwszyZnak, drugiZnak) == 1) {
        printf("Znaki sa takie same");
    }
    else {
        printf("Znaki sa rozne");
    }
}