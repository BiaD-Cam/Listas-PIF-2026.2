/*
Questão 25. Máximo Divisor Comum com Recursão (questão avançada) - Implemente o
algoritmo de Euclides em uma função recursiva int mdc(int a, int b). Na main(), leia dois
inteiros positivos e exiba o MDC. Utilize a função em um procedimento void simplifica(int
num, int den) que imprima a fração simplificada.
*/

#include <stdio.h>

int mdc(int a, int b);
void simplifica(int num, int den);

int main(void) {
    int num, den;

    printf("Digite dois inteiros positivos (numerador e denominador): ");
    scanf("%d %d", &num, &den);

    if (num <= 0 || den <= 0) {
        printf("Erro: informe dois inteiros positivos.\n");
        return 1;
    }

    printf("MDC(%d, %d) = %d\n", num, den, mdc(num, den));
    simplifica(num, den);

    return 0;
}

int mdc(int a, int b) {
    if (b == 0) {
        return a;
    }
    return mdc(b, a % b);
}

void simplifica(int num, int den) {
    int divisor = mdc(num, den);
    printf("Fração simplificada: %d/%d\n", num / divisor, den / divisor);
}
