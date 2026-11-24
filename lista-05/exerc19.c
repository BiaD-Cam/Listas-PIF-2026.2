/*
Questão 19. Contagem Regressiva Recursiva - Crie um procedimento recursivo void
contagem(int n) que imprima os números de n até 1 e, ao final, a mensagem "Fogo!". Na
main(), leia n, valide que ele é positivo e chame o procedimento. Em seguida, crie uma
segunda versão que imprima de 1 até n, e explique em comentário o que muda na posição da
chamada recursiva em relação ao printf.
*/

#include <stdio.h>

void contagem(int n);
void contagemCrescente(int n);

int main(void) {
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: o numero deve ser positivo.\n");
        return 1;
    }

    printf("Contagem regressiva:\n");
    contagem(n);

    printf("\nContagem crescente (1 ate %d):\n", n);
    contagemCrescente(n);
    printf("\n");

    return 0;
}

void contagem(int n) {
    if (n == 0) {
        printf("Fogo!\n");
        return;
    }
    printf("%d ", n);
    contagem(n - 1);
}

void contagemCrescente(int n) {
    if (n == 0) {
        return;
    }
    /*
     * Explicacao: Na versão crescente, a chamada recursiva ocorre antes do printf, e todas as chamadas são empilhadas até atingir n == 0, e os numeros são impressos apenas durante o retorno em ordem de 1 até n.
     */
    contagemCrescente(n - 1);
    printf("%d ", n);
}
