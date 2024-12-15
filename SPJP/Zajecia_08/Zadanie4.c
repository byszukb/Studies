#include <stdio.h>

int function(int *ptr, int size) {
    int maxPtr = ptr[0];
    int maxIndex = 0;
    for (int i = 0; i < size; i++) {
        if (ptr[i] > maxPtr) {
            maxPtr = ptr[i];
            maxIndex = i;
        }
    }
    ptr[maxIndex] = 0;
    return maxPtr;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = function(arr, size);

    printf("Największa wartość: %d\n", result);
    printf("Tablica po podmianie:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}