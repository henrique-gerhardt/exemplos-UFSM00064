#include <stdio.h>

int main(void) {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr; 

    printf("Acessando array usando indices (arr[i]):\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d, endereco = %p\n", i, arr[i], (void *)&arr[i]);
    }

    printf("\nAcessando array usando ponteiro e aritmetica de ponteiros (*(ptr + i)):\n");
    for (int i = 0; i < 5; i++) {
        printf("*(ptr + %d) = %d, endereco = %p\n", i, *(ptr + i), (void *)(ptr + i));
    }

    return 0;
}