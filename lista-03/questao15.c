/*
Questão 15. Filtragem Numérica Simultânea com Operadores Lógicos Criar um programa em C
que solicite ao usuário um número limite inteiro positivo NUM. Em seguida, o programa deve imprimir todos os números no intervalo fechado de 1 até NUM que sejam múltiplos de 3 e de 5 ao mesmo tempo (por exemplo: 15, 30, 45, ...). Caso nenhum número satisfaça a condição, informe o usuário.
*/

#include <stdio.h>

int main() {
    int NUM, i, encontrados = 0;

    printf("Digite um valor limite inteiro positivo (NUM): ");
    if (scanf("%d", &NUM) != 1 || NUM <= 0) {
        printf("Valor invalido. Digite um numero inteiro positivo.\n");
        return 1;
    }

    printf("Multiplos de 3 e 5 simultaneamente em [1, %d]:\n", NUM);

    for (i = 1; i <= NUM; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            encontrados++;
        }
    }

    if (encontrados == 0) {
        printf("Nenhum numero satisfaz a condicção de ser multiplo de 3 e 5 simultaneamente.\n");
    }

    printf("\n");
    return 0;
}