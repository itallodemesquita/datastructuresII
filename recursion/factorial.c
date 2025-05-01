/* Código de definição recursiva do cálculo fatorial */
/* Data Structure and Algorithms in C++ (p. 171)*/
/* Codificado em linguagem C */

#include <stdio.h>

int factorial (int n) {

    if (n == 0) {
        return 1;
    } else {
        return (n * factorial(n - 1));
    }

}

int main () {

    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    factorial(num);

    printf("O fatorial de %d eh: %d", num, factorial(num));

    return 0;
}