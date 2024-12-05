#include <stdio.h>

int main() {
    int a,b, result = 0;
    printf("Podaj a\n");
    scanf("%d", &a);

    result = a;

    printf("Podaj b\n");
    scanf("%d", &b);

    for(int i = 1; i < b; i++) {
        result *= a;
    }
    printf("%d", result);
    return 0;
}
