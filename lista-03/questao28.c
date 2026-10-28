/*
Questão 28. Sistema de Folha de Pagamento com Menu Continuo (do-while & switch)
Desenvolva um programa completo para gerenciamento de folha de pagamento de uma empresa. O
programa deve exibir um menu de opções em um laço do-while contínuo:
1. Reajuste Salarial (Calcula e exibe novo salário: 15% de aumento para salários até R$ 2.000,00 e
10% para salários superiores).
2. Retenção de Imposto de Renda (Calcula desconto: 8% para salários até R$ 3.000,00 e 15% para
salários superiores).
3. Encerrar Programa.
O programa deve validar as opções do menu e só finalizar a execução quando a opção 3 for
expressamente selecionada.
*/

#include <stdio.h>

int main() {
    int opcao;
    double salario, novo_salario, imposto;

    do {
        printf("    SISTEMA DE FOLHA DE PAGAMENTO    \n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retencao de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("Escolha uma opcao: ");

        if (scanf("%d", &opcao) != 1) {
            printf("Opcao invalida. Introduza um numero.\n");
            while (getchar() != '\n');
            continue;
        }

        switch (opcao) {
            case 1:
                printf("\n--- REAJUSTE SALARIAL ---\n");
                printf("Digite o salario atual: R$ ");
                scanf("%lf", &salario);
                if (salario <= 2000.00) {
                    novo_salario = salario * 1.15;
                    printf("Aumento de 15%%. Novo salario: R$ %.2f\n", novo_salario);
                } else {
                    novo_salario = salario * 1.10;
                    printf("Aumento de 10%%. Novo salario: R$ %.2f\n", novo_salario);
                }
                break;

            case 2:
                printf("\n--- RETENCAO DE IMPOSTO DE RENDA ---\n");
                printf("Digite o salario para calculo do IR: R$ ");
                scanf("%lf", &salario);
                if (salario <= 3000.00) {
                    imposto = salario * 0.08;
                    printf("Desconto IR (8%%): R$ %.2f | Salario Liquido: R$ %.2f\n", imposto, salario - imposto);
                } else {
                    imposto = salario * 0.15;
                    printf("Desconto IR (15%%): R$ %.2f | Salario Liquido: R$ %.2f\n", imposto, salario - imposto);
                }
                break;

            case 3:
                printf("\nA encerrar o programa...\n");
                break;

            default:
                printf("\nOpcao invalida! Escolha entre 1, 2 ou 3.\n");
                break;
        }

    } while (opcao != 3);

    return 0;
}