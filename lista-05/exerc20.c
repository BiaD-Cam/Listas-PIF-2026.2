/*
Questão 20. Número Primo - Crie uma função int ehPrimo(int n) que retorne 1 se n for primo
e 0 caso contrário, usando um laço de repetição. Na main(), leia um inteiro e informe o
resultado. Em seguida, use a função dentro de um laço for para imprimir todos os números
primos de 1 até 50.
*/

#include <stdio.h>

int ehPrimo(int n);

int main(void) {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (ehPrimo(numero)) {
        printf("%d é um numero primo.\n", numero);
    } else {
        printf("%d não é um numero primo.\n", numero);
    }

    printf("\nNumeros primos de 1 até 50:\n");
    for (int i = 1; i <= 50; i++) {
        if (ehPrimo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

int ehPrimo(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
