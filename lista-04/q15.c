/*
Questao 15. Verificacao de Elegibilidade para Aposentadoria -- Elabore um programa que leia a idade e o tempo de servico (em anos) de um trabalhador. O programa deve informar se o trabalhador pode ou nao se aposentar. As condicoes para aposentadoria sao:
* Ter pelo menos 65 anos de idade;
* OU ter trabalhado pelo menos 30 anos;
* OU ter pelo menos 60 anos de idade E ter trabalhado pelo menos 25 anos.
*/

#include <stdio.h> 

int main() {
    int idade, tempo_servico; 

    printf("Digite a idade do trabalhador em anos: "); 
    scanf("%d", &idade); 

    printf("Digite o tempo de serviço em anos: "); 
    scanf("%d", &tempo_servico); 

    if (idade >= 65 || tempo_servico >= 30 || (idade >= 60 && tempo_servico >= 25)) { 
        printf("Resultado: O trabalhador pode se aposentar.\n"); 
    } else { 
        printf("Resultado: O trabalhador não pode se aposentar ainda.\n"); 
    }

    return 0; 
}