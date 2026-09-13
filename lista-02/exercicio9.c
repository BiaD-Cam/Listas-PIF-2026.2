/*Questão 09. Operações Aritméticas Básicas e Cast de Tipos — Escreva um programa em C que
solicite e leia dois números inteiros do usuário. O programa deve calcular e exibir os resultados
das quatro operações aritméticas básicas (soma, subtração, multiplicação e divisão real). Certifique-se de que o resultado da divisão seja exibido com duas casas decimais e trate de forma explícita a divisão real sem perdas de precisão (divisão inteira). Adicione um comentário informando como evitaria matematicamente a divisão por zero neste capítulo.*/

#include <stdio.h> // Inclui a biblioteca padrao de entrada e saida

int main() {
    int num1, num2; // Declara as variaveis inteiras 

    printf("Digite o primeiro numero inteiro: "); // Solicita o primeiro numero ao usuario
    scanf("%d", &num1); // Lê e armazena o primeiro valor inteiro 

    printf("Digite o segundo numero inteiro (diferente de zero): "); // Solicita o segundo numero ao usuario
    scanf("%d", &num2); // Lê e armazena o segundo valor 

    printf("Soma: %d\n", num1 + num2); // Calcula e exibe a soma 
    printf("Subtracao: %d\n", num1 - num2); // Calcula e exibe a subtração
    printf("Multiplicacao: %d\n", num1 * num2); // Calcula e exibe a multiplicação 
    
    /* Evita divisão inteira em float e evita divisao por zero por orientação de entrada sem usar IF */
    printf("Divisao real: %.2f\n", (float)num1 / (float)num2); // Converte os inteiros para float e exibe com 2 casas decimais

    return 0; // Informa ao sistema que o programa encerrou
}