/*Questão 27. Geração de Valores Aleatórios via Resto de Divisão — Escreva um programa em
C que gere e exiba no console três números aleatórios inteiros dentro do intervalo estrito de 1 a 6 (simulando o lançamento de três dados independentes). Utilize as funções rand() e srand() da biblioteca <stdlib.h>, aliadas ao uso do operador de resto da divisão (%) estudado no Capítulo 2.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int dado1, dado2, dado3;

    srand(time(NULL));

    dado1 = (rand() % 6) + 1;
    dado2 = (rand() % 6) + 1;
    dado3 = (rand() % 6) + 1;

    printf("Lancamento do Dado 1: %d\n", dado1);
    printf("Lancamento do Dado 2: %d\n", dado2);
    printf("Lancamento do Dado 3: %d\n", dado3);

    return 0;
}