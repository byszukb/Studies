#include <stdio.h>


int main() {
    int x = 3, y = 3, z = 3;
    int T[3][3][3] = {
        {
            {1, 3, 2},
            {4,6,5},
            {7, 9 ,8}
        },
        {
            {10,14,12},
            {13,17,19},
            {20, 30, 21}
        },
        {
            {40, 30, 31},
            {30, 30, 30},
            {40, 50, 40}
        }
    };
    int dx[] = { -1, 0, 1};
    int dy[] = { -1, 0, 1};
    int dz[] = {-1, 0, 1};

    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            for(int k = 0; k < z; k++) {
                int isHigherNumber = 1;
                for(int di = 0; di < 3; di++) {
                    for(int dj = 0; dj < 3; dj++) {
                        for(int dk = 0; dk < 3; dk++) {
                            if(dx[di]==0 && dy[dj]==0 && dz[dk] == 0) {
                                continue;
                            }
                            int ni = i + dx[di];
                            int nj = j + dy[dj];
                            int nk = k + dz[dk];
                            if(ni >= 0 && ni < x && nj >= 0 && nj < y && nk >= 0 && nk < z) {
                                if(T[ni][nj][nk] >= T[i][j][k]) {
                                    isHigherNumber = 0;
                                }
                            }
                        }
                    }
                }
                if(isHigherNumber==1) {
                    printf("Element T[%d][%d][%d] = %d jest wiekszy od sasiadow\n", i, j, k, T[i][j][k]);
                }
            }
        }
    }
}