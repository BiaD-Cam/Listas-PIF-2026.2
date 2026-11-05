/*
Questao 10. Analise de Paridade e Sinal de Inteiros -- Faca um programa em C que receba um numero inteiro do usuario e determine simultaneamente:
a) Se o numero e PAR ou IMPAR (utilizando o operador resto da divisao %).
b) Se o numero e POSITIVO, NEGATIVO ou ZERO.
*/

#include <stdio.h> 

int main() {
    int numero; 

    printf("Digite um numero inteiro: "); 
    scanf("%d", &numero); 

    if (numero % 2 == 0) { 
        printf("O número %d é PAR.\n", numero); // Exibe que o numero é par
    } else { // Caso o resto da divisao por 2 seja diferente de zero
        printf("O número %d é IMPAR.\n", numero); // Exibe que o numero é impar
    }

    if (numero > 0) { // Testa se maior que zero
        printf("O número e POSITIVO.\n"); 
    } else if (numero < 0) { // Testa se menor que zero
        printf("O número é NEGATIVO.\n"); 
    } else { // Caso nao seja nem maior nem menor que zero
        printf("O número e ZERO.\n"); 
    }

    return 0; 
}