#include <stdio.h>

int przekroj(int a1, int b1, int a2, int b2) {
    int a3, b3;
    if (a1 > a2)
        a3 = a1;
    else
        a3 = a2;

    if(b1 < b2)
        b3 = b1;
    else
        b3 = b2;

    if(a3 <= b3)
        return b3;
    else
        return -1;

}

int main() {
    int a1 = 2, b1 = 4,a2 = 4, b2 = 6;

    int wynik = przekroj(a1,b1,a2,b2);
    if (wynik == -1){
        printf("Przekroj jest zbiorem pustym");
    }
    else
        printf("%d\n", wynik);
}