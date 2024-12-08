#include <stdio.h>

int rekurencja(int n) {
    if(n <= 1)
        return 1;
    else
        return n * rekurencja(n - 1);
}

int main() {
    int n = 5;
    printf("%d\n", rekurencja(n));
}