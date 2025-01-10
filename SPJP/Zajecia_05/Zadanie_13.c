#include <stdio.h>

int main() {
    const int RANGE = 15;
    const int n = 10;

    printf("Tabela ASCII:\n");
    printf("=========================\n");

    for (int row = 0; row <= 127 / RANGE; row++) {
        for (int col = 0; col < n; col++) {
            int value = row + col * RANGE;
            if (value <= 127) {
                if (value < 32 || value == 127) {
                    printf("%3d: %s\t", value, "CTL");
                } else {
                    printf("%3d: %c\t", value, value);
                }
            } else {
                printf("        \t");
            }
        }
        printf("\n");
    }

    return 0;
}