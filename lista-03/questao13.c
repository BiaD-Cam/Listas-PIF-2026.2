/*
Questão 13. Cálculo de Fatorial com Tratamento de Casos Especiais
Escreva um programa que leia um número inteiro N e calcule o seu fatorial (N!). Lembre-se de que 0!=1 e 1!=1 O programa deve utilizar o tipo de dado 'long long int' para evitar estouro de memória prematuro e deve exibir uma mensagem de erro caso o usuário forneça um número negativo.
*/

#include <stdio.h>

int main() {
    int N, i;
    long long int fatorial = 1;

    printf("Digite um numero inteiro não-negativo N: ");
    if (scanf("%d", &N) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    if (N < 0) {
        printf("Erro: Fatorial não existe para numeros negativos.\n");
    } else {
        for (i = 1; i <= N; i++) {
            fatorial *= i;
        }
        printf("%d! = %lld\n", N, fatorial);
    }

    return 0;
}