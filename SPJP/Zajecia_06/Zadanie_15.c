//Napisz funkcję, która przyjmuje jako argument tablicę znaków i wypisze na ekran prostokątną ramkę wypełnioną znakami z tej tablicy.
#include <stdio.h>

void ramka(char n[]) {
    int size = sizeof(n) / sizeof(n[0]);
    for (int i = 0; i <= size/2; i++) {
        if(i==0) {
            printf("|-");
        }
        else if(i==size/2) {
            printf("-|");
        }
        else {
            printf("-");
        }
    }
    printf("\n");
    int counter = 0;
    for (int i = 0; i <= size/2; i++) {

        for (int j = 0; j <= size/2; j++) {
            if(counter == size + 2) {
                counter = 0;
            }
           if(j==0) {
               printf("|%c", n[counter]);
           }
            else if(j == size/2) {
                printf("%c|", n[counter]);
            }
            else {
                printf("%c", n[counter]);
            }
            counter++;
        }
        printf("\n");
    }
    for (int i = 0; i <= size/2; i++) {
        if(i==0) {
            printf("|-");
        }
        else if(i==size/2) {
            printf("-|");
        }
        else {
            printf("-");
        }
    }
}

int main() {
    char n[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h','i', 'j'};
    ramka(n);
}