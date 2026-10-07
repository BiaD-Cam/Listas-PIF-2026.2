/*
Questão 13. Cálculo do Fatorial com Tratamento do Zero e Tipo 'long long int' -
Escreva um programa em C que solicite um número inteiro N e calcule o seu
fatorial (N!). Lembre-se que 0! = 1 e 1! = 1. O programa deve utilizar a variável
do resultado como 'long long int' com o especificador %lld para evitar estouro
de memória e tratar entradas inválidas (números negativos).
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int N, i;
    long long int fatorial = 1;

    printf("Digite um numero inteiro não-negativo: ");
    if (scanf("%d", &N) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    if (N < 0) {
        printf("Erro: Nõo é possivel calcular o fatorial de número negativo.\n");
    } else {
        for (i = 1; i <= N; i++) {
            fatorial *= i;
        }
        printf("%d! = %lld\n", N, fatorial);
    }

    return 0;
}