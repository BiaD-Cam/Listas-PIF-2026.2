/*
Questão 9. Geometria do Triângulo e Fórmula de Heron - Escreva um programa em C
que leia os comprimentos dos três lados (a, b, c) de um triângulo qualquer. Sabendo
que o semiperímetro p é dado por (a + b + c) / 2.0, calcule a área do triângulo
utilizando a Fórmula de Heron: Area = sqrt(p * (p - a) * (p - b) * (p - c)).
Utilize a função sqrt() da biblioteca .
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double a, b, c, p, area;

    printf("Digite os tres lados do triangulo (a b c): ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Entrada invalida.\n");
        return 1;
    }

    // Validação da existência do triângulo
    if (a + b > c && a + c > b && b + c > a) {
        p = (a + b + c) / 2.0;
        area = sqrt(p * (p - a) * (p - b) * (p - c));
        printf("Area do triangulo: %.3f\n", area);
    } else {
        printf("Os lados informados nao formam um triangulo valido.\n");
    }

    return 0;
}