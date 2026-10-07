/*
Questão 11. Cálculo Salarial com Gratificação e Impostos - Uma empresa contrata
um técnico a R$ 45,00 por dia trabalhado. Crie um programa em C que solicite o
número de dias trabalhados, calcule o salário bruto, adicione uma gratificação
de 5% sobre o bruto e desconte 8% de imposto de renda sobre o bruto. Ao final,
exiba o holerite detalhado com o valor líquido a receber.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int dias_trabalhados;
    double salario_bruto, gratificacao, imposto, salario_liquido;
    const double DIARIA = 45.00;

    printf("Digite o numero de dias trabalhados: ");
    if (scanf("%d", &dias_trabalhados) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    salario_bruto = dias_trabalhados * DIARIA;
    gratificacao = salario_bruto * 0.05;
    imposto = salario_bruto * 0.08;
    salario_liquido = salario_bruto + gratificacao - imposto;


    printf("Dias trabalhados: %d\n", dias_trabalhados);
    printf("Salario Bruto   : R$ %.2f\n", salario_bruto);
    printf("Gratificacao: R$ %.2f\n", gratificacao);
    printf("Imposto IR: R$ %.2f\n", imposto);
    printf("---------------------------\n");
    printf("Salario Liquido : R$ %.2f\n", salario_liquido);

    return 0;
}