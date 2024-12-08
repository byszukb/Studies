#include <stdio.h>

int rekurencja(int n) {
    int start = 1;
    if(start == n) {
        return n;
    }
    printf("%d\n", n);
    return rekurencja(n - 1);
}

int main() {
    printf("%d\n", rekurencja(5));
}