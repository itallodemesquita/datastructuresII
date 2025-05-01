/* Código de definição recursiva do cálculo de uma potência */
/* Data Structure and Algorithms in C++ (p. 174)*/
/* Codificado em linguagem C */

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

 
    return 0;
}