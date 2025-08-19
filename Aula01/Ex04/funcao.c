#include <stdio.h>


int somar(int a, int b) {
    return a + b;
}

int main() {
    int resultado = somar(5, 3);

    printf("O resultado da soma é: %d\n", resultado);

    return 0;
}