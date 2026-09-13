/*Questão 21. Leitura de Caractere e Exibição de seu Código ASCII — A tabela ASCII associa
cada caractere a um valor inteiro único de 1 byte. Desenvolva um programa em C que leia um
caractere do teclado informado pelo usuário e exiba na tela esse mesmo caractere formatado como
um número inteiro. Escreva uma breve explicação em comentários no seu código sobre o que esse
número representa.*/

#include <stdio.h> // Inclui a biblioteca

int main() {
    char caractere; // Declara a variavel do tipo char para armazenar um unico caractere, que representa 1 byte, em ASCII significa 8 bits

    printf("Digite um caractere: "); // Exibe a mensagem 
    scanf(" %c", &caractere); // Lê o caractere digitado 

    /* O tipo char armazena um inteiro de 8 bits */
    printf("O caractere '%c' possui o codigo ASCII decimal: %d\n", caractere, (int)caractere); // Exibe o simbolo (%c) e seu valor numerico decimal (%d)

    return 0; // Encerra o programa
}