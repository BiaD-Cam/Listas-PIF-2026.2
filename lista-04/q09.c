/*
Questao 09. Calculo de Media Ponderada e Situacao Academica -- Elabore um programa que leia as notas de tres avaliacoes de um estudante: Trabalho de Laboratorio (peso 2), Avaliacao Semestral (peso 3) e Exame Final (peso 5). O programa deve calcular a media ponderada e exibir a situacao do aluno conforme a tabela:
* Media entre 0.0 e 2.9: Reprovado
* Media entre 3.0 e 4.9: Em Recuperacao
* Media igual ou superior a 5.0: Aprovado
*/

#include <stdio.h> 

int main() {
    float n_lab, n_semestral, n_final, media_ponderada; 

    printf("Digite a nota do Trabalho de Laboratorio (peso 2): "); 
    scanf("%f", &n_lab); 

    printf("Digite a nota da Avaliação Semestral (peso 3): "); 
    scanf("%f", &n_semestral);

    printf("Digite a nota do Exame Final (peso 5): "); 
    scanf("%f", &n_final); 

    media_ponderada = ((n_lab * 2.0) + (n_semestral * 3.0) + (n_final * 5.0)) / 10.0; 

    printf("Media Ponderada: %.2f\n", media_ponderada); 

    if (media_ponderada >= 5.0) { 
        printf("Situacao Academica: Aprovado\n"); 
    } else if (media_ponderada >= 3.0) { 
        printf("Situacao Academica: Em Recuperacao\n"); 
    } else { 
        printf("Situacao Academica: Reprovado\n"); 
    }

    return 0; 
}