#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

// Adiciona um elemento ao final da lista
void append(Node **headRef, int value) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) {
        fprintf(stderr, "Falha ao alocar memória.\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;

    if (*headRef == NULL) {
        *headRef = newNode;
    } else {
        Node *curr = *headRef;
        while (curr->next != NULL) {
            curr = curr->next;
        }
        curr->next = newNode;
    }
}

// Imprime a lista
void printList(Node *head) {
    Node *curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");
}

// Libera todos os nós da lista
void freeList(Node *head) {
    Node *curr = head;
    while (curr != NULL) {
        Node *next = curr->next;
        free(curr);
        curr = next;
    }
}

int main(void) {
    Node *head = NULL;
    int n;
    printf("Quantos elementos deseja inserir na lista? ");
    if (scanf("%d", &n) != 1 || n < 0) {
        fprintf(stderr, "Número inválido.\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        int value;
        printf("Digite o valor %d: ", i);
        if (scanf("%d", &value) != 1) {
            fprintf(stderr, "Entrada inválida.\n");
            freeList(head);
            return 1;
        }
        append(&head, value);
    }
    printf("Lista ligada: ");
    printList(head);

    freeList(head);
    return 0;
}