#include <stdio.h>
#include <math.h>

int main() {
    double base = 2.0;
    double expoente = 10.0;
    double resultado;

    resultado = pow(base, expoente);

    printf("%.0f elevado a %.0f é: %.0f\n", base, expoente, resultado);

    return 0;
}