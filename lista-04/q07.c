/*
Questao 07. Raiz Quadrada ou Quadrado de um Numero Real -- Escreva um programa em C que leia um numero real. Se o numero for positivo ou igual a zero, calcule e imprima a sua raiz quadrada (utilizando a funcao sqrt() da biblioteca <math.h>). Caso o numero seja negativo, imprima o quadrado desse numero (x^2).
*/

#include <stdio.h> 
#include <math.h>  

int main() {
    float numero, resultado; 

    printf("Digite um numero real: "); 
    scanf("%f", &numero); 

    if (numero >= 0.0) { // Testa se o numero e positivo ou nulo
        resultado = sqrt(numero); // Calcula a raiz quadrada utilizando a biblioteca math.h
        printf("O numero e positivo ou zero. Sua raiz quadrada e: %.2f\n", resultado); 
    } else { // Caso o numero seja estritamente negativo
        resultado = numero * numero; // Calcula o quadrado do numero negativo
        printf("O numero e negativo. O seu quadrado e: %.2f\n", resultado); // Exibe o quadrado calculado
    }

    return 0; 
}