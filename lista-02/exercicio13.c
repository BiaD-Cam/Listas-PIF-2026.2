/*Questão 13. Cálculo de Áreas de Figuras Planas Básicas — Crie um programa unificado em C
que ofereça suporte ao cálculo de três geometrias fundamentais. O usuário deve fornecer os dados
necessários e o programa exibirá: a) A área de um quadrado de lado L; b) A área de um retângulo
de base B e altura H; c) A área de um triângulo retângulo de base B e altura H. Todos os valores
de entrada e saída devem ser numéricos de ponto flutuante.*/

#include <stdio.h>

int main() {
    float lado, base, altura;
    float area_quadrado, area_retangulo, area_triangulo;

    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);

    printf("Digite a base da figura: ");
    scanf("%f", &base);

    printf("Digite a altura da figura: ");
    scanf("%f", &altura);

    area_quadrado = lado * lado;
    area_retangulo = base * altura;
    area_triangulo = (base * altura) / 2.0;

    printf("\n--- RESULTADOS ---\n");
    printf("Area do quadrado: %.2f\n", area_quadrado);
    printf("Area do retangulo: %.2f\n", area_retangulo);
    printf("Area do triangulo retangulo: %.2f\n", area_triangulo);

    return 0;
}