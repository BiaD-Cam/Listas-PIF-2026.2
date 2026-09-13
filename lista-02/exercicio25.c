/*Questão 25. Salário Líquido com Gratificação e Tributação — Faça um programa em C que leia
o salário-base de um funcionário. O programa deve calcular e exibir o salário líquido a receber
sabendo que esse funcionário tem uma gratificação fixa de 5% sobre o seu salário-base (adicional),
mas paga um imposto retido de 7% também calculado sobre o seu salário-base. Justifique a fórmula matemática do cálculo através dos operadores aritméticos.*/

#include <stdio.h> // Inclui a biblioteca padrao

int main() {
    float salario_base, salario_liquido; // Declara as variaveis 

    printf("Digite o salario-base: "); // Solicita que o usuario informe o valor
    scanf("%f", &salario_base); // Lê o valor informado e o armazena 

    /* Formula: Salario + 5% (gratificacao) - 7% (imposto) -> equivale a multiplicar o salario-base por 0.98 */
    salario_liquido = salario_base + (salario_base * 0.05) - (salario_base * 0.07); // Calcula o salario liquido final com os percentuais

    printf("Salario liquido final: R$ %.2f\n", salario_liquido); // Exibe o resultado com duas casas decimais

    return 0; // Finaliza o programa
}