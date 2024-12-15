#include <stdio.h>

int main() {
    int arr[10];
    int *ptr = arr;
    for (int i = 0; i < 10; i++) {
        scanf("%d", ptr);
        ptr++;
    }
    for (int i = 0; i < 10; i++) {
        printf("%d\n", arr[i]);
    }
}