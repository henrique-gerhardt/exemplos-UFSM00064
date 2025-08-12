#include <stdio.h>

int main() {
    char nome[50]; 
    int ano_nascimento;

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Em que ano você nasceu? ");
    scanf("%d", &ano_nascimento);

    int idade_aproximada = 2025 - ano_nascimento;

    printf("Olá, %s! Você tem aproximadamente %d anos.\n", nome, idade_aproximada);

    return 0;
}