#include <stdio.h>

void function(int *firstPtr, int *lastPtr) {
    int size = (lastPtr - firstPtr) + 1;
    printf("Rozmiar tablicy to: %d\n", size);
    for (int i = 0; i < size; i++) {
        *firstPtr = i + 1;
        firstPtr++;
    }
}

int main() {
    int arr[] = {1, 2, 4, 4, 4, 4, 4, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int *firstPtr = arr;
    int *lastElement = &arr[size - 1];

    function(firstPtr, lastElement);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}