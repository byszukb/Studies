#include <stdio.h>

int rekurencja(int n) {
    if (n == 0) return 0;
    return (n % 10) + rekurencja(n / 10);
}

int main() {
    int n = 126;
    printf("%d\n", rekurencja(n));
}