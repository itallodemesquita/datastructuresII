/* Questão 1 - Lista de Exercícios */

#include <stdio.h>
#include <stdbool.h>

bool isPrime (int n) {

    int i; /* Inicialização de índice */

    if (n <= 0) {
        return false;
    }

    /* Loop que verifica se a divisão de n é exata, de 2 a n-1 */
    for (i = 2; i < n; i++) {

        if (n % i == 0) { /* Se a divisão for exata, o número não é primo */
            return false;
        }
    }

    return true; /* Se não houver divisor, retorna true */
}

int main (){

    int n, m, i;

    printf("Digite o primeiro numero do intervalo: ");
    scanf("%d", &n);

    printf("Digite o segundo numero do intervalo: ");
    scanf("%d", &m);


    printf("Numeros primos contidos no intervalo: ");

    /* Loop que percorre todos os números do intervalo*/
    for (i = n; i <= m; i++) {
        isPrime(i);

        if (isPrime(i) == true) { /* Se o número for primo, ele é printado */
            printf("%d ", i);
        }
    }

    return 0;
}