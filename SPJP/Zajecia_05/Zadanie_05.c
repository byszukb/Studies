#include <stdio.h>

int main() {
    int n, tempVariable;
    printf("Podaj rozmiar tablicy n:\n");
    scanf("%d", &n);
    int array[n];
    int size = sizeof(array) / sizeof(array[0]);

    for(int i = 0; i < size; i++) {
        printf("Podaj liczbe:\n");
        scanf("%d", &tempVariable);
        array[i] = tempVariable;
    }

    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}