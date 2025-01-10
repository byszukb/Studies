#include <stdio.h>

void print_pascal_triangle(int height) {
    int triangle[height][height];

    for (int i = 0; i < height; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                triangle[i][j] = 1;
            } else {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
        }
    }

    for (int i = 0; i < height; i++) {
        for (int k = 0; k < height - i - 1; k++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%d ", triangle[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int height = 6;
    print_pascal_triangle(height);
    return 0;
}