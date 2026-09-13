/* Questão 08. Potências e Divisão com Ponto Flutuante — Desenvolva um programa em C que
leia do teclado um número inteiro fornecido pelo usuário. O programa deve calcular e exibir: a) O
seu quadrado (valor inteiro); b) A sua décima parte (valor real, com precisão de duas casas
decimais). Garanta que o cálculo da décima parte não sofra de truncamento de divisão inteira.*/

#include <stdio.h>

int main() {
    int num, quadrado;
    float decima_parte;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    quadrado = num * num;
    decima_parte = (float)num / 10.0;

    printf("Quadrado: %d\n", quadrado);
    printf("Decima parte: %.2f\n", decima_parte);

    return 0;
}

