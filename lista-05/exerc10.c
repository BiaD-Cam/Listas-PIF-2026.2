/*
Questão 10. Área da Esfera com #define - Escreva um programa que leia o raio de uma
esfera e calcule sua área por meio de uma função float area (float r), usando a fórmula 4 * PI *
r*r. Defina PI com a diretiva #define e declare o protótipo da função antes da main().
*/

#include <stdio.h>

#define PI 3.14159f

float area(float r);

int main(void) {
    float raio;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    printf("Area da esfera: %.2f\n", area(raio));

    return 0;
}

float area(float r) {
    return 4.0f * PI * r * r;
}
