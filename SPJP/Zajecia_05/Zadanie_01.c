#include <stdio.h>

int main(){
    int n, squareOfNumber, sumOfSquares = 0;
    printf("Podaj liczbe n\n");
    scanf("%d", &n);

    for(int i =1; i <= n; i++){
        squareOfNumber = i * i;
        sumOfSquares += squareOfNumber;
    }

    printf("%d", sumOfSquares);
};