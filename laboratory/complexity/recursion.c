#include <stdio.h>
#include <time.h>

/* Análise da função recursiva x(n) */
int x(int n) {
    if (n <= 1) {
        return 1;
    }
    else {
        return x(n-1) + x(n-2);
    }
}

int main() {
    int n = 50;
    int n_Max = 100;
    double total_time = 0;

    for (int i = 0; i < n_Max; i++) {
        clock_t start = clock();
        x(n);
        clock_t end = clock();
        total_time += (double)(end - start) / CLOCKS_PER_SEC;
    }

    printf("\nTempo medio: %f segundos\n", total_time / n_Max);
}