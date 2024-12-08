#include <stdio.h>

int rekurencja(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return rekurencja(n - 1) + rekurencja(n - 2);
}

int main() {
    int n = 10;
    printf("Dla %d wyrazu ciagu fibonacciego wynik to: %d\n",n, rekurencja(n));
}