#include <stdio.h>

void function(int *a, int *b) {
    int *ptr = a;
    int *ptr2 = b;
    int temp = *a;
    *ptr = *ptr2;
    *ptr2 = temp;

}

int main() {
    int a = 1, b = 2;
    printf("%d\n", a);
    printf("%d\n", b);
    function(&a, &b);
    printf("%d\n", a);
    printf("%d\n", b);
}