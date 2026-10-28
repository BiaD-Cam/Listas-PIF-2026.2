/*
Questão 21. Jogo de Adivinhação com Letras Aleatórias e Dicas (rand()) - Desenvolva um jogo
interativo em C que sorteie uma letra minúscula aleatória entre 'a' e 'z' usando a função rand() % 26 +
'a' da biblioteca <stdlib.h>. O programa deve pedir para o usuário adivinhar a letra. A cada tentativa
errada, o programa deve informar se a letra secreta vem antes ou depois da letra digitada no alfabeto.
Quando o usuário acertar, exiba uma mensagem de parabéns e o total de tentativas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char letra_secreta, palpite;
    int tentativas = 0;

    srand((unsigned int)time(NULL));
    letra_secreta = (char)(rand() % 26 + 'a');

    printf("Tente adivinhar a letra secreta entre 'a' e 'z'.\n\n");

    do {
        printf("Digite o seu palpite: ");
        scanf(" %c", &palpite);

        if (palpite < 'a' || palpite > 'z') {
            printf("Por favor, introduza uma letra minuscula do alfabeto.\n");
            continue;
        }

        tentativas++;

        if (palpite < letra_secreta) {
            printf("Dica: A letra secreta vem DEPOIS de '%c'.\n", palpite);
        } else if (palpite > letra_secreta) {
            printf("Dica: A letra secreta vem ANTES de '%c'.\n", palpite);
        } else {
            printf("\nParabens! Acertou na letra secreta '%c'!\n", letra_secreta);
            printf("Total de tentativas: %d\n", tentativas);
        }

    } while (palpite != letra_secreta);

    return 0;
}