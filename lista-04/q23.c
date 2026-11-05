/*
Questao 23. Impressao de Data Por Extenso com switch-case -- Elabore um programa que solicite ao usuario uma data no formato numerico de tres inteiros: Dia, Mes e Ano (exemplo: 25 12 2026). O programa deve validar se o mes esta no intervalo [1, 12] e utilizar a estrutura switch-case para converter o numero do mes em seu nome por extenso, imprimindo a saida formatada como: '25 de dezembro de 2026'.
*/

#include <stdio.h> 

int main() {
    int dia, mes, ano; 

    printf("Digite a data no formato numerico (Dia Mes Ano, ex: 25 12 2026): "); 
    scanf("%d %d %d", &dia, &mes, &ano); 

    if (mes < 1 || mes > 12) { 
        printf("Erro: Mes invalido! O mes deve ser um numero entre 1 e 12.\n"); 
        return 0;
    }

    printf("\nData por extenso: %d de ", dia); 

    switch (mes) {
        case 1:  printf("janeiro"); break;      
        case 2:  printf("fevereiro"); break;       
        case 3:  printf("marco"); break;       
        case 4:  printf("abril"); break;       
        case 5:  printf("maio"); break;       
        case 6:  printf("junho"); break;       
        case 7:  printf("julho"); break;       
        case 8:  printf("agosto"); break;       
        case 9:  printf("setembro"); break;      
        case 10: printf("outubro"); break;      
        case 11: printf("novembro"); break;      
        case 12: printf("dezembro"); break;      
    }

    printf(" de %d\n", ano); 

    return 0; 
}