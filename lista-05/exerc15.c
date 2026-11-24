/*
Questão 15. Média Ponderada e Situação - Escreva a função float mediaPonderada (float n1,
float n2, float n3), com pesos 2, 3 e 5, e o procedimento void exibeSituacao (float media), que
imprima Aprovado se a média for maior ou igual a 5.0, Em Recuperação se estiver entre 3.0 e
4.9, e Reprovado nos demais casos. Chame ambas na main().
*/

#include <stdio.h>

float mediaPonderada(float n1, float n2, float n3);
void exibeSituacao(float media);

int main(void) {
    float n1, n2, n3, media;

    printf("Digite as três notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    media = mediaPonderada(n1, n2, n3);
    printf("Média ponderada: %.2f\n", media);
    exibeSituacao(media);

    return 0;
}

float mediaPonderada(float n1, float n2, float n3) {
    return (n1 * 2.0f + n2 * 3.0f + n3 * 5.0f) / 10.0f;
}

void exibeSituacao(float media) {
    if (media >= 5.0f) {
        printf("Situação: Aprovado\n");
    } else if (media >= 3.0f) {
        printf("Situação: Em Recuperação\n");
    } else {
        printf("Situação: Reprovado\n");
    }
}
