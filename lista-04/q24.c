/*
Questao 24. Classificacao de Triangulos quanto aos Angulos Internos -- Faca um programa que leia tres valores inteiros representando os angulos internos de um triangulo. Valide se a soma dos angulos e exatamente igual a 180 graus. Se for um triangulo valido, classifique-o em:
* Retangulo: possui um angulo igual a 90 graus;
* Obtusangulo: possui um angulo maior que 90 graus;
* Acutangulo: possui todos os tres angulos menores que 90 graus.
*/

#include <stdio.h> 

int main() {
    int a1, a2, a3, soma_angulos; 

    printf("Digite os tres ângulos internos do triângulo em graus: "); 
    scanf("%d %d %d", &a1, &a2, &a3); 

    if (a1 <= 0 || a2 <= 0 || a3 <= 0) { 
        printf("Erro: Os ângulos de um triângulo devem ser positivos!\n"); 
        return 0; 
    }

    soma_angulos = a1 + a2 + a3;

    if (soma_angulos == 180) { 
        printf("Os ângulos informados formam um triângulo válido.\n"); 

        if (a1 == 90 || a2 == 90 || a3 == 90) { 
            printf("Classificação: Triângulo Retangulo\n");        
        } else if (a1 > 90 || a2 > 90 || a3 > 90) { 
            printf("Classificação: Triângulo Obtusangulo\n");        
        } else { 
            printf("Classificação: Triângulo Acutangulo\n");        
        }
    } else { 
        printf("Erro: A soma dos ângulos é %d graus. Não forma um triângulo válido!\n", soma_angulos);
    }

    return 0; 
}