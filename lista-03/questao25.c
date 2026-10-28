/*
Questão 25. Análise e Teste de Primalidade de um Número Inteiro - Escreva um programa em C
que receba um número inteiro positivo N e determine se N é um número primo. Um número é primo se
for maior que 1 e divisível apenas por 1 e por ele mesmo. O programa deve contar a quantidade de
divisores encontrados no laço e exibir uma mensagem conclusiva.
*/

#include <stdio.h>

int main() {
    int N, i, divisores = 0;

    printf("Digite um numero inteiro positivo N: ");
    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("Entrada invalida.\n");
        return 1;
    }

    for (i = 1; i <= N; i++) {
        if (N % i == 0) {
            divisores++;
        }
    }

    printf("Quantidade de divisores encontrados: %d\n", divisores);

    if (divisores == 2) {
        printf("O numero %d É PRIMO!\n", N);
    } else {
        printf("O numero %d NÃO É PRIMO.\n", N);
    }

    return 0;
}