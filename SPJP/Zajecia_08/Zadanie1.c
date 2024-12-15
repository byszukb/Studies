#include <stdio.h>

int global = 10;

void function(int a, int b) {
    int *ptr = &a;
    int *ptr2 = &b;
    printf("%p\n",ptr);
    printf("%p\n",ptr2);
}

int main() {
    int local = global;
    int *pointerLocal = &local;
    int *pointerGlobal = &global;
    printf("%p\n", pointerLocal);
    printf("%p\n", pointerGlobal);

    function(local,global);
}