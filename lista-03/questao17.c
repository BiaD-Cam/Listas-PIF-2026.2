/*
Questão 17. Estatísticas de Turma (Menor, Maior, Média e Contagem) - Faça um programa para
ler uma sequência de notas de alunos (valores reais de 0.0 a 10.0). A entrada de dados deve ser encerrada quando o usuário digitar a nota '-1.0'. Ao final, o programa deve exibir: a) Total de alunos avaliados; b) A maior nota da turma; c) A menor nota da turma; d) A média geral da turma.
*/

#include <stdio.h>

int main() {
    float nota, soma = 0.0f, maior = 0.0f, menor = 10.0f;
    int total_alunos = 0;

    printf("Insira as notas dos alunos (0.0 a 10.0). Digite -1.0 para encerrar:\n");

    while (1) {
        printf("Nota do aluno %d: ", total_alunos + 1);
        if (scanf("%f", &nota) != 1) {
            printf("Entrada invalida.\n");
            while (getchar() != '\n');
            continue;
        }

        if (nota == -1.0f) {
            break;
        }

        if (nota < 0.0f || nota > 10.0f) {
            printf("Nota invalida. Digite valores entre 0.0 e 10.0.\n");
            continue;
        }

        if (total_alunos == 0) {
            maior = nota;
            menor = nota;
        } else {
            if (nota > maior) maior = nota;
            if (nota < menor) menor = nota;
        }

        soma += nota;
        total_alunos++;
    }

    printf("a) Total de alunos avaliados: %d\n", total_alunos);

    if (total_alunos > 0) {
        printf("b) Maior nota: %.2f\n", maior);
        printf("c) Menor nota: %.2f\n", menor);
        printf("d) Media geral: %.2f\n", soma / total_alunos);
    } else {
        printf("Nenhuma nota valida foi registada.\n");
    }

    return 0;
}