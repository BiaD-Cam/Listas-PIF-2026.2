/*
Questão 19. Cálculo do N-ésimo Termo da Sequência de Fibonacci - A sequência de Fibonacci é dada por: 1, 1, 2, 3, 5, 8, 13, 21, 34, ... onde cada termo a partir do terceiro é a soma dos dois anteriores. Escreva um programa que solicite ao usuário o número do termo desejado (N) e calcule e imprima o valor correspondente desse termo, além de listar todos os termos até N.
*/

#include <stdio.h>

int main() {
    int N, i;
    long long int t1 = 1, t2 = 1, proximo;

    printf("Digite a posição do termo desejado (N): ");
    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("Por favor, digite um valor inteiro positivo.\n");
        return 1;
    }

    printf("Sequencia de Fibonacci ate ao termo %d:\n", N);

    for (i = 1; i <= N; i++) {
        if (i == 1) {
            printf("%lld", t1);
            continue;
        }
        if (i == 2) {
            printf(", %lld", t2);
            continue;
        }

        proximo = t1 + t2;
        printf(", %lld", proximo);
        t1 = t2;
        t2 = proximo;
    }

    printf("\n\nO %d° termo da Sequencia de Fibonacci e: ", N);
    if (N == 1 || N == 2) {
        printf("1\n");
    } else {
        printf("%lld\n", t2);
    }

    return 0;
}