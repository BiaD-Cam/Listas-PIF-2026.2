/*
Questão 21. Macros Utilitárias - Defina as macros SQR(x), MAX(a,b) e MIN(a,b) com
parênteses de proteção. Na main(), leia dois inteiros e exiba o quadrado de cada um, o maior
e o menor, usando apenas as macros.
*/

#include <stdio.h>

#define SQR(x) ((x) * (x))
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))

void exibirResultadosMacros(int a, int b);

int main(void) {
    int x, y;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &x, &y);

    exibirResultadosMacros(x, y);

    return 0;
}

void exibirResultadosMacros(int a, int b) {
    printf("Quadrado de %d: %d\n", a, SQR(a));
    printf("Quadrado de %d: %d\n", b, SQR(b));
    printf("Maior: %d\n", MAX(a, b));
    printf("Menor: %d\n", MIN(a, b));
}
