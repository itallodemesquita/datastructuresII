/* Questão 2 - Lista de exercícios */

#include <stdio.h>

double power (double x, int n) {

    if (n == 0) {
        return 1;
    }
    
    else {
        return x * power (x, n - 1);
    }

}

int main () {

    double num;
    int pow;

    printf("Digite a base: ");
    scanf("%lf", &num);

    printf("Digite o expoente da expressao: ");
    scanf("%d", &pow);

    printf("\n");

    printf("Resultado da potenciacao: %2.lf", power(num, pow));
    return 0;
}