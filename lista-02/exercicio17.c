/*Questão 17. Geometria do Círculo com Constantes — Escreva um programa em C que leia do
console o valor do raio de um círculo (ponto flutuante). O programa deve calcular e exibir o valor de sua Área (A = Pi * R^2) e de sua Circunferência (C = 2 * Pi * R). Defina o valor de Pi como a constante 3.141593.*/

#include <stdio.h>

#define PI 3.141593

int main() {
    float raio, area, circunferencia;

    printf("Digite o valor do raio do círculo: ");
    scanf("%f", &raio);

    area = PI * raio * raio;
    circunferencia = 2 * PI * raio;

    printf("Área do círculo: %.2f\n", area);
    printf("Circunferência do círculo: %.2f\n", circunferencia);

    return 0;
}
