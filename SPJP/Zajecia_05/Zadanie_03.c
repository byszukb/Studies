#include <stdio.h>

int main() {
    int a,b,c = 1, result;
    printf("Podaj a:\n");
    scanf("%d",&a);
    result = a;
    printf("Podaj b:\n");
    scanf("%d",&b);

    while (result < b) {
      result *= a;
        c++;
    }

    printf("%d", c);
    return 0;
}