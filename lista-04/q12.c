/*
Questao 12. Dia da Semana com Comando switch-case -- Desenvolva um programa em C que leia um numero inteiro de 1 a 7 e imprima o dia da semana correspondente (1 = Domingo, 2 = Segunda-feira, ..., 7 = Sabado). Caso o usuario digite um numero fora do intervalo [1, 7], o programa deve exibir 'Erro: Opcao Invalida!' atraves da clausula default.
*/

#include <stdio.h> 
int main() {
    int dia;
    printf("Digite um numero de 1 a 7: "); 
    scanf("%d", &dia); 

    switch (dia) {
        case 1: // Caso o valor lido seja 1
            printf("Domingo\n"); // Imprime Domingo
            break; 
        case 2: // Caso o valor lido seja 2
            printf("Segunda-feira\n"); // Imprime Segunda-feira
            break;  
        case 3: 
            printf("Terca-feira\n"); // Imprime Terca-feira
            break;  
        case 4: 
            printf("Quarta-feira\n"); // Imprime Quarta-feira
            break;  
        case 5: 
            printf("Quinta-feira\n"); // Imprime Quinta-feira
            break;  
        case 6: 
            printf("Sexta-feira\n"); // Imprime Sexta-feira
            break;  
        case 7: 
            printf("Sabado\n"); // Imprime Sabado
            break;  
        default: // Executado quando o numero não esta no intervalo de 1 a 7
            printf("Erro: Opcao Invalida!\n"); 
            break; 
    }

    return 0; 
}