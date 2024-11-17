#include <stdio.h>

int main() {
    int array[5]= {1,2,3,4,5};
    int size = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < size; i++) {
        array[i] = array[i] * array[i];
        printf("%d\n", array[i]);
    }
}