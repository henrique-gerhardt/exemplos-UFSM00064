#include <stdio.h>

void incrementar(int *valor) {
    (*valor)++;
}

int main(void) {
    int numero;
    printf("Digite um número inteiro: ");
    if (scanf("%d", &numero) != 1) {
        fprintf(stderr, "Entrada inválida.\n");
        return 1;
    }

    printf("Antes de incrementar: %d\n", numero);
    incrementar(&numero);
    printf("Depois de incrementar: %d\n", numero);

    return 0;
}