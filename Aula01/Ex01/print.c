#include <stdio.h>

int main() {
    int idade = 30;
    float temperatura = 25.5;
    
    printf("A idade é: %d anos.\n", idade);
    printf("A temperatura é: %f graus.\n", temperatura);
    printf("A temperatura formatada é: %.2f graus.\n", temperatura);

    return 0;
}