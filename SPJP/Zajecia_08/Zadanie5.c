#include <stdio.h>

void sort(int *ptrA, int *ptrB, int *ptrC) {
    int temp;
    if(*ptrB > *ptrA) {
        temp = *ptrA;
        *ptrA = *ptrB;
        *ptrB = temp;
    }
    if(*ptrC > *ptrA) {
        temp = *ptrC;
        *ptrC = *ptrA;
        *ptrA = temp;
    }
    if(*ptrC > *ptrB) {
        temp = *ptrC;
        *ptrC = *ptrB;
        *ptrB = temp;
    }

}

int main() {
    int a = 2, b = 1, c = 3;
    printf("%d %d %d\n", a, b, c);
    sort(&a, &b, &c);
    printf("Po sortowaniu:\n%d %d %d\n", a, b, c);
}