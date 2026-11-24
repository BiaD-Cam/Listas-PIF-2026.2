/*
Questão 22. Biblioteca de Áreas com Arquivo de Cabeçalho - Crie um arquivo areas.h
contendo a constante PI e as macros A_CIRC(raio), A_RET (base, alt) e A_TRI(base, alt), todas
com parênteses de proteção. Em um programa principal que utilize #include "areas.h", leia os
dados do usuário e exiba as áreas calculadas.
*/

#include <stdio.h>
#include "areas.h"

float areaCirculo(float raio);
float areaRetangulo(float base, float alt);
float areaTriangulo(float base, float alt);

int main(void) {
    float raio, baseRet, altRet, baseTri, altTri;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    printf("Digite a base do retangulo: ");
    scanf("%f", &baseRet);

    printf("Digite a altura do retangulo: ");
    scanf("%f", &altRet);

    printf("Digite a base do triangulo: ");
    scanf("%f", &baseTri);

    printf("Digite a altura do triangulo: ");
    scanf("%f", &altTri);

    printf("\nÁrea do circulo: %.2f\n", areaCirculo(raio));
    printf("Área do retangulo: %.2f\n", areaRetangulo(baseRet, altRet));
    printf("Área do triangulo: %.2f\n", areaTriangulo(baseTri, altTri));

    return 0;
}

float areaCirculo(float raio) {
    return A_CIRC(raio);
}

float areaRetangulo(float base, float alt) {
    return A_RET(base, alt);
}

float areaTriangulo(float base, float alt) {
    return A_TRI(base, alt);
}
