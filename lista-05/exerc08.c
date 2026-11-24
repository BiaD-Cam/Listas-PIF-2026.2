/*
Questão 08. Conversor de Fahrenheit para Celsius - Desenvolva um programa que leia
uma temperatura em graus Fahrenheit e utilize uma função float celsius (float fahr) para
convertê-la, aplicando a fórmula C=(F-32)*5/9. Exiba o resultado com duas casas
decimais.
*/

#include <stdio.h>

float celsius(float fahr);

int main(void) {
    float f, c;

    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &f);

    c = celsius(f);
    printf("Temperatura em Celsius: %.2f\n", c);

    return 0;
}

float celsius(float fahr) {
    return (fahr - 32.0f) * 5.0f / 9.0f;
}
