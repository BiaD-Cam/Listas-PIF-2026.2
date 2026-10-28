/*
Questão 09. Acumulador de Valores Reais com Sentinela de Parada Negativa - Faça um
programa que permita ao usuário fornecer uma sequência indeterminada de valores reais positivos. O programa deve parar de solicitar valores no momento em que o usuário fornecer um valor negativo (que funcionará como sentinela de parada). Ao final, o programa deve exibir a quantidade de valores válidos digitados, a soma total e a média aritmética (garantindo que o valor negativo de parada não entre nos cálculos). */

#include <stdio.h>

int main() {
    double valor, soma = 0.0;
    int quantidade = 0;

    printf("Digite valores reais positivos (ou um valor negativo):\n");

    while (1) {
        printf("Valor: ");
        if (scanf("%lf", &valor) != 1) {
            printf("Entrada invalida!\n");
            while (getchar() != '\n');
            continue;
        }

        if (valor < 0) {
            break;
        }

        soma += valor;
        quantidade++;
    }

    printf("Quantidade de valores validos: %d\n", quantidade);
    printf("Soma total: %.2f\n", soma);

    if (quantidade > 0) {
        printf("Media aritmetica: %.2f\n", soma / quantidade);
    } else {
        printf("Nenhum valor valido foi fornecido.\n");
    }

    return 0;
}