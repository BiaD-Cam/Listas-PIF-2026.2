/*
Questao 14. Matriz de Classificacao de Conceito por Nota e Faltas -- Uma instituicao de ensino define o conceito do estudante combinando a nota final e a quantidade de faltas. Escreva um programa em C que leia a nota (float) e o numero de faltas (int) e determine o conceito conforme a tabela:
* Nota 9.0 a 10.0: Ate 20 faltas = Conceito A | Acima de 20 faltas = Conceito B
* Nota 7.5 a 8.9: Ate 20 faltas = Conceito B | Acima de 20 faltas = Conceito C
* Nota 5.0 a 7.4: Ate 20 faltas = Conceito C | Acima de 20 faltas = Conceito D
* Nota 4.0 a 4.9: Ate 20 faltas = Conceito D | Acima de 20 faltas = Conceito E
* Nota 0.0 a 3.9: Qualquer quantidade de faltas = Conceito E
*/

#include <stdio.h> 

int main() {
    float nota; 
    int faltas; 
    char conceito; 

    printf("Digite a nota final do aluno (0.0 a 10.0): "); 
    scanf("%f", &nota); 

    printf("Digite o numero de faltas do aluno: "); 
    scanf("%d", &faltas); 

    if (nota >= 9.0 && nota <= 10.0) { 
        conceito = (faltas <= 20) ? 'A' : 'B'; 
    } else if (nota >= 7.5 && nota <= 8.9) { 
        conceito = (faltas <= 20) ? 'B' : 'C'; 
    } else if (nota >= 5.0 && nota <= 7.4) { 
        conceito = (faltas <= 20) ? 'C' : 'D'; 
    } else if (nota >= 4.0 && nota <= 4.9) { 
        conceito = (faltas <= 20) ? 'D' : 'E'; 
    } else if (nota >= 0.0 && nota < 4.0) { 
        conceito = 'E'; 
    } else { 
        printf("Erro! Nota inválida!\n"); 
        return 0; 
    }

    printf("Conceito obtido pelo estudante: %c\n", conceito); 

    return 0; 
}