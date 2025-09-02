#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    int idade;
} Pessoa;

int main(void) {
    // Aloca memória para uma Pessoa
    Pessoa *p = (Pessoa *)malloc(sizeof(Pessoa));
    if (p == NULL) {
        fprintf(stderr, "Falha ao alocar memória.\n");
        return 1;
    }

    // Lê o nome
    printf("Digite o nome: ");
    if (fgets(p->nome, sizeof(p->nome), stdin) == NULL) {
        fprintf(stderr, "Erro ao ler nome.\n");
        free(p);
        return 1;
    }
    // Remove a quebra de linha caso exista
    p->nome[strcspn(p->nome, "\n")] = '\0';

    // Lê a idade
    printf("Digite a idade: ");
    if (scanf("%d", &p->idade) != 1) {
        fprintf(stderr, "Entrada de idade inválida.\n");
        free(p);
        return 1;
    }

    printf("\nDados lidos:\n");
    printf("Nome: %s\n", p->nome);
    printf("Idade: %d\n", p->idade);

    // Libera a memória
    free(p);
    return 0;
}