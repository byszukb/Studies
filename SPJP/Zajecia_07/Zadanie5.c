#include <stdio.h>

void rekurencja(int n) {
    if (n > 1) {
        rekurencja(n / 2);
    }
    printf("%d", n % 2);
}

int main() {
    rekurencja(127);
}