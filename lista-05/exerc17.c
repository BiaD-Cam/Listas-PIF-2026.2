/*
Questão 17. Fatorial Iterativo e Recursivo - Escreva duas funções: long fatorialIterativo (int
n), usando laço de repetição, e long fatorialRecursivo (int n), usando recursão. Na main(), leia
um inteiro não negativo, imprima o resultado das duas versões e confirme se coincidem.
*/

#include <stdio.h>

long fatorialIterativo(int n);
long fatorialRecursivo(int n);

int main(void) {
    int n;
    long fatIter, fatRec;

    printf("Digite um numero inteiro não negativo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Valor inválido! Informe um inteiro não negativo.\n");
        return 1;
    }

    fatIter = fatorialIterativo(n);
    fatRec = fatorialRecursivo(n);

    printf("Fatorial Iterativo (%d!): %ld\n", n, fatIter);
    printf("Fatorial Recursivo (%d!): %ld\n", n, fatRec);

    if (fatIter == fatRec) {
        printf("Confirmado: os resultados coincidem.\n");
    } else {
        printf("Os resultados divergem.\n");
    }

    return 0;
}

long fatorialIterativo(int n) {
    long resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

long fatorialRecursivo(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return (long)n * fatorialRecursivo(n - 1);
}
