/*
Questão 13. Calculadora com Quatro Operações - Implemente o desafio visto em aula: crie
as funções soma, subtrai, multiplica e divide, todas recebendo dois valores float e retornando
float. A main() deve exibir um menu, ler a opção e os dois operandos e chamar a função
correspondente. Na divisão, valide a divisão por zero antes de chamar a função.
*/

#include <stdio.h>

float soma(float a, float b);
float subtrai(float a, float b);
float multiplica(float a, float b);
float divide(float a, float b);

int main(void) {
    int opcao;
    float x, y;

    printf("CALCULADORA\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("Escolha a operção: ");
    scanf("%d", &opcao);

    printf("Digite os dois operandos: ");
    scanf("%f %f", &x, &y);

    switch (opcao) {
        case 1:
            printf("Resultado: %.2f\n", soma(x, y));
            break;
        case 2:
            printf("Resultado: %.2f\n", subtrai(x, y));
            break;
        case 3:
            printf("Resultado: %.2f\n", multiplica(x, y));
            break;
        case 4:
            if (y == 0.0f) {
                printf("Erro: divisão por zero não permitida.\n");
            } else {
                printf("Resultado: %.2f\n", divide(x, y));
            }
            break;
        default:
            printf("Operação inválida!\n");
            break;
    }

    return 0;
}

float soma(float a, float b) {
    return a + b;
}

float subtrai(float a, float b) {
    return a - b;
}

float multiplica(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}
