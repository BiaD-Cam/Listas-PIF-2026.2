/*
Questao 28. Sistema de Atendimento Automatico Bancario (SAC) -- Crie um programa em C que simule a URA (Unidade de Resposta Audivel) de um banco. O programa apresenta o menu:
1 - Consultar Saldo
2 - Efetuar Extrato
3 - Fazer Transferencia
4 - Falar com Atendente
O programa le a opcao digitada e, utilizando a estrutura switch-case, exibe a mensagem de direcionamento correspondente para cada opcao. Trate opcoes invalidas com default.
*/

#include <stdio.h>

int main(void) {
    int opcao;

    printf("=== SISTEMA DE ATENDIMENTO BANCARIO (SAC) ===\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Efetuar Extrato\n");
    printf("3 - Fazer Transferencia\n");
    printf("4 - Falar com Atendente\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\nDirecionando para: Consulta de Saldo. Aguarde um instante...\n");
            break;
        case 2:
            printf("\nDirecionando para: Emissao de Extrato Bancario...\n");
            break;
        case 3:
            printf("\nDirecionando para: Area de Transferencias Pix e TED...\n");
            break;
        case 4:
            printf("\nAguarde na linha, transferindo para um de nossos atendentes...\n");
            break;
        default:
            printf("\nErro: Opção invalida! Por favor, digite um numero entre 1 e 4.\n");
            break;
    }

    return 0;
}

