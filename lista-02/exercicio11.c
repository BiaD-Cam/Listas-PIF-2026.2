/*Questão 11. Conversor de Ângulos de Graus para Radianos — Desenvolva um programa que
leia do teclado o valor de um ângulo em graus e o converta em seu equivalente em radianos. Exiba
o resultado final formatado no console. Use a fórmula: radianos = graus * (Pi / 180.0), definindo Pi
como uma constante de 3.141593.*/

#include <stdio.h>
#define PI 3.141593

int main() {
    float graus, radianos;

    printf("Digite o angulo em graus: ");
    scanf("%f", &graus);

    radianos = graus * (PI / 180.0);

    printf("Valor equivalente em radianos: %.6f rad\n", radianos);

    return 0;
}