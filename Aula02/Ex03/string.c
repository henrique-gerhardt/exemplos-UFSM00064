#include <stdio.h>
#include <string.h>

int main() {
    char nome[20];
    printf("Digite seu nome: ");
    fgets(nome, 20, stdin); //Similar ao scanf, mas lê strings com espaços e evita overflow
    nome[strcspn(nome, "\n")] = 0; //Remove o '\n' lido pelo fgets, se houver
    printf("Olá, %s! Seu nome tem %lu letras.\n", nome, strlen(nome));
    return 0;
}
