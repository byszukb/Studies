#include <stdio.h>

int rekurencja(int arr[], int n, int i, int size) {
    if(i > size) {
        return 0;
    }
    if(arr[i] == n) {
        return 1;
    }
    else {
        return rekurencja(arr, n, i + 1, size);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    int i = 0;
    int sizeOfArr = sizeof(arr) / sizeof(arr[0]);
    if(rekurencja(arr, n, i, sizeOfArr) == 1) {
        printf("Liczba jest elementem tablicy\n");
    }
    else {
        printf("Liczba nie jest elementem tablicy\n");
    }
}