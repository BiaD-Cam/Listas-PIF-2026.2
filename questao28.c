#include <stdio.h>
#include <stdlib.h>

int main() {
    float n1, n2, n3, media;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    printf("Digite o terceiro numero: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3.0f;

    printf("A media aritmetica dos numeros fornecidos e: %.2f\n", media);

    return 0;
}