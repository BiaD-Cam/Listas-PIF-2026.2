/*
Questão 09. Maior de Dois Números - Crie uma função int maior(int a, int b) que retorne o
maior entre dois inteiros. Na main(), leia os valores e exiba o resultado.
*/

#include <stdio.h>

int maior(int a, int b);

int main(void) {
    int x, y;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &x, &y);

    printf("Maior valor: %d\n", maior(x, y));

    return 0;
}

int maior(int a, int b) {
    return (a > b) ? a : b;
}
