/*
Questao 27. Tarifador de Estacionamento com Faixas Progressivas -- Um estacionamento cobra tarifacao progressiva conforme o tempo de permanencia do veiculo. Escreva um programa em C que leia o numero de horas inteiras que o carro permaneceu no local e calcule o valor total do ticket:
* 1a e 2a hora: R$ 2,00 por hora;
* 3a e 4a hora: R$ 2,50 por hora;
* 5a hora em diante: R$ 3,00 por hora adicional.
Exiba o tempo total e o valor final cobrado.
*/

#include <stdio.h> 
int main() {
    int horas; 
    float valor_total = 0.0; 

    printf("Digite a quantidade de horas inteiras de permanência: "); 
    scanf("%d", &horas); 

    if (horas <= 0) { 
        printf("Erro: O tempo de permanência deve ser de pelo menos 1 hora!\n"); 
        return 0; 
    }

    /* Calcula o valor cobrado por horas extras */
    if (horas <= 2) { // 1a e 2a horas
        valor_total = horas * 2.00; // Cobra R$ 2,00 por cada hora ate 2h
    } else if (horas <= 4) { // 3a e 4a horas
        /* Cobranca: 2 horas a R$ 2,00 + horas excedentes (3a/4a) a R$ 2,50 */
        valor_total = (2 * 2.00) + ((horas - 2) * 2.50);
    } else { // 5a hora em diante
        /* Cobranca: 2 horas a R$ 2,00 + 2 horas a R$ 2,50 + horas excedentes (5a+) a R$ 3,00 */
        valor_total = (2 * 2.00) + (2 * 2.50) + ((horas - 4) * 3.00);
    }

    printf("\nTempo total de permanência: %d hora(s)\n", horas); 
    printf("Valor final do ticket cobrado: R$ %.2f\n", valor_total); 

    return 0;