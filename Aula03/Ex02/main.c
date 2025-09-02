#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("Quantos elementos deseja alocar? ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Número de elementos inválido.\n");
        return 1;
    }

    // Aloca dinamicamente um array de n inteiros
    int *vet = (int *)malloc(n * sizeof(int));
    if (vet == NULL) {
        fprintf(stderr, "Falha ao alocar memória.\n");
        return 1;
    }

    // Lê os valores do usuário
    for (int i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i);
        if (scanf("%d", &vet[i]) != 1) {
            fprintf(stderr, "Entrada inválida.\n");
            free(vet);
            return 1;
        }
    }

    // Calcula a soma dos elementos
    long soma = 0;
    for (int i = 0; i < n; i++) {
        soma += vet[i];
    }
    printf("Soma dos valores = %ld\n", soma);

    // Libera a memória alocada
    free(vet);
    return 0;
}