#include <stdio.h>

void plansza(int a, int b) {
    char arr[10][10];
    for (int i = 0; i < 9; i++) {
        if(i == 0)
            printf("|-");
        if(i == 8)
            printf("-|\n");
        else
            printf("-");
    }
    for (int i = 1; i < 11; i++) {
        printf("|");
        for (int j = 1; j < 11; j++) {
            if(i == a && j == b) {
                printf("x");
            }
            else
                printf(" ");
        }
        printf("|\n");
    }

    for (int i = 0; i < 9; i++) {
        if(i == 0)
            printf("|-");
        if(i == 8)
            printf("-|\n");
        else
            printf("-");
    }
}

int main() {
    int a1, b1, a2, b2, tempA, tempB, moveA, moveB;
    printf("Podaj a1:\n");
    scanf("%d", &a1);
    printf("Podaj b1:\n");
    scanf("%d", &b1);
    plansza(a1,b1);
    printf("Podaj a2:\n");
    scanf("%d", &a2);
    printf("Podaj b2:\n");
    scanf("%d", &b2);

    while(a2 >= 1 && b2 >= 1 && a2 <= 10 && b2 <= 10) {
        plansza(a2,b2);
        tempA = a2;
        tempB = b2;
        moveA = a2 - a1;
        moveB = b2 - b1;
        a2 = a2 + moveA;
        b2 = b2 + moveB;
        a1 = tempA;
        b1 = tempB;
    }
    printf("Piłeczka poza zakresem:\n");
    return 0;
}