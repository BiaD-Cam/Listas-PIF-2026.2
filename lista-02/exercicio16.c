/*Questão 16. Quantidade de Degraus em uma Escada de Obra — Um trabalhador da construção
civil deseja subir uma escada de degraus idênticos. Escreva um programa em C que receba do
usuário a altura de cada degrau (em centímetros) e a altura total que o usuário deseja alcançar
subindo a escada (em metros). O programa deve calcular e exibir o número mínimo de degraus
que ele deve subir. Certifique-se de realizar a compatibilidade de unidades de medida (metros vs.
centímetros).*/

#include <stdio.h>
#include <math.h>

int main() {
    float altura_degrau_cm, altura_total_m, altura_total_cm;
    int qtd_degraus;

    printf("Digite a altura de cada degrau (em cm): ");
    scanf("%f", &altura_degrau_cm);

    printf("Digite a altura total que deseja alcancar (em metros): ");
    scanf("%f", &altura_total_m);

    /* Converte metros para centimetros */
    altura_total_cm = altura_total_m * 100.0;

    qtd_degraus = (int)ceil(altura_total_cm / altura_degrau_cm);

    printf("Quantidade minima de degraus necessarios: %d\n", qtd_degraus);

    return 0;
}