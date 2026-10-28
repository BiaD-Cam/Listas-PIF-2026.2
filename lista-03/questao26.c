/*
Questão 26. Mapeamento e Soma de Primos em um Intervalo Fechado [A, B] - Desenvolva um
programa que solicite ao usuário dois números inteiros positivos A e B (garantindo A < B). O programa
deve encontrar e listar todos os números primos situados no intervalo fechado [A, B], e ao final exibir a
soma total de todos os primos encontrados nesse intervalo.
*/

#include <stdio.h>

int main() {
    int A, B, i, j, divisores;
    long long int soma_primos = 0;

    do {
        printf("Digite o inicio do intervalo (A): ");
        scanf("%d", &A);
        printf("Digite o fim do intervalo (B > A): ");
        scanf("%d", &B);

        if (A >= B || A <= 0) {
            printf("Intervalo invalido. Certifique-se que A > 0 e A < B.\n");
        }
    } while (A >= B || A <= 0);

    printf("\nNumeros primos em [%d, %d]:\n", A, B);

    for (i = A; i <= B; i++) {
        if (i < 2) continue;

        divisores = 0;
        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                divisores++;
            }
        }

        if (divisores == 2) {
            printf("%d ", i);
            soma_primos += i;
        }
    }

    printf("Soma de todos os primos encontrados: %lld\n", soma_primos);

    return 0;
}