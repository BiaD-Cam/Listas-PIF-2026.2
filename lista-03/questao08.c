/*
Questão 08. Validação de Entrada de Dados com Laço Garantido (do-while) — Escreva um 
programa em C que solicite ao usuário que informe uma nota válida no intervalo fechado de 0.0 a 10.0. 
Caso o usuário digite um valor fora deste intervalo (por exemplo, -5.0 ou 12.5), o programa deve exibir 
uma mensagem de erro e repetir a solicitação usando a estrutura do-while. O programa só deve 
encerrar quando um valor válido for digitado, exibindo a mensagem 'Nota registrada com sucesso!'.
*/

#include <stdio.h>

int main() {
    float nota;

    do {
        printf("Digite uma nota (0.0 a 10.0): ");
        if (scanf("%f", &nota) != 1) {
            printf("Entrada invalida. Digite novamente.\n");
            while (getchar() != '\n');
            nota = -1.0;
            continue;
        }

        if (nota < 0.0f || nota > 10.0f) {
            printf("Erro: A nota deve estar entre 0.0 e 10.0. Digite novamente.\n");
        }
    } while (nota < 0.0f || nota > 10.0f);

    printf("Nota registrada.\n");

    return 0;
}