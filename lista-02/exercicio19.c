/*Questão 19. Cálculo de Salário Líquido com Desconto na Fonte — Uma empresa de prestação
de serviços contrata um encanador à taxa fixa de R$ 30,00 por dia útil trabalhado. Elabore um
programa que solicite ao usuário o número de dias efetivamente trabalhados pelo profissional.
Calcule e imprima a quantia bruta devida e o valor líquido final a ser pago, sabendo que são descontados estritamente 8% de imposto de renda retido na fonte sobre o total bruto.*/

#include <stdio.h>

int main() {
    int dias_trabalhados;
    float salario_bruto, salario_liquido, imposto;

    printf("Digite o numero de dias uteis trabalhados: ");
    scanf("%d", &dias_trabalhados);

    salario_bruto = dias_trabalhados * 30.0;
    imposto = salario_bruto * 0.08;
    salario_liquido = salario_bruto - imposto;

    printf("Valor Bruto: R$ %.2f\n", salario_bruto);
    printf("Imposto Retido (8%%): R$ %.2f\n", imposto);
    printf("Valor Liquido Final: R$ %.2f\n", salario_liquido);

    return 0;
}

