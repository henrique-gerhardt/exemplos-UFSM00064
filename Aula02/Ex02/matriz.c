#include <stdio.h>

int main() {
    int matriz[2][3] = {{1, 2, 3}, {4, 5, 6}};

    matriz[1][2] = 10;

    printf("Elementos da matriz:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
