#include <stdio.h>

int main() {
    int numeros[5] = {1, 2, 3, 4, 5};

    numeros[2] = 10;

    // Calculando o tamanho do array
    int n = sizeof(numeros)/sizeof(numeros[0]);

    printf("Tamanho do array: %d bytes\n", (int) sizeof(numeros)); 

    printf("Elementos do array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
    return 0;
}
