/*
Questão 28. Caixa Simples de Mercadinho - Desenvolva um programa com as funções
float calculaSubtotal(float preco, int quantidade), float aplicaDesconto(float valor, int
opcaoPagamento), com 10% de desconto à vista, e float calculaTroco(float total, float pago).
Na main(), leia o preço, a quantidade, a forma de pagamento e o valor pago, e exiba o
subtotal, o total a pagar e o troco.
*/

#include <stdio.h>

float calculaSubtotal(float preco, int quantidade);
float aplicaDesconto(float valor, int opcaoPagamento);
float calculaTroco(float total, float pago);

int main(void) {
    float preco, subtotal, total, pago, troco;
    int quantidade, opcaoPagamento;

    printf("Digite o preço unitário do produto: R$ ");
    scanf("%f", &preco);

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    printf("Forma de pagamento (1 - A vista [10%% desconto] | 2 - Outros): ");
    scanf("%d", &opcaoPagamento);

    subtotal = calculaSubtotal(preco, quantidade);
    total = aplicaDesconto(subtotal, opcaoPagamento);

    printf("Subtotal: R$ %.2f\n", subtotal);
    printf("Total a pagar: R$ %.2f\n", total);

    printf("Digite o valor pago pelo cliente: R$ ");
    scanf("%f", &pago);

    if (pago < total) {
        printf("Valor pago insuficiente! Faltam R$ %.2f\n", total - pago);
    } else {
        troco = calculaTroco(total, pago);
        printf("Troco: R$ %.2f\n", troco);
    }

    return 0;
}

float calculaSubtotal(float preco, int quantidade) {
    return preco * (float)quantidade;
}

float aplicaDesconto(float valor, int opcaoPagamento) {
    if (opcaoPagamento == 1) {
        return valor * 0.90f;
    }
    return valor;
}

float calculaTroco(float total, float pago) {
    return pago - total;
}
