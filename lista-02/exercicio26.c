/*Questão 26. Orçamento para Cercamento Perimetral de Terrenos — Desenvolva um programa
para cercamento de terrenos agrícolas. O programa deve ler do teclado: a) O comprimento e a largura do terreno em metros; b) O preço unitário do metro de arame farpado (em reais). Sabendo que o cercamento de segurança exige exatamente 3 fios de arame esticados ao longo do perímetro do terreno, calcule e mostre na tela quantos metros de arame farpado devem ser comprados e o custo total do cercamento.*/

#include <stdio.h>

int main() {
    float comprimento, largura, preco_unitario, metros_arame, custo_total;

    printf("Digite o comprimento do terreno em metros: ");
    scanf("%f", &comprimento);

    printf("Digite a largura do terreno em metros: ");
    scanf("%f", &largura);

    printf("Digite o preço unitário do metro de arame farpado em reais: ");
    scanf("%f", &preco_unitario);

    float perimetro = 2 * (comprimento + largura);

    metros_arame = 3 * perimetro;

    custo_total = metros_arame * preco_unitario;

    printf("Quantidade de metros de arame farpado a serem comprados: %.2f m\n", metros_arame);
    printf("Custo total do cercamento: R$ %.2f\n", custo_total);

    return 0;
}