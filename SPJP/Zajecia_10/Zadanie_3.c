#include <stdio.h>

struct Trojkat {
    int a;
    int b;
    int c;
};
void sprawdzCzyTrojkatPoprawny(int a, int b, int c) {
    if(a + b > c && a + c > b && b + c > a) {
        printf("Trojkat poprawny\n");
    }
    else {
        printf("Trojkat niepoprawny\n");
    }
}

int main() {
    struct Trojkat trojkat;
    trojkat.a = 11;
    trojkat.b = 20;
    trojkat.c = 30;
    sprawdzCzyTrojkatPoprawny(trojkat.a, trojkat.b, trojkat.c);
}