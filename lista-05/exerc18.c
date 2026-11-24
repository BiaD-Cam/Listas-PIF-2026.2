/*
Questão 18. Potência com Recursão - Implemente a função recursiva long potencia(int
base, int expoente), que calcule base elevado ao expoente (inteiro não negativo) sem usar
pow(). Na main(), leia a base e o expoente, valide com if que o expoente não é negativo e
exiba o resultado. Indique em comentário o caso base e o passo recursivo.
*/

#include <stdio.h>

long potencia(int base, int expoente);

int main(void) {
    int base, expoente;

    printf("Digite a base e o expoente (não negativo): ");
    scanf("%d %d", &base, &expoente);

    if (expoente < 0) {
        printf("Erro: o expoente não pode ser negativo.\n");
        return 1;
    }

    printf("%d elevado a %d = %ld\n", base, expoente, potencia(base, expoente));

    return 0;
}

long potencia(int base, int expoente) {
    if (expoente == 0) {
        return 1;
    }
    return (long)base * potencia(base, expoente - 1);
}
