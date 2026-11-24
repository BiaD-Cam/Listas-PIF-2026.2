/*
Questão 07. Soma de Dois Inteiros - Escreva um programa em C que leia dois números
inteiros e utilize uma função int soma(int a, int b) para calcular e retornar a soma. O resultado
deve ser impresso na main(). Declare o protótipo antes da main().
*/

#include <stdio.h>

int soma(int a, int b);

int main(void) {
    int num1, num2, resultado;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    resultado = soma(num1, num2);
    printf("Soma: %d\n", resultado);

    return 0;
}

int soma(int a, int b) {
    return a + b;
}
