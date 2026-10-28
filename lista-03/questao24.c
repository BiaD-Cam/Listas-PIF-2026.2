/*
Questão 24. Padrão Visual em X (Diagonais Cruzadas) Crie um programa em C que solicite uma
dimensão ímpar N (entre 3 e 19). O programa deve utilizar laços aninhados e condicionais lógicas para
desenhar um padrão visual de duas diagonais que se cruzam no centro formando um 'X' com o caractere '*'.
*/

#include <stdio.h>

int main() {
    int N, i, j;

    do {
        printf("Digite um tamanho impar N (entre 3 e 19): ");
        if (scanf("%d", &N) != 1) {
            while (getchar() != '\n');
            N = 0;
        }
        if (N % 2 == 0) {
            printf("Erro: O valor deve ser um numero IMPAR.\n");
        }
    } while (N < 3 || N > 19 || N % 2 == 0);

    for (i = 1; i <= N; i++) {
        for (j = 1; j <= N; j++) {
            if (i == j || (i + j == N + 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}