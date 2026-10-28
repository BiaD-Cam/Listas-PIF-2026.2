/*
Questão 14. Sequência de Quadrados e Acumulador Global
Desenvolva um programa queimprima todos os números inteiros de 1 a 100, acompanhados de seus respectivos quadrados (1->1, 2->4, 3->9, ..., 100 -> 10000). Ao final da listagem, o programa deve calcular e exibir a soma total
dos quadrados de todos esses 100 números.
*/

#include <stdio.h>

int main() {
    int i;
    long long int quadrado, soma_quadrados = 0;

    printf("Numero -> Quadrado\n");

    for (i = 1; i <= 100; i++) {
        quadrado = (long long int)i * i;
        printf("%3d -> %lld\n", i, quadrado);
        soma_quadrados += quadrado;
    }

    printf("Soma total dos quadrados = %lld\n", soma_quadrados);

    return 0;
}