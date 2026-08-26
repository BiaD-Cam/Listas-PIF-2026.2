#include <stdio.h>
#include <stdlib.h>

int main() {
    // Versão 1: Em um único printf
    printf("=== VERSAO 1 ===\n");
    printf("Seja bem-vindo ao curso de Linguagem C!\nBons estudos!\n\n");

    // Versão 2: Em dois printfs
    printf("=== VERSAO 2 ===\n");
    printf("Seja bem-vindo ao curso de Linguagem C!\n");
    printf("Bons estudos!\n\n");

    // Versão 3: Formatado com moldura
    printf("=== VERSAO 3 ===\n");
    printf("+---------------------------------------+\n");
    printf("| Seja bem-vindo ao curso de C!         |\n");
    printf("| Bons estudos!                         |\n");
    printf("+---------------------------------------+\n");

    return 0;
}