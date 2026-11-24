/*
Questão 14. Soma dos Dígitos com Recursão - Crie uma função recursiva int
somaDigitos(int n) que retorne a soma dos dígitos de um inteiro positivo (exemplo: 1234
resulta em 10). Dica: use os operadores % e / para separar o último dígito. Na main(), leia o
número e exiba o resultado. Indique em comentário o caso base e o passo recursivo.
*/

#include <stdio.h>

int somaDigitos(int n);

int main(void) {
    int numero;

    printf("Digite um inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        numero = -numero;
    }

    printf("Soma dos digitos: %d\n", somaDigitos(numero));

    return 0;
}

int somaDigitos(int n) {
    /* Quando n possui apenas um digito (menor que 10), retorna o próprio n */
    if (n < 10) {
        return n;
    }
    /* Soma o ultimo digito (n % 10) com a soma dos demais digitos (n / 10) */
    return (n % 10) + somaDigitos(n / 10);
}
