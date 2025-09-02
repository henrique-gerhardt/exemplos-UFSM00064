#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int linhas, colunas;
    printf("Digite o número de linhas: ");
    if (scanf("%d", &linhas) != 1 || linhas <= 0) {
        fprintf(stderr, "Número de linhas inválido.\n");
        return 1;
    }
    printf("Digite o número de colunas: ");
    if (scanf("%d", &colunas) != 1 || colunas <= 0) {
        fprintf(stderr, "Número de colunas inválido.\n");
        return 1;
    }

    // Aloca o vetor de ponteiros (cada um apontará para uma linha)
    int **matriz = (int **)malloc(linhas * sizeof(int *));
    if (matriz == NULL) {
        fprintf(stderr, "Falha ao alocar memória para as linhas.\n");
        return 1;
    }

    // Aloca cada linha
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
        if (matriz[i] == NULL) {
            fprintf(stderr, "Falha ao alocar memória para a linha %d.\n", i);
            // libera as linhas já alocadas
            for (int j = 0; j < i; j++) {
                free(matriz[j]);
            }
            free(matriz);
            return 1;
        }
    }

    // Preenche a matriz
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Digite o valor para [%d,%d]: ", i, j);
            if (scanf("%d", &matriz[i][j]) != 1) {
                fprintf(stderr, "Entrada inválida.\n");
                // libera memória antes de sair
                for (int r = 0; r < linhas; r++) {
                    free(matriz[r]);
                }
                free(matriz);
                return 1;
            }
        }
    }

    // Calcula a soma
    long soma = 0;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            soma += matriz[i][j];
        }
    }
    printf("Soma de todos os elementos = %ld\n", soma);

    // Libera a memória
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}