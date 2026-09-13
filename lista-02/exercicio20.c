/*Questão 20. Teorema de Pitágoras e a Hipotenusa — Escreva um programa em C que peça
para o usuário inserir os valores correspondentes aos dois catetos (lado_a e lado_b) de um
triângulo retângulo. O programa deve calcular e exibir na tela o comprimento de sua hipotenusa.
Dica: utilize o teorema de Pitágoras (hipotenusa = raiz quadrada da soma dos quadrados dos
catetos), importando as funções pow() ou sqrt() de <math.h>.*/

#include <stdio.h>
#include <math.h>

int main() {
    double lado_a, lado_b, hipotenusa;

    printf("Digite o comprimento do primeiro cateto: ");
    scanf("%lf", &lado_a);

    printf("Digite o comprimento do segundo cateto: ");
    scanf("%lf", &lado_b);

    hipotenusa = sqrt(pow(lado_a, 2.0) + pow(lado_b, 2.0));

    printf("Comprimento da hipotenusa: %.2lf\n", hipotenusa);

    return 0;
}