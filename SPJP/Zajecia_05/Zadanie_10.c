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
    int a1, b1, a2, b2, tempA, tempB, moveA, moveB, i = 2, gameCounts;
    printf("Ile tur gry wygenerowac?\n");
    scanf("%d", &gameCounts);
    printf("Podaj a1:\n");
    scanf("%d", &a1);
    printf("Podaj b1:\n");
    scanf("%d", &b1);
    if(a1 > 10 || a1 < 1 || b1 > 10 || b1 < 1) {
        return 0;
    }
    plansza(a1,b1);
    printf("Podaj a2:\n");
    scanf("%d", &a2);
    printf("Podaj b2:\n");
    scanf("%d", &b2);
    if(a2 > 10 || a2 < 1 || b2 > 10 || b2 < 1) {
        return 0;
    }

    moveA = a2 - a1;
    moveB = b2 - b1;
    while(i <= gameCounts) {
        plansza(a2,b2);
        if(a2+ moveA > 10 || a2 + moveA < 1)
            moveA= -moveA;
        if(b2 + moveB > 10 || b2 + moveB < 1)
            moveB = -moveB;
        a2 += moveA;
        b2 += moveB;
        i++;
    }
    return 0;
}