/*
Questão 26. Sequência de Fibonacci Recursiva (questão avançada) - Desenvolva uma
função recursiva long fibonacci(int n) que retorne o n-ésimo termo da sequência (fibonacci(0)
= 0 e fibonacci(1) = 1). Na main(), leia a quantidade de termos e imprima a sequência
chamando a função em um laço. Comente por que a versão recursiva se torna lenta para
valores grandes de n.
*/

#include <stdio.h>

long fibonacci(int n);

int main(void) {
    int qtd;

    printf("Digite a quantidade de termos da sequência de Fibonacci: ");
    scanf("%d", &qtd);

    if (qtd <= 0) {
        printf("Informe uma quantidade positiva de termos.\n");
        return 1;
    }

    printf("Sequência de Fibonacci:\n");
    for (int i = 0; i < qtd; i++) {
        printf("%ld ", fibonacci(i));
    }
    printf("\n");

    return 0;
}

long fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    /*
     * Por que se torna lenta para valores grandes de n:
     * Cada chamada gera duas novas chamadas recursivas (arvore binaria de chamadas),
     * recalculando repetidamente os mesmos subproblemas (ex: fibonacci(3) e calculado
     * diversas vezes), o que resulta em complexidade de tempo exponencial O(2^n).
     */
    return fibonacci(n - 1) + fibonacci(n - 2);
}
