#include <stdio.h>

int main() {
    int numeros[5] = {1, 2, 3, 4, 5};

    numeros[2] = 10;

    printf("Elementos do array: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
    return 0;
}
