/*
Questão 8. Cálculos Geométricos e Constantes com  - Desenvolva um programa
em C que solicite ao usuário o valor do raio R de uma esfera. Defina a constante PI
como 3.14159265 e calcule:
a) A área da superfície da esfera (A = 4 * PI * R²)
b) O volume da esfera (V = (4.0 / 3.0) * PI * R³).
Utilize a função pow() da biblioteca  e exiba os resultados formatados
com 3 casas decimais. Atenção para a divisão real de 4.0 por 3.0!
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265

int main() {
    double R, area, volume;

    printf("Digite o valor do raio (R) da esfera: ");
    if (scanf("%lf", &R) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    area = 4.0 * PI * pow(R, 2);
    volume = (4.0 / 3.0) * PI * pow(R, 3);

    printf("Area da superficie da esfera: %.3f\n", area);
    printf("Volume da esfera: %.3f\n", volume);

    return 0;
}