/*
Questão 15. Geração de Padrões Visuais com Laços Aninhados: Triângulo de Floyd —
Escreva um programa em C que leia um número inteiro positivo N e imprima N linhas
do Triângulo de Floyd utilizando laços aninhados. Por exemplo, para N = 5, a saída
no console deve ser exatamente:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int N, i, j;
    int numero = 1;

    printf("Digite o numero de linhas N para o Triangulo de Floyd: ");
    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("Por favor, digite um numero inteiro positivo valido.\n");
        return 1;
    }

    for (i = 1; i <= N; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", numero);
            numero++;
        }
        printf("\n");
    }

    return 0;
}