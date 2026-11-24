/*
Questão 11. Verificação de Número Par - Desenvolva uma função int ehPar(int n) que
retorne 1 se o número for par e 0 caso contrário. Na main(), leia um inteiro e imprima uma
mensagem clara informando se ele é par ou ímpar.
*/

#include <stdio.h>

int ehPar(int n);

int main(void) {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (ehPar(numero)) {
        printf("O numero %d e PAR.\n", numero);
    } else {
        printf("O numero %d e IMPAR.\n", numero);
    }

    return 0;
}

int ehPar(int n) {
    return (n % 2 == 0) ? 1 : 0;
}
