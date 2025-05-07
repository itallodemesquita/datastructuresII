#include <stdio.h>

int invert(int num) {

    int numeroinvertido = 0;
    while (num > 0) {
        int digito = num % 10;
        numeroinvertido = numeroinvertido * 10 + digito;
        num /= 10;
    }

    return numeroinvertido;
}

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    int numeroInvertido = invert(numero);

    printf("O numero original eh: %d\n", numero);
    printf("O numero invertido eh: %d\n", numeroInvertido);
    return 0;
}