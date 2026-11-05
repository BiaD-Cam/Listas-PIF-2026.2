/*
Questao 26. Quantidade de Dias de um Mes e Validacao de Fevereiro Bissexto -- Desenvolva um programa que solicite o numero de um mes (1 a 12) e o ano corrente. O programa deve informar o nome do mes e quantos dias ele possui. Para o mes de fevereiro (mes 2), o programa deve checar se o ano informado e bissexto para imprimir '29 dias' ou '28 dias'.
*/

#include <stdio.h> 

int main() {
    int mes, ano, bissexto; 

    printf("Digite o numero do mês (1 a 12): "); 
    scanf("%d", &mes); 

    printf("Digite o ano: "); 
    scanf("%d", &ano); 

    if (mes < 1 || mes > 12) { 
        printf("Erro: Numero de mes invalido! Digite um valor entre 1 e 12.\n"); 
        return 0; 
    }

    bissexto = ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0));

    switch (mes) {
        case 1:  printf("Mes: Janeiro | Dias: 31 dias\n"); break; 
        case 2: 
            if (bissexto) { 
                printf("Mês: Fevereiro | Dias: 29 dias (Ano Bissexto)\n"); 
            } else { 
                printf("Mês: Fevereiro | Dias: 28 dias\n"); 
            }
            break; 
        case 3:  printf("Mês: Março | Dias: 31 dias\n"); break; 
        case 4:  printf("Mês: Abril | Dias: 30 dias\n"); break; 
        case 5:  printf("Mês: Maio | Dias: 31 dias\n"); break; 
        case 6:  printf("Mês: Junho | Dias: 30 dias\n"); break; 
        case 7:  printf("Mês: Julho | Dias: 31 dias\n"); break; 
        case 8:  printf("Mês: Agosto | Dias: 31 dias\n"); break; 
        case 9:  printf("Mês: Setembro | Dias: 30 dias\n"); break; 
        case 10: printf("Mês: Outubro | Dias: 31 dias\n"); break; 
        case 11: printf("Mês: Novembro | Dias: 30 dias\n"); break; 
        case 12: printf("Mês: Dezembro | Dias: 31 dias\n"); break; 
    }

    return 0; 
}