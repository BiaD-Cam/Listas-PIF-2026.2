/*
Questao 25. Decomposicao de Troco na Menor Quantidade de Cedulas -- Escreva um programa em C que receba o valor total a pagar e o valor entregue pelo cliente ao caixa (inteiros positivos). Calcule o troco devido. Se o valor entregue for insuficiente, exiba uma mensagem de erro. Caso contrario, decomponha o troco na menor quantidade possivel de cedulas de R$ 100, R$ 50, R$ 20, R$ 10, R$ 5 e R$ 2 utilizando comandos condicionais e operacoes aritmeticas inteiras.
*/

#include <stdio.h> 

int main() {
    int valor_pagar, valor_entregue, troco, restante; 
    int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0; 

    printf("Digite o valor total a pagar (R$): "); 
    scanf("%d", &valor_pagar);

    printf("Digite o valor entregue pelo cliente (R$): "); 
    scanf("%d", &valor_entregue); 

    if (valor_entregue < valor_pagar) { 
        printf("Erro: Valor entregue é insuficiente! Faltam R$ %d.\n", valor_pagar - valor_entregue); 
        return 0; 
    }

    troco = valor_entregue - valor_pagar; 

    printf("\nTroco total a devolver: R$ %d\n", troco); 

    if (troco == 0) { 
        printf("Pagamento exato. Não há troco a ser devolvido.\n"); 
        return 0; 
    }

    restante = troco; 

    if (restante % 2 != 0) { 
        if (restante >= 5) { 
            n5 = 1; 
            restante -= 5; 
        }
    }

    n100 = restante / 100; // Calcula a quantidade de cedulas de R$ 100
    restante %= 100;          

    n50 = restante / 50; // Calcula a quantidade de cedulas de R$ 50
    restante %= 50;          

    n20 = restante / 20; // Calcula a quantidade de cedulas de R$ 20
    restante %= 20;          

    n10 = restante / 10; // Calcula a quantidade de cedulas de R$ 10
    restante %= 10;          

    n2 = restante / 2; // Calcula a quantidade de cedulas de R$ 2
    restante %= 2;          

    if (n100 > 0) printf("Cédulas de R$ 100: %d\n", n100); 
    if (n50 > 0)  printf("Cédulas de R$ 50:  %d\n", n50);  
    if (n20 > 0)  printf("édulas de R$ 20:  %d\n", n20);  
    if (n10 > 0)  printf("Cédulas de R$ 10:  %d\n", n10);  
    if (n5 > 0)   printf("Cédulas de R$ 5:   %d\n", n5);  
    if (n2 > 0)   printf("Cédulas de R$ 2:   %d\n", n2);  

    return 0; 
}