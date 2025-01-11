#include <stdio.h>
#include <ctype.h>
#include <math.h>

int n = 0;
void drzewoBinarne(int arr[]) {
    float level = log2(n);
    int counter = 0;
    for(int i =0; i <= level; i++) {
        for(int wciecie = 0; wciecie < level - i; wciecie++) {
            if(wciecie == 0) {
                printf("  ");
            }
            else {
                printf(" ");
            }
        }
        for(int j = 0; j < pow(2,i); j++) {
            printf("%d ", arr[counter]);
            counter++;
            if(counter == n) {
                printf("\n");
                return;
            }
        }
          printf("\n");
    }
}

void wypiszElementyTablicy(int arr[]) {
    printf("N jest rowne: %d\n", n);
    if (n == 0) {
        printf("Nie mozna wypisac elementow tablicy, gdy jej rozmiar(n) jest rowny 0!\n");
    } else {
        for (int i = 0; i < n; i++) {
            if (i == n - 1) {
                printf("%d", arr[i]);
            } else {
                printf("%d,", arr[i]);
            }
        }
        printf("\n");
    }
}

void dodajElementDoTablicy(int arr[], int size) {
    char input;
    int newElement = 0;
    if (n >= size) {
        printf("Nie ma miejsca na nowy element\n");
        return;
    }
    printf("Podaj cyfre, do wpisania do tablicy: ");
    scanf(" %c", &input);
    if (isdigit(input)) {
        newElement = input - '0';
        arr[n] = newElement;
        n++;
    } else {
        printf("Podany znak nie jest cyfra\n");
    }
}

void usunElementZTablicy(int arr[], int size) {
    int index;
    printf("Podaj indeks do usuniecia z tablicy: ");
    scanf("%d", &index);
    if (index < 0 || index >= n) {
        printf("Indeks poza zakresem!\n");
        return;
    }
    for (int i = index; i < n; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}

int sumaCyfr(int arr[]) {
    int suma = 0;
    if (n == 0) {
        return -1;
    }
    for (int i = 0; i < n; i++) {
        suma += arr[i];
    }
    return suma;
}

int main() {
    int arr[100];
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", size);
    int wybor, suma;
    do {
        printf("Wybierz co program ma zrobic:\n");
        scanf("%d", &wybor);
        switch (wybor) {
            case 1:
                wypiszElementyTablicy(arr);
                break;
            case 2:
                dodajElementDoTablicy(arr, size);
                break;
            case 3:
                usunElementZTablicy(arr, size);
                break;
            case 4:
                suma = sumaCyfr(arr);
                if (suma == -1) {
                    printf("Tablica posiada 0 znakow\n");
                } else {
                    printf("Suma cyfr to: %d\n", suma);
                }
                break;
            case 5:
                drzewoBinarne(arr);
            break;
            default:
                printf("Zly numer!!!\n");
            break;
        }
    } while (wybor != 0);
}