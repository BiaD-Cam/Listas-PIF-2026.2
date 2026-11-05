/*
Questao 08. Verificacao de Ano Bissexto -- Desenvolva um programa em C que solicite ao usuario um ano (numero inteiro positivo) e determine se esse ano e bissexto ou nao. Regra: Um ano e bissexto se for divisivel por 400 OU se for divisivel por 4 e NAO for divisivel por 100. Exiba uma mensagem clara no console confirmando o resultado.
*/

#include <stdio.h> 

int main() {
    int ano; 

    printf("Digite um ano (inteiro positivo): "); 
    scanf("%d", &ano); 

    /* Aplicando a regra logica oficial para determinacao de anos bissextos */
    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) { // Testa se e divisivel por 400 OU por 4 e nao por 100
        printf("O ano %d É BISSEXTO.\n", ano); 
    } else { 
        printf("O ano %d NÃO É BISSEXTO.\n", ano); 
    }

    return 0; 
}