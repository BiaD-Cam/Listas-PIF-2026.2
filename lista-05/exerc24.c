/*
Questão 24. Compilação Condicional para Depuração - Escreva um programa com uma
função int somaAteN (int n) que some os inteiros de 1 até n com um laço. Use #ifdef DEBUG
para imprimir, dentro do laço, o valor parcial da soma a cada iteração. Compile duas vezes,
com e sem #define DEBUG, e documente em comentários a diferença de comportamento.
*/

#include <stdio.h>

/* Comente a linha abaixo (ou compile com/sem -DDEBUG) para alternar o modo de depuracao */
#define DEBUG

int somaAteN(int n);

int main(void) {
    int n, total;

    printf("Digite um inteiro positivo N: ");
    scanf("%d", &n);

    total = somaAteN(n);
    printf("Soma final de 1 ate %d: %d\n", n, total);

    return 0;
}

int somaAteN(int n) {
    int soma = 0;

    for (int i = 1; i <= n; i++) {
        soma += i;
#ifdef DEBUG
        printf("[DEBUG] Iteracao %d -> soma parcial = %d\n", i, soma);
#endif
    }

    return soma;
}

/*
 * Diferenca de comportamento entre as duas compilacoes:
 * 1. Com #define DEBUG ativo (ou compilando com gcc -DDEBUG exerc24.c -o exerc24):
 *    O pre-processador mantem o printf interno do laco, exibindo o rastreamento
 *    da soma parcial a cada iteracao antes do resultado final.
 * 2. Sem #define DEBUG (removendo/comentando a diretiva e compilando normalmente):
 *    O bloco entre #ifdef DEBUG e #endif e descartado antes da compilacao, e o
 *    programa exibe apenas o resultado final da soma, sem logs intermediarios.
 */
