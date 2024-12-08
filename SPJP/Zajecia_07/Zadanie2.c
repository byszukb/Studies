#include <stdio.h>

int rekurencja(int a, int b) {
    if(b == 0) {
        return a;
    }
    else {
        return rekurencja(b, a % b);
    }
}

int main() {
    int a = 10;
    int b = 5;
    printf("%d\n", rekurencja(a, b));
}