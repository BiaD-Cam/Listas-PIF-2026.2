/*
Questao 17. Calculo de Pagamento e Comissao de Vendas -- Escreva um programa em C para auxiliar um vendedor. O programa le o valor total de uma compra e a opcao de pagamento (1 = A Vista com 10% de desconto; 2 = Parcelado em 3x sem juros). O programa deve calcular e exibir:
a) O valor final a pagar com desconto (se a vista) ou o valor de cada parcela (se parcelado).
b) A comissao do vendedor, que e de 5% sobre o valor com desconto (a vista) ou 5% sobre o valor total (parcelado).
*/

#include <stdio.h> 

int main() {
    float valor_total, valor_final, valor_parcela, comissao; 
    int opcao_pagamento; 

    printf("Digite o valor total da compra (R$): "); 
    scanf("%f", &valor_total); 

    printf("Opções de pagamento:\n1 - À vista (10%% de desconto)\n2 - Parcelado em 3x sem juros\nEscolha a opção: "); 
    scanf("%d", &opcao_pagamento);

    if (opcao_pagamento == 1) { 
        valor_final = valor_total * 0.90; 
        comissao = valor_final * 0.05;
        printf("\nModo: À Vista\n");
        printf("Valor final a pagar: R$ %.2f\n", valor_final); 
        printf("Comissão do vendedor (5%% sobre valor com desconto): R$ %.2f\n", comissao);    
    } else if (opcao_pagamento == 2) { 
        valor_parcela = valor_total / 3.0; 
        comissao = valor_total * 0.05; 
        printf("\nModo: Parcelado em 3x sem juros\n");
        printf("Valor de cada parcela (3x): R$ %.2f\n", valor_parcela); 
        printf("Comissão do vendedor (5%% sobre valor total): R$ %.2f\n", comissao);    
    } else { 
        printf("Erro: Opção de pagamento inválida!\n"); 
    }

    return 0; 
}