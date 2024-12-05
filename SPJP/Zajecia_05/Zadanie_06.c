#include <stdio.h>

int main() {
    int array[2][2] = {
        {1,1},
        {0,1}
    };
    int num_columns = sizeof(array[0]) / sizeof(array[0][0]);
    printf("|--|\n");
    for(int i = 0; i < 2; i++) {
        printf("|");
        for(int j = 0; j < num_columns; j++) {
            if(array[i][j] == 1)
                printf("x");
            else
                printf(" ");
        }
        printf("|\n");
    }
    printf("|--|\n");
    return 0;
}