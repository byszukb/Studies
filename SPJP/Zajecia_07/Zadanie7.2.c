#include <stdio.h>

int rekurencja(int arr[], int left, int right, int n) {
    if (left > right) {
        return 0;
    }
    int mid = left + (right - left) / 2;

    if(arr[mid] == n) {
        return 1;
    }
    if(arr[mid] > n) {
        return rekurencja(arr, left, mid, n);

    } else {
        return rekurencja(arr, mid + 1, right, n);
    }
}

int main() {
    int n = 10;
    int arr[] = {1, 2, 3, 4, 5,6 ,7,8,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    if(rekurencja(arr, 0, size - 1, n) == 1) {
        printf("Liczba jest elementem tablicy\n");
    }
    else {
        printf("Liczba nie jest elementem tablicy\n");
    }
}