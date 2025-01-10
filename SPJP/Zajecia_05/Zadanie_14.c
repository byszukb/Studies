// Napisz program który przepiszę tablicę trójwymiarową na tablicę jednowymiarową. Zastanów się nad numeracją elementów w nowej tablicy.
#include <stdio.h>

int main() {
    int x;
    int arr[12];
    int n[2][2][3]= {
        {
            {1,2,3},
            {4,5,6}
        },
        {
            {7,8,9},
            {10,11,12}
        }
    };
    for (int i = 0; i < 2; i++) {
        // i mniejsze od X z wartosci int n[X][Y][Z]
        for (int j = 0; j < 2; j++) {
            // j mniejsze od Y z wartosci int n[X][Y][Z]
            for (int k = 0; k < 3; k++) {
                // k mniejsze od Z z wartosci int n[X][Y][Z]
                arr[x] = n[i][j][k];
                x++;
            }
        }
    }
    for(int i = 0; i < 12; i++) {
         printf("%d\n", arr[i]);
     }
}
