/*Questão 12. Operadores Unários de Antecessor e Sucessor — Elabore um programa em C que
receba um número inteiro do usuário e, utilizando exclusivamente os operadores unários de
incremento (++) e decremento (--), exiba o seu antecessor e o seu sucessor no console,
justificando sua implementação lógica.*/

#include <stdio.h> // Inclui a biblioteca padrao para entrada e saida de dados

int main() {
    int num, antecessor, sucessor; // Declara as variaveis 

    printf("Digite um numero inteiro: "); // Pede ao usuario para digitar um valor 
    scanf("%d", &num); // Lê o numero digitado 

    antecessor = num; // Copia o valor original para a variavel antecessor
    sucessor = num; // Copia o valor original para a variavel sucessor

    --antecessor; // Aplica o operador de decremento pré-fixado para subtrair 1 
    ++sucessor; // Aplica o operador de incremento pré-fixado para somar 1 

    printf("Antecessor de %d eh: %d\n", num, antecessor); // Exibe o valor do antecessor 
    printf("Sucessor de %d eh: %d\n", num, sucessor); // Exibe o valor do sucessor 

    return 0; // Finaliza o programa 
}