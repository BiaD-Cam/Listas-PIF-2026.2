/*Questão 22. Conversão de Caixa Alta para Baixa via Tabela ASCII — Escreva um programa que
solicite e leia uma letra maiúscula do usuário. O programa deve convertê-la em uma letra minúscula utilizando operações aritméticas de deslocamento na tabela ASCII (offset de 32 posições ou através da subtração do caractere 'A' e adição de 'a'). Não utilize funções prontas de bibliotecas como <ctype.h>.*/

#include <stdio.h>

int main() {
    char maiuscula, minuscula;

    printf("Digite uma letra maiuscula: ");
    scanf(" %c", &maiuscula);

    /* Na tabela ASCII, a diferença entre qualquer letra maiuscula e sua versao minuscula é exatamente 32 posições. Somando 32 ao codigo da maiuscula obtemos a minuscula correspondente.*/
    minuscula = maiuscula + 32;

    printf("Letra convertida para minuscula: %c\n", minuscula);

    return 0;
}