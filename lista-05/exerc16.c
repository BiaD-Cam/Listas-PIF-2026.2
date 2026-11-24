/*
Questão 16. Ano Bissexto - Crie a função int ehBissexto (int ano), que retorne 1 se o ano for
bissexto e 0 caso contrário (divisível por 400, ou divisível por 4 e não por 100). Na main(), leia
um ano e exiba uma mensagem clara com o resultado.
*/

#include <stdio.h>

int ehBissexto(int ano);

int main(void) {
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if (ehBissexto(ano)) {
        printf("O ano %d é bissexto.\n", ano);
    } else {
        printf("O ano %d não é bissexto.\n", ano);
    }

    return 0;
}

int ehBissexto(int ano) {
    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        return 1;
    }
    return 0;
}
