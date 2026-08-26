#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("PRODUTO        PRECO\n");
    printf("--------------------\n");
    printf("%-12s R$%7.2f\n", "Caderno", 15.50);
    printf("%-12s R$%7.2f\n", "Caneta", 2.30);
    printf("%-12s R$%7.2f\n", "Borracha", 1.00);
    printf("%-12s R$%7.2f\n", "Mochila", 120.90);
    return 0;
}