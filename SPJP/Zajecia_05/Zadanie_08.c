#include <stdio.h>

int sprawdzCzyPierwsza(int n) {
    int countOfDivisions = 0;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            countOfDivisions++;
        }
    }
    if(countOfDivisions == 0 && n > 1) {
        return 1;
    }
    return 0;
}

int main() {
    int a,b;
    printf("Podaj a:\n");
    scanf("%d",&a);
    printf("Podaj b:\n");
    scanf("%d",&b);

    for(int i = 0; i < b; i++) {
        while(sprawdzCzyPierwsza(a) != 1) {
            a++;
        }
        printf("%d\n", a);
        a++;
    }
}