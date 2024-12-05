#include <stdio.h>

int main() {
    int n, countOfDivisions = 0;
    printf("Podaj n:\n");
    scanf("%d", &n);

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            countOfDivisions++;
        }
    }


    if (countOfDivisions == 0 && n > 1) {
        printf("%d jest liczba pierwsza\n", n);
    } else {
        printf("%d nie jest liczba pierwsza\n", n);
    }

    return 0;
}