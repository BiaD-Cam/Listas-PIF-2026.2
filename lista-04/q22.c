/*
Questao 22. Calculo de Impostos Estaduais sobre Produtos -- Uma empresa vende produtos para quatro estados diferentes. Escreva um programa em C que leia o valor de um produto (float) e a sigla do estado de destino do frete (lida como inteiro ou codigo char: 1 = MG, 2 = SP, 3 = RJ, 4 = MS). O programa deve adicionar a aliquota de imposto correspondente ao valor final:
* MG: 7% | SP: 12% | RJ: 15% | MS: 8%
Exiba o preco final acrescido do imposto. Se o codigo do estado for invalido, mostre uma mensagem de erro.
*/

#include <stdio.h> 

int main() {
    float valor_produto, preco_final, imposto; 
    int codigo_estado; 

    printf("Digite o valor do produto (R$): "); 
    scanf("%f", &valor_produto);

    printf("Codigos de estado de destino:\n1 - MG (7%%)\n2 - SP (12%%)\n3 - RJ (15%%)\n4 - MS (8%%)\nDigite o codigo do estado: ");
    scanf("%d", &codigo_estado); 

    switch (codigo_estado) {
            imposto = valor_produto * 0.07; 
            break;     
        case 2: 
            imposto = valor_produto * 0.12; 
            break;     
        case 3:
            imposto = valor_produto * 0.15; 
            break;     
        case 4:
            imposto = valor_produto * 0.08;
            break;     
        default: 
            printf("Erro: Código de estado inválido!\n");
            return 0; 
    }

    preco_final = valor_produto + imposto; 

    printf("\nValor do imposto estadual: R$ %.2f\n", imposto);
    printf("Preco final do produto com imposto: R$ %.2f\n", preco_final); 

    return 0; 
}